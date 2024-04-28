#pragma once

DECLARE_MULTICAST_DELEGATE_OneParam(FIH_LoadLevelDelegate, const FString&);
DECLARE_MULTICAST_DELEGATE_OneParam(FIH_ChangeSceneState, uint8);
DECLARE_DELEGATE_OneParam(FLoadedLevelInitialized, const FString&);

typedef int32 IH_Handle;