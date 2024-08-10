#pragma once

#include "IH_Widget.h"
#include "IH_Widget_DialogueScene.generated.h"

DECLARE_DELEGATE(FDialogueWidgetButtonEvent);

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
	void SetCommitDelegate(FDialogueWidgetButtonEvent _Delegate);

	void SetBackground(int32 _ImageID, bool _IsSwitching);

	bool IsShowTalkPanel();
	void HideTalkPanel();

	UFUNCTION()
	void OnCommit();

protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Background = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_BackgroundSwitch = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_Script = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* CPP_Canvas_Script = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Commit = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Left = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Right = nullptr;

private:
	FString LeftText = "";

	FDialogueWidgetButtonEvent OnClickedDelegate;
};
