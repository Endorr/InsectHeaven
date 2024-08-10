#include "DialogueManager.h"

#include "FileHelpers.h"
#include "Kismet/GameplayStatics.h"

void UDialogueManager::Initialize()
{
	FIH_Singleton<UDialogueManager>::Initialize();
}

void UDialogueManager::Finalize()
{
	FIH_Singleton<UDialogueManager>::Finalize();
}

void UDialogueManager::Tick(float _DeltaTime)
{
	FIH_Singleton<UDialogueManager>::Tick(_DeltaTime);

	if(pDialoguePlayer.IsValid())
	{
		pDialoguePlayer.Get()->Tick(_DeltaTime);
	}
}

AIH_DialoguePlayer* UDialogueManager::GetOrCreateDialoguePlayer()
{
	if (pDialoguePlayer.IsValid())
	{
		return pDialoguePlayer.Get();
	}
	
	FString strFilePath = FString(TEXT("/Game/Dialogue/DialoguePlayer.DialoguePlayer_C"));
	
	UClass* BlueprintClass = StaticLoadClass(UObject::StaticClass(), nullptr, *strFilePath);
	if(nullptr != BlueprintClass)
	{
		if(UWorld* p_world = GetWorld())
		{
			FActorSpawnParameters Params;
			Params.OverrideLevel = p_world->GetCurrentLevel();
			Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			FVector DefaultLocation = FVector(5000.f, 5000.f, 5000.f);
			AActor* NewActor = p_world->SpawnActor(AIH_DialoguePlayer::StaticClass(), &DefaultLocation, &FRotator::ZeroRotator, Params);
#if WITH_EDITOR
			NewActor->SetActorLabel(TEXT("DialoguePlayer"));
#endif
			pDialoguePlayer = Cast<AIH_DialoguePlayer>(NewActor);
			return pDialoguePlayer.Get();
		}
	}

	return nullptr;
}

bool UDialogueManager::PlayDialoguePlayer(const FString& _strFileName, FSimpleMulticastDelegate _OnFinish)
{
	StopDialoguePlayer();

	FString strFilePath = FString(TEXT("/Game/Dialogue/DialoguePlayer.DialoguePlayer_C"));

	if (pDialoguePlayer.IsValid() == false)
	{
		UClass* BlueprintClass = StaticLoadClass(UObject::StaticClass(), nullptr, *strFilePath);
		if(nullptr != BlueprintClass)
		{
			UGameInstance* CurrentInstance = gMngKernel.GetGameInstance();
			UWorld* p_world = CurrentInstance->GetWorld();
			FActorSpawnParameters Params;
			Params.OverrideLevel = p_world->GetCurrentLevel();
			Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			FVector DefaultLocation = FVector(5000.f, 5000.f, 5000.f);
			AActor* NewActor = p_world->SpawnActor(AIH_DialoguePlayer::StaticClass(), &DefaultLocation, &FRotator::ZeroRotator, Params);
#if WITH_EDITOR
			NewActor->SetActorLabel(TEXT("DialoguePlayer"));
#endif
			pDialoguePlayer = Cast<AIH_DialoguePlayer>(NewActor);
		}
	}
	else
	{
		if (pDialoguePlayer->IsPlaying())
		{
			pDialoguePlayer->Stop();
		}
	}

	if (pDialoguePlayer.IsValid())
	{
		pDialoguePlayer->LoadToJson(_strFileName);

		pDialoguePlayer->Play();
		pDialoguePlayer->GetFinishDelegate() = _OnFinish;

		return true;
	}

	return false;
}

void UDialogueManager::PauseDialoguePlayer(bool _bPause)
{
	if (pDialoguePlayer.IsValid())
	{
		pDialoguePlayer->SetPause(_bPause);
	}
}

void UDialogueManager::StopDialoguePlayer()
{
	if (pDialoguePlayer.IsValid())
	{
		AActor* DialogueActor = pDialoguePlayer.Get();
		
		if (DialogueActor != nullptr) {
			if (DialogueActor->IsRooted() == true) {
				DialogueActor->RemoveFromRoot();
			}

			if (!IsValid(GetWorld()))
				return;
		
			GetWorld()->DestroyActor(DialogueActor);
		}
	}
	
	pDialoguePlayer.Reset();
}

bool UDialogueManager::IsPlaying()
{
	if(pDialoguePlayer.IsValid())
	{
		return pDialoguePlayer->IsPlaying();
	}

	return false;
}

bool UDialogueManager::IsExist()
{
	return pDialoguePlayer.IsValid();
}
