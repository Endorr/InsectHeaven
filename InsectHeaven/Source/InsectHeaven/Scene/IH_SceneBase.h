#pragma once

#include "CoreMinimal.h"
#include "IH_StateBase.h"
#include "IH_SceneBase.generated.h"

DECLARE_DELEGATE_RetVal_OneParam(bool, FIH_LoadingProcessFunc, float);

UCLASS()
class UIH_SceneBase : public UIH_StateBase
{
	GENERATED_BODY()
	
protected:
	virtual void Begin() override;
	virtual void Tick(float _fDeltaTime) override;
	virtual void Exit() override;

public:
	void TickLoading(float _fDeltaTime);
	bool IsCompleteLoading();

protected:
	virtual bool LoadingPreProcess(float _fDeltaTime);
	virtual bool LoadingProcess(float _fDeltaTime);
	virtual bool LoadingPostProcess(float _fDeltaTime);

private:
	TArray<FIH_LoadingProcessFunc> LoadingProcessFuncs;
};
