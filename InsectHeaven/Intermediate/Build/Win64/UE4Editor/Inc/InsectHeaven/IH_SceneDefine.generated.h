// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_IH_SceneDefine_generated_h
#error "IH_SceneDefine.generated.h already included, missing '#pragma once' in IH_SceneDefine.h"
#endif
#define INSECTHEAVEN_IH_SceneDefine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Scene_IH_SceneDefine_h


#define FOREACH_ENUM_ESCENETYPE(op) \
	op(ESceneType::MainLobby) \
	op(ESceneType::Max_Scene) 

enum class ESceneType : uint32;
template<> INSECTHEAVEN_API UEnum* StaticEnum<ESceneType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
