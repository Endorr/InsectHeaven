// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogueDefine.h"
#include "EditorUtilityWidget.h"
#include "IDesktopPlatform.h"
#include "DialogueEditToolWidget.generated.h"

class UIH_Widget_DialogueToolAction;

enum DialogueClipState {CreateLayer, DeleteLayer, CreateAction, DeleteAction, MoveAction, ChangeAction, CreateColume, ChangeActionInfo};

USTRUCT(BlueprintType, Blueprintable)
struct FIH_Dialogue
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	TArray<class UDialogueActionLayer*> ActionLayers;

	bool SaveToJson(const FString& _strFilePath);
};

USTRUCT()
struct FDialogueClip
{
	GENERATED_USTRUCT_BODY()

	DialogueClipState eClipState;

	UPROPERTY()
	class UDialogueAction* FormerAction = nullptr;
	TPair<int32, int32> FormerActionPos;

	UPROPERTY()
	class UDialogueAction* NowAction = nullptr;
	TPair<int32, int32> NowActionPos;

	int32 LayerPos;
	int32 LayerActionCnt;
};

UCLASS()
class INSECTHEAVEN_API UDialogueEditToolWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

	void AddNewLayer();
	void AddNewAction(int32 _LayerIndex);
	void AddNewActionAt(int32 _LayerIndex, int32 _ActionIndex, UDialogueAction* _ActionInfo);
	void SelectAction(UIH_Widget_DialogueToolAction* _SelectAction);
	void DeleteAction(int32 _LayerIndex, int32 _ActionIndex);
	void MoveAction(TPair<int32, int32> _FormerPos, TPair<int32, int32> _PostPos);
	void ShowChangeActionCanvas(UIH_Widget_DialogueToolAction* _TargetAction);
	UIH_Widget_DialogueToolAction* FindAction(int32 _LayerIndex, int32 _ActionIndex);
	void GrabAction(UIH_Widget_DialogueToolAction* _Widget);
	void GrabOffAction(UIH_Widget_DialogueToolAction* _Widget);
	UFUNCTION(BlueprintCallable)
	void GrabOffAction();
	void ReleaseShadow();

protected:
	UFUNCTION()
	void OnClick_SaveButton();
	
	UFUNCTION()
    void OnClick_LoadButton();
	
	UFUNCTION()
	void OnClick_ChangeAction();
	
	UFUNCTION()
	void OnClick_CancelAction();

	UFUNCTION()
	void OnClick_Play();

	UFUNCTION()
	void OnClick_Stop();
	
	UFUNCTION(BlueprintCallable)
	void DeleteSelectAction();
	
	FVector2D GetMousePos();
	void CalculateMouseIndex();
	UFUNCTION(BlueprintCallable)
	FVector2D CalculateActionPos(int32 _LayerIndex, int32 _ActionIndex);

	void LoadActiveDialogue();

private:
	void ReadCurrentDialogue();

	bool OpenFiles(const FString& Title, const FString& FileTypes, FString& InOutLastPath, EFileDialogFlags::Type DialogMode, TArray<FString>& OutOpenFilenames);
	bool SaveFile(const FString& _Title, const FString& _FileTypes, FString& _InOutLastPath, const FString& _DefaultFile, FString& _OutFileName);
	void SetFileName(const FString& _FileName);

	FIH_Dialogue LoadDialogue(const FString& _strFileName);
	bool SaveDialogue(FIH_Dialogue& _Dialogue, const FString& _strFileName);

protected:
	UPROPERTY(meta = (BindWidget))
	class UScrollBox* CPP_Scroll_Layer = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* CPP_Scroll_ActionLine = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* CPP_Canvas_ActionChange = nullptr;

	UPROPERTY(meta = (BindWidget))
	class USinglePropertyView* CPP_PropertyView_ActionList = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_ChangeAction = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_CancelAction = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Save = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Load = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Play = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Stop = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UIH_Widget_DialogueToolAction* CPP_Widget_SelectShadow = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_FileName = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Test = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UDetailsView* CPP_DetailView_Action = nullptr;

private:
	FString LoadFilePath = TEXT("");

	FString NewFileName = TEXT("NewDialogue.json");
	FString CurrentDialogueFileName;

	UPROPERTY()
	FIH_Dialogue CurrentDialogue;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DialogueToolWidget", meta = (DisplayName = "Class"))
	TSubclassOf<UDialogueAction> CurrentAddActionClass;

private:
	UIH_Widget_DialogueToolAction* ChangeTargetActionWidget = nullptr;
	
	UIH_Widget_DialogueToolAction* CurrentSelectActionWidget = nullptr;

	TPair<int32, int32> GrabStartPos;
	TPair<int32, int32> GrabEndPos;
};
