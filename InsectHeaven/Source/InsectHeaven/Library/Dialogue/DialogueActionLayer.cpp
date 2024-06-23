#include "DialogueActionLayer.h"

#include "DialogueAction.h"
#include "Action/DialogueAction_Empty.h"

void UDialogueActionLayer::SaveToJson(TSharedRef<FJsonObject> _JsonObject)
{
	TArray<TSharedPtr<FJsonValue>> arrValues;
	for(int32 Index = 0; Index < Actions.Num(); ++Index)
	{
		TSharedRef<FJsonObject> ActionJson = MakeShareable(new FJsonObject());
		TSharedPtr<FJsonValueObject> ActionValue = MakeShareable(new FJsonValueObject(ActionJson));

		ActionJson->SetStringField(TEXT("ClassType"), Actions[Index]->GetClass()->GetName());
		Actions[Index]->SaveToJson(ActionValue->AsObject());

		arrValues.Add(ActionValue);
	}

	_JsonObject->SetArrayField(TEXT("Actions"), arrValues);
}

void UDialogueActionLayer::LoadToJson(const TSharedPtr<FJsonValue>& _JsonValue)
{
	TSharedPtr<FJsonObject> JsonObject = _JsonValue->AsObject();
	const TArray<TSharedPtr<FJsonValue>> arrActions = JsonObject->GetArrayField(TEXT("Actions"));

	for(int32 Index = 0; Index < arrActions.Num(); ++Index)
	{
		FString strClassType = arrActions[Index]->AsObject()->GetStringField(TEXT("ClassType"));
		UObject* ClassPackage = ANY_PACKAGE;
		if(UClass* Result = FindObject<UClass>(ClassPackage, *strClassType))
		{
			UDialogueAction* pAction = AddAction(Result);
			pAction->LoadFromJson(arrActions[Index]->AsObject());
		}
	}
}

void UDialogueActionLayer::Play()
{
	nCurrentActionIndex = 0;
	bPlaying = true;
}

void UDialogueActionLayer::SetPaused(bool _bPause)
{
	if(Actions.IsValidIndex(nCurrentActionIndex))
	{
		Actions[nCurrentActionIndex]->SetPaused(_bPause);
	}
}

void UDialogueActionLayer::SetNextAction()
{
	if(Actions[nCurrentActionIndex]->DelayFinishExist())
	{
		Actions[nCurrentActionIndex]->DelayFinish();
	}

	++nCurrentActionIndex;
	if(false == Actions.IsValidIndex(nCurrentActionIndex))
	{
		bPlaying = false;
	}
	else
	{
		OnLayerPlayingActionChanged.Broadcast(nCurrentActionIndex);
	}
}

void UDialogueActionLayer::SetActionByIndex(int32 _ActionIndex)
{
	int32 FormerActionIndex = nCurrentActionIndex;
	nCurrentActionIndex = _ActionIndex;
	if(false == Actions.IsValidIndex(nCurrentActionIndex))
	{
		bPlaying = false;
	}
	else
	{
		if(_ActionIndex <= FormerActionIndex)
		{
			for(int32 Index = FormerActionIndex; Index >= _ActionIndex; --Index)
			{
				if(Index < Actions.Num())
				{
					Actions[Index]->Reset();
				}
			}
		}

		for(int32 Index = 0; Index < _ActionIndex; ++Index)
		{
			if(Index < nCurrentActionIndex)
			{
				Actions[Index]->SetFinish();
			}
		}

		bPlaying = true;

		OnLayerPlayingActionChanged.Broadcast(nCurrentActionIndex);
	}
}

void UDialogueActionLayer::Tick(float _fDelta)
{
	if(bPlaying && Actions.IsValidIndex(nCurrentActionIndex))
	{
		Actions[nCurrentActionIndex]->Tick(_fDelta);
	}
} 

void UDialogueActionLayer::SetFinish()
{
	for(int32 Index = 0; Index < Actions.Num(); ++Index)
	{
		Actions[Index]->SetFinish();
	}
}

UDialogueAction* UDialogueActionLayer::AddAction(TSubclassOf<UDialogueAction> _ActionType)
{
	UDialogueAction* pAction = NewObject<UDialogueAction>(this, _ActionType);
	Actions.Add(pAction);
	return pAction;
}

UDialogueAction* UDialogueActionLayer::AddAction(UDialogueAction* _TargetAction)
{
	Actions.Add(_TargetAction);
	return _TargetAction;
}

void UDialogueActionLayer::RemoveAction(int32 _Index)
{
	if(Actions.Num() <= _Index)
		return;

	Actions.RemoveAt(_Index);
}

UDialogueAction* UDialogueActionLayer::SetAction(int32 _Index, TSubclassOf<UDialogueAction> _ActionType)
{
	if(Actions.Num() < _Index)
		return nullptr;

	Actions[_Index] = NewObject<UDialogueAction>(this, _ActionType);

	return Actions[_Index];
}

void UDialogueActionLayer::SetEmptyAction(int32 _Index)
{
	SetAction(_Index, UDialogueAction_Empty::StaticClass());
}

void UDialogueActionLayer::SwapAction(int32 _First, int32 _Second)
{
	if(_First >= _Second)
		return;

	if(Actions.Num() <= _First || Actions.Num() <= _Second)
	{
		return;
	}

	Actions.Swap(_First, _Second);
}

int32 UDialogueActionLayer::GetActionCount()
{
	return Actions.Num();
}

EActionStateType UDialogueActionLayer::GetCurrentState()
{
	if(Actions.IsValidIndex(nCurrentActionIndex))
	{
		return Actions[nCurrentActionIndex]->GetCurrentState();
	}

	return EActionStateType::None;
}

bool UDialogueActionLayer::IsPlaying()
{
	return bPlaying;
}

void UDialogueActionLayer::OnInput()
{
	if(Actions.IsValidIndex(nCurrentActionIndex))
	{
		Actions[nCurrentActionIndex]->OnInput();
	}
}

TArray<UDialogueAction*>& UDialogueActionLayer::GetActions()
{
	return Actions;
}
