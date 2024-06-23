#pragma once

#include "CoreMinimal.h"
#include "IH_SingletonManager.h"
#include "SingletonInterface.h"
#include "Dialogue/IH_DialoguePlayer.h"
#include "DialogueManager.generated.h"

UCLASS()
class UDialogueManager : public UObject, public FIH_Singleton<UDialogueManager>
{
	GENERATED_BODY()
	
public:
	virtual void Initialize() override;
	virtual void Finalize() override;
	virtual void Tick(float _DeltaTime) override;

public:
	AIH_DialoguePlayer* GetOrCreateDialoguePlayer();

	bool PlayDialoguePlayer(const FString& _strFileName, FSimpleMulticastDelegate _OnFinish);
	void PauseDialoguePlayer(bool _bPause);
	UFUNCTION()	void StopDialoguePlayer();

	bool IsPlaying();
	bool IsExist();

private:
	TWeakObjectPtr<AIH_DialoguePlayer> pDialoguePlayer = nullptr;
};

#define gDialogueMng (*UDialogueManager::GetInstance())