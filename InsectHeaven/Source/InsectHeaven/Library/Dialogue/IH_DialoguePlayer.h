#pragma once
#include "IH_DialoguePlayer.generated.h"

class UDialogueActionLayer;
class UDialogueAction;

UCLASS(BlueprintType)
class AIH_DialoguePlayer : public AActor
{
	GENERATED_BODY()
 	
public:
 	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
 	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	bool SaveToJason(const FString& _strFilePath);

	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	bool LoadToJson(const FString& _strFilePath);

	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	void Play();

	void Stop();

	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	bool IsPlaying();

	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	void SetPause(bool _bPause);
	
	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	void SetActionByIndex(int32 _ActionIndex);

	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	int32 AddActionLayer();

	UFUNCTION(BlueprintCallable, Category = "ADialogueActor")
	void RemoveActionLayer(int32 _LayerIndex);

	UFUNCTION()
	void OnPostActionChanged(int32 _ActionIndex);

	void OnCommit();

	UDialogueAction* AddAction(int32 _LayerIndex, TSubclassOf<UDialogueAction> _ActionClass);
	UDialogueAction* SetAction(int32 _LayerIndex, int32 _ActionIndex, TSubclassOf<UDialogueAction> _ActionClass);

	FSimpleMulticastDelegate& GetFinishDelegate() { return FinishDelegate; }
	void RemoveDelegate(UObject* _InObject);

	class UIH_Widget_DialogueScene* GetDialogueWidget();

private:
	bool TickLayer(float _fDeltaTime);

	bool CreateDialogueWidget();
	void DestroyDialogueWidget();

protected:
	UPROPERTY()
	TArray<UDialogueActionLayer*> ActionLayers;
	
	FSimpleMulticastDelegate FinishDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayingActionChanged, int32, ActionIndex);
	FOnPlayingActionChanged OnPlayingActionChanged;

	UPROPERTY()
	class UIH_Widget_DialogueScene* DialogueWidget = nullptr;

private:
	bool bPlaying = false;
	bool bRunLayerTick = false;
};
