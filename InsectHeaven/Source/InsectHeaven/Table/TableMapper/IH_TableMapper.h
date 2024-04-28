#pragma once

#include "CoreMinimal.h"
#include "Table/IH_TableManager.h"
#include "Table/IH_TableDefine.h"
#include "IH_TableMapper.generated.h"

UCLASS(Blueprintable)
class UIH_TableMapper : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(UIH_TableManager* _pMng) {}
	virtual void Finalize() {}

	template<typename T>
	static void BuildTable(UIH_TableManager* _TableManager, ETableDataType _Type, TMap<int32, T*>& _MapperTable)
	{
		TMap<FName, uint8*> RowData;
		_TableManager->GetRowDataMap(_Type, RowData);

		_MapperTable.Reset();
		for(auto& Pair : RowData)
		{
			int32 ID = FCString::Atoi(*Pair.Key.ToString());
			T* Data = reinterpret_cast<T*>(Pair.Value);
			if(0 <ID && Data)
				_MapperTable.Emplace(ID, Data);
		}
	}

	bool bInitialized = false;
};
