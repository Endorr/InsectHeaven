#pragma once
#include "Dialogue/DialogueEditToolWidget.h"
#include "UIH_CinemaFunctionLibrary.generated.h"

UCLASS()
class UIH_CinemaFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static FIH_Dialogue LoadDialogue(const FString& _strFileName);
	
	UFUNCTION(BlueprintCallable)
	static FIH_Dialogue LoadActiveDialogue();

	UFUNCTION(BlueprintCallable)
	static bool SaveDialogue(FIH_Dialogue& _Dialogue, const FString& _strFileName);

	UFUNCTION(BlueprintCallable)
	static void SaveActiveDialogue(FIH_Dialogue& _Dialogue);
	
	UFUNCTION(BlueprintCallable)
	static void PlayDialoguePreview(FIH_Dialogue& _Dialogue);

	UFUNCTION(BlueprintCallable)
	static void StopDialoguePreview();
};
