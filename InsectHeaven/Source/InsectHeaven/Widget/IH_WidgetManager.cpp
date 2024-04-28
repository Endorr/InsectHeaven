#include "IH_WidgetManager.h"

#include "IH_SingletonManager.h"
#include "IH_Widget.h"
#include "InsectHeaven.h"

#include "DataStruct/Resource_Widget.h"
#include "TableMapper/IH_Mapper_Resource_Widget.h"


void UIH_WidgetManager::Finalize()
{
	nCreatedCount = 0;
	nDestroyedCount = 0;
	for (int i = 0; i < arrObjectPool.Num(); ++i) {
		UIH_Widget* _widget = arrObjectPool[i];
		if (_widget) {
			_widget->StopAllAnimation(true);
			_widget->RemoveFromRoot();
			_widget->MarkPendingKill();
			_widget = nullptr;
		}
	}

	for (auto var : DeactivePool)
	{
		var->StopAllAnimation(true);
		var->RemoveFromRoot();
		var->MarkPendingKill();
		var = nullptr;
	}

	arrObjectPool.Empty();
	arrEmptyArray.Empty();
	DeactivePool.Empty();
}

void UIH_WidgetManager::PreProcess(float _DeltaTime)
{
	bool bRemoved = false;
	for (int32 i = 0; i < DeactivePool.Num(); ++i)
	{
		FSetElementId setId = FSetElementId::FromInteger(i);
		if (DeactivePool.IsValidId(setId))
		{
			UIH_Widget* pWidget = DeactivePool[setId];
			if (pWidget && pWidget->IsDeactivating() == false)
			{
				DeactivePool.Remove(FSetElementId::FromInteger(i));
				pWidget->RemoveFromViewport();
				pWidget->RemoveFromRoot();
				pWidget->MarkPendingKill();
				bRemoved = true;
			}
		}
	}

	if (bRemoved)
	{
		DeactivePool.CompactStable();
		DeactivePool.Shrink();
	}
}

void UIH_WidgetManager::Tick(float _DeltaTime)
{
	for (auto elem : arrObjectPool) {
		if (elem != nullptr && elem->IsActive() == true) {
			elem->Tick(_DeltaTime);
		}
	}

	for (auto elem : DeactivePool) {
		if (elem != nullptr)
		{
			elem->Tick(_DeltaTime);
		}
	}
}

void UIH_WidgetManager::PreFinalize()
{
	DestroyAllWidget();
}

UIH_Widget* UIH_WidgetManager::CreateWidgetByName(const FName& _TypeName)
{
	GEngine->ForceGarbageCollection(true);
	
	if(true == mapCreatedWidget.Contains(_TypeName))
	{
		const TWeakObjectPtr<UIH_Widget> TargetWidget = mapCreatedWidget[_TypeName];
		if(true == TargetWidget.IsValid())
			return TargetWidget.Get();
		else
			mapCreatedWidget.Remove(_TypeName);
	}

	UIH_Mapper_Resource_Widget* pMapper_ResourceWidget = Cast<UIH_Mapper_Resource_Widget>(gTableMng.GetTableMapper(ETableDataType::ResourceWidget));
	UIH_Widget* NewWidget = nullptr;

	if(const FResource_Widget* ResourceWidgetData = pMapper_ResourceWidget->GetWidgetData(_TypeName))
	{
		FString WidgetPath;
		gTableMng.GetFilePath(ETableDataType::BasePathWidget, ResourceWidgetData->PathFile, WidgetPath);
		IH_Handle NewWidgetHandle = CreateWidget_Internal(WidgetPath);
		NewWidget = GetWidget_Internal(NewWidgetHandle);

		if(nullptr != NewWidget)
		{
			NewWidget->SetWidgetHandle(NewWidgetHandle);
			NewWidget->SetTypeName(_TypeName);
			NewWidget->SetZOrder(ZOrderTop);
			NewWidget->Active(ZOrderTop++);
			mapCreatedWidget.Add(_TypeName, NewWidget);
		}
	}

	return NewWidget;
}

UIH_Widget* UIH_WidgetManager::CreateWidgetNotManaging(const FSoftObjectPath _SoftObjectPath)
{
	UIH_Widget* NewWidget = CreateWidgetNotManaging_Internal(_SoftObjectPath.ToString());
	if(nullptr != NewWidget)
	{
		NewWidget->Active(ZOrderTop);
	}
	return NewWidget;
}

bool UIH_WidgetManager::DestroyWidget(const FName& _TypeName, bool _bFinishImmediate)
{
	UIH_Widget* TargetWidget = GetWidget(_TypeName);
	if(nullptr != TargetWidget)
	{
		TargetWidget->FinishWidget(_bFinishImmediate);
		
		DestroyWidget_Internal(TargetWidget->GetWidgetHandle());
	}

	return false;
}

void UIH_WidgetManager::DestroyAllWidget()
{
	TArray<UIH_Widget*> Widgets;
	for (auto& Pair : mapCreatedWidget)
	{
		if (Pair.Value.IsValid())
		{
			Widgets.Emplace(Pair.Value.Get());
		}
	}
	mapCreatedWidget.Empty();

	for (UIH_Widget* Widget : Widgets)
	{
		Widget->FinishWidget(true);
		DestroyWidget_Internal(Widget->GetWidgetHandle());
	}
	Widgets.Empty();
}

UIH_Widget* UIH_WidgetManager::GetWidget(const FName& _TypeName)
{
	TWeakObjectPtr<UIH_Widget>* TargetWidget = mapCreatedWidget.Find(_TypeName);
	if(nullptr != TargetWidget && true == TargetWidget->IsValid())
		return TargetWidget->Get();
	else
		return nullptr;
}

IH_Handle UIH_WidgetManager::CreateWidget_Internal(const FString& _WidgetPath)
{
	IH_Handle NewHandle = GetEmptyIndex();
	static FString SubName = TEXT("Crate Widget");
	FString FullFilePath = _WidgetPath + TEXT("_C");

	if(NewHandle)
	{
		nCreatedCount++;
		gMngKernel.LoadObjectFromFile(FullFilePath, SubName, NewHandle, true, FLoadResourceDelegate::CreateUObject(this, &UIH_WidgetManager::LoadComplete));	
	}

	return NewHandle;
}

UIH_Widget* UIH_WidgetManager::CreateWidgetNotManaging_Internal(const FString& _PackagePath)
{
	static FString SubName = TEXT("Crate Widget");
	FString FullFilePath = _PackagePath + TEXT("_C");

	if (UClass* WidgetClass = Cast<UClass>(gMngKernel.LoadObjectFromFile(FullFilePath, SubName, 0, true, nullptr)))
	{
		UWorld* World = gMngKernel.GetGameInstance()->GetWorld();
		if (World != nullptr && World->bIsTearingDown == false)
		{
			if (UIH_Widget* Widget = CreateWidget<UIH_Widget>(World, WidgetClass))
			{
				Widget->Init();
				return Widget;
			}
		}
	}

	return nullptr;
}

void UIH_WidgetManager::DestroyWidget_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		nDestroyedCount++;

		DeactivePool.Add(TargetWidget);

		TargetWidget = nullptr;
		arrObjectPool[_WidgetHandle - 1] = nullptr;
		SetEmptyIndex(_WidgetHandle);
	}
}

UIH_Widget* UIH_WidgetManager::GetWidget_Internal(IH_Handle _WidgetHandle)
{
	if (_WidgetHandle == 0 || arrObjectPool.Num() < _WidgetHandle)
		return nullptr;

	return arrObjectPool[_WidgetHandle - 1];
}

bool UIH_WidgetManager::AddWidgetToViewport_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
		return TargetWidget->AddToViewport(ZOrderTop++);

	return false;
}

bool UIH_WidgetManager::RemoveWidgetFromViewport_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
		return TargetWidget->RemoveFromViewport();

	return false;
}

bool UIH_WidgetManager::PlayWidgetAnimationByName_Internal(IH_Handle _WidgetHandle, FName _AnimName, float _StartTime, int32 _LoopCount, EUMGSequencePlayMode::Type _PlayMode, float _Speed)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->PlayAnimationByName(_AnimName, _StartTime, _LoopCount, _PlayMode, _Speed);
	}

	return false;
}

bool UIH_WidgetManager::IsExistWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->IsExistAnim(_AnimName);
	}

	return false;
}

bool UIH_WidgetManager::IsExistAppearanceAnimation_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->IsExistAppearanceAnim();
	}

	return false;
}

bool UIH_WidgetManager::IsWidgetPlayingAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->IsPlayingAnimation(_AnimName);
	}

	return false;
}

bool UIH_WidgetManager::IsWidgetPlayingOrPausedAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->IsPlayingOrPausedAnimation(_AnimName);
	}

	return false;
}

bool UIH_WidgetManager::IsWidgetAnyPlayingAnimation_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->IsAnyPlayingAnimation();
	}

	return false;
}

bool UIH_WidgetManager::StopWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->StopAnimation(_AnimName);
	}

	return false;
}

bool UIH_WidgetManager::StopWidgetAllAnimation_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->StopAllAnimation();
	}

	return false;
}

bool UIH_WidgetManager::PauseWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->PauseAnimation(_AnimName);
	}

	return false;
}

bool UIH_WidgetManager::ResumeWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->ResumeAnimation(_AnimName);
	}

	return false;
}

void UIH_WidgetManager::ActiveWidget_Internal(IH_Handle _WidgetHandle, int32 _ZOrder)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		TargetWidget->Active();
	}
}

bool UIH_WidgetManager::IsActiveWidget_Internal(IH_Handle _WidgetHandle)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		return TargetWidget->IsActive();
	}

	return false;
}

void UIH_WidgetManager::DeActiveWidget_Internal(IH_Handle _WidgetHandle, bool _Force)
{
	UIH_Widget* TargetWidget = GetWidget_Internal(_WidgetHandle);

	if(nullptr != TargetWidget)
	{
		TargetWidget->Deactive();
	}
}

void UIH_WidgetManager::LoadComplete(const FString& p_sSubName, const FString& p_sResourcePath, int32 p_index, UObject* p_pLoadedResourceObject, bool p_bSubBool)
{
	UClass* pClass = Cast<UClass>(p_pLoadedResourceObject);

	if(nullptr != pClass)
	{
		UIH_Widget* NewWidget = nullptr;

		UWorld* World = gMngKernel.GetGameInstance()->GetWorld();
		if(nullptr != World && false == World->bIsTearingDown)
		{
			NewWidget = CreateWidget<UIH_Widget>(World, pClass);
		}

		if(nullptr == NewWidget)
		{
			nCreatedCount--;
			SetEmptyIndex(p_index);
			p_index = 0;
		}
		else
		{
			arrObjectPool[p_index - 1] = NewWidget;
			NewWidget->Init();
			NewWidget->SetWidgetHandle(p_index);
			NewWidget->AddToRoot();
		}
	}
	else
	{
		nCreatedCount--;
		SetEmptyIndex(p_index);
		p_index = 0;
	}
}

IH_Handle UIH_WidgetManager::GetEmptyIndex()
{
	if(0 == arrEmptyArray.Num())
	{
		int32 CurrentObjPoolTop = arrObjectPool.Num();
		for(int32 Index = 0; Index < 10; ++Index)
		{
			arrObjectPool.Add(nullptr);
			arrEmptyArray.Add(CurrentObjPoolTop + Index + 1);
		}
	}

	IH_Handle NewIndex = arrEmptyArray.Pop();
	return NewIndex;
}

void UIH_WidgetManager::SetEmptyIndex(IH_Handle _WidgetHandle)
{
	if (arrObjectPool.Num() >= _WidgetHandle && arrObjectPool[_WidgetHandle - 1] == nullptr)
		arrEmptyArray.Add(_WidgetHandle);
}
