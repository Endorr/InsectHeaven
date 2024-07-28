#include "IH_SinglePropertyView.h"

UIH_SinglePropertyView::UIH_SinglePropertyView()
{
	OnPropertyChanged.AddDynamic(this, &UIH_SinglePropertyView::PostPropertyChanged_PV);
}

void UIH_SinglePropertyView::PostPropertyChanged_PV(FName _PropertyName)
{
	OnPropertyChanged_PV.Broadcast(_PropertyName);
}

