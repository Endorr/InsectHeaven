#include "IH_Mapper_InGame_Local.h"

#include "Table/DataStruct/InGame_Local.h"

void UIH_Mapper_InGame_Local::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::InGameLocal, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FInGame_Local* pData = reinterpret_cast<FInGame_Local*>(elem.Value);
		if(pData)
		{
			_mapInGameLocal.Add(Key, pData);
		}
	}
}

void UIH_Mapper_InGame_Local::Finalize()
{
	_mapInGameLocal.Empty();
	
	Super::Finalize();
}

FString UIH_Mapper_InGame_Local::GetLocal(int32 _LocalID)
{
	for(auto& elem : _mapInGameLocal)
	{
		if(elem.Key == _LocalID)
			return elem.Value->Korean;
	}

	return "";
}
