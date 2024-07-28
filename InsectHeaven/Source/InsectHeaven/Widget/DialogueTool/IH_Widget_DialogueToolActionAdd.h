#pragma once

#include "CoreMinimal.h"
#include "IH_Widget.h"
#include "IH_Widget_DialogueToolActionAdd.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UIH_Widget_DialogueToolActionAdd : public UIH_Widget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

	void SetToolWidget(class UDialogueToolWidget* _ToolWidget);
	void SetInfo(int32 _LayerIndex);

	UFUNCTION()
	void OnClickAddEmptyButton();

	UFUNCTION()
	void OnClickAddSelectButton();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPullAnim();
	UFUNCTION(BlueprintImplementableEvent)
	void PlayPushAnim();

private:

	int32 LayerIndex;

	class UDialogueToolWidget* ToolWidget;

	class UButton* Button_Add_Empty;
	class UButton* Button_Add_Select;
};