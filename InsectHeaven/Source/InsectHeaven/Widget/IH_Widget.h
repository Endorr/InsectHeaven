// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IH_GameDefine.h"
#include "Blueprint/UserWidget.h"
#include "IH_Widget.generated.h"

DECLARE_DELEGATE_OneParam(FIH_WidgetAnimationDelegate, const FName&);

struct FIH_ResourceWidgetInfo
{
	FName TypeName;
	int32 ZOrder;
	IH_Handle WidgetHandle;
};

class UIH_Button;
/**
 * 
 */
UCLASS()
class INSECTHEAVEN_API UIH_Widget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	virtual void FinishWidget(bool _bImmediately = false);
	virtual void Init();
	virtual void Active(int32 _zOrder = 0);
	virtual bool Deactive(bool _bImmediate = false);
	virtual void Tick(float _DeltaTime);
	FORCEINLINE bool IsActive() { return bActive; };
	FORCEINLINE bool IsActivating() { return bActivating; }
	FORCEINLINE bool IsDeactivating() { return bDeactivating; }
	bool AddToViewport(int32 p_zorder = 0);
	bool RemoveFromViewport();
	UUserWidget* GetChildWidgetFromName(FName p_name);

	UWidgetAnimation* GetAnimationByName(FName p_name) const;
	bool IsExistAnim(FName p_name);
	bool IsExistAppearanceAnim();
	bool IsExistDisappearanceAnim();
	UFUNCTION(BlueprintCallable, Category = "UIH_Widget")
	bool PlayAnimationByName(FName p_name, float p_start_time, int32 p_loop_count, EUMGSequencePlayMode::Type p_play_mode, float p_speed);
	bool PlayAnimationByName(FName p_name);
	bool IsPlayingAnimation(FName p_name) const;
	bool IsPlayingOrPausedAnimation(FName p_name) const;
	bool IsAnyPlayingAnimation() const;
	virtual bool StopAnimation(FName p_name);
	virtual bool StopAllAnimation(bool _bIsShutDown = false);
	bool PauseAnimation(FName p_name);
	bool ResumeAnimation(FName p_name);
	float GetAnimCurrentTime(FName p_name) const;
	void FillAnimationsMap();

	bool SetColorAndOpacity(FName p_name, FLinearColor InColorAndOpacity);

	FIH_ResourceWidgetInfo GetResourceWidgetInfo() const;

	FORCEINLINE void SetTypeName(FName _TypeName) { ResourceWidgetInfo.TypeName = _TypeName; }
	FORCEINLINE FName GetTypeName() { return ResourceWidgetInfo.TypeName; }

	FORCEINLINE void SetZOrder(int32 _value) { ResourceWidgetInfo.ZOrder = _value; }
	FORCEINLINE int32 GetZOrder() const { return ResourceWidgetInfo.ZOrder; }

	FORCEINLINE void SetWidgetHandle(IH_Handle _WidgetHandle) { ResourceWidgetInfo.WidgetHandle = _WidgetHandle; }
	FORCEINLINE IH_Handle GetWidgetHandle() { return ResourceWidgetInfo.WidgetHandle; }


private:
	void SetAnimFinishedDelegate(FIH_WidgetAnimationDelegate _delegate);
	void RemoveFinishedAnimDelegate();

private:
	UPROPERTY()
	TMap<FName, UWidgetAnimation*> mapAnimations;
	TMap<FName, float> mapPausedAnimaionTime;
	
	bool bActive = false;
	bool bAddToViewport = false;
	bool bActivating = false;
	bool bDeactivating =  false;
	bool bManaged = false;

	FIH_WidgetAnimationDelegate OnAnimationFinishedDelegate;

	FIH_ResourceWidgetInfo ResourceWidgetInfo;

public:
	static FName Appearance;
	static FName Idle;
	static FName Disappearance;
};
