#include "IH_StateMachine.h"

#include "IH_StateBase.h"

void UIH_StateMachine::Create()
{
}

void UIH_StateMachine::Destroy()
{
	UnregistStates();
}

void UIH_StateMachine::Tick(float _fDeltaTime)
{
	if(INDEX_NONE != CurrentStateID)
	{
		UIH_StateBase* State = GetStatePtr(CurrentStateID);

		if(nullptr != State)
			State->OnTickState();
	}

	if(INDEX_NONE != ChangeStateID)
	{
		SetState_Internal(ChangeStateID);
		ChangeStateID = -1;
	}
}

void UIH_StateMachine::RegistState(int8 _nIndex, const FName& _Name, TSubclassOf<UIH_StateBase> _StateType, UObject* _Outer)
{
	if(nullptr != mapState.Find(_nIndex))
		return;

	UObject* pCustomOuter = (_Outer != nullptr) ? _Outer : this;
	UIH_StateBase* NewState = NewObject<UIH_StateBase>(pCustomOuter, _StateType);

	NewState->AddToRoot();
	NewState->Initialize(_nIndex, _Name);
	mapState.Add(_nIndex, NewState);
}

void UIH_StateMachine::UnregistStates()
{
	for(auto& elem : mapState)
	{
		if(nullptr != elem.Value)
		{
			elem.Value->Finalize();
			elem.Value->RemoveFromRoot();
			elem.Value = nullptr;
		}
	}

	mapState.Empty();
	CurrentStateID = INDEX_NONE;
	ChangeStateID = INDEX_NONE;
}

void UIH_StateMachine::SetState(int8 _Index, bool _bInstant)
{
	if(_bInstant)
	{
		SetState_Internal(_Index);
	}
	else
	{
		ChangeStateID = _Index;
	}
}

void UIH_StateMachine::SetState(const FName& _Name, bool _bInstant)
{
	UIH_StateBase* TargetState = GetStatePtr(_Name);
	if(nullptr == TargetState)
		return;

	SetState(TargetState->GetStateIndex(), _bInstant);
}

int8 UIH_StateMachine::GetStateIndex(const FName& _Name) const
{
	UIH_StateBase* TargetState = GetStatePtr(_Name);
	if(nullptr == TargetState)
		return INDEX_NONE;

	return TargetState->GetStateIndex();
}

FName UIH_StateMachine::GetStateName(int8 _Index) const
{
	UIH_StateBase* TargetState = GetStatePtr(_Index);
	if(nullptr == TargetState)
		return "";

	return TargetState->GetStateName();
}

FName UIH_StateMachine::GetPrevStateName() const
{
	UIH_StateBase* TargetState = GetStatePtr(PrevStateID);
	if(nullptr == TargetState)
		return "";

	return TargetState->GetStateName();
}

FName UIH_StateMachine::GetCurrentStateName() const
{
	UIH_StateBase* TargetState = GetStatePtr(CurrentStateID);
	if(nullptr == TargetState)
		return "";

	return TargetState->GetStateName();
}

UIH_StateBase* UIH_StateMachine::GetStatePtr(int32 _Index) const
{
	if(true == mapState.Contains(_Index))
		return mapState[_Index];

	return nullptr;
}

UIH_StateBase* UIH_StateMachine::GetStatePtr(FName _Name) const
{
	for(auto& elem : mapState)
	{
		if(true == elem.Value->GetStateName().IsEqual(_Name))
			return elem.Value;
	}

	return nullptr;
}

UIH_StateBase* UIH_StateMachine::GetCurrentStatePtr() const
{
	return GetStatePtr(GetCurrentStateID());
}

UIH_StateBase* UIH_StateMachine::GetPrevStatePtr() const
{
	return GetStatePtr(GetPreviousStateID());
}

void UIH_StateMachine::SetState_Internal(int32 _Index)
{
	//Exit Process
	{
		PrevStateID = CurrentStateID;

		UIH_StateBase* CurrentState = GetStatePtr(CurrentStateID);
		if(nullptr != CurrentState)
		{
			CurrentState->OnExitState();
		}
	}

	//Setting Process
	{
		CurrentStateID = _Index;

		UIH_StateBase* NextState = GetStatePtr(_Index);
		if(nullptr != NextState)
		{
			NextState->OnBeginState();
		}
	}
}

UIH_StateMachine::UIH_StateMachine()
{
}
