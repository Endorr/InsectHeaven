#include "IH_Mapper_BasePath_Dir.h"

#include "Table/DataStruct/BasePath_Directory.h"

void UIH_Mapper_BasePath_Dir::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::BasePathDir, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FBasePath_Directory* pData = reinterpret_cast<FBasePath_Directory*>(elem.Value);
		if(nullptr != pData)
		{
			_mapBasePathDir.Add(Key, pData);
		}
	}
}

void UIH_Mapper_BasePath_Dir::Finalize()
{
	_mapBasePathDir.Empty();
	
	Super::Finalize();
}

FString UIH_Mapper_BasePath_Dir::GetPath(int32 _Key)
{
	for(auto& elem : _mapBasePathDir)
	{
		if(elem.Key == _Key)
		{
			return elem.Value->Path;
		}
	}

	return "";
}
