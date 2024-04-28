#pragma once

#include "CoreMinimal.h"
#include "IH_Widget.h"
#include "IH_Widget_Portrait.generated.h"

UCLASS()
class UIH_Widget_Portrait : public UIH_Widget
{
	GENERATED_BODY()
	
public:
	void SetCharacterData(int32 _Character2DID);

protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Portrait = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_Name = nullptr;
	
};
