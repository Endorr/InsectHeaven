#include "IH_Widget_Portrait.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "DataStruct/Character_2D.h"
#include "TableMapper/IH_Mapper_Character_2D.h"
#include "TableMapper/IH_Mapper_Script_Local.h"

void UIH_Widget_Portrait::SetCharacterData(int32 _Character2DID)
{
	UIH_Mapper_Character_2D* pMapper_Character2D = Cast<UIH_Mapper_Character_2D>(gTableMng.GetTableMapper(ETableDataType::Character2D));

	if(const FCharacter_2D* CharacterData = pMapper_Character2D->GetCharacterData(_Character2DID))
	{
		if(CPP_Img_Portrait)
		{
			FString FilePath;
			gTableMng.GetFilePath(ETableDataType::BasePathImage, CharacterData->ImageID, FilePath);
			if(UTexture2D* CharacterTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *FilePath)))
			{
				CPP_Img_Portrait->SetBrushFromTexture(CharacterTexture);
			}
		}

		if(CPP_Txt_Name)
		{
			UIH_Mapper_Script_Local* pMapper_ScriptLocal = Cast<UIH_Mapper_Script_Local>(gTableMng.GetTableMapper(ETableDataType::ScriptLocal));
			FString CharacterName = pMapper_ScriptLocal->GetLocal(CharacterData->Name);
			CPP_Txt_Name->SetText(FText::FromString(CharacterName));
		}
	}
}
