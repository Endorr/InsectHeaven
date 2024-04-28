#pragma once

#include "CoreMinimal.h"
#include "IH_TableMapper.h"
#include "IH_Mapper_Character_2D.generated.h"

struct FCharacter_2D;

UCLASS()
class UIH_Mapper_Character_2D : public UIH_TableMapper
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(UIH_TableManager* _pMng) override;
	virtual void Finalize() override;

	const FCharacter_2D* GetCharacterData(int32 _Key);

private:
	TMap<int32, const FCharacter_2D*> _mapCharater2D;
};
