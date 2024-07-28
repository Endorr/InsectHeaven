#pragma once
#include "IH_Widget.h"
#include "IH_Widget_DialogueToolLayer.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UIH_Widget_DialogueToolLayer : public UIH_Widget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

	void SetToolWidget(class UDialogueToolWidget* _ToolWidget);
	
	void SetInfo(int32 _Index);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayAppearAnim();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPushAnim();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPullAnim();

	UFUNCTION()
	void OnClickContextMenu();

	UFUNCTION()
	void OnClickDelete();

	UFUNCTION()
	void OnClickAddToUp();

	UFUNCTION()
	void OnClickAddToDown();

private:

	int32 Index;
	class UDialogueToolWidget* ToolWidget;

	class UTextBlock* Text_Layer;
	class UButton* Button_ContextMenu;
	class UVerticalBox* VerticalBox_ContextMenu;
	class UButton* Button_Delete;
	class UButton* Button_AddToUp;
	class UButton* Button_AddToDown;

};