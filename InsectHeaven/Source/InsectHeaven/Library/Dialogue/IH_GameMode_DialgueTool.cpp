// Fill out your copyright notice in the Description page of Project Settings.


#include "IH_GameMode_DialgueTool.h"

#include "Dialogue/DialogueManager.h"

AIH_GameMode_DialgueTool::~AIH_GameMode_DialgueTool()
{
	GConfig->SetBool(TEXT("/Script/InsectHeaven.DialogueTool"), TEXT("OpenWithActiveDialogue"), false, GGameIni);
}

void AIH_GameMode_DialgueTool::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void AIH_GameMode_DialgueTool::StartPlay()
{
	Super::StartPlay();

#if WITH_EDITOR
	FString ContentDir = FPaths::ProjectContentDir() + TEXT("Dialogue/ActiveDialogue");
	FSimpleMulticastDelegate DummyDelegate;
	gDialogueMng.PlayDialoguePlayer(ContentDir, DummyDelegate);
#endif
}
