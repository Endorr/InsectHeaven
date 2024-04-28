#pragma once

#if UE_EDITOR || UE_GAME
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Resource_Widget.generated.h"
#else
#include <Utils/SingleAloneForUe4.h>
#include <map>
#endif

USTRUCT()
struct FResource_Widget : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName TypeName;

	UPROPERTY(EditAnywhere)
	int32 PathFile;
};
