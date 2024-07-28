#pragma once
#include "IH_Widget.h"
#include "Dialogue/DialogueEditToolWidget.h"
#include "IH_Widget_DialogueToolAction.generated.h"

class UDialogueAction;
class UDialogueEditToolWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectDelegate, class UButton*, _Button);

UCLASS()
class UIH_Widget_DialogueToolAction : public UIH_Widget
{
	GENERATED_BODY()
	
public:
	
	static FString GetWidgetPath() { return "/Game/Widget/Dialogue/DialogueToolAction.DialogueToolAction_C";}
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

	void SetParentWidget(UDialogueToolWidget* _ToolWidget);
	void SetLayerInfo(int32 _LayerIndex);
	void SetActionInfo(UDialogueAction* _Action, int32 _LayerIndex, int32 _ActionIndex);

	void ChangePos(int32 _NewLayerIndex);
	void ChangePos(int32 _NewLayerIndex, int32 _NewActionIndex);

	void GetPos(int32& _LayerIndex, int32& _ActionIndex);
	UDialogueAction* GetActionInfo() const { return ActionInfo; }

	void SetSelect(bool _IsSelect);
	void SetShadow(UDialogueAction* _Action, int32 _LayerIndex, int32 _ActionIndex);
	class UButton* GetSelectButton();

	UFUNCTION()
	void OnPressSelectButton();
	FSelectDelegate& GetSelectDelgate();

protected:
	UFUNCTION()
	void OnClickActon();

	UFUNCTION()
	void OnReleaseAction();
	
	UFUNCTION()
	void OnClickOption();

	UFUNCTION()
	void OnClickChangeAction();

protected:
	UPROPERTY(meta = (BindWidget))
	class UWidgetSwitcher* CPP_Switcher_Content = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_Name = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_Desc = nullptr;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Click = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Option = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Change = nullptr;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_PrevAdd = nullptr;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_NextAdd = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* CPP_Canvas_Option = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Select = nullptr;
	
private:
	UPROPERTY()
	class UDialogueToolWidget* ToolWidget = nullptr;

	UPROPERTY()
	class UDialogueAction* ActionInfo = nullptr;

	int32 LayerIndex = INDEX_NONE;

	int32 ActionIndex = INDEX_NONE;

	UPROPERTY()
	FSelectDelegate selectClick;
};
