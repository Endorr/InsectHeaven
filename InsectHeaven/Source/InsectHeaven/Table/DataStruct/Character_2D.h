#pragma once

#if UE_EDITOR || UE_GAME
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Character_2D.generated.h"
#else
#include <Utils/SingleAloneForUe4.h>
#include <map>
#endif

USTRUCT()
struct FCharacter_2D : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	int32 Name;

	UPROPERTY(EditAnywhere)
	int32 ImageID;
};
