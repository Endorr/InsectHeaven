// Fill out your copyright notice in the Description page of Project Settings.


#include "IH_Widget.h"

#include "IH_WidgetManager.h"
#include "Animation/UMGSequencePlayer.h"
#include "Components/Image.h"

FName UIH_Widget::Appearance = TEXT("appearance");
FName UIH_Widget::Idle = TEXT("idle");
FName UIH_Widget::Disappearance = TEXT("disappearance");

void UIH_Widget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UIH_Widget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UIH_Widget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UIH_Widget::FinishWidget(bool _bImmediately)
{
	if (!IsValid(this) || !this->IsValidLowLevel())
	{
		return;
	}
	
	StopAllAnimation();
	Deactive(_bImmediately);
}

void UIH_Widget::Init()
{
	bActive = false;
	bAddToViewport = false;
	bActivating = false;
	bDeactivating = false;
}

void UIH_Widget::Active(int32 _zOrder)
{
	if(false == bAddToViewport)
	{
		AddToViewport(0 == _zOrder ? ResourceWidgetInfo.ZOrder : _zOrder);
	}

	if(true == IsVisible())
	{
		if(true == IsExistAnim(Appearance))
		{
			PlayAnimationByName(Appearance, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
		}
		else if(true == IsExistAnim(Idle))
		{
			PlayAnimationByName(Idle, 0.0f, 0, EUMGSequencePlayMode::Forward, 1.0f);
		}
	}

	bDeactivating = false;
	bActive = true;
}

bool UIH_Widget::Deactive(bool _bImmediate)
{
	if(false == _bImmediate)
	{
		SetVisibility(ESlateVisibility::HitTestInvisible);
	}

	if(true == IsExistAnim(Disappearance) && false == _bImmediate)
	{
		PlayAnimationByName(Disappearance, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
		bDeactivating = true;
	}
	else
	{
		RemoveFromViewport();
	}

	bActive = false;
	return bDeactivating;
}

void UIH_Widget::Tick(float _DeltaTime)
{
	if(true == bActivating && false == IsPlayingAnimation(Appearance))
	{
		bActivating = false;
		if(true == IsExistAnim(Idle))
		{
			PlayAnimationByName(Idle, 0.001f, 0, EUMGSequencePlayMode::Forward, 1.0f);
		}
	}
	else if(true == bDeactivating && false == IsPlayingAnimation(Disappearance))
	{
		RemoveFromViewport();
		bDeactivating = false;
	}
}

bool UIH_Widget::AddToViewport(int32 p_zorder)
{
	if(false == bAddToViewport)
	{
		bAddToViewport = true;
		if(nullptr == GetParent())
		{
			UUserWidget::AddToViewport(p_zorder);
		}
		return true;
	}

	return false;
}

bool UIH_Widget::RemoveFromViewport()
{
	if(true == bAddToViewport)
	{
		bAddToViewport = false;

		if(nullptr == GetParent())
		{
			UUserWidget::RemoveFromParent();
		}
		return true;
	}
	return false;
}

UUserWidget* UIH_Widget::GetChildWidgetFromName(FName p_name)
{
	UIH_Widget* Widget = nullptr;
	if(FName("None") == p_name)
	{
		Widget = Cast<UIH_Widget>(this);
	}
	else
	{
		UWidget* tempWidget = GetWidgetFromName(p_name);
		Widget = Cast<UIH_Widget>(tempWidget);
	}

	return Widget;
}

UWidgetAnimation* UIH_Widget::GetAnimationByName(FName p_name) const
{
	UWidgetAnimation* const* WidgetAnim = mapAnimations.Find(p_name);
	if(nullptr == WidgetAnim)
		return nullptr;

	return *WidgetAnim;
}

bool UIH_Widget::IsExistAnim(FName p_name)
{
	return nullptr != GetAnimationByName(p_name);
}

bool UIH_Widget::IsExistAppearanceAnim()
{
	return IsExistAnim(Appearance);
}

bool UIH_Widget::IsExistDisappearanceAnim()
{
	return IsExistAnim(Disappearance);
}

bool UIH_Widget::PlayAnimationByName(FName p_name, float p_start_time, int32 p_loop_count, EUMGSequencePlayMode::Type p_play_mode, float p_speed)
{
	UWidgetAnimation* WidgetAnimation = GetAnimationByName(p_name);
	if(nullptr != WidgetAnimation)
	{
		PlayAnimation(WidgetAnimation, p_start_time, p_loop_count, p_play_mode, p_speed);
		return true;
	}

	return false;
}

bool UIH_Widget::PlayAnimationByName(FName p_name)
{
	return PlayAnimationByName(p_name, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
}

bool UIH_Widget::IsPlayingAnimation(FName p_name) const
{
	UWidgetAnimation* WidgetAnimation = GetAnimationByName(p_name);
	if(nullptr != WidgetAnimation)
	{
		return IsAnimationPlaying(WidgetAnimation);
	}

	return false;
}

bool UIH_Widget::IsPlayingOrPausedAnimation(FName p_name) const
{
	UWidgetAnimation* WidgetAnimation = GetAnimationByName(p_name);
	if(nullptr != WidgetAnimation)
	{
		const float* const PauseTime = mapPausedAnimaionTime.Find(p_name);

		return (true == IsAnimationPlaying(WidgetAnimation) || nullptr != PauseTime);
	}

	return false;
}

bool UIH_Widget::IsAnyPlayingAnimation() const
{
	return IsAnyAnimationPlaying();
}

bool UIH_Widget::StopAnimation(FName p_name)
{
	UWidgetAnimation* WidgetAnim = GetAnimationByName(p_name);
	if(nullptr != WidgetAnim)
	{
		UUserWidget::StopAnimation(WidgetAnim);
		return true;
	}

	return false;
}

bool UIH_Widget::StopAllAnimation(bool _bIsShutDown)
{
	if(true == _bIsShutDown)
	{
		OnAnimationFinishedDelegate.Unbind();
	}
	StopAllAnimations();
	return true;
}

bool UIH_Widget::PauseAnimation(FName p_name)
{
	UWidgetAnimation* WidgetAnimation = GetAnimationByName(p_name);
	if(nullptr != WidgetAnimation)
	{
		float PauseTime = UUserWidget::PauseAnimation(WidgetAnimation);
		mapPausedAnimaionTime.Add(p_name, PauseTime);
		return true;
	}
	
	return false;
}

bool UIH_Widget::ResumeAnimation(FName p_name)
{
	float* const PauseTime = mapPausedAnimaionTime.Find(p_name);
	UWidgetAnimation* WidgetAnimation = GetAnimationByName(p_name);
	if(nullptr != PauseTime && nullptr != WidgetAnimation)
	{
		PlayAnimation(WidgetAnimation, *PauseTime, 1, EUMGSequencePlayMode::Forward, 1.0f);
		return true;
	}

	return false;
}

float UIH_Widget::GetAnimCurrentTime(FName p_name) const
{
	if(UWidgetAnimation* WidgetAnimation = GetAnimationByName(p_name))
	{
		if(UUMGSequencePlayer* UmgPlayer = GetSequencePlayer(WidgetAnimation))
		{
			FQualifiedFrameTime CurTime = UmgPlayer->GetCurrentTime();
			return CurTime.AsSeconds();
		}
	}

	return  0.0f;
}

void UIH_Widget::FillAnimationsMap()
{
	mapAnimations.Empty();

	FProperty* pProp = GetClass()->PropertyLink;

	while(nullptr != pProp)
	{
		if(FObjectProperty::StaticClass() == pProp->GetClass())
		{
			FObjectProperty* pObjProp = CastField<FObjectProperty>(pProp);

			if(UWidgetAnimation::StaticClass() == pObjProp->PropertyClass)
			{
				UObject* Obj = pObjProp->GetObjectPropertyValue_InContainer(this);
				UWidgetAnimation* WidgetAnim = Cast<UWidgetAnimation>(Obj);
				if(nullptr != WidgetAnim && nullptr != WidgetAnim->MovieScene)
				{
					FName name(WidgetAnim->GetMovieScene()->GetName());
					mapAnimations.Add(name, WidgetAnim);
				}
			}
		}

		pProp = pProp->PropertyLinkNext;
	}
}

bool UIH_Widget::SetColorAndOpacity(FName p_name, FLinearColor InColorAndOpacity)
{
	if(FName("None") == p_name)
	{
		UUserWidget::SetColorAndOpacity(InColorAndOpacity);
		return true;
	}
	else
	{
		UUserWidget* ChildWidget = Cast<UUserWidget>(GetAnimationByName(p_name));
		if(nullptr != ChildWidget)
		{
			ChildWidget->SetColorAndOpacity(InColorAndOpacity);
			return true;
		}
	}

	return false;
}

FIH_ResourceWidgetInfo UIH_Widget::GetResourceWidgetInfo() const
{
	return ResourceWidgetInfo;
}

void UIH_Widget::SetAnimFinishedDelegate(FIH_WidgetAnimationDelegate _delegate)
{
	OnAnimationFinishedDelegate = _delegate;	
}

void UIH_Widget::RemoveFinishedAnimDelegate()
{
	OnAnimationFinishedDelegate.Unbind();
}
