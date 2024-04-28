#include "IH_SceneLobby.h"

#include "IH_WidgetManager.h"
#include "MainLobby/IH_Widget_MainLobby.h"

void UIH_SceneLobby::Begin()
{
	Super::Begin();
}

void UIH_SceneLobby::Tick(float _fDeltaTime)
{
	if(false == IsBeginTick)
	{
		IsBeginTick = true;
		BeginTick();
	}
	Super::Tick(_fDeltaTime);
}

void UIH_SceneLobby::Exit()
{
	Super::Exit();
}

void UIH_SceneLobby::BeginTick()
{
	if(UIH_Widget_MainLobby* MainLobbyWidget = Cast<UIH_Widget_MainLobby>(gWidgetMng.CreateWidgetByName(UIH_Widget_MainLobby::GetWidgetName())))
	{
		MainLobbyWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
}
