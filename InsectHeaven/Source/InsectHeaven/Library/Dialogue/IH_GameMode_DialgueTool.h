// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IH_GameMode_DialgueTool.generated.h"

/**
 * 
 */
UCLASS()
class INSECTHEAVEN_API AIH_GameMode_DialgueTool : public AGameModeBase
{
	GENERATED_BODY()

	~AIH_GameMode_DialgueTool();

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void StartPlay() override;
};
