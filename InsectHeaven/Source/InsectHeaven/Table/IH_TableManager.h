#pragma once
#include "SingletonInterface.h"
#include "IH_TableDefine.h"
#include "Engine/StreamableManager.h"

#include "IH_TableManager.generated.h"

class UIH_TableMapper;


UCLASS(Config = game)
class UIH_TableManager : public UObject ,public FIH_Singleton<UIH_TableManager>
{
	GENERATED_BODY()

public:
	virtual void Initialize() override;
	virtual void PostInitialize() override;
	virtual void Finalize() override;

	bool GetRowDataMap(ETableDataType _eTableType, TMap<FName, uint8*>& p_out);
	class UIH_TableMapper* GetTableMapper(ETableDataType _eType);

	bool GetFilePath(ETableDataType _eType, int32 _PathKey, FString& _Path);

private:
	void AddTable();
	void LoadRawTable();
	void AddTableMappers();
	void ResetTable();

	//DataTable File Path
	void EmplacePath(ETableDataType _eTableType, const FString _strPath);

	//Row DataMap
	UFUNCTION()
	void LoadComplete(const FString& SubName, const FString& _ResourcePath, int32 _Index, class UObject* _LoadedTable, bool _ExtraBool);

	//Table Mapper
	void AddTableMapper(ETableDataType _TableDataType, TSubclassOf<UIH_TableMapper> _MapperClass);

public:
	TArray<FString> arrTableNames;

public:
	UPROPERTY() TMap<ETableDataType, FString>			mapTablePath;
	UPROPERTY() TMap<ETableDataType, UIH_TableMapper*>	mapTableMapper;

private:
	UPROPERTY() TMap<FString, class UDataTable*> RawTable;
};

#define gTableMng (*UIH_TableManager::GetInstance())
