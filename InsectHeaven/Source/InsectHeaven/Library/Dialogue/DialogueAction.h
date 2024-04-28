#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogueDefine.h"
#include "Dom/JsonObject.h"
#include "DialogueAction.generated.h"

UCLASS(Abstract)
class UDialogueAction : public UObject
{
	GENERATED_UCLASS_BODY()
	
public:
	virtual void SaveToJson(TSharedPtr<FJsonObject> _JsonObject);
	virtual void LoadFromJson(TSharedPtr<FJsonObject> _JsonObject);
	virtual void SetPaused(bool _bPause);
	virtual void SetFinish();
	virtual void Reset();
	virtual FText Get_Description();

	virtual void Tick(float _fDeltaTime);

protected:
	virtual void Execute();
	virtual bool Progress(float _fDelta);
	virtual void Finish();

public:
	EActionStateType GetCurrentState() { return eActionState;}
	virtual void OnInput();
	void DelayFinish();
	bool DelayFinishExist() { return IsDelayFinish; };


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction")
	bool bWaitInput = false;

protected:
	class AIH_DialoguePlayer* pOwnerPlayer = nullptr;
	EActionStateType eActionState = EActionStateType::None;

	//Delay Finish Function until All Current Layer's Action is finished.
	bool IsDelayFinish = false;

	bool IsPaused = false;
};
