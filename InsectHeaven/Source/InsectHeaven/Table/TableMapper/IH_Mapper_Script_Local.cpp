#include "IH_Mapper_Script_Local.h"

#include "Table/DataStruct/Script_Local.h"

void UIH_Mapper_Script_Local::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::ScriptLocal, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FScript_Local* pData = reinterpret_cast<FScript_Local*>(elem.Value);
		if(pData)
		{
			_mapScriptLocal.Add(Key, pData);
		}
	}
}

void UIH_Mapper_Script_Local::Finalize()
{
	_mapScriptLocal.Empty();
	
	Super::Finalize();
}

FString UIH_Mapper_Script_Local::GetLocal(int32 _LocalID)
{
	for(auto& elem : _mapScriptLocal)
	{
		if(elem.Key == _LocalID)
			return elem.Value->Korean;
	}

	return "";
}
