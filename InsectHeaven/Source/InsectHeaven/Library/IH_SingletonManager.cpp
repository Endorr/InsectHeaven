#include "IH_SingletonManager.h"

#include "IH_TableManager.h"
#include "IH_SceneManager.h"
#include "IH_WidgetManager.h"
#include "SingletonInterface.h"
#include "Dialogue/DialogueManager.h"

UIH_SingletonManager* UIH_SingletonManager::Instance = nullptr;

UIH_SingletonManager* UIH_SingletonManager::CreateInstance()
{
	Instance = NewObject<UIH_SingletonManager>();
	Instance->AddToRoot();
	Instance->RegisterSingletons();
	Instance->RegisterSingletonsForTick();
	return Instance;
}

void UIH_SingletonManager::DestroyInstance()
{
	if(IsValid(Instance))
	{
		Instance->RemoveSingletons();
		Instance->RemoveFromRoot();
		Instance->ConditionalBeginDestroy();
		Instance = nullptr;
	}
}

void UIH_SingletonManager::BuiltInInitializeSingletons()
{
	for(ISingleton* Singleton : Singletons)
		Singleton->BuiltInInitialize();

	bIsBuiltInInitialized = true;
}

void UIH_SingletonManager::InitializeSingletons()
{
	for(ISingleton* Singleton : Singletons)
		Singleton->Initialize();

	bIsInitialized = true;
}

void UIH_SingletonManager::PostInitializeSingletons()
{
	for(ISingleton* Singleton : Singletons)
		Singleton->PostInitialize();
}

void UIH_SingletonManager::PreFinalizeSingletons()
{
	if(!bIsInitialized)
		return;

	for(ISingleton* Singleton : Singletons)
		Singleton->PreFinalize();
}

void UIH_SingletonManager::FinalizeSingletons()
{
	if(!bIsInitialized)
		return;

	for(ISingleton* Singleton : Singletons)
	Singleton->Finalize();
	bIsInitialized = false;
}

void UIH_SingletonManager::BuiltInFinalizeSingletons()
{
	if(!bIsBuiltInInitialized)
		return;

	for(ISingleton* Singleton : Singletons)
		Singleton->BuiltInFinalize();
	bIsBuiltInInitialized = false;
}

void UIH_SingletonManager::RemoveSingletons()
{
	Singletons.Reset();
	SingletonsForTick.Reset();
	BuiltInSingletonsForTick.Reset();
	
	UIH_TableManager::RemoveInstance();
	UIH_SceneManager::RemoveInstance();
	//UIH_WidgetManager::RemoveInstance();
}

void UIH_SingletonManager::PreProcess(float _DeltaTime)
{
	DeltaTime = _DeltaTime;
	
	if(bIsBuiltInInitialized)
	{
		for(ISingleton* Singleton : BuiltInSingletonsForTick)
			Singleton->PreProcess(_DeltaTime);
	}

	if(bIsInitialized)
	{
		for(ISingleton* Singleton : SingletonsForTick)
			Singleton->PreProcess(_DeltaTime);
	}
}

void UIH_SingletonManager::PostProcess(float _DeltaTime)
{
	if(bIsBuiltInInitialized)
	{
		for(ISingleton* Singleton : BuiltInSingletonsForTick)
			Singleton->PostProcess(_DeltaTime);
	}

	if(bIsInitialized)
	{
		for(ISingleton* Singleton : SingletonsForTick)
			Singleton->PostProcess(_DeltaTime);
	}
}

void UIH_SingletonManager::TickSingletons(float _DeltaTime)
{
	if(bIsBuiltInInitialized)
	{
		for(ISingleton* Singleton : BuiltInSingletonsForTick)
			Singleton->Tick(_DeltaTime);
	}

	if(bIsInitialized)
	{
		for(ISingleton* Singleton : SingletonsForTick)
			Singleton->Tick(_DeltaTime);
	}
}

UObject* UIH_SingletonManager::LoadObjectFromFile(const FString& p_sResourcePath, const FString& p_sSubName,
	int32 p_index, bool p_bSubBool, FLoadResourceDelegate p_delegate)
{
	FStringAssetReference _ref = p_sResourcePath;
	UObject* result_obj = AssetLoader.LoadSynchronous(_ref);
	p_delegate.ExecuteIfBound(p_sSubName, p_sResourcePath, p_index, result_obj, p_bSubBool);
	return result_obj;
}

void UIH_SingletonManager::RegisterSingletons()
{
	Singletons.Reset();

	Singletons.Emplace(UIH_TableManager::MakeInstance());
	Singletons.Emplace(UIH_SceneManager::MakeInstance());
	Singletons.Emplace(UIH_WidgetManager::MakeInstance());
	Singletons.Emplace(UDialogueManager::MakeInstance());
}

void UIH_SingletonManager::RegisterSingletonsForTick()
{
	BuiltInSingletonsForTick.Reset();

	BuiltInSingletonsForTick.Emplace(UIH_SceneManager::GetInstance());
	BuiltInSingletonsForTick.Emplace(UIH_WidgetManager::GetInstance());
	BuiltInSingletonsForTick.Emplace(UDialogueManager::GetInstance());

	SingletonsForTick.Reset();
}




