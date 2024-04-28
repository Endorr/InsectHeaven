#pragma once

#if UE_EDITOR || UE_GAME
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InGame_Local.generated.h"
#else
#include <Utils/SingleAloneForUe4.h>
#include <map>
#endif

USTRUCT()
struct FInGame_Local : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		FString Korean;
};
