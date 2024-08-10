#include "IH_Widget_DialogueScene.h"

#include "IH_TableManager.h"
#include "IH_Widget_Portrait.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "TableMapper/IH_Mapper_BasePath_Img.h"

void UIH_Widget_DialogueScene::NativeConstruct()
{
	Super::NativeConstruct();

	if(CPP_Btn_Commit)
	{
		CPP_Btn_Commit->OnClicked.AddDynamic(this, &UIH_Widget_DialogueScene::OnCommit);
	}
	
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
	FString FilePath;
	gTableMng.GetFilePath(ETableDataType::BasePathImage, CharacterID, FilePath);

	if(UTexture2D* CharacterTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *FilePath)))
	{
		if(true == _IsLeft)
		{
			CPP_Img_Left->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			CPP_Img_Left->SetBrushFromTexture(CharacterTexture);
		}
		else
		{
			CPP_Img_Right->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			CPP_Img_Right->SetBrushFromTexture(CharacterTexture);
		}
	}
}

void UIH_Widget_DialogueScene::SetText(FString _Text, bool _bImmediate)
{
	if(CPP_Txt_Script)
	{
		CPP_Txt_Script->SetText(FText::FromString(_Text));
	}
}

void UIH_Widget_DialogueScene::SetCommitDelegate(FDialogueWidgetButtonEvent _Delegate)
{
	OnClickedDelegate = _Delegate;
}

void UIH_Widget_DialogueScene::SetBackground(int32 _ImageID, bool _IsSwitching)
{
	FString FilePath;
	gTableMng.GetFilePath(ETableDataType::BasePathImage, _ImageID, FilePath);

	if(UTexture2D* BackgroundImage = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *FilePath)))
	{
		if(true == _IsSwitching)
		{
			if(CPP_Img_BackgroundSwitch && CPP_Img_Background)
			{
				CPP_Img_BackgroundSwitch->SetBrush(CPP_Img_Background->Brush);
				CPP_Img_BackgroundSwitch->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

				CPP_Img_Background->SetBrushFromTexture(BackgroundImage);
				PlayAnimationByName(TEXT("BackgroundChange"));
			}
		}
		else
		{
			if(CPP_Img_Background)
			{
				CPP_Img_Background->SetBrushFromTexture(BackgroundImage);
			}
		}
	}
}

bool UIH_Widget_DialogueScene::IsShowTalkPanel()
{
	if(CPP_Canvas_Script)
	{
		return ESlateVisibility::Collapsed !=  CPP_Canvas_Script->GetVisibility();
	}

	return false;
}

void UIH_Widget_DialogueScene::HideTalkPanel()
{
	if(CPP_Canvas_Script)
	{
		CPP_Canvas_Script->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
}

void UIH_Widget_DialogueScene::OnCommit()
{
	OnClickedDelegate.ExecuteIfBound();
}
