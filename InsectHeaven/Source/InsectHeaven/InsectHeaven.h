// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IH_GameDefine.h"
#include "Engine/GameInstance.h"
#include "InsectHeaven.generated.h"

UCLASS(config = game)
class UInsectHeaven : public UGameInstance
{
	GENERATED_BODY()

public:
	UInsectHeaven();
	virtual ~UInsectHeaven() override;

	virtual void Init() override;
	virtual void Shutdown() override;

	virtual void OnWorldChanged(UWorld* OldWorld, UWorld* NewWorld) override;
	virtual void LoadComplete(const float LoadTime, const FString& MapName) override;

	void ExitGame();

	bool Tick(float _fDeltaSeconds);

private:
	void BeginTick();
	void RegistState();

	void PreProcess(float fDeltaSeconds);
	void Process(float fDeltaSeconds);
	void PostProcess(float fDeltaSeconds);
	float GetDeltaTime() { return DeltaTime; }

public:
	FLoadedLevelInitialized DelegateLoadedLevelInitialized;

private:
	UPROPERTY(Category = UHI_GameInstance, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSoftObjectPtr<UWorld> pBaseWorld;

	FDelegateHandle TickDelegateHandle;

	bool bInitOnceTick = false;

	float DeltaTime = 0.0f;
};
