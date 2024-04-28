#pragma once

#include "CoreMinimal.h"
#include "IH_Widget.h"
#include "IH_Widget_MainLobby.generated.h"

UCLASS()
class UIH_Widget_MainLobby : public UIH_Widget
{
	GENERATED_BODY()
	
public:
	static FName GetWidgetName() { return FName("MainLobby"); }
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

protected:
	UPROPERTY(meta = (BindWidget))
	class UIH_Widget_DialogueScene* CPP_Widget_DialogueScene = nullptr;
};
