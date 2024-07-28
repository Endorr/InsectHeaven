#include "IH_Widget_DialogueToolAction.h"

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Library/Dialogue/DialogueEditToolWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/WidgetSwitcher.h"
#include "Dialogue/DialogueAction.h"
#include "Dialogue/Action/DialogueAction_Empty.h"

void UIH_Widget_DialogueToolAction::NativeConstruct()
{
	Super::NativeConstruct();
	
	if(CPP_Btn_Click)
	{
		CPP_Btn_Click->OnPressed.AddUniqueDynamic(this, &UIH_Widget_DialogueToolAction::OnPressSelectButton);
		//CPP_Btn_Click->OnReleased.AddUniqueDynamic(this, &UIH_Widget_DialogueToolAction::OnReleaseAction);
	}

	if(CPP_Btn_Option)
	{
		CPP_Btn_Option->OnClicked.AddUniqueDynamic(this, &UIH_Widget_DialogueToolAction::OnClickOption);
	}

	if(CPP_Btn_Change)
	{
		CPP_Btn_Change->OnClicked.AddUniqueDynamic(this, &UIH_Widget_DialogueToolAction::OnClickChangeAction);
	}
}

void UIH_Widget_DialogueToolAction::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UIH_Widget_DialogueToolAction::NativeDestruct()
{
	if(CPP_Btn_Click)
	{
		CPP_Btn_Click->OnClicked.RemoveAll(this);
	}
	
	Super::NativeDestruct();
}

void UIH_Widget_DialogueToolAction::SetParentWidget(UDialogueToolWidget* _ToolWidget)
{
	ToolWidget = _ToolWidget;
}

void UIH_Widget_DialogueToolAction::SetLayerInfo(int32 _LayerIndex)
{
	CPP_Switcher_Content->SetActiveWidgetIndex(1);
	
	ActionInfo = nullptr;
	LayerIndex = _LayerIndex;
	ActionIndex = INDEX_NONE;

	FString LayerString = FString::Printf(TEXT("Layer %d"), _LayerIndex + 1);

	CPP_Txt_Name->SetText(FText::FromString(LayerString));
	CPP_Txt_Desc->SetVisibility(ESlateVisibility::Collapsed);
	CPP_Btn_Option->SetVisibility(ESlateVisibility::Collapsed);
}

void UIH_Widget_DialogueToolAction::SetActionInfo(UDialogueAction* _Action, int32 _LayerIndex, int32 _ActionIndex)
{
	if(nullptr != _Action)
		CPP_Switcher_Content->SetActiveWidgetIndex(1);
	else
		CPP_Switcher_Content->SetActiveWidgetIndex(0);

	ActionInfo = _Action;
	LayerIndex = _LayerIndex;
	ActionIndex = _ActionIndex;

	if(nullptr != _Action)
	{
		CPP_Txt_Name->SetText(_Action->Get_Name());
		CPP_Txt_Desc->SetText(_Action->Get_Description());
	}
}

void UIH_Widget_DialogueToolAction::ChangePos(int32 _NewLayerIndex)
{
	LayerIndex = _NewLayerIndex;
}

void UIH_Widget_DialogueToolAction::ChangePos(int32 _NewLayerIndex, int32 _NewActionIndex)
{
	LayerIndex = _NewLayerIndex;
	ActionIndex = _NewActionIndex;
}

void UIH_Widget_DialogueToolAction::GetPos(int32& _LayerIndex, int32& _ActionIndex)
{
	_LayerIndex = LayerIndex;
	_ActionIndex = ActionIndex;
}

void UIH_Widget_DialogueToolAction::SetSelect(bool _IsSelect)
{
	if(CPP_Img_Select)
	{
		CPP_Img_Select->SetVisibility(_IsSelect ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
	}
}

void UIH_Widget_DialogueToolAction::SetShadow(UDialogueAction* _Action, int32 _LayerIndex, int32 _ActionIndex)
{
	CPP_Switcher_Content->SetActiveWidgetIndex(1);
	
	ActionInfo = _Action;
	LayerIndex = _LayerIndex;
	ActionIndex = _ActionIndex;

	if(nullptr != _Action)
	{
		CPP_Txt_Name->SetText(_Action->Get_Name());
		CPP_Txt_Desc->SetText(_Action->Get_Description());
	}
}

UButton* UIH_Widget_DialogueToolAction::GetSelectButton()
{
	return CPP_Btn_Click;
}

void UIH_Widget_DialogueToolAction::OnPressSelectButton()
{
	ToolWidget->DeselectAction();
	ToolWidget->SelectAction(this);
	if(selectClick.IsBound())
		selectClick.Broadcast(CPP_Btn_Click);
}

FSelectDelegate& UIH_Widget_DialogueToolAction::GetSelectDelgate()
{
	return selectClick;
}

void UIH_Widget_DialogueToolAction::OnClickActon()
{
	if(nullptr == ToolWidget)
		return;
	
	if(0 == CPP_Switcher_Content->GetActiveWidgetIndex())
	{
		if(INDEX_NONE == ActionIndex && INDEX_NONE == LayerIndex)
		{
			ToolWidget->AddLayer();
		}
		else if(INDEX_NONE == ActionIndex)
		{
			ToolWidget->AddAction(LayerIndex,UDialogueAction_Empty::StaticClass());
		}
		else
		{
		}
	}
	else
	{
		ToolWidget->SelectAction(this);
		ToolWidget->GrabAction(this->GetSelectButton());
	}
}

void UIH_Widget_DialogueToolAction::OnReleaseAction()
{
	if(nullptr == ToolWidget)
		return;
	
	if(0 != CPP_Switcher_Content->GetActiveWidgetIndex())
	{
		ToolWidget->GrabOffAction();
	}
}

void UIH_Widget_DialogueToolAction::OnClickOption()
{
	if(ESlateVisibility::Collapsed == CPP_Canvas_Option->GetVisibility())
	{
		CPP_Canvas_Option->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
	else
	{
		CPP_Canvas_Option->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UIH_Widget_DialogueToolAction::OnClickChangeAction()
{
	if(nullptr != ToolWidget)
	{
		ToolWidget->OpenChangeActionAt(LayerIndex,ActionIndex);
	}
}
