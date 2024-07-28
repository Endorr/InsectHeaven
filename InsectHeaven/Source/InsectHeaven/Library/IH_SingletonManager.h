#pragma once

#include "CoreMinimal.h"
#include "Engine/StreamableManager.h"
#include "UObject/Object.h"
#include "IH_SingletonManager.generated.h"

DECLARE_DELEGATE_FiveParams(FLoadResourceDelegate, const FString&, const FString&, int32, class UObject*, bool);

UCLASS()
class UIH_SingletonManager : public UObject
{
	GENERATED_BODY()
	
public:
	static UIH_SingletonManager* CreateInstance();
	static void DestroyInstance();
	static UIH_SingletonManager* GetInstance() { return Instance;}
	static bool HasInstance();

protected:
	static UIH_SingletonManager* Instance;

public:
	FORCEINLINE void SetGameInstance(class UGameInstance* _GameInstacne) { GameInstance = _GameInstacne; }
	FORCEINLINE class UGameInstance* GetGameInstance() const { return GameInstance; }
	
	bool IsBuiltInInitialized() const { return bIsBuiltInInitialized; }
	bool IsInitialized() const { return bIsInitialized; }

	void BuiltInInitializeSingletons();
	void InitializeSingletons();
	void PostInitializeSingletons();
	void PreFinalizeSingletons();
	void FinalizeSingletons();
	void BuiltInFinalizeSingletons();
	void RemoveSingletons();
	void PreProcess(float fDeltaSeconds);
	void PostProcess(float fDeltaSeconds);
	void TickSingletons(float _DeltaTime);
	
	FORCEINLINE float GetDeltaTime() { return DeltaTime; }

	UObject* LoadObjectFromFile(const FString& p_sResourcePath, const FString& p_sSubName, int32 p_index, bool p_bSubBool, FLoadResourceDelegate p_delegate);


protected:
	void RegisterSingletons();
	void RegisterSingletonsForTick();

protected:
	bool bIsBuiltInInitialized = false;
	bool bIsInitialized = false;
	TArray<class ISingleton*> Singletons;
	TArray<class ISingleton*> SingletonsForTick;
	TArray<class ISingleton*> BuiltInSingletonsForTick;

	UPROPERTY()
	class UGameInstance* GameInstance = nullptr;

	float DeltaTime = 0.0f;

	FStreamableManager AssetLoader;
};

#define gMngKernel (*UIH_SingletonManager::GetInstance())
#define HasgKernel UIH_SingletonManager::HasInstance()
