#include "IH_Mapper_BasePath_Img.h"

#include "DataStruct/BasePath_Image.h"

void UIH_Mapper_BasePath_Img::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::BasePathImage, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FBasePath_Image* pData = reinterpret_cast<FBasePath_Image*>(elem.Value);
		if(pData)
		{
			_mapBasePathImage.Add(Key, pData);
		}
	}
}

void UIH_Mapper_BasePath_Img::Finalize()
{
	_mapBasePathImage.Empty();
	
	Super::Finalize();
}

FString UIH_Mapper_BasePath_Img::GetPath(int32 _Key)
{
	for(auto& elem : _mapBasePathImage)
	{
		if(elem.Key == _Key)
			return elem.Value->Path;
	}

	return "";
}
