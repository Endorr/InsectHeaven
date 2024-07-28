#include "UIH_DetailsView.h"

void UIH_DetailsView::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged)
{
	Super::NotifyPostChange(PropertyChangedEvent, PropertyThatChanged);

	FName PropertyName = PropertyThatChanged ? PropertyThatChanged->GetFName() : NAME_None;
	OnPropertyChangedBroadcast(PropertyName);

	OnPrpertyValueChanged_PV.Broadcast(PropertyName);
}