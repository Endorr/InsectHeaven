#include "IH_TableManager.h"

#include "IH_SingletonManager.h"
#include "Engine/DataTable.h"
#include "TableMapper/IH_Mapper_BasePath_Dir.h"
#include "TableMapper/IH_Mapper_BasePath_Img.h"
#include "TableMapper/IH_Mapper_BasePath_Widget.h"
#include "TableMapper/IH_Mapper_Character_2D.h"
#include "TableMapper/IH_Mapper_InGame_Local.h"
#include "TableMapper/IH_Mapper_Resource_Widget.h"
#include "TableMapper/IH_Mapper_Script_Local.h"
#include "Util/IH_Util.h"

void UIH_TableManager::Initialize()
{
	AddTable();
	LoadRawTable();
	AddTableMappers();
}

void UIH_TableManager::PostInitialize()
{
	FIH_Singleton<UIH_TableManager>::PostInitialize();
}

void UIH_TableManager::Finalize()
{
	FIH_Singleton<UIH_TableManager>::Finalize();
}

bool UIH_TableManager::GetRowDataMap(ETableDataType _eTableType, TMap<FName, uint8*>& p_out)
{
	const FString& strName = IH_UTIL::EnumToString<ETableDataType>("ETableDataType", _eTableType);

	UDataTable** SearchTable = RawTable.Find(strName);
	if(nullptr == SearchTable || nullptr == *SearchTable)
		return false;

	p_out = (*SearchTable)->GetRowMap();
	return true;
}

UIH_TableMapper* UIH_TableManager::GetTableMapper(ETableDataType _eType)
{
	if(true == mapTableMapper.Contains(_eType))
	{
		return mapTableMapper[_eType];
	}

	return nullptr;
}

bool UIH_TableManager::GetFilePath(ETableDataType _eType, int32 _PathKey, FString& _Path)
{
	int32 DirectoryKey = INDEX_NONE;

	FString FileName = "";
	switch (_eType)
	{
	case ETableDataType::BasePathWidget:
		{
			DirectoryKey = 101;

			UIH_Mapper_BasePath_Widget* pMapper_BaePathWidget = Cast<UIH_Mapper_BasePath_Widget>(GetTableMapper(ETableDataType::BasePathWidget));
			FileName = pMapper_BaePathWidget->GetPath(_PathKey);
		}
		break;
	case ETableDataType::BasePathImage:
		{
			DirectoryKey = 102;

			UIH_Mapper_BasePath_Img* pMapper_BasePathImage = Cast<UIH_Mapper_BasePath_Img>(GetTableMapper(ETableDataType::BasePathImage));
			FileName = pMapper_BasePathImage->GetPath(_PathKey);
		}
	default:
		break;
	}

	if(INDEX_NONE == DirectoryKey)
		return false;

	UIH_Mapper_BasePath_Dir* pMapper_BasePathDir = Cast<UIH_Mapper_BasePath_Dir>(GetTableMapper(ETableDataType::BasePathDir));
	FString DirectoryPath = pMapper_BasePathDir->GetPath(DirectoryKey);

	_Path = DirectoryPath + FileName;

	return true;
}

void UIH_TableManager::LoadRawTable()
{
	for(auto& elem : mapTablePath)
	{
		UDataTable** ppTable = RawTable.Find(elem.Value);
		if(nullptr != ppTable)
			continue;

		gMngKernel.LoadObjectFromFile(elem.Value, arrTableNames[static_cast<uint32>(elem.Key)],0,true, FLoadResourceDelegate::CreateUObject(this, &UIH_TableManager::LoadComplete));
	}
}

void UIH_TableManager::AddTableMappers()
{
	mapTableMapper.Reset();

	AddTableMapper(ETableDataType::InGameLocal, UIH_Mapper_InGame_Local::StaticClass());
	AddTableMapper(ETableDataType::ScriptLocal, UIH_Mapper_Script_Local::StaticClass());
	AddTableMapper(ETableDataType::ResourceWidget, UIH_Mapper_Resource_Widget::StaticClass());
	AddTableMapper(ETableDataType::BasePathDir, UIH_Mapper_BasePath_Dir::StaticClass());
	AddTableMapper(ETableDataType::BasePathWidget, UIH_Mapper_BasePath_Widget::StaticClass());
	AddTableMapper(ETableDataType::BasePathImage, UIH_Mapper_BasePath_Img::StaticClass());
	AddTableMapper(ETableDataType::Character2D, UIH_Mapper_Character_2D::StaticClass());
}

void UIH_TableManager::AddTable()
{
	ResetTable();
	
	EmplacePath(ETableDataType::InGameLocal, "/Game/DataTable/InGame_Local.InGame_Local");
	EmplacePath(ETableDataType::ScriptLocal, "/Game/DataTable/Script_Local.Script_Local");
	EmplacePath(ETableDataType::ResourceWidget, "/Game/DataTable/Resource_Widget.Resource_Widget");
	EmplacePath(ETableDataType::BasePathDir, "/Game/DataTable/BasePath_Directory.BasePath_Directory");
	EmplacePath(ETableDataType::BasePathWidget, "/Game/DataTable/BasePath_Widget.BasePath_Widget");
	EmplacePath(ETableDataType::BasePathImage, "/Game/DataTable/BasePath_Image.BasePath_Image");
	EmplacePath(ETableDataType::Character2D, "/Game/DataTable/Character_2D.Character_2D");
}

void UIH_TableManager::ResetTable()
{
	mapTablePath.Empty();
	arrTableNames.Empty();
	arrTableNames.SetNum(static_cast<uint32>(ETableDataType::Max_Table));
	RawTable.Empty();
}

void UIH_TableManager::EmplacePath(ETableDataType _eTableType, const FString _strPath)
{
	FString strName = IH_UTIL::EnumToString<ETableDataType>("ETableDataType", _eTableType);

	arrTableNames[static_cast<uint32>(_eTableType)] = strName;
	mapTablePath.Emplace(_eTableType, _strPath);
}

void UIH_TableManager::LoadComplete(const FString& SubName, const FString& _ResourcePath, int32 _Index,
	UObject* _LoadedTable, bool _ExtraBool)
{
	if(nullptr != _LoadedTable)
	{
		RawTable.Add(SubName, Cast<UDataTable>(_LoadedTable));
	}
}

void UIH_TableManager::AddTableMapper(ETableDataType _TableDataType, TSubclassOf<UIH_TableMapper> _MapperClass)
{
	UIH_TableMapper* pMapper = NewObject<UIH_TableMapper>(this, _MapperClass);
	Cast<UIH_TableMapper>(pMapper)->Initialize(this);
	mapTableMapper.Add(_TableDataType, pMapper);
}
