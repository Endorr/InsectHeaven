#pragma once
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_ShowActor.generated.h"

UCLASS(BlueprintType)
class UDialogueAction_ShowActor : public UDialogueAction
{
	GENERATED_BODY()
public:
	virtual void SaveToJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual void LoadFromJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual FText Get_Name() override;
	virtual FText Get_Description() override;

	void Execute() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	int32		ActorID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	bool		IsLeft = true;
};