#pragma once

#include "CoreMinimal.h"
#include "IH_StateBase.generated.h"

UCLASS()
class UIH_StateBase : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(uint8 _Index, const FName& _Name);
	virtual void Finalize();

private:
	UPROPERTY()
	int32 StateIndex = INDEX_NONE;
	UPROPERTY()
	FName StateName;

public:
	UFUNCTION() void OnBeginState();
	UFUNCTION() void OnTickState();
	UFUNCTION() void OnExitState();

protected:
	virtual void Begin() {}
	virtual void Tick(float _fDeltaTime) {}
	virtual void Exit() {}

public:
	FORCEINLINE uint8 GetStateIndex() const
	{
		return StateIndex;
	}

	FORCEINLINE FName GetStateName() const
	{
		return StateName;
	}

	class UIH_StateMachine* GetStateMachine();
};
