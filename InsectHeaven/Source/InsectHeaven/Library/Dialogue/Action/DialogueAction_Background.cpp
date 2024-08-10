#include "DialogueAction_Background.h"

#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"

void UDialogueAction_Background::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);

	_JsonObject->SetNumberField(TEXT("BackgroundID"), BackgroundID);
	_JsonObject->SetBoolField(TEXT("IsSwitching"), IsSwitching);
}

void UDialogueAction_Background::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	BackgroundID = _JsonObject->GetNumberField(TEXT("BackgroundID"));
	IsSwitching = _JsonObject->GetBoolField(TEXT("IsSwitching"));
}

FText UDialogueAction_Background::Get_Name()
{
	return FText::FromString("Background");
}

FText UDialogueAction_Background::Get_Description()
{
	return FText::AsNumber(BackgroundID);
}

void UDialogueAction_Background::Reset()
{
	Super::Reset();

	IsProgress = false;
}

void UDialogueAction_Background::Execute()
{
	Super::Execute();

	IsProgress = true;

	if(pOwnerPlayer)
	{
		if(UIH_Widget_DialogueScene* DialogueScene = pOwnerPlayer->GetDialogueWidget())
		{
			DialogueScene->SetBackground(BackgroundID, IsSwitching);
		}
	}
}

bool UDialogueAction_Background::Progress(float _fDelta)
{
	if(true == IsSwitching)
	{
		if(pOwnerPlayer)
		{
			if(UIH_Widget_DialogueScene* DialogueScene = pOwnerPlayer->GetDialogueWidget())
			{
				if(true == IsProgress)
				{
					if(false == DialogueScene->IsPlayingAnimation(TEXT("BackgroundChange")))
					{
						return false;
					}
					else
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
	}
	
	return Super::Progress(_fDelta);
}
