#include "UIH_CinemaFunctionLibrary.h"

#include "EngineAnalytics.h"
#include "FileHelpers.h"
#include "IAssetViewport.h"
#include "JsonObjectConverter.h"
#include "LevelEditor.h"
#include "UnrealEdGlobals.h"
#include "Dialogue/DialogueActionLayer.h"
#include "Dialogue/IH_GameMode_DialgueTool.h"
#include "Editor/UnrealEdEngine.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

FIH_Dialogue UIH_CinemaFunctionLibrary::LoadDialogue(const FString& _strFileName)
{
	const FString JsonFilePath =/* FPaths::ProjectContentDir() + FString(TEXT("Dialogue/") ) +*/ _strFileName;
	FString JsonString; //Json converted to FString

	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FIH_Dialogue Dialogue;

		const TArray<TSharedPtr<FJsonValue>>& arrActionLayer = JsonObject->GetArrayField(TEXT("ActionLayers"));
		for (const TSharedPtr<FJsonValue>& ActionLayer : arrActionLayer)
		{
			UDialogueActionLayer* pLayer = NewObject<UDialogueActionLayer>();
			Dialogue.ActionLayers.Add(pLayer);

			pLayer->LoadToJson(ActionLayer);
		}


		return Dialogue;
	}

	return FIH_Dialogue();
}

FIH_Dialogue UIH_CinemaFunctionLibrary::LoadActiveDialogue()
{
	FString FilePath = FPaths::ProjectContentDir() + FString(TEXT("Dialogue/")) + FString(TEXT("ActiveDialogue"));

	return LoadDialogue(FilePath);
}

bool UIH_CinemaFunctionLibrary::SaveDialogue(FIH_Dialogue& _Dialogue, const FString& _strFileName)
{
	const FString strJsonPath = /*FPaths::ProjectContentDir() + FString(TEXT("Dialogue/")) +*/ _strFileName;
	FString JsonString; //Json converted to FString

	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	{ // Save Action
		TArray<TSharedPtr<FJsonValue>> Values;

		for (int i = 0; i < _Dialogue.ActionLayers.Num(); ++i)
		{
			TSharedRef<FJsonObject> json = MakeShareable(new FJsonObject());
			TSharedPtr<FJsonValueObject> value = MakeShareable(new FJsonValueObject(json));

			_Dialogue.ActionLayers[i]->SaveToJson(json);

			Values.Add(value);
		}

		JsonObject->SetArrayField(TEXT("ActionLayers"), Values);
	}


	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject, Writer);

	bool bResult = FFileHelper::SaveStringToFile(OutputString, *strJsonPath);
	return bResult;
}

void UIH_CinemaFunctionLibrary::SaveActiveDialogue(FIH_Dialogue& _Dialogue)
{
	SaveDialogue(_Dialogue, FPaths::ProjectContentDir() + FString(TEXT("Dialogue/")) + TEXT("ActiveDialogue"));
}

void UIH_CinemaFunctionLibrary::PlayDialoguePreview(FIH_Dialogue& _Dialogue)
{
	SaveActiveDialogue(_Dialogue);

	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));

	///** Set PlayInViewPort as the last executed play command */
	//const FPlayWorldCommands& Commands = FPlayWorldCommands::Get();

	//SetLastExecutedPlayMode(PlayMode_InViewPort);

	ULevelEditorPlaySettings* PlaySettings = GetMutableDefault<ULevelEditorPlaySettings>();
	PlaySettings->LastExecutedPlayModeType = PlayMode_InViewPort;

	FPropertyChangedEvent PropChangeEvent(ULevelEditorPlaySettings::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(ULevelEditorPlaySettings, LastExecutedPlayModeType)));
	PlaySettings->PostEditChangeProperty(PropChangeEvent);

	PlaySettings->SaveConfig();

	//RecordLastExecutedPlayMode();

	if (FEngineAnalytics::IsAvailable())
	{
		// play location
		FString PlayLocationString;

		switch (PlaySettings->LastExecutedPlayModeLocation)
		{
		case PlayLocation_CurrentCameraLocation:
			PlayLocationString = TEXT("CurrentCameraLocation");
			break;

		case PlayLocation_DefaultPlayerStart:
			PlayLocationString = TEXT("DefaultPlayerStart");
			break;

		default:
			PlayLocationString = TEXT("<UNKNOWN>");
		}

		// play mode
		FString PlayModeString;

		switch (PlaySettings->LastExecutedPlayModeType)
		{
		case PlayMode_InViewPort:
			PlayModeString = TEXT("InViewPort");
			break;

		case PlayMode_InEditorFloating:
			PlayModeString = TEXT("InEditorFloating");
			break;

		case PlayMode_InMobilePreview:
			PlayModeString = TEXT("InMobilePreview");
			break;

		case PlayMode_InTargetedMobilePreview:
			PlayModeString = TEXT("InTargetedMobilePreview");
			break;

		case PlayMode_InVulkanPreview:
			PlayModeString = TEXT("InVulkanPreview");
			break;

		case PlayMode_InNewProcess:
			PlayModeString = TEXT("InNewProcess");
			break;

		case PlayMode_InVR:
			PlayModeString = TEXT("InVR");
			break;

		case PlayMode_Simulate:
			PlayModeString = TEXT("Simulate");
			break;

		default:
			PlayModeString = TEXT("<UNKNOWN>");
		}

		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.PIE"), TEXT("PlayLocation"), PlayLocationString);
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.PIE"), TEXT("PlayMode"), PlayModeString);
	}


	TSharedPtr<IAssetViewport> ActiveLevelViewport = LevelEditorModule.GetFirstActiveViewport();

	//const bool bAtPlayerStart = (GetPlayModeLocation() == PlayLocation_DefaultPlayerStart);
	const bool bAtPlayerStart = false;

	FRequestPlaySessionParams SessionParams;

	// Make sure we can find a path to the view port.  This will fail in cases where the view port widget
	// is in a backgrounded tab, etc.  We can't currently support starting PIE in a backgrounded tab
	// due to how PIE manages focus and requires event forwarding from the application.
	if (ActiveLevelViewport.IsValid() && FSlateApplication::Get().FindWidgetWindow(ActiveLevelViewport->AsWidget()).IsValid())
	{
		SessionParams.DestinationSlateViewport = ActiveLevelViewport;

		if (!bAtPlayerStart)
		{
			// Start the player where the camera is if not forcing from player start
			//SessionParams.StartLocation = ActiveLevelViewport->GetAssetViewportClient().GetViewLocation();
			//SessionParams.StartRotation = ActiveLevelViewport->GetAssetViewportClient().GetViewRotation();
			SessionParams.StartLocation = FVector::ZeroVector;
			SessionParams.StartRotation = FRotator::ZeroRotator;
		}
	}

	SessionParams.WorldType = EPlaySessionWorldType::PlayInEditor;
	SessionParams.GlobalMapOverride = TEXT("/Game/EditorUtility/DialogueTool/Level/DialogueToolLevel.DialogueToolLevel");
	SessionParams.GameModeOverride = AIH_GameMode_DialgueTool::StaticClass();
	SessionParams.SessionDestination = EPlaySessionDestinationType::InProcess;


	//GEditor->NewMap();

	FEditorFileUtils::LoadMap(TEXT("/Game/EditorUtility/DialogueTool/Level/DialogueToolLevel"));


	//if (!HasPlayWorld())
	//{
		// If there is an active level view port, play the game in it, otherwise make a new window.
	GUnrealEd->RequestPlaySession(SessionParams);
	//}
	//else
	//{
	//	// There is already a play world active which means simulate in editor is happening
	//	// Toggle to PIE
	//	check(!GIsPlayInEditorWorld);
	//	GUnrealEd->RequestToggleBetweenPIEandSIE();
	//}

	//FEditorDelegates::PostPIEStarted.AddUObject(this, &UPV_CinemaFunctionLibrary::OnPostPIEStarted);

}

void UIH_CinemaFunctionLibrary::StopDialoguePreview()
{
	GEditor->RequestEndPlayMap();
}
