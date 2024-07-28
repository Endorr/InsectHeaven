#include "IH_Widget_DialogueToolLayer.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Dialogue/DialogueEditToolWidget.h"

void UIH_Widget_DialogueToolLayer::NativeConstruct()
{
	Super::NativeConstruct();

	Text_Layer = Cast<UTextBlock>(GetWidgetFromName(TEXT("Text_Layer")));
	Button_ContextMenu = Cast<UButton>(GetWidgetFromName(TEXT("Button_ContextMenu")));
	VerticalBox_ContextMenu = Cast<UVerticalBox>(GetWidgetFromName(TEXT("VerticalBox_ContextMenu")));
	Button_Delete = Cast<UButton>(GetWidgetFromName(TEXT("Button_Delete")));
	Button_AddToUp = Cast<UButton>(GetWidgetFromName(TEXT("Button_AddToUp")));
	Button_AddToDown = Cast<UButton>(GetWidgetFromName(TEXT("Button_AddToDown")));

	Button_ContextMenu->OnClicked.AddDynamic(this, &UIH_Widget_DialogueToolLayer::OnClickContextMenu);
	Button_Delete->OnClicked.AddDynamic(this, &UIH_Widget_DialogueToolLayer::OnClickDelete);
	Button_AddToUp->OnClicked.AddDynamic(this, &UIH_Widget_DialogueToolLayer::OnClickAddToUp);
	Button_AddToDown->OnClicked.AddDynamic(this, &UIH_Widget_DialogueToolLayer::OnClickAddToDown);

}

void UIH_Widget_DialogueToolLayer::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UIH_Widget_DialogueToolLayer::NativeDestruct()
{
	Super::NativeDestruct();
}


void UIH_Widget_DialogueToolLayer::SetToolWidget(UDialogueToolWidget* _ToolWidget)
{
	ToolWidget = _ToolWidget;
}

void UIH_Widget_DialogueToolLayer::SetInfo(int32 _Index)
{
	Index = _Index;

	FString TextString = TEXT("Layer ") + FString::FromInt(Index + 1);

	Text_Layer->SetText(FText::FromString(TextString));
}

void UIH_Widget_DialogueToolLayer::OnClickContextMenu()
{
	if (VerticalBox_ContextMenu->IsVisible())
	{
		VerticalBox_ContextMenu->SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		VerticalBox_ContextMenu->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
}

void UIH_Widget_DialogueToolLayer::OnClickDelete()
{
	ToolWidget->DeleteLayer(Index);
}

void UIH_Widget_DialogueToolLayer::OnClickAddToUp()
{
	ToolWidget->AddLayerAt(Index);
}

void UIH_Widget_DialogueToolLayer::OnClickAddToDown()
{
	ToolWidget->AddLayer();
}
