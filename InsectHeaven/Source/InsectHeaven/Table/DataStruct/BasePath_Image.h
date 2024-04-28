#pragma once

#if UE_EDITOR || UE_GAME
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BasePath_Image.generated.h"
#else
#include <Utils/SingleAloneForUe4.h>
#include <map>
#endif

USTRUCT()
struct FBasePath_Image : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	FString Path;
};

