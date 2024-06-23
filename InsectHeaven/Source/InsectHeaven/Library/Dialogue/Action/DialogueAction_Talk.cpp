#include "DialogueAction_Talk.h"

#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"

void UDialogueAction_Talk::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);
	
	_JsonObject->SetStringField(TEXT("ActorName"), ActorName.ToString());

	_JsonObject->SetStringField(TEXT("TalkString"), TalkString);
}

void UDialogueAction_Talk::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	TalkString = FString(_JsonObject->GetStringField(TEXT("TalkString")));

	ActorName = FName(_JsonObject->GetStringField(TEXT("ActorName")));
}

FText UDialogueAction_Talk::Get_Name()
{
	return FText::FromString("Talk");
}

FText UDialogueAction_Talk::Get_Description()
{
	return FText::FromString("Temp Talk");
}

void UDialogueAction_Talk::Execute()
{
	Super::Execute();

	if(nullptr == pOwnerPlayer)
		return;

	UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
	pWidget->SetText(TalkString, true);
}

void UDialogueAction_Talk::OnInput()
{
	if(eActionState == EActionStateType::InProgress)
	{
		eActionState = EActionStateType::WaitInput;
	}
	else if(eActionState == EActionStateType::WaitInput)
	{
		eActionState = EActionStateType::Finished;
		Finish();
	}
}
