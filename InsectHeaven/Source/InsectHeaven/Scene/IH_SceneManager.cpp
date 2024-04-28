#include "IH_SceneManager.h"

#include "IH_SceneBase.h"
#include "IH_SingletonManager.h"
#include "IH_StateMachine.h"
#include "InsectHeaven.h"
#include "Kismet/GameplayStatics.h"

void UIH_SceneManager::BuiltInInitialize()
{
	ChangeSceneData.Step = EChangeSceneStep::Ready;
}

void UIH_SceneManager::Finalize()
{
	OnStartLevelLoading.Clear();
	OnFinishedLevelLoading.Clear();

	if(nullptr != SceneStateMachine)
	{
		SceneStateMachine->SetState(static_cast<int8>(ESceneType::Max_Scene));
		SceneStateMachine->Destroy();
		SceneStateMachine->RemoveFromRoot();
		SceneStateMachine = nullptr;
	}
}

void UIH_SceneManager::BuiltInFinalize()
{
}

void UIH_SceneManager::Tick(float _DeltaTime)
{
	if(nullptr == SceneStateMachine)
		return;

	if(EChangeSceneStep::Complete == ChangeSceneData.Step)
	{
		SceneStateMachine->Tick(_DeltaTime);
	}
	else if(EChangeSceneStep::PrepareScene == ChangeSceneData.Step)
	{
		UIH_SceneBase* CurrentScene = GetCurrentScenePtr();
		CurrentScene->TickLoading(_DeltaTime);

		if(true == CurrentScene->IsCompleteLoading())
		{
			ChangeSceneData.Step = EChangeSceneStep::Complete;
			OnCompleteChangeScene.Broadcast(static_cast<uint8>(ChangeSceneData.Scene));
		}
	}
}

void UIH_SceneManager::CreateStateMachine()
{
	if(nullptr != SceneStateMachine)
		return;

	SceneStateMachine = NewObject<UIH_StateMachine>(this, UIH_StateMachine::StaticClass());
	SceneStateMachine->Create();
}

void UIH_SceneManager::RegisterSceneState(uint8 _SceneID, const FName& _Name, TSubclassOf<UIH_StateBase> _SceneState) const
{
	SceneStateMachine->RegistState(_SceneID, _Name, _SceneState);
}

int8 UIH_SceneManager::GetPreviousSceneID() const
{
	if(nullptr == SceneStateMachine)
		return INDEX_NONE;

	return SceneStateMachine->GetPreviousStateID();
}

int8 UIH_SceneManager::GetCurrentSceneID() const
{
	if(nullptr == SceneStateMachine)
		return INDEX_NONE;

	return SceneStateMachine->GetCurrentStateID();
}

FName UIH_SceneManager::GetPreviousSceneName() const
{
	if(nullptr == SceneStateMachine)
		return "";

	return SceneStateMachine->GetPrevStateName();
}

FName UIH_SceneManager::GetCurrentSceneName() const
{
	if(nullptr == SceneStateMachine)
		return "";

	return SceneStateMachine->GetCurrentStateName();
}

UIH_SceneBase* UIH_SceneManager::GetCurrentScenePtr() const
{
	if(nullptr == SceneStateMachine)
		return nullptr;

	return Cast<UIH_SceneBase>(SceneStateMachine->GetCurrentStatePtr());
}

UIH_SceneBase* UIH_SceneManager::GetScenePtr(int32 _SceneID) const
{
	if(nullptr == SceneStateMachine)
		return nullptr;

	return Cast<UIH_SceneBase>(SceneStateMachine->GetStatePtr(_SceneID));
}

void UIH_SceneManager::ChangeScene(ESceneType _SceneType, const FName& _LevelPackagePath)
{
	if(true == OnChangeScene.IsBound())
	{
		OnChangeScene.Broadcast(_SceneType);
	}

	ChangeSceneData.Step = EChangeSceneStep::Ready;
	ChangeSceneData.Scene = _SceneType;
	ChangeSceneData.LevelPackagePath = _LevelPackagePath;

	ChangeSceneStep_LoadLevel();
}

void UIH_SceneManager::ChangeSceneWidgetName(const FName& _Name, const FName& _LevelPackagePath)
{
	ChangeScene(static_cast<ESceneType>(SceneStateMachine->GetStateIndex(_Name)), _LevelPackagePath);
}

bool UIH_SceneManager::ChangeSceneStep_LoadLevel()
{
	if(ChangeSceneData.LevelPackagePath == NAME_None)
	{
		ChangeSceneStep_SetSceneState(static_cast<uint8>(ChangeSceneData.Scene));
		return true;
	}

	ChangeSceneData.Step = EChangeSceneStep::LoadLevel;
	
	OnStartLevelLoading.Broadcast(ChangeSceneData.LevelPackagePath.ToString());

	UWorld* World = gMngKernel.GetGameInstance()->GetWorld();

	gMngKernel.GetGameInstance()->DelegateLoadedLevelInitialized = FLoadedLevelInitialized::CreateUObject(this, &UIH_SceneManager::OnCompleteLevelLoading);
	UGameplayStatics::OpenLevel(World, ChangeSceneData.LevelPackagePath, true);

	return true;
}

void UIH_SceneManager::OnCompleteLevelLoading(const FString& _LevelPackagePath)
{
	ChangeSceneStep_SetSceneState(static_cast<uint8>(ChangeSceneData.Scene));

	OnFinishedLevelLoading.Broadcast(_LevelPackagePath);
}

void UIH_SceneManager::ChangeSceneStep_SetSceneState(uint8 _SceneID)
{
	ChangeSceneData.Step = EChangeSceneStep::PrepareScene;

	if(nullptr == SceneStateMachine->GetStatePtr(_SceneID))
	{
		return;
	}

	SceneStateMachine->SetState(_SceneID);
}
