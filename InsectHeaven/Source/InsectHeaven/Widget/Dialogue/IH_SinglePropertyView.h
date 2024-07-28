#pragma once
#include "Components/SinglePropertyView.h"

#include "IH_SinglePropertyView.generated.h"

UCLASS()
class UIH_SinglePropertyView : public USinglePropertyView
{
	GENERATED_BODY()

public:

	UIH_SinglePropertyView();

	UFUNCTION()
	void PostPropertyChanged_PV(FName _PropertyName);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPVOnPropertyValueChanged, FName, Name);

	FPVOnPropertyValueChanged OnPropertyChanged_PV;
};