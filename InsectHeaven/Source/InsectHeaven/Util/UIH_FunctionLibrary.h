#pragma once
#include "UIH_FunctionLibrary.generated.h"

UCLASS()
class UIH_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static class UGameInstance* GetGameInstance();

	UFUNCTION(BlueprintCallable)
	static class UWorld* GetGameWorld();
};
