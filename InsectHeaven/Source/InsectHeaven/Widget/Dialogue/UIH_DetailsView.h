#pragma once

#include "Components/DetailsView.h"

#include "UIH_DetailsView.generated.h"

UCLASS()
class UIH_DetailsView : public UDetailsView
{
	GENERATED_BODY()

public:

	virtual void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged) override;


	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPVOnPropertyValueChanged, FName, PropertyName);

	FPVOnPropertyValueChanged OnPrpertyValueChanged_PV;
};
