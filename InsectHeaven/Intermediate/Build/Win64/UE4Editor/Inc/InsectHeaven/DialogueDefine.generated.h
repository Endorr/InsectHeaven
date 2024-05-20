// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_DialogueDefine_generated_h
#error "DialogueDefine.generated.h already included, missing '#pragma once' in DialogueDefine.h"
#endif
#define INSECTHEAVEN_DialogueDefine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueDefine_h


#define FOREACH_ENUM_EACTIONSTATETYPE(op) \
	op(EActionStateType::None) \
	op(EActionStateType::InProgress) \
	op(EActionStateType::WaitInput) \
	op(EActionStateType::Finished) 

enum class EActionStateType : uint8;
template<> INSECTHEAVEN_API UEnum* StaticEnum<EActionStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
