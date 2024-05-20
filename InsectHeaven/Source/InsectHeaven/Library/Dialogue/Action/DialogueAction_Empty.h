#pragma once
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_Empty.generated.h"

UCLASS(BlueprintType)
class UDialogueAction_Empty : public UDialogueAction
{
	GENERATED_BODY()
public:
	virtual FText Get_Name() override;
	virtual FText Get_Description() override;
};
