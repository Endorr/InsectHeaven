#include "IH_StateBase.h"

#include "IH_SingletonManager.h"
#include "IH_StateMachine.h"

void UIH_StateBase::Initialize(uint8 _Index, const FName& _Name)
{
	StateIndex = _Index;
	StateName = _Name;
}

void UIH_StateBase::Finalize()
{
}

void UIH_StateBase::OnBeginState()
{
	Begin();
}

void UIH_StateBase::OnTickState()
{
	Tick(gMngKernel.GetDeltaTime());
}

void UIH_StateBase::OnExitState()
{
	Exit();
}

UIH_StateMachine* UIH_StateBase::GetStateMachine()
{
	return Cast<UIH_StateMachine>(GetOuter());
}
