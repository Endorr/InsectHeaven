#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogueDefine.h"
#include "Dom/JsonValue.h"

#include "DialogueActionLayer.generated.h"

UCLASS()
class UDialogueActionLayer : public UObject
{
	GENERATED_BODY()
	
public:
	void SaveToJson(TSharedRef<FJsonObject> _JsonObject);
	void LoadToJson(const TSharedPtr<FJsonValue>& _JsonValue);

public:
	void Play();
	void SetPaused(bool _bPause);
	void SetNextAction();
	void SetActionByIndex(int32 _ActionIndex);
	void Tick(float _fDelat);
	void SetFinish();

	class UDialogueAction* AddAction(TSubclassOf<class UDialogueAction> _ActionType);
	class UDialogueAction* AddAction(UDialogueAction* _TargetAction);
	void RemoveAction(int32 _Index);

	class UDialogueAction* SetAction(int32 _Index, TSubclassOf<class UDialogueAction> _ActionType);
	void SetEmptyAction(int32 _Index);

	void SwapAction(int32 _First, int32 _Second);
	int32 GetActionCount();

	EActionStateType GetCurrentState();
	bool IsPlaying();

	void OnInput();

	TArray<class UDialogueAction*>& GetActions();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayingActionChanged, int32, ActionIndex);
	FOnPlayingActionChanged OnLayerPlayingActionChanged;

private:
	bool bPlaying = false;
	int32 nCurrentActionIndex = 0;

	UPROPERTY()
	TArray<class UDialogueAction*> Actions;
};
