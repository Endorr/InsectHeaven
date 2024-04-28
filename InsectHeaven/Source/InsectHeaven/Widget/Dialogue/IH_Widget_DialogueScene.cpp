#include "IH_Widget_DialogueScene.h"

#include "IH_Widget_Portrait.h"
#include "Components/TextBlock.h"

void UIH_Widget_DialogueScene::NativeConstruct()
{
	Super::NativeConstruct();

	FillAnimationsMap();
}

void UIH_Widget_DialogueScene::NativeDestruct()
{
	Super::NativeDestruct();
}

void UIH_Widget_DialogueScene::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);
}

void UIH_Widget_DialogueScene::SetCharacter(int32 CharacterID, bool _IsLeft)
{
	if(true == _IsLeft)
	{
		if(CPP_Widget_LeftCh)
		{
			CPP_Widget_LeftCh->SetCharacterData(CharacterID);
		}

		PlayAnimationByName("LeftCharacterAppear");
	}
	else
	{
		if(CPP_Widget_RightCh)
		{
			CPP_Widget_RightCh->SetCharacterData(CharacterID);
		}

		PlayAnimationByName("LeftCharacterAppear");
	}
}

void UIH_Widget_DialogueScene::SetText(FString _Text, bool _bImmediate)
{
	if(CPP_Txt_Script)
	{
		CPP_Txt_Script->SetText(FText::FromString(_Text));
	}
}
