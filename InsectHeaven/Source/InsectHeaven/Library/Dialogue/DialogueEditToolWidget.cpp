// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueEditToolWidget.h"

#include "DesktopPlatformModule.h"
#include "DialogueActionLayer.h"
#include "EngineAnalytics.h"
#include "FileHelpers.h"
#include "IAssetViewport.h"
#include "IDesktopPlatform.h"
#include "IH_DialoguePlayer.h"
#include "IH_GameMode_DialgueTool.h"
#include "IH_WidgetManager.h"
#include "LevelEditor.h"
#include "UnrealEdGlobals.h"
#include "Action/DialogueAction_Empty.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/DetailsView.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "DialogueTool/IH_Widget_DialogueToolAction.h"
#include "Editor/UnrealEdEngine.h"
#include "UMGEditor/Public/Components/SinglePropertyView.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Widgets/SViewport.h"

static FString ActionLineObjectPath = "/Game/Widget/Dialogue/DialogueToolActionLine.DialogueToolActionLine_C";

bool FIH_Dialogue::SaveToJson(const FString& _strFilePath)
{
	const FString strJsonPath = FPaths::ProjectContentDir() + FString(TEXT("Dialogue/")) + _strFilePath;
	FString JsonString;

	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	TArray<TSharedPtr<FJsonValue>> Values;

	for(int index = 0; index < ActionLayers.Num(); ++index)
	{
		TSharedRef<FJsonObject> json = MakeShareable(new FJsonObject());
		TSharedRef<FJsonValueObject> value = MakeShareable(new FJsonValueObject(json));

		ActionLayers[index]->SaveToJson(json);

		Values.Add(value);
	}

	JsonObject->SetArrayField(TEXT("ActionLayers"), Values);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject, Writer);

	bool Result = FFileHelper::SaveStringToFile(OutputString, *strJsonPath);

	return Result;
}

void UDialogueEditToolWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CPP_PropertyView_ActionList = Cast<USinglePropertyView>(GetWidgetFromName(TEXT("CPP_PropertyView_ActionList")));
	if(CPP_PropertyView_ActionList)
	{
		CPP_PropertyView_ActionList->SetObject(this);
		CPP_PropertyView_ActionList->SetPropertyName(TEXT("CurrentAddActionClass"));
	}

	if(CPP_Btn_ChangeAction)
	{
		CPP_Btn_ChangeAction->OnClicked.AddUniqueDynamic(this, &UDialogueEditToolWidget::OnClick_ChangeAction);
	}
	
	if(CPP_Btn_CancelAction)
	{
		CPP_Btn_CancelAction->OnClicked.AddUniqueDynamic(this, &UDialogueEditToolWidget::OnClick_CancelAction);
	}

	if(CPP_Btn_Save)
	{
		CPP_Btn_Save->OnClicked.AddUniqueDynamic(this, &UDialogueEditToolWidget::OnClick_SaveButton);
	}

	if(CPP_Btn_Load)
	{
		CPP_Btn_Load->OnClicked.AddUniqueDynamic(this, &UDialogueEditToolWidget::OnClick_LoadButton);
	}

	if(CPP_Btn_Play)
	{
		CPP_Btn_Play->OnClicked.AddUniqueDynamic(this, &UDialogueEditToolWidget::OnClick_Play);
	}

	if(CPP_Btn_Stop)
	{
		CPP_Btn_Stop->OnClicked.AddUniqueDynamic(this, &UDialogueEditToolWidget::OnClick_Stop);
	}
	
	if(CPP_Widget_SelectShadow)
	{
		CPP_Widget_SelectShadow->SetShadow(nullptr, INDEX_NONE, INDEX_NONE);
	}

	GrabEndPos = TPair<int32, int32>(INDEX_NONE, INDEX_NONE);
	
	for(auto& elem : CPP_Scroll_Layer->GetAllChildren())
	{
		if(UIH_Widget_DialogueToolAction* ActionWidget = Cast<UIH_Widget_DialogueToolAction>(elem))
		{
			ActionWidget->SetParentWidget(this);
		}
	}

	SetFileName(TEXT(""));
	bool bLoadActiveDialogue = false;
	GConfig->GetBool(TEXT("/Script/InsectHeaven.DialogueTool"), TEXT("OpenWithActiveDialogue"), bLoadActiveDialogue, GGameIni);
	if (bLoadActiveDialogue)
	{
		LoadActiveDialogue();

		FString SavedCurrentFileName;
		GConfig->GetString(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("CurrentFileName"), SavedCurrentFileName, GGameIni);
		GConfig->GetString(TEXT("/Script/ProjectVic.DialogueTool"), TEXT("CurrentFilePath"), LoadFilePath, GGameIni);
		
		SetFileName(FPaths::GetCleanFilename(SavedCurrentFileName));
	}
}

bool UDialogueEditToolWidget::OpenFiles(const FString& Title, const FString& FileTypes, FString& InOutLastPath,
	EFileDialogFlags::Type DialogMode, TArray<FString>& OutOpenFilenames)
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

void UDialogueEditToolWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if(ESlateVisibility::Collapsed != CPP_Widget_SelectShadow->GetVisibility())
	{
		UCanvasPanelSlot* GrabViewPanel = UWidgetLayoutLibrary::SlotAsCanvasSlot(CPP_Widget_SelectShadow);
		if(GrabViewPanel)
		{
			FVector2D mousePos = GetMousePos();

			GrabViewPanel->SetPosition(FVector2D(mousePos.X-20,mousePos.Y-20));
		}
	}
}

void UDialogueEditToolWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UDialogueEditToolWidget::AddNewLayer()
{
	if(CPP_Scroll_Layer && CPP_Scroll_ActionLine)
	{
		int32 MaxActionCount = 0;
		for(auto& elem : CurrentDialogue.ActionLayers)
		{
			MaxActionCount = (MaxActionCount < elem->GetActionCount()) ? elem->GetActionCount() : MaxActionCount;
		}

		UDialogueActionLayer* NewLayer = NewObject<UDialogueActionLayer>();
		for(int32 ActionIndex = 0; ActionIndex < MaxActionCount; ++ActionIndex)
		{
			NewLayer->AddAction(UDialogueAction_Empty::StaticClass());
		}
		CurrentDialogue.ActionLayers.Emplace(NewLayer);

		ReadCurrentDialogue();
	}
}

void UDialogueEditToolWidget::AddNewAction(int32 _LayerIndex)
{
	if(CPP_Scroll_ActionLine)
	{
		if(CurrentDialogue.ActionLayers.Num() <= _LayerIndex)
			return;

		CurrentDialogue.ActionLayers[_LayerIndex]->AddAction(UDialogueAction_Empty::StaticClass());

		ReadCurrentDialogue();
	}
}

void UDialogueEditToolWidget::AddNewActionAt(int32 _LayerIndex, int32 _ActionIndex, UDialogueAction* _ActionInfo)
{
	if(CPP_Scroll_ActionLine)
	{
		if(CurrentDialogue.ActionLayers.Num() <= _LayerIndex)
			return;
		
		if(_ActionIndex > CurrentDialogue.ActionLayers[_LayerIndex]->GetActions().Num())
		{
			return;
		}
		else if(_ActionIndex == CurrentDialogue.ActionLayers[_LayerIndex]->GetActions().Num())
		{
			CurrentDialogue.ActionLayers[_LayerIndex]->GetActions().Add(_ActionInfo);
		}
		else
		{
			CurrentDialogue.ActionLayers[_LayerIndex]->GetActions().Insert(_ActionInfo, _ActionIndex);
		}
		
		ReadCurrentDialogue();
	}
}

void UDialogueEditToolWidget::SelectAction(UIH_Widget_DialogueToolAction* _SelectAction)
{
	CPP_DetailView_Action->SetObject(_SelectAction->GetActionInfo());
	CPP_DetailView_Action->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	
	CurrentSelectActionWidget = _SelectAction;

	for(auto& elem : CPP_Scroll_ActionLine->GetAllChildren())
	{
		if(UHorizontalBox* ActionLineWidget = Cast<UHorizontalBox>(elem))
		{
			for(auto& lineElem : ActionLineWidget->GetAllChildren())
			{
				if(UIH_Widget_DialogueToolAction* ActionWidget = Cast<UIH_Widget_DialogueToolAction>(lineElem))
				{
					ActionWidget->SetSelect(ActionWidget == _SelectAction);
				}
			}
		}
	}
}

void UDialogueEditToolWidget::DeleteAction(int32 _LayerIndex, int32 _ActionIndex)
{
	SelectAction(nullptr);

	if(CurrentDialogue.ActionLayers.Num() <= _LayerIndex)
		return;

	UDialogueActionLayer* ActionLine = CurrentDialogue.ActionLayers[_LayerIndex];
	if(ActionLine->GetActionCount() <= _ActionIndex)
		return;

	ActionLine->RemoveAction(_ActionIndex);

	ReadCurrentDialogue();
}

void UDialogueEditToolWidget::MoveAction(TPair<int32, int32> _FormerPos, TPair<int32, int32> _PostPos)
{
	if(nullptr == CPP_Widget_SelectShadow)
		return;

	if(_FormerPos != _PostPos)
	{
		AddNewActionAt(_PostPos.Key, _PostPos.Value, CPP_Widget_SelectShadow->GetActionInfo());
		DeleteAction(_FormerPos.Key, _FormerPos.Value);
	}
	
	ReleaseShadow();
	ReadCurrentDialogue();
}

void UDialogueEditToolWidget::ShowChangeActionCanvas(UIH_Widget_DialogueToolAction* _TargetAction)
{
	if(CPP_Canvas_ActionChange)
	{
		CPP_Canvas_ActionChange->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}

	ChangeTargetActionWidget = _TargetAction;
}

UIH_Widget_DialogueToolAction* UDialogueEditToolWidget::FindAction(int32 _LayerIndex, int32 _ActionIndex)
{
	if(CPP_Scroll_ActionLine->GetChildrenCount() <= _LayerIndex)
		return nullptr;

	if(UHorizontalBox* TargetActionLine = Cast<UHorizontalBox>(CPP_Scroll_ActionLine->GetChildAt(_LayerIndex)))
	{
		if(TargetActionLine->GetChildrenCount() - 1 > _ActionIndex)
		{
			if(UIH_Widget_DialogueToolAction* TargetActionWidget = Cast<UIH_Widget_DialogueToolAction>(TargetActionLine->GetChildAt(_ActionIndex)))
			{
				return TargetActionWidget;
			}
		}
	}

	return nullptr;
}

void UDialogueEditToolWidget::ReleaseShadow()
{
	CPP_Widget_SelectShadow->SetVisibility(ESlateVisibility::Collapsed);
	CPP_Widget_SelectShadow->SetShadow(nullptr, INDEX_NONE, INDEX_NONE);
}

void UDialogueEditToolWidget::OnClick_SaveButton()
{
	FString FilePath = FPaths::ProjectContentDir() + FString(TEXT("Dialogue/"));
	FString FileTypes = TEXT("Dialogue File (*.json)|*.json");
	FString DefaultFileName = TEXT("NewDialogue.json");
	FString FileName;

	bool SaveFileResult = SaveFile(TEXT("Save Dialogue File")
		, FileTypes
		, FilePath
		, DefaultFileName
		, FileName);

	if(SaveFileResult)
	{
		const FString strJsonPath = FileName;
		FString JsonString;

		TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

		{ // Save Action
			TArray<TSharedPtr<FJsonValue>> Values;

			for (int i = 0; i < CurrentDialogue.ActionLayers.Num(); ++i)
			{
				TSharedRef<FJsonObject> json = MakeShareable(new FJsonObject());
				TSharedPtr<FJsonValueObject> value = MakeShareable(new FJsonValueObject(json));

				CurrentDialogue.ActionLayers[i]->SaveToJson(json);

				Values.Add(value);
			}

			JsonObject->SetArrayField(TEXT("ActionLayers"), Values);
		}

		FString OutputString;
		TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
		FJsonSerializer::Serialize(JsonObject, Writer);

		FFileHelper::SaveStringToFile(OutputString, *strJsonPath);
		CPP_Txt_FileName->SetText(FText::FromString(FPaths::GetCleanFilename(FileName)));
	}
}

void UDialogueEditToolWidget::OnClick_LoadButton()
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

	const FString JsonFilePath = FileNames[0];
	FString JsonString;

	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FIH_Dialogue Dialogue;

		const TArray<TSharedPtr<FJsonValue>>& arrActionLayer = JsonObject->GetArrayField(TEXT("ActionLayers"));
		for (const TSharedPtr<FJsonValue>& ActionLayer : arrActionLayer)
		{
			UDialogueActionLayer* pLayer = NewObject<UDialogueActionLayer>();
			Dialogue.ActionLayers.Add(pLayer);

			pLayer->LoadToJson(ActionLayer);
		}

		CurrentDialogue = Dialogue;
	}

	LoadFilePath = FileNames[0];
	CPP_Txt_FileName->SetText(FText::FromString(FPaths::GetCleanFilename(FileNames[0])));

	ReadCurrentDialogue();
}

void UDialogueEditToolWidget::OnClick_ChangeAction()
{
	//Get New Action Class
	if(nullptr != ChangeTargetActionWidget)
	{
		int32 LayerIndex, ActionIndex;
		ChangeTargetActionWidget->GetPos(LayerIndex, ActionIndex);
		UDialogueAction* NewAction = NewObject<UDialogueAction>(this, CurrentAddActionClass);
		CurrentDialogue.ActionLayers[LayerIndex]->GetActions()[ActionIndex] = NewAction;
		ChangeTargetActionWidget->SetActionInfo(NewAction, LayerIndex, ActionIndex);
		ChangeTargetActionWidget = nullptr;
	}

	if(CPP_Canvas_ActionChange)
	{
		CPP_Canvas_ActionChange->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UDialogueEditToolWidget::OnClick_CancelAction()
{
	if(CPP_Canvas_ActionChange)
	{
		CPP_Canvas_ActionChange->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UDialogueEditToolWidget::OnClick_Play()
{
	GConfig->SetBool(TEXT("/Script/InsectHeaven.DialogueTool"), TEXT("OpenWithActiveDialogue"), true, GGameIni);
	GConfig->SetString(TEXT("/Script/InsectHeaven.DialogueTool"), TEXT("CurrentFileName"), *CurrentDialogueFileName, GGameIni);
	GConfig->SetString(TEXT("/Script/InsectHeaven.DialogueTool"), TEXT("CurrentFilePath"), *LoadFilePath, GGameIni);

	SaveDialogue(CurrentDialogue, FPaths::ProjectContentDir() + FString(TEXT("Dialogue/")) + TEXT("ActiveDialogue"));

	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));

	ULevelEditorPlaySettings* PlaySettings = GetMutableDefault<ULevelEditorPlaySettings>();
	PlaySettings->LastExecutedPlayModeType = PlayMode_InViewPort;

	FPropertyChangedEvent PropChangeEvent(ULevelEditorPlaySettings::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(ULevelEditorPlaySettings, LastExecutedPlayModeType)));
	PlaySettings->PostEditChangeProperty(PropChangeEvent);

	PlaySettings->SaveConfig();

	if (FEngineAnalytics::IsAvailable())
	{
		// play location
		FString PlayLocationString;

		switch (PlaySettings->LastExecutedPlayModeLocation)
		{
		case PlayLocation_CurrentCameraLocation:
			PlayLocationString = TEXT("CurrentCameraLocation");
			break;

		case PlayLocation_DefaultPlayerStart:
			PlayLocationString = TEXT("DefaultPlayerStart");
			break;

		default:
			PlayLocationString = TEXT("<UNKNOWN>");
		}

		// play mode
		FString PlayModeString;

		switch (PlaySettings->LastExecutedPlayModeType)
		{
		case PlayMode_InViewPort:
			PlayModeString = TEXT("InViewPort");
			break;

		case PlayMode_InEditorFloating:
			PlayModeString = TEXT("InEditorFloating");
			break;

		case PlayMode_InMobilePreview:
			PlayModeString = TEXT("InMobilePreview");
			break;

		case PlayMode_InTargetedMobilePreview:
			PlayModeString = TEXT("InTargetedMobilePreview");
			break;

		case PlayMode_InVulkanPreview:
			PlayModeString = TEXT("InVulkanPreview");
			break;

		case PlayMode_InNewProcess:
			PlayModeString = TEXT("InNewProcess");
			break;

		case PlayMode_InVR:
			PlayModeString = TEXT("InVR");
			break;

		case PlayMode_Simulate:
			PlayModeString = TEXT("Simulate");
			break;

		default:
			PlayModeString = TEXT("<UNKNOWN>");
		}

		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.PIE"), TEXT("PlayLocation"), PlayLocationString);
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.PIE"), TEXT("PlayMode"), PlayModeString);
	}

	TSharedPtr<IAssetViewport> ActiveLevelViewport = LevelEditorModule.GetFirstActiveViewport();

	const bool bAtPlayerStart = false;
	FRequestPlaySessionParams SessionParams;

	if (ActiveLevelViewport.IsValid() && FSlateApplication::Get().FindWidgetWindow(ActiveLevelViewport->AsWidget()).IsValid())
	{
		SessionParams.DestinationSlateViewport = ActiveLevelViewport;

		if (!bAtPlayerStart)
		{
			SessionParams.StartLocation = FVector::ZeroVector;
			SessionParams.StartRotation = FRotator::ZeroRotator;
		}
	}

	SessionParams.WorldType = EPlaySessionWorldType::PlayInEditor;
	SessionParams.GlobalMapOverride = TEXT("/Game/Scene/Editor/DialogueTest.DialogueTest");
	SessionParams.GameModeOverride = AIH_GameMode_DialgueTool::StaticClass();
	SessionParams.SessionDestination = EPlaySessionDestinationType::InProcess;

	FEditorFileUtils::LoadMap(TEXT("/Game/Scene/Editor/DialogueTest"));

	GUnrealEd->RequestPlaySession(SessionParams);
}

void UDialogueEditToolWidget::OnClick_Stop()
{
	GEditor->RequestEndPlayMap();
}

void UDialogueEditToolWidget::GrabAction(UIH_Widget_DialogueToolAction* _Widget)
{
	GrabStartPos = TPair<int32, int32>(INDEX_NONE, INDEX_NONE);
	GrabEndPos = TPair<int32, int32>(INDEX_NONE, INDEX_NONE);
	
	if(nullptr != _Widget)
	{
		_Widget->GetPos(GrabStartPos.Key, GrabStartPos.Value);
		CPP_Widget_SelectShadow->SetVisibility(ESlateVisibility::HitTestInvisible);
		CPP_Widget_SelectShadow->SetShadow(_Widget->GetActionInfo(), GrabStartPos.Key, GrabStartPos.Value);
	}
	else
	{
		ReleaseShadow();
	}
}

void UDialogueEditToolWidget::GrabOffAction()
{
	CalculateMouseIndex();

	GrabOffAction(FindAction(GrabEndPos.Key, GrabEndPos.Value));
}

void UDialogueEditToolWidget::GrabOffAction(UIH_Widget_DialogueToolAction* _Widget)
{
	CalculateMouseIndex();
	
	if(ESlateVisibility::Collapsed != CPP_Widget_SelectShadow->GetVisibility())
	{
		if(GrabStartPos.Key != INDEX_NONE && GrabStartPos.Value != INDEX_NONE
			&& GrabEndPos.Key != INDEX_NONE && GrabEndPos.Value != INDEX_NONE)
		MoveAction(GrabStartPos, GrabEndPos);

		ReleaseShadow();
	}
}

void UDialogueEditToolWidget::DeleteSelectAction()
{
	if(nullptr == CurrentSelectActionWidget)
	{
		return;
	}

	int32 LayerIndex, ActionIndex;
	CurrentSelectActionWidget->GetPos(LayerIndex, ActionIndex);
	CurrentSelectActionWidget = nullptr;
	DeleteAction(LayerIndex, ActionIndex);
}

FVector2D UDialogueEditToolWidget::GetMousePos()
{
	FVector2D MousePosition = FSlateApplication::Get().GetCursorPos();
	FGeometry ViewportGeometry = FGeometry();
	MousePosition = ViewportGeometry.AbsoluteToLocal(MousePosition);
	MousePosition = this->GetCachedGeometry().AbsoluteToLocal(MousePosition);
	return MousePosition;
}

void UDialogueEditToolWidget::CalculateMouseIndex()
{
	FVector2D CurrentScreenSize = this->GetCachedGeometry().GetLocalSize();
	FVector2D DefaultScreenSize = FVector2D(1920.f, 1080.f);
	
	FVector2D ConvertMousePos = GetMousePos();
	ConvertMousePos.X = ConvertMousePos.X / CurrentScreenSize.X * DefaultScreenSize.X;
	ConvertMousePos.Y = ConvertMousePos.Y / CurrentScreenSize.Y * DefaultScreenSize.Y;

	FVector2D ConvertStartPos = FVector2D(226.f, 730.f);
	ConvertStartPos.X = ConvertStartPos.X / CurrentScreenSize.X * DefaultScreenSize.X;

	FVector2D ActionWidgetSize = FVector2D(220.f, 80.f);
	ActionWidgetSize.X = ActionWidgetSize.X / CurrentScreenSize.X * DefaultScreenSize.X;
	ActionWidgetSize.Y = ActionWidgetSize.Y / CurrentScreenSize.Y * DefaultScreenSize.Y;

	int32 LayerCount = CurrentDialogue.ActionLayers.Num();
	for(int32 LayerIndex = 0; LayerIndex < LayerCount; ++LayerIndex)
	{
		UHorizontalBox* ActionLine = Cast<UHorizontalBox>(CPP_Scroll_ActionLine->GetChildAt(LayerIndex));

		for(int32 ActionIndex = 0; ActionIndex < ActionLine->GetChildrenCount(); ++ActionIndex)
		{
			UIH_Widget_DialogueToolAction* ActionWidget = Cast<UIH_Widget_DialogueToolAction>(ActionLine->GetChildAt(ActionIndex));
			if(nullptr == ActionWidget || nullptr == ActionWidget->GetActionInfo())
			{
				return;
			}

			FVector2D ActionLocalPos = FVector2D(0,0);
			ActionLocalPos.X = ConvertStartPos.X + ActionWidgetSize.X * ActionIndex;
			ActionLocalPos.Y = ConvertStartPos.Y + ActionWidgetSize.Y * LayerIndex;
			FVector2D ActionLocalEndPos = FVector2D(ActionLocalPos.X + 210.f, ActionLocalPos.Y + 88.f);

			if(ActionLocalPos.Y > ConvertMousePos.Y || ActionLocalEndPos.Y <= ConvertMousePos.Y)
			{
				break;
			}

			if(ActionLocalPos.X > ConvertMousePos.X || ActionLocalEndPos.X <= ConvertMousePos.X)
			{
				continue;
			}

			if(ActionLocalPos.X + 210.f * 0.5f > ConvertMousePos.X)
			{
				GrabEndPos = TPair<int32, int32>(LayerIndex, ActionIndex);
				return;
			}
			else
			{
				if(CurrentSelectActionWidget != ActionWidget)
				{
					GrabEndPos = TPair<int32, int32>(LayerIndex, ActionIndex + 1);
					return;
				}
				else
				{
					GrabEndPos = TPair<int32, int32>(LayerIndex, ActionIndex);
					return;
				}
			}
		}
	}
}

FVector2D UDialogueEditToolWidget::CalculateActionPos(int32 _LayerIndex, int32 _ActionIndex)
{
	//230 750
	FVector2D LocalPos;
	LocalPos.X = 230.f + 210.f * _ActionIndex;
	LocalPos.Y = 750.f + 88.f * _LayerIndex;
	return LocalPos;
}

void UDialogueEditToolWidget::LoadActiveDialogue()
{
	FString FilePath = FPaths::ProjectContentDir() + FString(TEXT("Dialogue/")) + FString(TEXT("ActiveDialogue"));
	CurrentDialogue = LoadDialogue(FilePath);
}

void UDialogueEditToolWidget::ReadCurrentDialogue()
{
	CPP_Scroll_Layer->ClearChildren();
	CPP_Scroll_ActionLine->ClearChildren();

	ReleaseShadow();
	CurrentSelectActionWidget = nullptr;

	const FSoftClassPath ActionPath(UIH_Widget_DialogueToolAction::GetWidgetPath());
	UClass* ActionWidgetClass = Cast<UClass>(ActionPath.TryLoad());

	//Add Layer Index
	{
		//Actual Layer
		int32 LayerCount = CurrentDialogue.ActionLayers.Num();
		for(int32 Index = 0; Index < LayerCount; ++Index)
		{
			if(UIH_Widget_DialogueToolAction* LayerWidget = CreateWidget<UIH_Widget_DialogueToolAction>(this, ActionWidgetClass))
			{
				LayerWidget->SetParentWidget(this);
				LayerWidget->SetLayerInfo(Index);
				CPP_Scroll_Layer->AddChild(LayerWidget);

				UHorizontalBox* ActionLineBox = NewObject<UHorizontalBox>();
				CPP_Scroll_ActionLine->AddChild(ActionLineBox);
			}
		}

		//Add Button
		if(UIH_Widget_DialogueToolAction* LayerWidget = CreateWidget<UIH_Widget_DialogueToolAction>(this, ActionWidgetClass))
		{
			LayerWidget->SetParentWidget(this);
			CPP_Scroll_Layer->AddChild(LayerWidget);
		}
	}

	//Add Action
	{
		for(int32 LayerIndex = 0; LayerIndex < CurrentDialogue.ActionLayers.Num(); ++LayerIndex)
		{
			UHorizontalBox* ActionBox = Cast<UHorizontalBox>(CPP_Scroll_ActionLine->GetChildAt(LayerIndex));
			UDialogueActionLayer* ActionLine = CurrentDialogue.ActionLayers[LayerIndex];
			for(int32 ActionIndex = 0; ActionIndex < ActionLine->GetActionCount(); ++ActionIndex)
			{
				if(UIH_Widget_DialogueToolAction* ActionWidget = CreateWidget<UIH_Widget_DialogueToolAction>(this, ActionWidgetClass))
				{
					ActionWidget->SetParentWidget(this);
					UDialogueAction* ActionInfo = ActionLine->GetActions()[ActionIndex];
					ActionWidget->SetActionInfo(ActionInfo, LayerIndex, ActionIndex);
					ActionBox->AddChild(ActionWidget);
				}
			}
			if(UIH_Widget_DialogueToolAction* ActionWidget = CreateWidget<UIH_Widget_DialogueToolAction>(this, ActionWidgetClass))
			{
				ActionWidget->SetParentWidget(this);
				ActionWidget->SetActionInfo(nullptr, LayerIndex, INDEX_NONE);
				ActionBox->AddChild(ActionWidget);
			}
		}
	}
}

bool UDialogueEditToolWidget::SaveFile(const FString& _Title, const FString& _FileTypes, FString& _InOutLastPath,
	const FString& _DefaultFile, FString& _OutFileName)
{
	_OutFileName = FString();

	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bFileChosen = false;
	TArray<FString> OutFileNames;
	if(DesktopPlatform)
	{
		bFileChosen = DesktopPlatform->SaveFileDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			_Title,
			_InOutLastPath,
			_DefaultFile,
			_FileTypes,
			EFileDialogFlags::None,
			OutFileNames);
	}

	bFileChosen = (OutFileNames.Num() > 0);

	if(bFileChosen)
	{
		_InOutLastPath = OutFileNames[0];
		_OutFileName = OutFileNames[0];
	}

	return bFileChosen;
}

void UDialogueEditToolWidget::SetFileName(const FString& _FileName)
{
	CurrentDialogueFileName = _FileName;
	CPP_Txt_FileName->SetText(FText::FromString(_FileName));
}

FIH_Dialogue UDialogueEditToolWidget::LoadDialogue(const FString& _strFileName)
{
	const FString JsonFilePath = _strFileName;
	FString JsonString;

	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FIH_Dialogue Dialogue;

		const TArray<TSharedPtr<FJsonValue>>& arrActionLayer = JsonObject->GetArrayField(TEXT("ActionLayers"));
		for (const TSharedPtr<FJsonValue>& ActionLayer : arrActionLayer)
		{
			UDialogueActionLayer* pLayer = NewObject<UDialogueActionLayer>();
			Dialogue.ActionLayers.Add(pLayer);

			pLayer->LoadToJson(ActionLayer);
		}


		return Dialogue;
	}

	return FIH_Dialogue();
}

bool UDialogueEditToolWidget::SaveDialogue(FIH_Dialogue& _Dialogue, const FString& _strFileName)
{
	const FString strJsonPath = _strFileName;
	FString JsonString; //Json converted to FString

	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	{ // Save Action
		TArray<TSharedPtr<FJsonValue>> Values;

		for (int i = 0; i < _Dialogue.ActionLayers.Num(); ++i)
		{
			TSharedRef<FJsonObject> json = MakeShareable(new FJsonObject());
			TSharedPtr<FJsonValueObject> value = MakeShareable(new FJsonValueObject(json));

			_Dialogue.ActionLayers[i]->SaveToJson(json);

			Values.Add(value);
		}

		JsonObject->SetArrayField(TEXT("ActionLayers"), Values);
	}


	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject, Writer);

	bool bResult = FFileHelper::SaveStringToFile(OutputString, *strJsonPath);
	return bResult;
}
