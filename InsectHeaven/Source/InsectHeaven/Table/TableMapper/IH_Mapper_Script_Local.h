#pragma once

#include "CoreMinimal.h"
#include "IH_TableMapper.h"
#include "IH_Mapper_Script_Local.generated.h"

struct FScript_Local;

UCLASS()
class UIH_Mapper_Script_Local : public UIH_TableMapper
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(UIH_TableManager* _pMng) override;
	virtual void Finalize() override;

	FString GetLocal(int32 _LocalID);

private:
	TMap<int32, const FScript_Local*> _mapScriptLocal;
};
