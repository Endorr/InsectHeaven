#include "IH_Widget_DialogueToolActionAdd.h"

#include "IH_Widget_DialogueToolAction.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Dialogue/Action/DialogueAction_Empty.h"
#include "Dialogue/DialogueEditToolWidget.h"

void UIH_Widget_DialogueToolActionAdd::NativeConstruct()
{
	Super::NativeConstruct();

	Button_Add_Empty = Cast<UButton>(GetWidgetFromName(TEXT("Button_Add_Empty")));
	Button_Add_Select = Cast<UButton>(GetWidgetFromName(TEXT("Button_Add_Select")));


	Button_Add_Empty->OnClicked.AddUniqueDynamic(this, &UIH_Widget_DialogueToolActionAdd::OnClickAddEmptyButton);
	Button_Add_Select->OnClicked.AddUniqueDynamic(this, &UIH_Widget_DialogueToolActionAdd::OnClickAddSelectButton);
}

void UIH_Widget_DialogueToolActionAdd::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UIH_Widget_DialogueToolActionAdd::NativeDestruct()
{
	Super::NativeDestruct();
}


void UIH_Widget_DialogueToolActionAdd::SetToolWidget(UDialogueToolWidget* _ToolWidget)
{
	ToolWidget = _ToolWidget;
}


void UIH_Widget_DialogueToolActionAdd::SetInfo(int32 _LayerIndex )
{
	LayerIndex = _LayerIndex;
}

void UIH_Widget_DialogueToolActionAdd::OnClickAddEmptyButton()
{
	ToolWidget->AddAction(LayerIndex, UDialogueAction_Empty::StaticClass());
}

void UIH_Widget_DialogueToolActionAdd::OnClickAddSelectButton()
{
	ToolWidget->OpenAddAction(LayerIndex);
}

