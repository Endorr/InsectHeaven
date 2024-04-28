// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/DialogueDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueDefine() {}
// Cross Module References
	INSECTHEAVEN_API UEnum* Z_Construct_UEnum_InsectHeaven_EActionStateType();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	static UEnum* EActionStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InsectHeaven_EActionStateType, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("EActionStateType"));
		}
		return Singleton;
	}
	template<> INSECTHEAVEN_API UEnum* StaticEnum<EActionStateType>()
	{
		return EActionStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActionStateType(EActionStateType_StaticEnum, TEXT("/Script/InsectHeaven"), TEXT("EActionStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InsectHeaven_EActionStateType_Hash() { return 1812627028U; }
	UEnum* Z_Construct_UEnum_InsectHeaven_EActionStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActionStateType"), 0, Get_Z_Construct_UEnum_InsectHeaven_EActionStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "InProgress", (int64)InProgress },
				{ "WaitInput", (int64)WaitInput },
				{ "Finished", (int64)Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Finished.DisplayName", "Finished" },
				{ "Finished.Name", "Finished" },
				{ "InProgress.DisplayName", "InProgress" },
				{ "InProgress.Name", "InProgress" },
				{ "ModuleRelativePath", "Library/Dialogue/DialogueDefine.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "None" },
				{ "WaitInput.DisplayName", "WaitInput" },
				{ "WaitInput.Name", "WaitInput" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InsectHeaven,
				nullptr,
				"EActionStateType",
				"EActionStateType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
