// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/IH_TableDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_TableDefine() {}
// Cross Module References
	INSECTHEAVEN_API UEnum* Z_Construct_UEnum_InsectHeaven_ETableDataType();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	static UEnum* ETableDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InsectHeaven_ETableDataType, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("ETableDataType"));
		}
		return Singleton;
	}
	template<> INSECTHEAVEN_API UEnum* StaticEnum<ETableDataType>()
	{
		return ETableDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETableDataType(ETableDataType_StaticEnum, TEXT("/Script/InsectHeaven"), TEXT("ETableDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InsectHeaven_ETableDataType_Hash() { return 3500895916U; }
	UEnum* Z_Construct_UEnum_InsectHeaven_ETableDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETableDataType"), 0, Get_Z_Construct_UEnum_InsectHeaven_ETableDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETableDataType::InGameLocal", (int64)ETableDataType::InGameLocal },
				{ "ETableDataType::ScriptLocal", (int64)ETableDataType::ScriptLocal },
				{ "ETableDataType::BasePathDir", (int64)ETableDataType::BasePathDir },
				{ "ETableDataType::BasePathWidget", (int64)ETableDataType::BasePathWidget },
				{ "ETableDataType::BasePathImage", (int64)ETableDataType::BasePathImage },
				{ "ETableDataType::ResourceWidget", (int64)ETableDataType::ResourceWidget },
				{ "ETableDataType::Character2D", (int64)ETableDataType::Character2D },
				{ "ETableDataType::Max_Table", (int64)ETableDataType::Max_Table },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BasePathDir.DisplayName", "BasePathDir" },
				{ "BasePathDir.Name", "ETableDataType::BasePathDir" },
				{ "BasePathImage.DisplayName", "BasePathImage" },
				{ "BasePathImage.Name", "ETableDataType::BasePathImage" },
				{ "BasePathWidget.DisplayName", "BasePathWidget" },
				{ "BasePathWidget.Name", "ETableDataType::BasePathWidget" },
				{ "Character2D.DisplayName", "Character2D" },
				{ "Character2D.Name", "ETableDataType::Character2D" },
				{ "InGameLocal.DisplayName", "GameLocal" },
				{ "InGameLocal.Name", "ETableDataType::InGameLocal" },
				{ "Max_Table.Name", "ETableDataType::Max_Table" },
				{ "ModuleRelativePath", "Table/IH_TableDefine.h" },
				{ "ResourceWidget.DisplayName", "ResourceWidget" },
				{ "ResourceWidget.Name", "ETableDataType::ResourceWidget" },
				{ "ScriptLocal.DisplayName", "ScriptLocal" },
				{ "ScriptLocal.Name", "ETableDataType::ScriptLocal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InsectHeaven,
				nullptr,
				"ETableDataType",
				"ETableDataType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
