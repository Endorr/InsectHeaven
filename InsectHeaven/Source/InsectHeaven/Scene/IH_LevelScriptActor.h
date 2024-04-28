// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IH_SceneDefine.h"
#include "Engine/LevelScriptActor.h"
#include "IH_LevelScriptActor.generated.h"

UCLASS(notplaceable, meta = (ChildCanTick, KismetHideOverrides = "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave"), HideCategories = (Collision, Rendering, "Utilities|Transformation"))

class INSECTHEAVEN_API AIH_LevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	FORCEINLINE ESceneType GetGameSceneType() const { return GameSceneType; }

protected:
	UPROPERTY(EditAnywhere)
	ESceneType GameSceneType = ESceneType::MainLobby;
};
