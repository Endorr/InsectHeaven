#include "DialogueEditToolWidget.h"

#include "Widget/IH_WidgetManager.h"
#include "Scene/IH_SceneManager.h"
#include "DesktopplatformModule.h"
#include "Misc/ConfigCacheIni.h"
#include "DialogueActionLayer.h"
#include "GameFramework/GameModeBase.h"
#include "IH_GameMode_DialgueTool.h"
#include "InsectHeaven.h"

#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/Slider.h"
#include "ISinglePropertyView.h"

#include <Blueprint/WidgetLayoutLibrary.h>

#include "UIH_CinemaFunctionLibrary.h"
#include "UIH_FunctionLibrary.h"
#include "Action/DialogueAction_Talk.h"
#include "Action/DialogueAction_Empty.h"

#include "Components/CanvasPanelSlot.h"
#include "Components/DetailsView.h"
#include "Components/SinglePropertyView.h"
#include "Dialogue/DialogueManager.h"
#include "Dialogue/IH_SinglePropertyView.h"
#include "Dialogue/UIH_DetailsView.h"
#include "DialogueTool/IH_Widget_DialogueToolAction.h"
#include "DialogueTool/IH_Widget_DialogueToolActionAdd.h"
#include "DialogueTool/IH_Widget_DialogueToolLayer.h"
#include "DialogueTool/IH_Widget_DialogueToolLayerAdd.h"
#include "Kismet/GameplayStatics.h"

const int32 UpperBannerHeight = 100;
const int32 ActionInterval = 210;
const int32 LayerHeight = 88;
const float SlideRatio = 10.f;
const int32 RightSlidePoint = 1900;
const int32 LeftSlidePoint = 200;
const FVector2D FirstActionPos = FVector2D(212,618.230774);


void UDialogueToolWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Button_PlayPreview->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickPlayPreviewButton);
	Button_StopPreview->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickStopPreviewButton);

	//SetFileName(FPaths::GetCleanFilename(NewFileName) );
	SetFileName(TEXT("") );

	bool bLoadActiveDialogue = false;
	GConfig->GetBool(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("OpenWithActiveDialogue"), bLoadActiveDialogue, GGameIni);

	if (bLoadActiveDialogue)
	{
		LoadActiveDialogue();

		FString SavedCurrentFileName;
		GConfig->GetString(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("CurrentFileName"), SavedCurrentFileName, GGameIni);
		GConfig->GetString(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("CurrentFilePath"), LoadFilePath, GGameIni);
		
		SetFileName(FPaths::GetCleanFilename(SavedCurrentFileName));
	}
	else
	{
		CreateWidgets();
	}

	GrabView_Action->GetSelectButton()->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
	GrabView_Action->SetRenderOpacity(0.7f);

	FProperty* pProp = GetClass()->PropertyLink;

	Button_Save->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickSaveButton);
	Button_Load->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickLoadButton);

	DetailsView_Inspector->OnPrpertyValueChanged_PV.AddUniqueDynamic(this, &UDialogueToolWidget::OnPropertyChanged_SequenceInspector);
	ScrollBox_SequenceLayer->OnUserScrolled.AddUniqueDynamic(this, &UDialogueToolWidget::OnScrollSequenceLayer);
	ScrollBox_SequenceAction_Horizontal->OnUserScrolled.AddUniqueDynamic(this, &UDialogueToolWidget::OnScrollSequenceActionHorizontal);
	ScrollBox_SequenceAction_Vertical->OnUserScrolled.AddUniqueDynamic(this, &UDialogueToolWidget::OnScrollSequenceActionVertical);
	PropertyView_AddActionClass->SetObject(this);
	PropertyView_AddActionClass->SetPropertyName(TEXT("CurrentAddActionClass"));
	PropertyView_AddActionClass->OnPropertyChanged_PV.AddUniqueDynamic(this, &UDialogueToolWidget::OnPropertyChange_AddActionClass);
	PropertyView_ChangeActionClass->SetObject(this);
	PropertyView_ChangeActionClass->SetPropertyName(TEXT("CurrentAddActionClass"));
	PropertyView_ChangeActionClass->OnPropertyChanged_PV.AddUniqueDynamic(this, &UDialogueToolWidget::OnPropertyChange_ChangeActionClass);
	Button_AddAction_Confirm->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickAddActionConfirm);
	Button_AddAction_Cancel->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickAddActionCancel);
	Button_ChangeAction_Confirm->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickChangeActionConfirm);
	Button_ChangeAction_Cancel->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickChangeActionCancel);

	Button_PlayPreview->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickPlayPreviewButton);
	Button_StopPreview->OnClicked.AddUniqueDynamic(this, &UDialogueToolWidget::OnClickStopPreviewButton);

	//OnDialogueFinish.BindUFunction(this, TEXT("OnPostDialogueFinish"));
	
	// while (pProp != nullptr)
	// {
	// 	if (pProp->GetClass() == FObjectProperty::StaticClass())
	// 	{
	// 		FObjectProperty* pObjProp = CastField<FObjectProperty>(pProp);
	//
	// 		if (pObjProp->PropertyClass == UWidgetAnimation::StaticClass())
	// 		{
	// 			UObject* _obj = pObjProp->GetObjectPropertyValue_InContainer(this);
	//
	// 			UWidgetAnimation* pWidgetAnim = Cast<UWidgetAnimation>(_obj);
	//
	// 			if (pWidgetAnim != nullptr && pWidgetAnim->MovieScene != nullptr && pWidgetAnim->GetMovieScene()->GetName() == TEXT("Noti"))
	// 			{
	// 				NotiAnimation = pWidgetAnim;
	// 			}
	// 		}
	// 	}
	//
	// 	pProp = pProp->PropertyLinkNext;
	// }
}

void UDialogueToolWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bCompletePlayPreview == false)
	{
		if (UDialogueManager::HasInstance())
		{
			bCompletePlayPreview = true;

			AIH_DialoguePlayer* DialoguePlayer = gDialogueMng.GetOrCreateDialoguePlayer();
			if (DialoguePlayer)
			{
				 if (DialoguePlayer->OnPlayingActionChanged.IsBound())
				 	DialoguePlayer->OnPlayingActionChanged.Clear();
				
				 DialoguePlayer->OnPlayingActionChanged.AddDynamic(this, &UDialogueToolWidget::OnPostPlayingActionChanged);
				 DialoguePlayer->GetFinishDelegate().AddLambda([this](){
				 	if(OnDialogueFinish.IsBound())
				 		OnDialogueFinish.Broadcast();
				 });
			}

		}
	}
	else
	{
		if (UIH_SceneManager::HasInstance())
		{
			bCompletePlayPreview = false;

			//OnPostStopPreview();
		}
	}
		

	CalculateMouseIndex();

	UCanvasPanelSlot* grabViewPanel = UWidgetLayoutLibrary::SlotAsCanvasSlot(GrabView_Action);
	if (grabViewPanel) 
	{
		FVector2D mousePos = GetMousePos();

		grabViewPanel->SetPosition(FVector2D(mousePos.X-20,mousePos.Y-20));
	}

	if (GrabView_Action->GetVisibility() == ESlateVisibility::SelfHitTestInvisible) 
	{
		CPP_Mouse_Index->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
	else 
	{
		CPP_Mouse_Index->SetVisibility(ESlateVisibility::Hidden);
	}

	CalculateSlide();
}

void UDialogueToolWidget::NativeDestruct()
{
	Super::NativeDestruct();

}

void UDialogueToolWidget::LoadActiveDialogue()
{
	CurrentDialogue = UIH_CinemaFunctionLibrary::LoadActiveDialogue();

	ClearWidgets();
	CreateWidgets();
}

void UDialogueToolWidget::UnloadActiveDialogue()
{
	CurrentDialogue = FIH_Dialogue();

	ClearWidgets();
}

void UDialogueToolWidget::ClearWidgets()
{
	ClearSequenceInspectorWidgets();
}

void UDialogueToolWidget::ClearSequenceInspectorWidgets()
{
	DetailsView_Inspector->SetVisibility(ESlateVisibility::Collapsed);
	DetailsView_Inspector->SetObject(nullptr);
}

void UDialogueToolWidget::ClearSequenceTimelineWidggets()
{
	Image_IndexLine->SetVisibility(ESlateVisibility::Collapsed);
	ScrollBox_Timeline->SetVisibility(ESlateVisibility::Collapsed);
	ScrollBox_Timeline_Hittest->SetVisibility(ESlateVisibility::Collapsed);
	Button_PlayPreview->SetVisibility(ESlateVisibility::Collapsed);
	Button_StopPreview->SetVisibility(ESlateVisibility::Collapsed);


	ScrollBox_SequenceIndex->ClearChildren();
	ScrollBox_SequenceLayer->ClearChildren();
	ScrollBox_SequenceAction_Vertical->ClearChildren();
	HorizontalBox_Timeline_HitTest_Dummy->ClearChildren();
	HorizontalBox_Timeline_Dummy->ClearChildren();

	CurrentAddActionClass = nullptr;
	CurrentAddActionLayerIndex = -1;
	CurrentAddActionIndex = -1;
}

void UDialogueToolWidget::CreateWidgets()
{
	CreateSequenceInspectorWidgets();
	CreateSequenceTimelineWidgets();
}

void UDialogueToolWidget::CreateSequenceInspectorWidgets()
{
}

void UDialogueToolWidget::CreateSequenceTimelineWidgets()
{
	Image_IndexLine->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	ScrollBox_Timeline->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	ScrollBox_Timeline_Hittest->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	Button_PlayPreview->SetVisibility(ESlateVisibility::Visible);
	Button_StopPreview->SetVisibility(ESlateVisibility::Visible);

	ScrollBox_SequenceIndex->ClearChildren();
	ScrollBox_SequenceLayer->ClearChildren();
	ScrollBox_SequenceAction_Vertical->ClearChildren();
	HorizontalBox_Timeline_HitTest_Dummy->ClearChildren();
	HorizontalBox_Timeline_Dummy->ClearChildren();

	Slider_TimeLine_HitTest->SetValue(0.0f);
	Slider_TimeLine->SetValue(0.0f);

	CurrentAddActionClass = nullptr;
	CurrentAddActionLayerIndex = -1;
	CurrentAddActionIndex = -1;

	int32 HighestActionCount = 0;
	for (int32 Index = 0; Index < CurrentDialogue.ActionLayers.Num(); ++Index)
	{
		int32 ActionCount = CurrentDialogue.ActionLayers[Index]->GetActionCount();

		if (ActionCount > HighestActionCount)
		{
			HighestActionCount = ActionCount;
		}
	}

	SetTimelineProgressText(0, HighestActionCount);


	int32 IndexMinCount = 8;
	int32 IndexCreateCount = (HighestActionCount > IndexMinCount) ? HighestActionCount : IndexMinCount;

	IndexCreateCount += 1;

	for (int32 Index = 0; Index < CurrentDialogue.ActionLayers.Num(); ++Index)
	{
		FSoftClassPath SequenceLayerClassPath(TEXT("/Game/Widget/Dialogue/DialogueToolLayer.DialogueToolLayer_C"));
		UClass* SequenceLayerClass = Cast<UClass>(SequenceLayerClassPath.TryLoad());
		
		UIH_Widget_DialogueToolLayer* SequenceLayer = CreateWidget<UIH_Widget_DialogueToolLayer>(this, SequenceLayerClass);
		SequenceLayer->SetToolWidget(this);
		
		ScrollBox_SequenceLayer->AddChild(SequenceLayer);
		
		SequenceLayer->SetInfo(Index);
	}
	
	 FSoftClassPath SequenceLayerAddClassPath(TEXT("/Game/Widget/Dialogue/DialogueToolLayerAdd.DialogueToolLayerAdd_C"));
	 UClass* SequenceLayerAddClass = Cast<UClass>(SequenceLayerAddClassPath.TryLoad());
	
	 UIH_Widget_DialogueToolLayerAdd* SequenceLayerAdd = CreateWidget<UIH_Widget_DialogueToolLayerAdd>(this, SequenceLayerAddClass);
	 SequenceLayerAdd->SetToolWidget(this);
	
	 ScrollBox_SequenceLayer->AddChild(SequenceLayerAdd);


	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		UHorizontalBox* ActionHorizontalBox = NewObject<UHorizontalBox>();
		ScrollBox_SequenceAction_Vertical->AddChild(ActionHorizontalBox);

		for (int32 ActionIndex = 0; ActionIndex < CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Num(); ++ActionIndex)
		{
			FSoftClassPath SequenceActionClassPath(TEXT("/Game/Widget/Dialogue/DialogueToolAction.DialogueToolAction_C"));
			UClass* SequenceActionClass = Cast<UClass>(SequenceActionClassPath.TryLoad());
			
			UIH_Widget_DialogueToolAction* SequenceAction = CreateWidget<UIH_Widget_DialogueToolAction>(this, SequenceActionClass);
			SequenceAction->SetParentWidget(this);
			
			ActionHorizontalBox->AddChild(SequenceAction);
			
			SequenceAction->SetActionInfo(CurrentDialogue.ActionLayers[LayerIndex]->GetActions()[ActionIndex], LayerIndex, ActionIndex);
			//SequenceAction->GetContextDelegate().AddDynamic(this, &UDialogueToolWidget::CloseDeselectContext);
			SequenceAction->GetSelectButton()->OnReleased.AddDynamic(this, &UDialogueToolWidget::GrabOffAction);
			SequenceAction->GetSelectDelgate().AddDynamic(this, &UDialogueToolWidget::GrabAction);
		}

		 FSoftClassPath SequenceActionAddClassPath(TEXT("/Game/Widget/Dialogue/DialogueToolActionAdd.DialogueToolActionAdd_C"));
		 UClass* SequenceActionAddClass = Cast<UClass>(SequenceActionAddClassPath.TryLoad());
		
		 UIH_Widget_DialogueToolActionAdd* SequenceActionAdd = CreateWidget<UIH_Widget_DialogueToolActionAdd>(this, SequenceActionAddClass);
		 SequenceActionAdd->SetToolWidget(this);
		 SequenceActionAdd->SetInfo(LayerIndex);
		
		 ActionHorizontalBox->AddChild(SequenceActionAdd);
	}


	UHorizontalBox* ActionHorizontalBox = NewObject<UHorizontalBox>();
	ScrollBox_SequenceAction_Vertical->AddChild(ActionHorizontalBox);
	
	FSoftClassPath SequenceActionAddClassPath(TEXT("/Game/Widget/Dialogue/DialogueToolActionAdd.DialogueToolActionAdd_C"));
	UClass* SequenceActionAddClass = Cast<UClass>(SequenceActionAddClassPath.TryLoad());
	
	UIH_Widget_DialogueToolActionAdd* SequenceActionAdd = CreateWidget<UIH_Widget_DialogueToolActionAdd>(this, SequenceActionAddClass);
	SequenceActionAdd->SetToolWidget(this);
	
	ActionHorizontalBox->AddChild(SequenceActionAdd);
	ActionHorizontalBox->SetVisibility(ESlateVisibility::Hidden);
}

void UDialogueToolWidget::SetFileName(const FString& _FileName)
{
	CurrentDialogueFileName = _FileName;
	Text_Filename_Content->SetText(FText::FromString(_FileName));
}

bool UDialogueToolWidget::SaveFile(const FString& Title, const FString& FileTypes, FString& InOutLastPath, const FString& DefaultFile, FString& OutFilename)
{
	OutFilename = FString();

	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bFileChosen = false;
	TArray<FString> OutFilenames;
	if (DesktopPlatform)
	{
		bFileChosen = DesktopPlatform->SaveFileDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			Title,
			InOutLastPath,
			DefaultFile,
			FileTypes,
			EFileDialogFlags::None,
			OutFilenames
		);
	}

	bFileChosen = (OutFilenames.Num() > 0);

	if (bFileChosen)
	{
		// User successfully chose a file; remember the path for the next time the dialog opens.
		InOutLastPath = OutFilenames[0];
		OutFilename = OutFilenames[0];
	}

	return bFileChosen;
}

void UDialogueToolWidget::AddLayer()
{
	int32 MaxIndexCnt = 0;
	for(auto& elem : CurrentDialogue.ActionLayers)
	{
		MaxIndexCnt = (MaxIndexCnt > elem->GetActionCount()) ? MaxIndexCnt : elem->GetActionCount();
	}
	
	UDialogueActionLayer* ActionLayer = NewObject<UDialogueActionLayer>();
	CurrentDialogue.ActionLayers.Add(ActionLayer);

	for (int i = 0; i < MaxIndexCnt; ++i)
	{
		UDialogueAction* AddedAction = NewObject<UDialogueAction_Empty>(this);
		AddActionAt(CurrentDialogue.ActionLayers.Num()-1, i,AddedAction);
	}


	FDialogueClip fDialogueClip;
	fDialogueClip.eClipState = eCreateLayer;
	fDialogueClip.layerPos = CurrentDialogue.ActionLayers.Num()-1;
	fDialogueClip.layerActionCnt = MaxIndexCnt;
	DialogueClipBoard.Emplace(fDialogueClip);

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	UIH_Widget_DialogueToolLayer* LayerSlot = Cast<UIH_Widget_DialogueToolLayer>(ScrollBox_SequenceLayer->GetChildAt(ScrollBox_SequenceLayer->GetChildrenCount() - 2));
	//LayerSlot->PlayAppearAnim();

	UIH_Widget_DialogueToolLayerAdd* LayerAddSlot = Cast<UIH_Widget_DialogueToolLayerAdd>(ScrollBox_SequenceLayer->GetChildAt(ScrollBox_SequenceLayer->GetChildrenCount() - 1));
	LayerAddSlot->PlayPushAnim();
}

void UDialogueToolWidget::AddLayerAt(int32 _LayerIndex, bool _IgnoreClip)
{

	if (_IgnoreClip == false)
	{
		FDialogueClip fDialogueClip;
		fDialogueClip.eClipState = eCreateLayer;
		fDialogueClip.layerPos = _LayerIndex;
		DialogueClipBoard.Emplace(fDialogueClip);
	}

	UDialogueActionLayer* ActionLayer = NewObject<UDialogueActionLayer>();
	CurrentDialogue.ActionLayers.Insert(ActionLayer, _LayerIndex);

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	 // UIH_Widget_DialogueToolLayer* LayerSlot = Cast<UIH_Widget_DialogueToolLayer>(ScrollBox_SequenceLayer->GetChildAt(ScrollBox_SequenceLayer->GetChildrenCount() - 2));
	 // LayerSlot->PlayAppearAnim();
	 //
	 // for (int32 Index = _LayerIndex + 1; Index < ScrollBox_SequenceLayer->GetChildrenCount(); ++Index)
	 // {
	 // 	UIH_Widget_DialogueToolLayer* PushLayerSlot = Cast< UIH_Widget_DialogueToolLayer>(ScrollBox_SequenceLayer->GetChildAt(Index));
	 // 	if (PushLayerSlot)
	 // 	{
	 // 		PushLayerSlot->PlayPushAnim();
	 // 	}
	 // }
	 //
	 // UIH_Widget_DialogueToolLayerAdd* LayerAddSlot = Cast<UIH_Widget_DialogueToolLayerAdd>(ScrollBox_SequenceLayer->GetChildAt(ScrollBox_SequenceLayer->GetChildrenCount() - 1));
	 // LayerAddSlot->PlayPushAnim();
}

void UDialogueToolWidget::DeleteLayer(int32 _LayerIndex, bool _IgnoreClip)
{
	
	int32 deletedActionCnt = CurrentDialogue.ActionLayers[_LayerIndex]->GetActionCount();
	for (int32 actionCnt = CurrentDialogue.ActionLayers[_LayerIndex]->GetActionCount() -1; actionCnt > -1; --actionCnt) 
	{
		DeleteAction(_LayerIndex, actionCnt, false);
	}

	if (_IgnoreClip == false) 
	{
		FDialogueClip fDialogueClip;
		fDialogueClip.eClipState = eDeleteLayer;
		fDialogueClip.layerPos = _LayerIndex;
		fDialogueClip.layerActionCnt = deletedActionCnt;
		DialogueClipBoard.Emplace(fDialogueClip);
	}

	CurrentDialogue.ActionLayers.RemoveAt(_LayerIndex);

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();


	// for (int32 Index = _LayerIndex; Index < ScrollBox_SequenceLayer->GetChildrenCount(); ++Index)
	// {
	// 	UPV_DialogueTool_SequenceLayer* PushLayerSlot = Cast< UPV_DialogueTool_SequenceLayer>(ScrollBox_SequenceLayer->GetChildAt(Index));
	// 	if (PushLayerSlot)
	// 	{
	// 		PushLayerSlot->PlayPullAnim();
	// 	}
	// }
	//
	// UPV_DialogueTool_SequenceLayerAdd* LayerAddSlot = Cast<UPV_DialogueTool_SequenceLayerAdd>(ScrollBox_SequenceLayer->GetChildAt(ScrollBox_SequenceLayer->GetChildrenCount() - 1));
	// LayerAddSlot->PlayPullAnim();
}

void UDialogueToolWidget::SelectAction(class UIH_Widget_DialogueToolAction* _Action)
{
	DetailsView_Inspector->SetObject(_Action->GetActionInfo());
	DetailsView_Inspector->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	CurrentSelectedAction = _Action;
	OriginAction = NewObject<UDialogueAction>(this, CurrentSelectedAction->GetActionInfo()->GetClass(), NAME_None, RF_Public, CurrentSelectedAction->GetActionInfo());

	if (IsValid(CurrentSelectedAction))
	{
		CurrentSelectedAction->SetSelect(true);
	}
}

void UDialogueToolWidget::DeselectAction()
{
	if (IsValid(CurrentSelectedAction))
	{
		if (bSelectActionChanged == true)
		{
			int32 LayerIndex, ActionIndex;
			CalculatePosition(CurrentSelectedAction, LayerIndex, ActionIndex);

			FDialogueClip fDialogueClip = FDialogueClip();
			fDialogueClip.eClipState = eChangeActionInfo;
			fDialogueClip.formerAction = OriginAction;
			fDialogueClip.formerActionPos = TPair<int32, int32>(LayerIndex, ActionIndex);
			DialogueClipBoard.Emplace(fDialogueClip);
		}

		bSelectActionChanged = false;
		OriginAction = nullptr;

		CurrentSelectedAction->SetSelect(false);
	}

	DetailsView_Inspector->SetVisibility(ESlateVisibility::Collapsed);
	DetailsView_Inspector->SetObject(nullptr);
}

void UDialogueToolWidget::OpenAddAction(int32 _LayerIndex)
{
	Canvas_AddAction->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	CurrentAddActionClass = nullptr;
	CurrentAddActionLayerIndex = _LayerIndex;

	Button_AddAction_Confirm->SetIsEnabled(false);
	Image_TimelineBlock->SetVisibility(ESlateVisibility::Visible);
}

void UDialogueToolWidget::OpenAddActionAt(int32 _LayerIndex, int32 _ActionIndex)
{
	Canvas_AddAction->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	CurrentAddActionLayerIndex = _LayerIndex;
	CurrentAddActionIndex = _ActionIndex;

	Button_AddAction_Confirm->SetIsEnabled(false);
	Image_TimelineBlock->SetVisibility(ESlateVisibility::Visible);
}

void UDialogueToolWidget::OpenChangeActionAt(int32 _LayerIndex, int32 _ActionIndex)
{
	Canvas_ChangeAction->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	CurrentAddActionLayerIndex = _LayerIndex;
	CurrentAddActionIndex = _ActionIndex;

	Button_ChangeAction_Confirm->SetIsEnabled(false);
	Image_TimelineBlock->SetVisibility(ESlateVisibility::Visible);
}

void UDialogueToolWidget::CloseAddAction()
{
	Canvas_AddAction->SetVisibility(ESlateVisibility::Collapsed);

	CurrentAddActionClass = nullptr;
	CurrentAddActionLayerIndex = -1;
	CurrentAddActionIndex = -1;

	Button_AddAction_Confirm->SetIsEnabled(false);
	Image_TimelineBlock->SetVisibility(ESlateVisibility::Collapsed);
}

void UDialogueToolWidget::CloseChangeAction()
{
	Canvas_ChangeAction->SetVisibility(ESlateVisibility::Collapsed);

	CurrentAddActionClass = nullptr;
	CurrentAddActionLayerIndex = -1;
	CurrentAddActionIndex = -1;

	Button_ChangeAction_Confirm->SetIsEnabled(false);
	Image_TimelineBlock->SetVisibility(ESlateVisibility::Collapsed);
}

void UDialogueToolWidget::AddAction(int32 _LayerIndex, TSubclassOf<UDialogueAction> _ActionClass)
{
	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		if (LayerIndex == _LayerIndex)
		{
			UDialogueAction* AddedAction = NewObject<UDialogueAction>(this, _ActionClass);
			CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Add(AddedAction);

			FDialogueClip fDialogueClip;
			fDialogueClip.eClipState = eCreateAction;
			fDialogueClip.nowActionPos = TPair<int32, int32>(LayerIndex, CurrentDialogue.ActionLayers[LayerIndex]->GetActionCount()-1);
			DialogueClipBoard.Emplace(fDialogueClip);
		}
	}

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	//UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>( ScrollBox_SequenceAction_Vertical->GetChildAt(_LayerIndex));
	//UIH_Widget_DialogueToolAction* ActionSlot = Cast< UIH_Widget_DialogueToolAction>( ActionHorizontalBox->GetChildAt(ActionHorizontalBox->GetChildrenCount() - 2));
	//ActionSlot->PlayAppearAnim();

	// UPV_DialogueTool_SequenceActionAdd* PushActionAddSlot = Cast< UPV_DialogueTool_SequenceActionAdd>(ActionHorizontalBox->GetChildAt(ActionHorizontalBox->GetChildrenCount() - 1));
	// if (PushActionAddSlot)
	// {
	// 	PushActionAddSlot->PlayPushAnim();
	// }
}

void UDialogueToolWidget::AddActionAt(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass)
{
	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		if (LayerIndex == _LayerIndex)
		{
			FDialogueClip fDialogueClip;
			fDialogueClip.eClipState = eCreateAction;
			fDialogueClip.nowActionPos = TPair<int32, int32>(LayerIndex, _ActionIndex);
			DialogueClipBoard.Emplace(fDialogueClip);

			UDialogueAction* AddedAction = NewObject<UDialogueAction>(this, _ActionClass);
			CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Insert( AddedAction, _ActionIndex );
		}
	}

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	// UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(_LayerIndex));
	// UPV_DialogueTool_SequenceAction* AddedActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(_ActionIndex));
	// AddedActionSlot->PlayAppearAnim();
	//
	// for (int32 Index = _ActionIndex + 1; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
	// {
	// 	UPV_DialogueTool_SequenceAction* PushActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(Index));
	// 	if (PushActionSlot)
	// 	{
	// 		PushActionSlot->PlayPushAnim();
	// 	}
	// }
	//
	// UPV_DialogueTool_SequenceActionAdd* PushActionAddSlot = Cast< UPV_DialogueTool_SequenceActionAdd>(ActionHorizontalBox->GetChildAt(ActionHorizontalBox->GetChildrenCount() - 1));
	// if (PushActionAddSlot)
	// {
	// 	PushActionAddSlot->PlayPushAnim();
	// }
}

void UDialogueToolWidget::AddActionAt(int32 _LayerIndex, int32 _ActionIndex, UDialogueAction* _ActionInfo, bool _IgnoreClip)
{

	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		if (LayerIndex == _LayerIndex)
		{
			if (_IgnoreClip == false)
			{
				FDialogueClip fDialogueClip;
				fDialogueClip.eClipState = eCreateAction;
				fDialogueClip.nowActionPos = TPair<int32, int32>(LayerIndex, _ActionIndex);
				DialogueClipBoard.Emplace(fDialogueClip);
			}
			CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Insert(_ActionInfo, _ActionIndex);
		}
	}

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	// UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(_LayerIndex));
	// UPV_DialogueTool_SequenceAction* AddedActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(_ActionIndex));
	// AddedActionSlot->PlayAppearAnim();
	//
	// for (int32 Index = _ActionIndex + 1; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
	// {
	// 	UPV_DialogueTool_SequenceAction* PushActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(Index));
	// 	if (PushActionSlot)
	// 	{
	// 		PushActionSlot->PlayPushAnim();
	// 	}
	// }
	//
	// UPV_DialogueTool_SequenceActionAdd* PushActionAddSlot = Cast< UPV_DialogueTool_SequenceActionAdd>(ActionHorizontalBox->GetChildAt(ActionHorizontalBox->GetChildrenCount() - 1));
	// if (PushActionAddSlot)
	// {
	// 	PushActionAddSlot->PlayPushAnim();
	// }
}

void UDialogueToolWidget::AddActionColumn(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass)
{
	if (_ActionIndex == -1)
	{
		AddAction(_LayerIndex, _ActionClass);
	}
	else
	{
		AddActionAt(_LayerIndex, _ActionIndex, _ActionClass);
	}

	int32 MaxLayerCnt = CurrentDialogue.ActionLayers.Num();
	for (int32 i = 0; i < MaxLayerCnt; ++i)
	{
		if (i == _LayerIndex)
		{
			continue;
		}

		UDialogueAction* AddedAction = NewObject<UDialogueAction_Empty>(this);
		AddActionAt(i, (_ActionIndex == -1) ? 0 : _ActionIndex, AddedAction);
	}

	FDialogueClip fDialogueClip;
	fDialogueClip.eClipState = eCreateColumn;
	fDialogueClip.layerActionCnt = MaxLayerCnt;
	DialogueClipBoard.Emplace(fDialogueClip);
}

void UDialogueToolWidget::DeleteAction(class UIH_Widget_DialogueToolAction* _Action)
{

	int32 DeletedActionLayerIndex = 0;
	int32 DeletedActionIndex = 0;

	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		for (int32 ActionIndex = 0; ActionIndex < CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Num(); ++ActionIndex)
		{
			UDialogueAction* SearchAction = CurrentDialogue.ActionLayers[LayerIndex]->GetActions()[ActionIndex];
			if (SearchAction == _Action->GetActionInfo())
			{
				FDialogueClip fDialogueClip;
				fDialogueClip.eClipState = eDeleteAction;
				fDialogueClip.formerAction = NewObject<UDialogueAction>(this,SearchAction->GetClass(), NAME_None, RF_Public, SearchAction);
				fDialogueClip.formerActionPos = TPair<int32, int32>(LayerIndex, ActionIndex);
				DialogueClipBoard.Emplace(fDialogueClip);

				CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Remove(SearchAction);

				DeletedActionLayerIndex = LayerIndex;
				DeletedActionIndex = ActionIndex;

				break;
			}
		}
	}

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	// UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(DeletedActionLayerIndex));
	// UPV_DialogueTool_SequenceAction* AddedActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(DeletedActionIndex));
	//
	// for (int32 Index = DeletedActionIndex; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
	// {
	// 	UPV_DialogueTool_SequenceAction* PushActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(Index));
	// 	if (PushActionSlot)
	// 	{
	// 		PushActionSlot->PlayPullAnim();
	// 	}
	// }
	//
	// UPV_DialogueTool_SequenceActionAdd* PushActionAddSlot = Cast< UPV_DialogueTool_SequenceActionAdd>(ActionHorizontalBox->GetChildAt(ActionHorizontalBox->GetChildrenCount() - 1));
	// if (PushActionAddSlot)
	// {
	// 	PushActionAddSlot->PlayPullAnim();
	// }
}



void UDialogueToolWidget::DeleteAction(int32 _LayerIndex, int32 _ActionIndex, bool _IgnoreClip /*= false*/)
{

	if (_LayerIndex >= CurrentDialogue.ActionLayers.Num())
		return;

	if (_ActionIndex >= CurrentDialogue.ActionLayers[_LayerIndex]->GetActionCount()) 
	{
		return;
	}

	int32 DeletedActionLayerIndex = 0;
	int32 DeletedActionIndex = 0;

	UDialogueAction* SearchAction = CurrentDialogue.ActionLayers[_LayerIndex]->GetActions()[_ActionIndex];

	if (_IgnoreClip == false)
	{
		FDialogueClip fDialogueClip;
		fDialogueClip.eClipState = eDeleteAction;
		fDialogueClip.formerAction = NewObject<UDialogueAction>(this, SearchAction->GetClass(), NAME_None, RF_Public, SearchAction);
		fDialogueClip.formerActionPos = TPair<int32, int32>(_LayerIndex, _ActionIndex);
		DialogueClipBoard.Emplace(fDialogueClip);
	}

	CurrentDialogue.ActionLayers[_LayerIndex]->GetActions().Remove(SearchAction);

	DeletedActionLayerIndex = _LayerIndex;
	DeletedActionIndex = _ActionIndex;

	ClearSequenceTimelineWidggets();
	CreateSequenceTimelineWidgets();

	// UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(DeletedActionLayerIndex));
	// UPV_DialogueTool_SequenceAction* AddedActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(DeletedActionIndex));
	//
	// for (int32 Index = DeletedActionIndex; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
	// {
	// 	UPV_DialogueTool_SequenceAction* PushActionSlot = Cast< UPV_DialogueTool_SequenceAction>(ActionHorizontalBox->GetChildAt(Index));
	// 	if (PushActionSlot)
	// 	{
	// 		PushActionSlot->PlayPullAnim();
	// 	}
	// }
	//
	// UPV_DialogueTool_SequenceActionAdd* PushActionAddSlot = Cast< UPV_DialogueTool_SequenceActionAdd>(ActionHorizontalBox->GetChildAt(ActionHorizontalBox->GetChildrenCount() - 1));
	// if (PushActionAddSlot)
	// {
	// 	PushActionAddSlot->PlayPullAnim();
	// }
}

void UDialogueToolWidget::MoveAction(TPair<int32, int32> _formerPos, TPair<int32, int32> _postPos, UDialogueAction* _ActionInfo, bool _IgnoreClip)
{
	if (_ActionInfo == nullptr)
	{
		return;
	}

	if (_formerPos == _postPos)
	{
		return;
	}
	
	if(_formerPos.Key == _postPos.Key
		&& _formerPos.Value < _postPos.Value)
	{
		DeleteAction(_formerPos.Key, _formerPos.Value, true);
		_postPos.Value -= 1;
		AddActionAt(_postPos.Key, _postPos.Value, _ActionInfo, true);
	}
	else 
	{
		DeleteAction(_formerPos.Key, _formerPos.Value, true);
		AddActionAt(_postPos.Key, _postPos.Value, _ActionInfo, true);
	}

	if (_IgnoreClip == false) 
	{
		FDialogueClip fDialogueClip;
		fDialogueClip.eClipState = eMoveAction;
		fDialogueClip.formerActionPos = _formerPos;
		fDialogueClip.nowActionPos = _postPos;
		fDialogueClip.nowAction = _ActionInfo;
		DialogueClipBoard.Emplace(fDialogueClip);
	}
}

void UDialogueToolWidget::ChangeAction(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass, bool _IgnoreClip /*= false*/)
{
	UDialogueAction* ChangedAction = CurrentDialogue.ActionLayers[_LayerIndex]->GetActions()[_ActionIndex];

	if (_IgnoreClip == false)
	{
		FDialogueClip fDialogueClip;
		fDialogueClip.eClipState = eChageAction;
		fDialogueClip.formerAction = ChangedAction;
		fDialogueClip.formerActionPos.Key = _LayerIndex;
		fDialogueClip.formerActionPos.Value = _ActionIndex;
		DialogueClipBoard.Emplace(fDialogueClip);
	}

	UDialogueAction* ChangingAction = NewObject<UDialogueAction>(this, _ActionClass);
	CurrentDialogue.ActionLayers[_LayerIndex]->GetActions()[_ActionIndex] = ChangingAction;

	UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(_LayerIndex));
	UIH_Widget_DialogueToolAction* ActionSlot = Cast< UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(_ActionIndex));
	ActionSlot->SetActionInfo(ChangingAction, _LayerIndex, _ActionIndex);
}

void UDialogueToolWidget::SetTimelineProgressText(int32 _CurrentNumber, int32 _MaxNumber)
{
	FString TimeLineProgressText = TEXT("(") + FString::FromInt(_CurrentNumber) +TEXT("/") + FString::FromInt(_MaxNumber) +TEXT(")");
	Text_TimeLineProgress->SetText(FText::FromString(TimeLineProgressText));
}

FVector2D UDialogueToolWidget::GetMousePos()
{
	FVector2D MousePosition = FSlateApplication::Get().GetCursorPos();
	FGeometry ViewportGeometry = FGeometry();
	MousePosition = ViewportGeometry.AbsoluteToLocal(MousePosition);
	MousePosition = this->GetCachedGeometry().AbsoluteToLocal(MousePosition);
	MousePosition.Y -= UpperBannerHeight;
	return MousePosition;
}

bool UDialogueToolWidget::CalculatePosition(class UIH_Widget_DialogueToolAction* _Action, int32& _LayerIndex, int32& _Actionindex)
{
	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));

		for (int32 Index = 0; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
		{
			UIH_Widget_DialogueToolAction* memberAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(Index));
		
			if (_Action == memberAction) 
			{
				_LayerIndex = LayerIndex;
				_Actionindex = Index;
				return true;
			}
		}
	}

	return false;
}

void UDialogueToolWidget::CalculateMouseIndex()
{
	FVector2D mousePos = GetMousePos();

	int32 LayerCount = CurrentDialogue.ActionLayers.Num();
	for (int32 LayerIndex = 0; LayerIndex < LayerCount; ++LayerIndex)
	{
		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));

		for (int32 Index = 0; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
		{
			UIH_Widget_DialogueToolAction* memberAction = Cast< UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(Index));
			if (!memberAction)
				continue;

			FVector2D ActionLocalPos = CalculateLocalPos(LayerIndex,Index);
			FVector2D ActionLocalEndPos = FVector2D(ActionLocalPos.X + ActionInterval, ActionLocalPos.Y + LayerHeight);

			if (ActionLocalPos.Y > mousePos.Y || ActionLocalEndPos.Y <= mousePos.Y)	//행 계산
			{
				break;
			}

			if (ActionLocalPos.X > mousePos.X || ActionLocalEndPos.X <= mousePos.X) //열 계산
			{
				continue;
			}

			if (ActionLocalPos.X + ActionInterval * 0.5f > mousePos.X) 
			{
				SetDragPoint(ActionLocalPos);
				DragPostIndex = TPair<int32,int32>(LayerIndex, Index);
			}
			else 
			{
				FVector2D RearPos = FVector2D(ActionLocalEndPos.X, ActionLocalPos.Y);
				SetDragPoint(RearPos);

				if (CurrentSelectedAction != memberAction) 
				{
					DragPostIndex = TPair<int32, int32>(LayerIndex, Index + 1);
				}
				else 
				{
					DragPostIndex = TPair<int32, int32>(LayerIndex, Index);
				}
			}
		}
	}
}

FVector2D UDialogueToolWidget::CalculateLocalPos(int32 _LayerIndex, int32 _ActionIndex)
{
	FVector2D LocalPos;
	LocalPos.X = FirstActionPos.X + ActionInterval * _ActionIndex;
	LocalPos.X -= ScrollBox_SequenceAction_Horizontal->GetScrollOffset();
	LocalPos.Y = FirstActionPos.Y + LayerHeight * _LayerIndex;
	LocalPos.Y -= ScrollBox_SequenceAction_Vertical->GetScrollOffset();
	return LocalPos;
}

void UDialogueToolWidget::CalculateSlide()
{
	if (GrabView_Action->GetVisibility() != ESlateVisibility::SelfHitTestInvisible)
		return;

	FVector2D mousePos = GetMousePos();

	if (mousePos.X <= LeftSlidePoint)
	{
		SlideHorizon(SlideRatio * -1.f);
	}

	if (mousePos.X >= RightSlidePoint) 
	{
		SlideHorizon(SlideRatio);
	}
}

void UDialogueToolWidget::SetDragPoint(FVector2D _pointPos)
{
	UCanvasPanelSlot* dragPointPanel = UWidgetLayoutLibrary::SlotAsCanvasSlot(CPP_Mouse_Index);
	if (dragPointPanel)
	{
		dragPointPanel->SetPosition(_pointPos);
	}
}

void UDialogueToolWidget::SlideHorizon(float _slideRatio)
{
	float currentOffset = ScrollBox_SequenceAction_Horizontal->GetScrollOffset();
	currentOffset += _slideRatio;

	if (currentOffset < 0)
		currentOffset = 0;
	else if (currentOffset > ScrollBox_SequenceAction_Horizontal->GetScrollOffsetOfEnd())
		currentOffset = ScrollBox_SequenceAction_Horizontal->GetScrollOffsetOfEnd();

	ScrollBox_SequenceAction_Horizontal->SetScrollOffset(currentOffset);
	ScrollBox_SequenceIndex->SetScrollOffset(currentOffset);
}

void UDialogueToolWidget::OnPostStopPreview()
{
	Slider_TimeLine_HitTest->SetValue(0.0f);
	Slider_TimeLine->SetValue(0.0f);

	int32 ActionCount = ScrollBox_SequenceIndex->GetChildrenCount() - 1;
	SetTimelineProgressText(0, ActionCount);
}

void UDialogueToolWidget::FocusOnSelect()
{
	TPair<int32,int32> selectIndex;
	CurrentSelectedAction->GetPos(selectIndex.Key, selectIndex.Value);

	int32 maxActionCnt, maxLayerCnt;
	UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(0));

	maxLayerCnt = ScrollBox_SequenceAction_Vertical->GetChildrenCount();
	maxActionCnt = ActionHorizontalBox->GetChildrenCount();

	float selectHorizonRatio = (float)selectIndex.Value / maxActionCnt;
	float scrollHorizon = ScrollBox_SequenceAction_Horizontal->GetScrollOffsetOfEnd();
	ScrollBox_SequenceAction_Horizontal->SetScrollOffset(scrollHorizon * selectHorizonRatio);
	ScrollBox_SequenceIndex->SetScrollOffset(scrollHorizon * selectHorizonRatio);

	float selectVerticalRatio = (float)selectIndex.Key / maxLayerCnt;
	float scrollVertical = ScrollBox_SequenceAction_Vertical->GetScrollOffsetOfEnd();
	ScrollBox_SequenceAction_Vertical->SetScrollOffset(scrollVertical * selectVerticalRatio);
}

void UDialogueToolWidget::CloseDeselectContext(UButton* _Button)
{
	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex) 
	{
		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));

		for (int32 Index = 0; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
		{
			UIH_Widget_DialogueToolAction* PushActionSlot = Cast< UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(Index));
			if (PushActionSlot)
			{
				// if (PushActionSlot->GetContextButton() != _Button) 
				// {
				// 	PushActionSlot->SetContextVisibility(false);
				// }
				// else 
				// {
				// 	PushActionSlot->SetContextVisibility(true);
				// }
			}
		}
	}
}

void UDialogueToolWidget::GrabAction(class UButton* _Button)
{
	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));

		for (int32 Index = 0; Index < ActionHorizontalBox->GetChildrenCount(); ++Index)
		{
			UIH_Widget_DialogueToolAction* PushActionSlot = Cast< UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(Index));
			if (PushActionSlot)
			{
				if (PushActionSlot->GetSelectButton() == _Button)
				{
					GrabView_Action->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
					GrabView_Action->SetActionInfo(PushActionSlot->GetActionInfo(), -1, -1);
					DragFormerIndex = TPair<int32, int32>(LayerIndex, Index);
					return;
				}
			}
		}
	}
}

void UDialogueToolWidget::GrabOffAction()
{
	if (GrabView_Action->GetVisibility() ==ESlateVisibility::SelfHitTestInvisible)
	{
		MoveAction(DragFormerIndex, DragPostIndex, GrabView_Action->GetActionInfo());

		GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
		GrabView_Action->SetActionInfo(nullptr, -1, -1);
	}
}

void UDialogueToolWidget::OnClickSaveButton()
{
	FString FilePath = FPaths::ProjectContentDir() + FString(TEXT("Dialogue/"));
	FString FileTypes = TEXT("Dialogue File (*.json)|*.json");
	FString DefaultFileName = NewFileName;
	FString FileName;

	bool bSaveFileResult = SaveFile(TEXT("Save Dialogue File")
		, FileTypes
		, FilePath
		, DefaultFileName
		, FileName);

	if (bSaveFileResult)
	{
		UIH_CinemaFunctionLibrary::SaveDialogue(CurrentDialogue, FileName);

		SetFileName(FPaths::GetCleanFilename(FileName));
	}
}

void UDialogueToolWidget::OnClickLoadButton()
{
	FString FilePath = FPaths::ProjectContentDir() + FString(TEXT("Dialogue/"));
	FString FileTypes = TEXT("Dialogue File (*.json)|*.json");
	TArray<FString> FileNames;

	bool bOpenFileesult = OpenFiles(TEXT("Load Dialogue File")
						, FileTypes
						, FilePath
						, EFileDialogFlags::None
						, FileNames);

	if (bOpenFileesult == false)
	{
		return;
	}

	UnloadActiveDialogue();

	CurrentDialogue = UIH_CinemaFunctionLibrary::LoadDialogue(FileNames[0]);

	LoadFilePath = FileNames[0];
	SetFileName(FPaths::GetCleanFilename(FileNames[0]));

	CreateWidgets();

	bSelectActionChanged = false;
	OriginAction = nullptr;
	CopiedAction = nullptr;
	DialogueClipBoard.Empty();

	ScrollBox_SequenceAction_Horizontal->SetScrollOffset(0.f);
	ScrollBox_SequenceIndex->SetScrollOffset(0.f);
	ScrollBox_SequenceAction_Vertical->SetScrollOffset(0.f);
}

void UDialogueToolWidget::OnScrollSequenceLayer(float _CurrentOffset)
{
	ScrollBox_SequenceAction_Vertical->SetScrollOffset(_CurrentOffset);
}

void UDialogueToolWidget::OnScrollSequenceActionHorizontal(float _CurrentOffset)
{
	ScrollBox_SequenceIndex->SetScrollOffset(_CurrentOffset);
	ScrollBox_Timeline_Hittest->SetScrollOffset(_CurrentOffset);
	ScrollBox_Timeline->SetScrollOffset(_CurrentOffset);
}

void UDialogueToolWidget::OnScrollSequenceActionVertical(float _CurrentOffset)
{
	ScrollBox_SequenceLayer->SetScrollOffset(_CurrentOffset);
}

void UDialogueToolWidget::OnPropertyChange_AddActionClass(FName PropertyName)
{
	if (CurrentAddActionClass == nullptr)
	{
		Button_AddAction_Confirm->SetIsEnabled(false);
	}
	else
	{
		UDialogueAction* AddedAction = NewObject<UDialogueAction>(this, CurrentAddActionClass);
		Button_AddAction_Confirm->SetIsEnabled(true);
	}
}

void UDialogueToolWidget::OnPropertyChange_ChangeActionClass(FName PropertyName)
{
	if (CurrentAddActionClass == nullptr)
	{
		Button_ChangeAction_Confirm->SetIsEnabled(false);
	}
	else
	{
		UDialogueAction* AddedAction = NewObject<UDialogueAction>(this, CurrentAddActionClass);
		Button_ChangeAction_Confirm->SetIsEnabled(true);
	}
}

void UDialogueToolWidget::OnPropertyChange_SearchActionClass(FName PropertyName)
{
	// SearchedActionList.Empty();
	//
	// if (CurrentSearchActionClass == nullptr) 
	// {
	// 	Text_SearchActionResult->SetText(FText::FromString(TEXT("Result: 0")));
	// 	return;
	// }
	//
	// int32 LayerCnt = CurrentDialogue.ActionLayers.Num();
	// int32 MaxActionCnt = 0;
	// for (int32 LayerIndex = 0; LayerIndex < LayerCnt; ++LayerIndex)
	// {
	// 	int32 CurrentActionCnt = CurrentDialogue.ActionLayers[LayerIndex]->GetActionCount();
	// 	MaxActionCnt = (MaxActionCnt > CurrentActionCnt) ? MaxActionCnt : CurrentActionCnt;
	// }
	//
	// int32 SearchActionCnt = 0;
	// for (int32 ActionIndex = 0; ActionIndex < MaxActionCnt; ++ActionIndex)
	// {
	// 	for (int32 LayerIndex = 0; LayerIndex < LayerCnt; ++LayerIndex)
	// 	{
	// 		UDialogueActionLayer* CurrentLayer = CurrentDialogue.ActionLayers[LayerIndex];
	// 		int32 CurrentActionCnt = CurrentLayer->GetActionCount();
	// 		if (CurrentActionCnt <= ActionIndex)
	// 			break;
	//
	// 		if (CurrentSearchActionClass->GetName() == (CurrentLayer->GetActions()[ActionIndex]->GetClass()->GetName())) 
	// 		{
	// 			++SearchActionCnt;
	// 			SearchedActionList.Add(TPair<int32, int32>(LayerIndex, ActionIndex));
	// 		}
	// 	}
	// }
	//
	// FString SearchResult = TEXT("Result: ") + FString::FromInt(SearchActionCnt);
	// Text_SearchActionResult->SetText(FText::FromString(SearchResult));
	//
	// if (SearchedActionList.Num() > 0)
	// {
	// 	TPair<int32, int32> firstAction = SearchedActionList[0];
	// 	DeselectAction();
	// 	SelectAction(GetSequenceAction(firstAction));
	// 	FocusOnSelect();
	// }
}

void UDialogueToolWidget::OnClickAddActionConfirm()
{
	AddActionColumn(CurrentAddActionLayerIndex,CurrentAddActionIndex,CurrentAddActionClass);

	CloseAddAction();
}

void UDialogueToolWidget::OnClickAddActionCancel()
{
	CloseAddAction();
}

void UDialogueToolWidget::OnClickChangeActionConfirm()
{
	ChangeAction(CurrentAddActionLayerIndex,CurrentAddActionIndex,CurrentAddActionClass);

	CloseChangeAction();
}

void UDialogueToolWidget::OnClickChangeActionCancel()
{
	CloseChangeAction();
}

void UDialogueToolWidget::OnClickSearchActionPrev()
{
	// if (SearchedActionList.Num() <= 0) return;
	//
	// if (IsValid(CurrentSelectedAction) == false) 
	// {
	// 	SelectAction(GetSequenceAction(SearchedActionList[0]));
	// 	FocusOnSelect();
	// 	return;
	// }
	//
	// TPair<int32, int32> CurrentSelectedActionIndex = CurrentSelectedAction->GetActionIndex();
	//
	// int32 CurrentSelectedActionPos = 0;
	// for (auto& elem : SearchedActionList) 
	// {
	// 	if (elem == CurrentSelectedActionIndex) 
	// 	{
	// 		break;
	// 	}
	// 	else 
	// 	{
	// 		++CurrentSelectedActionPos;
	// 	}
	// }
	//
	// if (CurrentSelectedActionPos == SearchedActionList.Num()) 
	// {
	// 	DeselectAction();
	// 	SelectAction(GetSequenceAction(SearchedActionList[0]));
	// 	FocusOnSelect();
	// 	return;
	// }
	//
	// if (0 == CurrentSelectedActionPos) 
	// {
	// 	FocusOnSelect();
	// 	return;
	// }
	//
	// DeselectAction();
	// SelectAction(GetSequenceAction(SearchedActionList[CurrentSelectedActionPos - 1]));
	// FocusOnSelect();
}

void UDialogueToolWidget::OnClickSearchActionNext()
{
	// if (SearchedActionList.Num() <= 0) return;
	//
	// int32 LastSearchedActionPos = SearchedActionList.Num() - 1;
	//
	// if (nullptr == CurrentSelectedAction)
	// {
	// 	SelectAction(GetSequenceAction(SearchedActionList[LastSearchedActionPos]));
	// 	FocusOnSelect();
	// 	return;
	// }
	//
	// TPair<int32, int32> CurrentSelectedActionIndex = CurrentSelectedAction->GetActionIndex();
	//
	// int32 CurrentSelectedActionPos = 0;
	// for (auto& elem : SearchedActionList)
	// {
	// 	if (elem == CurrentSelectedActionIndex)
	// 	{
	// 		break;
	// 	}
	// 	else
	// 	{
	// 		++CurrentSelectedActionPos;
	// 	}
	// }
	//
	// if (CurrentSelectedActionPos == SearchedActionList.Num())
	// {
	// 	DeselectAction();
	// 	SelectAction(GetSequenceAction(SearchedActionList[LastSearchedActionPos]));
	// 	FocusOnSelect();
	// 	return;
	// }
	//
	// if (LastSearchedActionPos == CurrentSelectedActionPos)
	// {
	// 	FocusOnSelect();
	// 	return;
	// }
	//
	// DeselectAction();
	// SelectAction(GetSequenceAction(SearchedActionList[CurrentSelectedActionPos + 1]));
	// FocusOnSelect();
}

void UDialogueToolWidget::OnPostPlayingActionChanged(int32 _ActionIndex)
{
	int32 ActionCount = ScrollBox_SequenceIndex->GetChildrenCount() - 1;

	float PlayRate = ((float)_ActionIndex + 0.5f) / (float)ActionCount;
	float SliderRate = PlayRate * ((float)ActionCount / (float)(ActionCount + 1));

	Slider_TimeLine_HitTest->SetValue(SliderRate);
	Slider_TimeLine->SetValue(SliderRate);

	SetTimelineProgressText(_ActionIndex + 1, ActionCount);
}

void UDialogueToolWidget::OnClickPlayPreviewButton()
{
	if (UIH_FunctionLibrary::GetGameWorld())
	{
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(UIH_FunctionLibrary::GetGameWorld());
		if(GameMode)
		{
			if( GameMode->IsA(AIH_GameMode_DialgueTool::StaticClass()) )
			{
				return;
			}
		}
	}
	
	GConfig->SetBool(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("OpenWithActiveDialogue"), true, GGameIni);
	GConfig->SetString(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("CurrentFileName"), *CurrentDialogueFileName, GGameIni);
	GConfig->SetString(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("CurrentFilePath"), *LoadFilePath, GGameIni);

	UIH_CinemaFunctionLibrary::PlayDialoguePreview(CurrentDialogue);
}

void UDialogueToolWidget::OnClickStopPreviewButton()
{
	if (UIH_FunctionLibrary::GetGameWorld())
	{
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(UIH_FunctionLibrary::GetGameWorld());
		if (GameMode)
		{
			if (GameMode->IsA(AIH_GameMode_DialgueTool::StaticClass()))
			{
				UIH_CinemaFunctionLibrary::StopDialoguePreview();
			}
		}
	}

	Slider_TimeLine_HitTest->SetValue(0.0f);
	Slider_TimeLine->SetValue(0.0f);

	int32 ActionCount = ScrollBox_SequenceIndex->GetChildrenCount() - 1;
	SetTimelineProgressText(0, ActionCount);
}

void UDialogueToolWidget::OnPropertyChanged_SequenceInspector(FName PropertyName)
{
	for (int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
	{
		for (int32 ActionIndex = 0; ActionIndex < CurrentDialogue.ActionLayers[LayerIndex]->GetActions().Num(); ++ActionIndex)
		{
			if (CurrentDialogue.ActionLayers[LayerIndex]->GetActions()[ActionIndex] == DetailsView_Inspector->GetObject() )
			{
				UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));
				UIH_Widget_DialogueToolAction* ActionSlot = Cast< UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex));
	
				ActionSlot->SetActionInfo(CurrentDialogue.ActionLayers[LayerIndex]->GetActions()[ActionIndex], LayerIndex, ActionIndex);
				bSelectActionChanged = true;
			}
		}
	}
}

void UDialogueToolWidget::OnPostDialogueFinish()
{
	int32 ActionCount = ScrollBox_SequenceIndex->GetChildrenCount() - 1;

	float FinishRate = (float)ActionCount / (float)ScrollBox_SequenceIndex->GetChildrenCount();

	Slider_TimeLine_HitTest->SetValue(FinishRate);
	Slider_TimeLine->SetValue(FinishRate);

	SetTimelineProgressText(ActionCount, ActionCount);

}

void UDialogueToolWidget::UndoClip()
{
	int32 clipBoardSize = DialogueClipBoard.Num();
	if (clipBoardSize <= 0) 
	{
		return;
	}

	FDialogueClip fDialoueClip = DialogueClipBoard[clipBoardSize - 1];
	DialogueClipBoard.RemoveAt(clipBoardSize-1);

	switch (fDialoueClip.eClipState)
	{
	case eCreateLayer:
		for (int32 actionCnt = 0; actionCnt < fDialoueClip.layerActionCnt; ++actionCnt)
		{
			UndoClip();
		}
		DeleteLayer(fDialoueClip.layerPos, true);
		break;
	case eDeleteLayer:
		AddLayerAt(fDialoueClip.layerPos, true);
		for (int32 actionCnt = 0; actionCnt < fDialoueClip.layerActionCnt; ++actionCnt) 
		{
			UndoClip();
		}
		break;
	case eCreateColumn:
		for (int32 actionCnt = 0; actionCnt < fDialoueClip.layerActionCnt; ++actionCnt)
		{
			UndoClip();
		}
		break;
	case eCreateAction:
		DeleteAction(fDialoueClip.nowActionPos.Key,fDialoueClip.nowActionPos.Value,true);
		break;
	case eDeleteAction:
		AddActionAt(fDialoueClip.formerActionPos.Key, fDialoueClip.formerActionPos.Value, fDialoueClip.formerAction, true);
		break;
	case eMoveAction:
		MoveAction(fDialoueClip.nowActionPos, fDialoueClip.formerActionPos, fDialoueClip.nowAction, true);
		break;
	case eChageAction:
		CurrentDialogue.ActionLayers[fDialoueClip.formerActionPos.Key]->GetActions()[fDialoueClip.formerActionPos.Value] = fDialoueClip.formerAction;
	case eChangeActionInfo:
		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(fDialoueClip.formerActionPos.Key));
		UIH_Widget_DialogueToolAction* ActionSlot = Cast< UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(fDialoueClip.formerActionPos.Value));
		ActionSlot->SetActionInfo(fDialoueClip.formerAction, fDialoueClip.formerActionPos.Key, fDialoueClip.formerActionPos.Value);
		break;
	}
}

void UDialogueToolWidget::DuplicateAction()
{
	if (CurrentSelectedAction == nullptr)
		return;

	int32 LayerIndex, ActionIndex;

	CalculatePosition(CurrentSelectedAction, LayerIndex, ActionIndex);
	UDialogueAction* AddedAction = NewObject<UDialogueAction>(this, CurrentSelectedAction->GetActionInfo()->GetClass(),NAME_None, RF_Public, CurrentSelectedAction->GetActionInfo());
	AddActionAt(LayerIndex, ActionIndex+1, AddedAction);

	UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));
	CurrentSelectedAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex));
	CurrentSelectedAction->OnPressSelectButton();
	GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
}

void UDialogueToolWidget::CopyAction()
{
	CopiedAction = CurrentSelectedAction->GetActionInfo();
}

void UDialogueToolWidget::PasteAction()
{
	if (CopiedAction == nullptr || CurrentSelectedAction == nullptr) 
		return;

	int32 LayerIndex, ActionIndex;

	CalculatePosition(CurrentSelectedAction, LayerIndex, ActionIndex);
	UDialogueAction* AddedAction = NewObject<UDialogueAction>(this, CopiedAction->GetClass(), NAME_None, RF_Public, CopiedAction);
	AddActionAt(LayerIndex, ActionIndex + 1, AddedAction);

	UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));
	CurrentSelectedAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex));
	CurrentSelectedAction->OnPressSelectButton();

	GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
	GrabView_Action->SetActionInfo(nullptr, -1, -1);
}

void UDialogueToolWidget::QuickSave()
{
	if (TEXT("") == LoadFilePath)
		return;

	// if(NotiAnimation)
	// 	PlayAnimation(NotiAnimation,0.f,1.f);

	UIH_CinemaFunctionLibrary::SaveDialogue(CurrentDialogue, LoadFilePath);
	SetFileName(FPaths::GetCleanFilename(LoadFilePath));
}

void UDialogueToolWidget::DeleteSelectAction()
{
	if (CurrentSelectedAction == nullptr)
		return;

	DeleteAction(CurrentSelectedAction);
}

bool UDialogueToolWidget::IsControllPressing()
{
	return bControllPressed;
}

void UDialogueToolWidget::SetControllPressed(bool _bControllPressed)
{
	bControllPressed = _bControllPressed;
}

void UDialogueToolWidget::MoveToNeighbor(FKey _Key)
{
	if (_Key != EKeys::W && _Key != EKeys::A
		&& _Key != EKeys::S && _Key != EKeys::D)
	{
		return;
	}

	if (nullptr == CurrentSelectedAction || GrabView_Action->GetVisibility() != ESlateVisibility::Hidden)
	{
		return;
	}

	GrabView_Action->SetActionInfo(nullptr, -1, -1);

	int32 LayerIndex, ActionIndex;

	CalculatePosition(CurrentSelectedAction, LayerIndex, ActionIndex);

	int32 LayerCnt = ScrollBox_SequenceAction_Vertical->GetChildrenCount();
	int32 ActionCnt = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex))->GetChildrenCount();
	
	if (_Key == EKeys::W)
	{

		if (0 == LayerIndex)
		{
			return;
		}

		bSelectActionChanged = true;
		DeselectAction();

		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex-1));
		CurrentSelectedAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex));
		CurrentSelectedAction->OnPressSelectButton();
		FocusOnSelect();
		GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
	}
	else if (_Key == EKeys::S)
	{
		if (LayerCnt - 2 <= LayerIndex)
		{
			return;
		}

		bSelectActionChanged = true;
		DeselectAction();

		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex + 1));
		CurrentSelectedAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex));
		CurrentSelectedAction->OnPressSelectButton();
		FocusOnSelect();
		GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
	}
	else if (_Key == EKeys::A)
	{
		if (0 == ActionIndex)
		{
			return;
		}

		bSelectActionChanged = true;
		DeselectAction();

		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));
		CurrentSelectedAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex - 1));
		CurrentSelectedAction->OnPressSelectButton();
		FocusOnSelect();
		GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
	}
	else if (_Key == EKeys::D)
	{
		if (ActionCnt -2 <= ActionIndex)
		{
			return;
		}

		bSelectActionChanged = true;
		DeselectAction();

		UHorizontalBox* ActionHorizontalBox = Cast<UHorizontalBox>(ScrollBox_SequenceAction_Vertical->GetChildAt(LayerIndex));
		CurrentSelectedAction = Cast<UIH_Widget_DialogueToolAction>(ActionHorizontalBox->GetChildAt(ActionIndex + 1));
		CurrentSelectedAction->OnPressSelectButton();
		FocusOnSelect();
		GrabView_Action->SetVisibility(ESlateVisibility::Hidden);
	}

	//float SlideVector = 0.f;
	//if (_Key == EKeys::A)
	//	SlideVector = -30.f;
	//else if (_Key == EKeys::D)
	//	SlideVector = 30.f;

	//SlideHorizon(SlideVector);
}

bool UDialogueToolWidget::OpenFiles(const FString& Title, const FString& FileTypes, FString& InOutLastPath, EFileDialogFlags::Type DialogMode, TArray<FString>& OutOpenFilenames)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bOpened = false;
	if (DesktopPlatform)
	{
		bOpened = DesktopPlatform->OpenFileDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			Title,
			InOutLastPath,
			TEXT(""),
			FileTypes,
			DialogMode,
			OutOpenFilenames
		);
	}

	bOpened = (OutOpenFilenames.Num() > 0);

	if (bOpened)
	{
		// User successfully chose a file; remember the path for the next time the dialog opens.
		InOutLastPath = OutOpenFilenames[0];
	}

	return bOpened;
}