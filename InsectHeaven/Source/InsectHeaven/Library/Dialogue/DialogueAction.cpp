#include "DialogueAction.h"

#include "DialogueActionLayer.h"
#include "IH_DialoguePlayer.h"

UDialogueAction::UDialogueAction(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UDialogueAction::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	_JsonObject->SetBoolField(TEXT("bWaitInput"), bWaitInput);
}

void UDialogueAction::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	bWaitInput = _JsonObject->GetBoolField(TEXT("bWaitInput"));
}

void UDialogueAction::SetPaused(bool _bPause)
{
	IsPaused = _bPause;
}

void UDialogueAction::SetFinish()
{
}

void UDialogueAction::Reset()
{
	eActionState = EActionStateType::None;
}

FText UDialogueAction::Get_Description()
{
	FString strDescScript = "";
	return FText::FromString(strDescScript);
}

void UDialogueAction::Tick(float _fDeltaTime)
{
	if(true == IsPaused)
		return;

	switch (eActionState)
	{
		case EActionStateType::None:
		{
			Execute();
			eActionState = EActionStateType::InProgress;
		}
		break;
		case EActionStateType::InProgress:
		{
			if(false == Progress(_fDeltaTime))
			{
				eActionState = bWaitInput ? EActionStateType::WaitInput : EActionStateType::Finished;

				if(EActionStateType::Finished == eActionState && false == DelayFinishExist())
				{
					Finish();
				}
			}
		}
		break;
		case EActionStateType::WaitInput:
		{
			
		}
		break;
		case EActionStateType::Finished:
		{
			
		}
		break;
	}
}

void UDialogueAction::Execute()
{
	UDialogueActionLayer* pLayer = CastChecked<UDialogueActionLayer>(GetOuter());
	pOwnerPlayer = CastChecked<AIH_DialoguePlayer>(pLayer->GetOuter());
}

bool UDialogueAction::Progress(float _fDelta)
{
	return false;
}

void UDialogueAction::Finish()
{
}

void UDialogueAction::OnInput()
{
	if (eActionState == EActionStateType::WaitInput)
	{
		eActionState = EActionStateType::Finished;
		Finish();
	}
}

void UDialogueAction::DelayFinish()
{
	Finish();
}


