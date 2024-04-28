#include "IH_Mapper_Character_2D.h"

#include "DataStruct/Character_2D.h"

void UIH_Mapper_Character_2D::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::Character2D, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FCharacter_2D* pData = reinterpret_cast<FCharacter_2D*>(elem.Value);
		if(pData)
		{
			_mapCharater2D.Add(Key, pData);
		}
	}
}

void UIH_Mapper_Character_2D::Finalize()
{
	_mapCharater2D.Empty();
	
	Super::Finalize();
}

const FCharacter_2D* UIH_Mapper_Character_2D::GetCharacterData(int32 _Key)
{
	for(auto& elem : _mapCharater2D)
	{
		if(elem.Key == _Key)
		{
			return elem.Value;
		}
	}

	return nullptr;
}
