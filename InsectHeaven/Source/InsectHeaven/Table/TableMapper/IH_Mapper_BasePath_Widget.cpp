#include "IH_Mapper_BasePath_Widget.h"

#include "DataStruct/BasePath_Widget.h"

void UIH_Mapper_BasePath_Widget::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::BasePathWidget, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FBasePath_Widget* pData = reinterpret_cast<FBasePath_Widget*>(elem.Value);
		if(pData)
		{
			_mapBasePathWidget.Add(Key, pData);
		}
	}
}

void UIH_Mapper_BasePath_Widget::Finalize()
{
	_mapBasePathWidget.Empty();
	
	Super::Finalize();
}

FString UIH_Mapper_BasePath_Widget::GetPath(int32 _Key)
{
	for(auto& elem : _mapBasePathWidget)
	{
		if(elem.Key == _Key)
			return elem.Value->Path;
	}

	return "";
}
