#pragma once

#include "IH_Widget.h"
#include "IH_Widget_DialogueScene.generated.h"

UCLASS()
class UIH_Widget_DialogueScene : public UIH_Widget
{
	GENERATED_BODY()

public:
	static FName GetWidgetName() { return FName(TEXT("DialogueScene")); }
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void Tick(float _DeltaTime) override;

	void SetCharacter(int32 CharacterID, bool _IsLeft);
	void SetText(FString _Text, bool _bImmediate);

protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Background = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_BackgroundSwitch = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_Script = nullptr;
	
	UPROPERTY(meta = (BindWidget))
	class UIH_Widget_Portrait* CPP_Widget_LeftCh = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UIH_Widget_Portrait* CPP_Widget_RightCh = nullptr;

private:
	FString LeftText = "";
};
