#pragma once

#include "CoreMinimal.h"
#include "IH_SceneBase.h"
#include "IH_SceneLobby.generated.h"

UCLASS()
class UIH_SceneLobby : public UIH_SceneBase
{
	GENERATED_BODY()
	
protected:
	virtual void Begin() override;
	virtual void Tick(float _fDeltaTime) override;
	virtual void Exit() override;

	void BeginTick();

private:
	bool IsBeginTick = false;
};
