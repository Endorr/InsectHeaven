#pragma once

#include "CoreMinimal.h"
#include "IH_TableMapper.h"
#include "IH_Mapper_InGame_Local.generated.h"

struct FInGame_Local;

UCLASS()
class UIH_Mapper_InGame_Local : public UIH_TableMapper
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(UIH_TableManager* _pMng) override;
	virtual void Finalize() override;

	FString GetLocal(int32 _LocalID);
private:
	TMap<int32, const FInGame_Local*> _mapInGameLocal;
};
