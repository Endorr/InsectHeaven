#pragma once
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_Talk.generated.h"

UCLASS(BlueprintType)
class UDialogueAction_Talk : public UDialogueAction
{
	GENERATED_BODY()
public:
	virtual FText Get_Name() override;
	virtual FText Get_Description() override;
};
