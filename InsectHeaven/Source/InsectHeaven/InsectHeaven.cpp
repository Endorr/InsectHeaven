// Copyright Epic Games, Inc. All Rights Reserved.

#include "InsectHeaven.h"

#include "Editor.h"
#include "IH_SceneManager.h"
#include "IH_SingletonManager.h"
#include "Lobby/IH_SceneLobby.h"
#include "EngineUtils.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, InsectHeaven, "InsectHeaven" );

UInsectHeaven::UInsectHeaven()
{
}

UInsectHeaven::~UInsectHeaven()
{
}

void UInsectHeaven::Init()
{
	Super::Init();

	//Initialize Singleton
	{
		if(UIH_SingletonManager* SingletonManager = UIH_SingletonManager::CreateInstance())
		{
			SingletonManager->SetGameInstance(this);
			SingletonManager->BuiltInInitializeSingletons();
			SingletonManager->InitializeSingletons();
			SingletonManager->PostInitializeSingletons();
		}
	}

	//Load Default Scene
	{
		RegistState();

		gSceneMng.ChangeScene(ESceneType::MainLobby);
	}

	//Regieter Tick
	{
		TickDelegateHandle = FTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateUObject(this, &UInsectHeaven::Tick));
	}
}

void UInsectHeaven::Shutdown()
{
	FTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);

	if(UIH_SingletonManager* SingletonManager = UIH_SingletonManager::GetInstance())
	{
		SingletonManager->PreFinalizeSingletons();
		SingletonManager->FinalizeSingletons();
		SingletonManager->BuiltInFinalizeSingletons();

		UIH_SingletonManager::DestroyInstance();
	}

	
	Super::Shutdown();
}

void UInsectHeaven::OnWorldChanged(UWorld* OldWorld, UWorld* NewWorld)
{
	Super::OnWorldChanged(OldWorld, NewWorld);
}

void UInsectHeaven::LoadComplete(const float LoadTime, const FString& MapName)
{
	Super::LoadComplete(LoadTime, MapName);

	if(true == UIH_SceneManager::HasInstance())
	{
		const FLoadedLevelInitialized Delegate = DelegateLoadedLevelInitialized;
		DelegateLoadedLevelInitialized.Unbind();
		Delegate.ExecuteIfBound(GetWorld()->GetMapName());
	}
}

void UInsectHeaven::ExitGame()
{
	GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateLambda([&]()
	{
		if(const UWorld* pWorld = GetWorld())
		{
			UKismetSystemLibrary::QuitGame(pWorld, nullptr, EQuitPreference::Quit, false);
		}
	}));
}

bool UInsectHeaven::Tick(float _fDeltaSeconds)
{
	if(false == bInitOnceTick)
	{
		BeginTick();
		bInitOnceTick = true;
		return true;
	}

	if(nullptr != UIH_SingletonManager::GetInstance())
	{
		PreProcess(_fDeltaSeconds);
		UIH_SingletonManager::GetInstance()->PreProcess(_fDeltaSeconds);
		UIH_SingletonManager::GetInstance()->TickSingletons(_fDeltaSeconds);
		UIH_SingletonManager::GetInstance()->PostProcess(_fDeltaSeconds);
		Process(_fDeltaSeconds);
		PostProcess(_fDeltaSeconds);
	}

	return true;
}

void UInsectHeaven::BeginTick()
{
}

void UInsectHeaven::RegistState()
{
	if(true == UIH_SceneManager::HasInstance())
	{
		gSceneMng.CreateStateMachine();
		gSceneMng.RegisterSceneState(static_cast<uint8>(ESceneType::MainLobby), TEXT("Lobby"), UIH_SceneLobby::StaticClass());
	}
}

void UInsectHeaven::PreProcess(float fDeltaSeconds)
{
	DeltaTime = fDeltaSeconds;

	if(true == GetWorld()->bIsWorldInitialized)
	{
		if(true == UIH_SceneManager::HasInstance())
		{
			const FLoadedLevelInitialized Delegate = DelegateLoadedLevelInitialized;
			DelegateLoadedLevelInitialized.Unbind();
			Delegate.ExecuteIfBound(GetWorld()->GetMapName());
		}
	}
}

void UInsectHeaven::Process(float fDeltaSeconds)
{
}

void UInsectHeaven::PostProcess(float fDeltaSeconds)
{
}
