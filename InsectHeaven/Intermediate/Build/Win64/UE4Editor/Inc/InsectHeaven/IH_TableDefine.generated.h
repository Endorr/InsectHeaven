// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_IH_TableDefine_generated_h
#error "IH_TableDefine.generated.h already included, missing '#pragma once' in IH_TableDefine.h"
#endif
#define INSECTHEAVEN_IH_TableDefine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Table_IH_TableDefine_h


#define FOREACH_ENUM_ETABLEDATATYPE(op) \
	op(ETableDataType::InGameLocal) \
	op(ETableDataType::ScriptLocal) \
	op(ETableDataType::BasePathDir) \
	op(ETableDataType::BasePathWidget) \
	op(ETableDataType::BasePathImage) \
	op(ETableDataType::ResourceWidget) \
	op(ETableDataType::Character2D) \
	op(ETableDataType::Max_Table) 

enum class ETableDataType : uint32;
template<> INSECTHEAVEN_API UEnum* StaticEnum<ETableDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
