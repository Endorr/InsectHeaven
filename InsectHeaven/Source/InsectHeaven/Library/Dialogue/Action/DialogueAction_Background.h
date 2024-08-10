#pragma once
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_Background.generated.h"

UCLASS(BlueprintType)
class UDialogueAction_Background : public UDialogueAction
{
	GENERATED_BODY()
public:
	virtual void SaveToJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual void LoadFromJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual FText Get_Name() override;
	virtual FText Get_Description() override;

	virtual void Reset() override;
	virtual void Execute() override;
	virtual bool Progress(float _fDelta) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	int32 BackgroundID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	bool IsSwitching = true;

	bool IsProgress = false;
};
