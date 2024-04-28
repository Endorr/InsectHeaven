#pragma once
#include "IH_GameDefine.h"
#include "SingletonInterface.h"
#include "IH_SceneDefine.h"
#include "IH_SceneManager.generated.h"

class UBehaviorTree;
class UIH_StateBase;

DECLARE_MULTICAST_DELEGATE_OneParam(FIH_ChangeSceneDelegate, ESceneType);

enum class EChangeSceneStep
{
	Ready,
	LoadLevel,
	PrepareScene,
	Complete,
};

USTRUCT()
struct FChangeSceneData
{
	GENERATED_USTRUCT_BODY()

	ESceneType Scene;
	FName LevelPackagePath;

	EChangeSceneStep Step;
};

UCLASS()
class UIH_SceneManager : public UObject, public FIH_Singleton<UIH_SceneManager>
{
	GENERATED_BODY()
	
public:
	virtual void BuiltInInitialize() override;
	virtual void Finalize() override;
	virtual void BuiltInFinalize() override;
	virtual void Tick(float _DeltaTime) override;

	void CreateStateMachine();
	void RegisterSceneState(uint8 _SceneID, const FName& _Name, TSubclassOf<UIH_StateBase> _SceneState) const;
	bool IsExistSceneState() const { return nullptr != SceneStateMachine;}
	int8 GetPreviousSceneID() const;
	int8 GetCurrentSceneID() const;
	FName GetPreviousSceneName() const;
	FName GetCurrentSceneName() const;
	class UIH_SceneBase* GetCurrentScenePtr() const;
	class UIH_SceneBase* GetScenePtr(int32 _SceneID) const;

	void ChangeScene(ESceneType _SceneType, const FName& _LevelPackagePath = NAME_None);
	void ChangeSceneWidgetName(const FName& _Name, const FName& _LevelPackagePath);

	FORCEINLINE bool IsLoadLevelPackage() const { return ChangeSceneData.LevelPackagePath != NAME_None; }
	FORCEINLINE bool IsCompleteChangeScene() const { return ChangeSceneData.Step == EChangeSceneStep::Complete; }
	void OnCompleteLevelLoading(const FString& _LevelPackagePath);

private:
	bool ChangeSceneStep_LoadLevel();
	void ChangeSceneStep_SetSceneState(uint8 _SceneID);

public:
	FIH_ChangeSceneDelegate OnChangeScene;
	FIH_LoadLevelDelegate OnStartLevelLoading;
	FIH_LoadLevelDelegate OnFinishedLevelLoading;
	FIH_ChangeSceneState OnCompleteChangeScene;

private:
	UPROPERTY() FChangeSceneData ChangeSceneData;
	UPROPERTY() class UIH_StateMachine* SceneStateMachine = nullptr;
};

#define gSceneMng (*UIH_SceneManager::GetInstance())
