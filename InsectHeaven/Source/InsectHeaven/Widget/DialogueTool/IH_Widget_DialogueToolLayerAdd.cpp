#include "IH_Widget_DialogueToolLayerAdd.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Dialogue/DialogueEditToolWidget.h"

void UIH_Widget_DialogueToolLayerAdd::NativeConstruct()
{
	Super::NativeConstruct();

	Button_Add = Cast<UButton>(GetWidgetFromName(TEXT("Button_Add")));

	Button_Add->OnClicked.AddDynamic(this, &UIH_Widget_DialogueToolLayerAdd::OnClickAddButton);
}

void UIH_Widget_DialogueToolLayerAdd::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UIH_Widget_DialogueToolLayerAdd::NativeDestruct()
{
	Super::NativeDestruct();
}


void UIH_Widget_DialogueToolLayerAdd::SetToolWidget(UDialogueToolWidget* _ToolWidget)
{
	ToolWidget = _ToolWidget;
}


void UIH_Widget_DialogueToolLayerAdd::OnClickAddButton()
{
	ToolWidget->AddLayer();
}
