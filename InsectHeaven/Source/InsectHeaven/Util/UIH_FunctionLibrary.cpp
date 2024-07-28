#include "UIH_FunctionLibrary.h"

#include "IH_SingletonManager.h"

UGameInstance* UIH_FunctionLibrary::GetGameInstance()
{
	if(false == HasgKernel)
		return nullptr;
	
	return gMngKernel.GetGameInstance();
}

UWorld* UIH_FunctionLibrary::GetGameWorld()
{
	if(nullptr == GetGameInstance())
		return nullptr;

	return GetGameInstance()->GetWorld();
}
