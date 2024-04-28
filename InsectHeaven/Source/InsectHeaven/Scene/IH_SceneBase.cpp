#include "IH_SceneBase.h"

void UIH_SceneBase::Begin()
{
	Super::Begin();

	LoadingProcessFuncs.Empty();
	LoadingProcessFuncs.Add(FIH_LoadingProcessFunc::CreateUObject(this, &UIH_SceneBase::LoadingPreProcess));
	LoadingProcessFuncs.Add(FIH_LoadingProcessFunc::CreateUObject(this, &UIH_SceneBase::LoadingProcess));
	LoadingProcessFuncs.Add(FIH_LoadingProcessFunc::CreateUObject(this, &UIH_SceneBase::LoadingPostProcess));
	
}

void UIH_SceneBase::Tick(float _fDeltaTime)
{
	
	Super::Tick(_fDeltaTime);
}

void UIH_SceneBase::Exit()
{
	LoadingProcessFuncs.Empty();

	Super::Exit();
}

void UIH_SceneBase::TickLoading(float _fDeltaTime)
{
	if(true == LoadingProcessFuncs.IsValidIndex(0))
	{
		if(true == LoadingProcessFuncs[0].Execute(_fDeltaTime))
		{
			LoadingProcessFuncs.RemoveAt(0);
		}
	}
}

bool UIH_SceneBase::IsCompleteLoading()
{
	return LoadingProcessFuncs.Num() <= 0;
}

bool UIH_SceneBase::LoadingPreProcess(float _fDeltaTime)
{
	return true;
}

bool UIH_SceneBase::LoadingProcess(float _fDeltaTime)
{
	return true;
}

bool UIH_SceneBase::LoadingPostProcess(float _fDeltaTime)
{
	return true;
}
