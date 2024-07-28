#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "IDesktopPlatform.h"

#include "DialogueEditToolWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDialoguePlayer_OnFinish);

enum DialogueClipState {eCreateLayer, eDeleteLayer, eCreateAction, eDeleteAction, eMoveAction, eChageAction, eCreateColumn, eChangeActionInfo};

USTRUCT()
struct FDialogueClip 
{
	GENERATED_USTRUCT_BODY()

	DialogueClipState eClipState;

	UPROPERTY()
	class UDialogueAction* formerAction;
	TPair<int32, int32> formerActionPos;

	UPROPERTY()
	class UDialogueAction* nowAction;
	TPair<int32, int32> nowActionPos;

	int32 layerPos;
	int32 layerActionCnt;
};

USTRUCT(BlueprintType, Blueprintable)
struct FIH_Dialogue
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	TArray<class UDialogueActionLayer*> ActionLayers;

	bool SaveToJson(const FString& _strFilePath);
};

UCLASS(BlueprintType, Blueprintable)
class UDialogueToolWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

	void LoadActiveDialogue();
	void UnloadActiveDialogue();

	void ClearWidgets();
	void ClearSequenceInspectorWidgets();
	void ClearSequenceTimelineWidggets();


	void CreateWidgets();
	void CreateSequenceInspectorWidgets();
	void CreateSequenceTimelineWidgets();

	void SetFileName(const FString& _FileName);
	FString GetCurrentFileName() { return CurrentDialogueFileName; }
	bool OpenFiles(const FString& Title, const FString& FileTypes, FString& InOutLastPath, EFileDialogFlags::Type DialogMode, TArray<FString>& OutOpenFilenames);
	bool SaveFile(const FString& Title, const FString& FileTypes, FString& InOutLastPath, const FString& DefaultFile, FString& OutFilename);

	/// <summary>
	/// Layer
	/// </summary>
	void AddLayer();
	void AddLayerAt(int32 _LayerIndex, bool _IgnoreClip = false);
	void DeleteLayer(int32 _LayerIndex, bool _IgnoreClip = false);

	/// <summary>
	/// Action
	/// </summary>
	void SelectAction(class UIH_Widget_DialogueToolAction* _Action);
	void DeselectAction();
	void AddAction(int32 _LayerIndex, TSubclassOf<UDialogueAction> _ActionClass );
	void AddActionAt(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass);
	void AddActionAt(int32 _LayerIndex, int32 _ActionIndex, UDialogueAction* _ActionInfo, bool _IgnoreClip = false);
	void AddActionColumn(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass);
	void DeleteAction(class UIH_Widget_DialogueToolAction* _Action);
	void DeleteAction(int32 _LayerIndex, int32 _ActionIndex, bool _IgnoreClip = false);
	void MoveAction(TPair<int32,int32> _formerPos, TPair<int32,int32> _postPos, UDialogueAction* _ActionInfo, bool  _IgnoreClip = false);	//Drag & Drop
	void ChangeAction(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass, bool _IgnoreClip = false);
	UFUNCTION() void GrabAction(class UButton* _Button);
	UFUNCTION(BlueprintCallable) void GrabOffAction();
	UFUNCTION() void CloseDeselectContext(class UButton* _Button);

	/// <summary>
	/// Timeline
	/// </summary>
	void OpenAddAction(int32 _LayerIndex);
	void OpenAddActionAt(int32 _LayerIndex, int32 _ActionIndex);
	void OpenChangeActionAt(int32 _LayerIndex, int32 _ActionIndex);
	void CloseAddAction();
	void CloseChangeAction();
	void SetTimelineProgressText(int32 _CurrentNumber, int32 _MaxNumber);

	/// <summary>
	/// Calculate UI Pos
	/// </summary>
	FVector2D GetMousePos();	//Get Current Mouse Pos (Pixel)
	bool CalculatePosition(class UIH_Widget_DialogueToolAction* _Action, int32& _LayerIndex, int32& _Actionindex);	//Get Current Mouse Pos (Action Index)
	void CalculateMouseIndex();	//Get Current Mouse Pos (Action Drag)
	FVector2D CalculateLocalPos(int32 _LayerIndex, int32 _ActionIndex);	//Get Action Pos (Pixel)
	void SetDragPoint(FVector2D _pointPos);	//Move Drag Assist UI (CPP_Mouse_Index)

	/// <summary>
	/// Scroll Box
	/// </summary>
	void SlideHorizon(float _slideRatio);
	void CalculateSlide();	//Calculate Slide Vector
	void FocusOnSelect();	//Move Scroll to Selected Action

	/// <summary>
	/// Preview
	/// </summary>
	void OnPostStopPreview();

	/// <summary>
	/// Tool Function
	/// </summary>
	UFUNCTION(BlueprintCallable) bool IsControllPressing(); //Ctrl
	UFUNCTION(BlueprintCallable) void UndoClip();			//Ctrl + Z
	UFUNCTION(BlueprintCallable) void DuplicateAction();	//Ctrl + D
	UFUNCTION(BlueprintCallable) void CopyAction();			//Ctrl + C
	UFUNCTION(BlueprintCallable) void PasteAction();		//Ctrl + V
	//UFUNCTION(BlueprintCallable) void ToggleSearchAction();	//Ctrl + F
	UFUNCTION(BlueprintCallable) void QuickSave();			//Ctrl + S
	UFUNCTION(BlueprintCallable) void DeleteSelectAction(); //Delete
	UFUNCTION(BlueprintCallable) void SetControllPressed(bool _bControllPressed);
	UFUNCTION(BlueprintCallable) void MoveToNeighbor(FKey _Key);	//WASD

	UFUNCTION()
	void OnClickSaveButton();
	UFUNCTION()
	void OnClickLoadButton();
	UFUNCTION()
	void OnClickAddActionConfirm();
	UFUNCTION()
	void OnClickAddActionCancel();
	UFUNCTION()
	void OnClickChangeActionConfirm();
	UFUNCTION()
	void OnClickChangeActionCancel();
	UFUNCTION()
	void OnClickSearchActionPrev();
	UFUNCTION()
	void OnClickSearchActionNext();
	UFUNCTION()
	void OnClickPlayPreviewButton();
	UFUNCTION()
	void OnClickStopPreviewButton();

	UFUNCTION()
	void OnScrollSequenceLayer(float _CurrentOffset);
	UFUNCTION()
	void OnScrollSequenceActionHorizontal(float _CurrentOffset);
	UFUNCTION()
	void OnScrollSequenceActionVertical(float _CurrentOffset);

	UFUNCTION()
	void OnPropertyChange_AddActionClass(FName PropertyName);
	UFUNCTION()
	void OnPropertyChange_ChangeActionClass(FName PropertyName);
	UFUNCTION()
	void OnPropertyChange_SearchActionClass(FName PropertyName);
	UFUNCTION()
	void OnPropertyChanged_SequenceInspector(FName PropertyName);

	UFUNCTION()
	void OnPostPlayingActionChanged(int32 _ActionIndex);
	UFUNCTION()
	void OnPostDialogueFinish();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DialogueToolWidget", meta = ( DisplayName = "Class", MustImplement = "UsingActionInterface"))
		TSubclassOf<class UDialogueAction> CurrentAddActionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DialogueToolWidget", meta = (DisplayName = "Class", MustImplement = "UsingActionInterface" ))
		TSubclassOf<class UDialogueAction> CurrentSearchActionClass;

	FDialoguePlayer_OnFinish OnDialogueFinish;

private:
	FString LoadFilePath = TEXT("");

	TArray<FDialogueClip> DialogueClipBoard;

	FString NewFileName = TEXT("NewDialogue.json");
	FString CurrentDialogueFileName;

	UPROPERTY()
	FIH_Dialogue CurrentDialogue;

	UPROPERTY()
	class UIH_Widget_DialogueToolAction* CurrentSelectedAction = nullptr;

	bool bSelectActionChanged = false;
	class UDialogueAction* OriginAction = nullptr;	 // Used When Ctrl + Z

	class UDialogueAction* CopiedAction = nullptr;	// Used When Ctrl + C,V
	int32 CurrentAddActionLayerIndex;
	int32 CurrentAddActionIndex;

	TPair<int32, int32> DragPostIndex;				// Used When Dragging
	TPair<int32, int32> DragFormerIndex;			// Used When Dragging

	TArray<TPair<int32, int32>> SearchedActionList;

	bool bCompletePlayPreview = false;
	FGeometry pActionGeometry;

protected:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_Filename_Content;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_Save;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_Load;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_TimeLineProgress;

	UPROPERTY(meta = (BindWidget))
	class UIH_DetailsView* DetailsView_Inspector;

	UPROPERTY(meta = (BindWidget))
	class UImage* Image_IndexLine;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox_SequenceIndex;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox_SequenceLayer;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox_SequenceAction_Horizontal;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox_SequenceAction_Vertical;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* Canvas_AddAction;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* Canvas_ChangeAction;

	UPROPERTY(meta = (BindWidget))
	class UIH_SinglePropertyView* PropertyView_AddActionClass;

	UPROPERTY(meta = (BindWidget))
	class UIH_SinglePropertyView* PropertyView_ChangeActionClass;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_AddAction_Confirm;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_AddAction_Cancel;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_ChangeAction_Confirm;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_ChangeAction_Cancel;

	UPROPERTY(meta = (BindWidget))
	class UImage* Image_TimelineBlock;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox_Timeline_Hittest;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox_Timeline;

	UPROPERTY(meta = (BindWidget))
	class UHorizontalBox* HorizontalBox_Timeline_HitTest_Dummy;

	UPROPERTY(meta = (BindWidget))
	class UHorizontalBox* HorizontalBox_Timeline_Dummy;

	UPROPERTY(meta = (BindWidget))
	class USlider* Slider_TimeLine_HitTest;

	UPROPERTY(meta = (BindWidget))
	class USlider* Slider_TimeLine;

	UPROPERTY(meta = (BindWidget))
	class UIH_Widget_DialogueToolAction* GrabView_Action;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Mouse_Index;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_PlayPreview;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_StopPreview;

	bool bControllPressed = false;
};