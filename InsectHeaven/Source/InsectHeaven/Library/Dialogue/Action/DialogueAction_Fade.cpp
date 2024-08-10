#include "DialogueAction_Fade.h"

#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"

void UDialogueAction_Fade::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);

	_JsonObject->SetBoolField(TEXT("IsFadeOut"), IsFadeOut);
}

void UDialogueAction_Fade::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	IsFadeOut = _JsonObject->GetBoolField(TEXT("IsFadeOut"));
}

FText UDialogueAction_Fade::Get_Name()
{
	return FText::FromString("Fade");
}

FText UDialogueAction_Fade::Get_Description()
{
	return IsFadeOut ? FText::FromString("FadeOut") : FText::FromString("FadeIn");
}

void UDialogueAction_Fade::Reset()
{
	Super::Reset();

	IsProgress = false;
}

void UDialogueAction_Fade::Execute()
{
	Super::Execute();

	IsProgress = true;

	if(pOwnerPlayer)
	{
		if(UIH_Widget_DialogueScene* DialogueScene = pOwnerPlayer->GetDialogueWidget())
		{
			if(true == IsFadeOut)
			{
				DialogueScene->PlayAnimationByName(TEXT("FadeOut"));
			}
			else
			{
				DialogueScene->PlayAnimationByName(TEXT("FadeIn"));
			}
		}
	}
}

bool UDialogueAction_Fade::Progress(float _fDelta)
{
	if(pOwnerPlayer)
	{
		if(UIH_Widget_DialogueScene* DialogueScene = pOwnerPlayer->GetDialogueWidget())
		{
			if(true == IsProgress)
			{
				FName FadeActionName = IsFadeOut ? TEXT("FadeOut") : TEXT("FadeIn");
				if(false == DialogueScene->IsPlayingAnimation(FadeActionName))
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
	
	return Super::Progress(_fDelta);
}
