#include "IH_Mapper_Resource_Widget.h"

#include "Table/DataStruct/Resource_Widget.h"

void UIH_Mapper_Resource_Widget::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::ResourceWidget, mapTableData);
	for(auto& elem : mapTableData)
	{
		if(FResource_Widget* WidgetData = reinterpret_cast<FResource_Widget*>(elem.Value))
		{
			FName Key = WidgetData->TypeName;
			_mapResourceWidget.Add(Key, WidgetData);
		}
	}
}

void UIH_Mapper_Resource_Widget::Finalize()
{
	_mapResourceWidget.Empty();
	
	Super::Finalize();
}

const FResource_Widget* UIH_Mapper_Resource_Widget::GetWidgetData(FName _TypeName)
{
	for(auto& elem : _mapResourceWidget)
	{
		if(elem.Key == _TypeName)
			return elem.Value;
	}

	return nullptr;
}
