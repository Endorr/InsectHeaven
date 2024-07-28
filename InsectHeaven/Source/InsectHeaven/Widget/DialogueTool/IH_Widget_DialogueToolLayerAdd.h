#pragma once

#include "CoreMinimal.h"
#include "IH_Widget.h"
#include "IH_Widget_DialogueToolLayerAdd.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UIH_Widget_DialogueToolLayerAdd : public UIH_Widget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

	void SetToolWidget(class UDialogueToolWidget* _ToolWidget);

	UFUNCTION()
	void OnClickAddButton();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPushAnim();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPullAnim();

private:

	int32 Index;
	class UDialogueToolWidget* ToolWidget;

	class UButton* Button_Add;

};
