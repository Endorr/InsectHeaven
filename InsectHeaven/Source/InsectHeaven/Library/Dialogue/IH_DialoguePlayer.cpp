#include "IH_DialoguePlayer.h"
#include "JsonObjectConverter.h"

#include "DialogueActionLayer.h"
#include "IH_WidgetManager.h"
#include "Dialogue/IH_Widget_DialogueScene.h"
#include "Misc/FileHelper.h"

void AIH_DialoguePlayer::BeginPlay()
{
	Super::BeginPlay();
}

void AIH_DialoguePlayer::Tick(float DeltaTime)
{
	if(true == bRunLayerTick)
	{
		if(true == TickLayer(DeltaTime))
		{
			bRunLayerTick = false;

			if(DialogueWidget->IsShowTalkPanel())
			{
				DialogueWidget->HideTalkPanel();
			}
		}
	}

	if(true == bPlaying)
	{
		if(false == bRunLayerTick && false == DialogueWidget->IsPlayingAnimation(TEXT("")))
		{
			bPlaying = false;

			if(FinishDelegate.IsBound())
			{
				FinishDelegate.Broadcast();
				FinishDelegate.Clear();
			}
		}
	}
	
	Super::Tick(DeltaTime);
}

void AIH_DialoguePlayer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	SetPause(true);
	for(int32 Index= 0; Index < ActionLayers.Num(); ++Index)
	{
		ActionLayers[Index]->SetFinish();
	}

	DestroyDialogueWidget();
	
	Super::EndPlay(EndPlayReason);
}

bool AIH_DialoguePlayer::SaveToJason(const FString& _strFilePath)
{
	const FString strJsonPath = FPaths::ProjectContentDir() + _strFilePath;
	FString JsonString;

	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	// Save Action
	{
		TArray<TSharedPtr<FJsonValue>> Values;

		for(int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
		{
			TSharedRef<FJsonObject> json = MakeShareable(new FJsonObject());
			TSharedPtr<FJsonValueObject> value = MakeShareable(new FJsonValueObject(json));

			ActionLayers[LayerIndex]->SaveToJson(json);

			Values.Add(value);
		}

		JsonObject->SetArrayField(TEXT("ActionLayers"), Values);
	}

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject, Writer);

	FFileHelper::SaveStringToFile(OutputString, *strJsonPath);

	return true;
}

bool AIH_DialoguePlayer::LoadToJson(const FString& _strFilePath)
{
	ActionLayers.Empty();

	const FString& JsonFilePath = _strFilePath;
	FString JsonString;

	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);

	TSharedPtr<FJsonObject> JsonObeject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);

	if(FJsonSerializer::Deserialize(JsonReader, JsonObeject) && JsonObeject.IsValid())
	{
		const TArray<TSharedPtr<FJsonValue>>& arrActionLayer = JsonObeject->GetArrayField(TEXT("ActionLayers"));
		for(const TSharedPtr<FJsonValue>& ActionLayer : arrActionLayer)
		{
			UDialogueActionLayer* pLayer = NewObject<UDialogueActionLayer>(this, UDialogueActionLayer::StaticClass());
			ActionLayers.Add(pLayer);

			pLayer->LoadToJson(ActionLayer);

			pLayer->OnLayerPlayingActionChanged.AddDynamic(this, &AIH_DialoguePlayer::OnPostActionChanged);
		}
	}

	return true;
}

void AIH_DialoguePlayer::Play()
{
	CreateDialogueWidget();
	
	if(false == bPlaying)
	{
		for(int32 Index = 0; Index < ActionLayers.Num(); ++Index)
			ActionLayers[Index]->Play();

		bPlaying = true;
		bRunLayerTick = true;
	}
}

void AIH_DialoguePlayer::Stop()
{
	bPlaying = false;
}

bool AIH_DialoguePlayer::IsPlaying()
{
	return bPlaying;
}

void AIH_DialoguePlayer::SetPause(bool _bPause)
{
	if (IsPlaying())
	{
		for (int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
		{
			ActionLayers[LayerIndex]->SetPaused(_bPause);
		}
	}
}

void AIH_DialoguePlayer::SetActionByIndex(int32 _ActionIndex)
{
	Stop();

	for(int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
	{
		ActionLayers[LayerIndex]->SetActionByIndex(_ActionIndex);
	}

	bPlaying = true;
	bRunLayerTick = true;
}

int32 AIH_DialoguePlayer::AddActionLayer()
{
	UDialogueActionLayer* pNewLayer = NewObject<UDialogueActionLayer>(this, UDialogueActionLayer::StaticClass());
	ActionLayers.Add(pNewLayer);

	return ActionLayers.Num() - 1;
}

void AIH_DialoguePlayer::RemoveActionLayer(int32 _LayerIndex)
{
	if (ActionLayers.IsValidIndex(_LayerIndex))
	{
		ActionLayers.RemoveAt(_LayerIndex);
	}
}

void AIH_DialoguePlayer::OnPostActionChanged(int32 _ActionIndex)
{
	OnPlayingActionChanged.Broadcast(_ActionIndex);
}

void AIH_DialoguePlayer::OnCommit()
{
	for (int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
	{
		if (ActionLayers[LayerIndex]->IsPlaying())
			ActionLayers[LayerIndex]->OnInput();
	}
}

UDialogueAction* AIH_DialoguePlayer::AddAction(int32 _LayerIndex, TSubclassOf<UDialogueAction> _ActionClass)
{
	if(false == ActionLayers.IsValidIndex(_LayerIndex))
		return nullptr;

	return ActionLayers[_LayerIndex]->AddAction(_ActionClass);
}

UDialogueAction* AIH_DialoguePlayer::SetAction(int32 _LayerIndex, int32 _ActionIndex,
	TSubclassOf<UDialogueAction> _ActionClass)
{
	if (ActionLayers.IsValidIndex(_LayerIndex) == false)
		return nullptr;

	return ActionLayers[_LayerIndex]->SetAction(_LayerIndex, _ActionClass);
}

void AIH_DialoguePlayer::RemoveDelegate(UObject* _InObject)
{
	FinishDelegate.RemoveAll(_InObject);
}

UIH_Widget_DialogueScene* AIH_DialoguePlayer::GetDialogueWidget()
{
	if(DialogueWidget)
		return DialogueWidget;

	return nullptr;
}

bool AIH_DialoguePlayer::TickLayer(float _fDeltaTime)
{
	bool bNextAction = true;
	for(int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
	{
		if(ActionLayers[LayerIndex]->IsPlaying())
		{
			ActionLayers[LayerIndex]->Tick(_fDeltaTime);
		}

		if(ActionLayers[LayerIndex]->GetCurrentState() != EActionStateType::Finished &&
			ActionLayers[LayerIndex]->GetCurrentState() != EActionStateType::None)
		{
			bNextAction = false;
		}
	}

	if(true == bNextAction)
	{
		for(int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
		{
			ActionLayers[LayerIndex]->SetNextAction();
		}
	}

	bool bAllStop = true;
	for(int32 LayerIndex = 0; LayerIndex < ActionLayers.Num(); ++LayerIndex)
	{
		if(true == ActionLayers[LayerIndex]->IsPlaying())
			bAllStop = false;
	}

	return bAllStop;
}

bool AIH_DialoguePlayer::CreateDialogueWidget()
{
	if(nullptr == DialogueWidget)
	{
		DialogueWidget = Cast<UIH_Widget_DialogueScene>(gWidgetMng.CreateWidgetByName(UIH_Widget_DialogueScene::GetWidgetName()));
		DialogueWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		DialogueWidget-> SetCommitDelegate(FDialogueWidgetButtonEvent::CreateUObject(this, &AIH_DialoguePlayer::OnCommit));
	}

	return true;
}

void AIH_DialoguePlayer::DestroyDialogueWidget()
{
	if(nullptr != DialogueWidget)
	{
		gWidgetMng.DestroyWidget(UIH_Widget_DialogueScene::GetWidgetName());
		// DialogueWidget->RemoveFromParent();
		// DialogueWidget->MarkPendingKill();
		// DialogueWidget->ConditionalBeginDestroy();
	}
	DialogueWidget = nullptr;
}
