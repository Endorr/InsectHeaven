#pragma once

#include "IH_GameDefine.h"
#include "SingletonInterface.h"
#include "Blueprint/UserWidget.h"
#include "IH_WidgetManager.generated.h"

class UIH_Widget;

UCLASS()
class UIH_WidgetManager : public UObject, public FIH_Singleton<UIH_WidgetManager>
{
	GENERATED_BODY()

public:
	virtual void Finalize() override;

	virtual void PreProcess(float _DeltaTime) override;
	virtual void Tick(float _DeltaTime) override;
	virtual void PreFinalize() override;

public:
	//Widget Object Control
	UIH_Widget* CreateWidgetByName(const FName& _TypeName);
	UIH_Widget* CreateWidgetNotManaging(const FSoftObjectPath _SoftObjectPath);
	bool		DestroyWidget(const FName& _TypeName, bool _bFinishImmediate = false);
	void		DestroyAllWidget();
	UFUNCTION(BlueprintCallable, Category = "UPV_WidgetManager")
	UIH_Widget* GetWidget(const FName& _TypeName);

private:
	//Widget Managing Container
	UPROPERTY() TMap<FName, TWeakObjectPtr<UIH_Widget>> mapCreatedWidget;
	
private:
	//Handle Control
	IH_Handle GetEmptyIndex();
	void SetEmptyIndex(IH_Handle _WidgetHandle);
	
	//Widget Object Control
	IH_Handle	CreateWidget_Internal(const FString& _WidgetPath);
	UIH_Widget* CreateWidgetNotManaging_Internal(const FString& _PackagePath);
	void		DestroyWidget_Internal(IH_Handle _WidgetHandle);
	UIH_Widget*	GetWidget_Internal(IH_Handle _WidgetHandle);

	//ViewPort Control
	bool AddWidgetToViewport_Internal(IH_Handle _WidgetHandle);
	bool RemoveWidgetFromViewport_Internal(IH_Handle _WidgetHandle);

	//Animation Control
	bool PlayWidgetAnimationByName_Internal(IH_Handle _WidgetHandle, FName _AnimName, float _StartTime, int32 _LoopCount, EUMGSequencePlayMode::Type _PlayMode, float _Speed);
	bool IsExistWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName);
	bool IsExistAppearanceAnimation_Internal(IH_Handle _WidgetHandle);
	bool IsWidgetPlayingAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName);
	bool IsWidgetPlayingOrPausedAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName);
	bool IsWidgetAnyPlayingAnimation_Internal(IH_Handle _WidgetHandle);
	bool StopWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName);
	bool StopWidgetAllAnimation_Internal(IH_Handle _WidgetHandle);
	bool PauseWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName);
	bool ResumeWidgetAnimation_Internal(IH_Handle _WidgetHandle, FName _AnimName);

	//Widget State Control
	void ActiveWidget_Internal(IH_Handle _WidgetHandle, int32 _ZOrder = 0);
	bool IsActiveWidget_Internal(IH_Handle _WidgetHandle);
	void DeActiveWidget_Internal(IH_Handle _WidgetHandle, bool _Force = false);

protected:
	UFUNCTION()
	void		LoadComplete(const FString& p_sSubName, const FString& p_sResourcePath, int32 p_index, UObject* p_pLoadedResourceObject, bool p_bSubBool = true);

private:
	int32 nCreatedCount = 0;
	int32 nDestroyedCount = 0;
	UPROPERTY() TArray<class UIH_Widget*> arrObjectPool;
	UPROPERTY() TSet<class UIH_Widget*> DeactivePool;
	TArray<int32> arrEmptyArray;

	int32 ZOrderTop = 0;
};

#define gWidgetMng (*UIH_WidgetManager::GetInstance())

