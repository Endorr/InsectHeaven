#include "IH_Widget_MainLobby.h"

#include "Components/TextBlock.h"
#include "Dialogue/IH_Widget_DialogueScene.h"
#include "TableMapper/IH_Mapper_Script_Local.h"

void UIH_Widget_MainLobby::NativeConstruct()
{
	Super::NativeConstruct();

	if(CPP_Widget_DialogueScene)
	{
		CPP_Widget_DialogueScene->SetCharacter(12, true);

		UIH_Mapper_Script_Local* pMapper_ScriptLocal = Cast<UIH_Mapper_Script_Local>(gTableMng.GetTableMapper(ETableDataType::ScriptLocal));
		FString TestLocal = pMapper_ScriptLocal->GetLocal(101);
		CPP_Widget_DialogueScene->SetText(TestLocal, true);
	}
}

void UIH_Widget_MainLobby::NativeDestruct()
{
	Super::NativeDestruct();
}
