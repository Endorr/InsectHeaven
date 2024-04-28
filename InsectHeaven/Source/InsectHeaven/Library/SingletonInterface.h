#pragma once

#include "CoreMinimal.h"

class ISingleton
{
public:
	virtual ~ISingleton() {}

	virtual void BuiltInInitialize() {}
	virtual void Initialize() {}
	virtual void PostInitialize() {}
	virtual void PreFinalize() {}
	virtual void Finalize() {}
	virtual void BuiltInFinalize() {}

	virtual void PreProcess(float _DeltaTime) {};
	virtual void Tick(float _DeltaTime) {}
	virtual void PostProcess(float _DeltaTime) {};
};


template <typename TClass>
class FIH_Singleton : public ISingleton
{
protected:
	static TClass* _pInstance;

public:
	static TClass* MakeInstance()
	{
		_pInstance = NewObject<TClass>();
		_pInstance->AddToRoot();
		return _pInstance;
	};
	
	static void RemoveInstance()
	{
		if(nullptr == _pInstance)
			return;

		if(_pInstance->IsValidLowLevel())
		{
			_pInstance->RemoveFromRoot();

			_pInstance->ConditionalBeginDestroy();
		}

		_pInstance = nullptr;
	}
	
	static TClass* GetInstance()
	{
		return _pInstance;
	}
	
	static bool HasInstance()
	{
		return _pInstance != nullptr && !_pInstance->HasAnyFlags(RF_FinishDestroyed);
	}
};

template<typename TClass>
TClass* FIH_Singleton<TClass>::_pInstance = nullptr;