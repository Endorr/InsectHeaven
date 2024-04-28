#pragma once

#include "CoreMinimal.h"
#include "IH_StateMachine.generated.h"

UCLASS()
class UIH_StateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	void Create();
	void Destroy();
	void Tick(float _fDeltaTime);

	void RegistState(int8 _nIndex, const FName& _Name, TSubclassOf<class UIH_StateBase> _StateType, UObject* _Outer = nullptr);
	void UnregistStates();

	void SetState(int8 _Index, bool _bInstant = true);
	void SetState(const FName& _Name, bool _bInstant = false);

	int8 GetStateIndex(const FName& _Name) const;
	FName GetStateName(int8 _Index) const;

	FORCEINLINE int8 GetPreviousStateID() const {return PrevStateID;}
	FORCEINLINE int8 GetCurrentStateID() const {return CurrentStateID;}
	FORCEINLINE int8 GetChangeStateID() const {return ChangeStateID;}

	FName GetPrevStateName() const;
	FName GetCurrentStateName() const;

	UIH_StateBase* GetStatePtr(int32 _Index) const;
	UIH_StateBase* GetStatePtr(FName _Name) const;
	UIH_StateBase* GetCurrentStatePtr() const;
	UIH_StateBase* GetPrevStatePtr() const;

private:
	void SetState_Internal(int32 _Index);

private:
	int8 PrevStateID = INDEX_NONE;
	int8 CurrentStateID = INDEX_NONE;
	int8 ChangeStateID = INDEX_NONE;
	UPROPERTY()
	TMap<int8, UIH_StateBase*> mapState;

public:
	UIH_StateMachine();
};
