// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/DataStruct/InGame_Local.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGame_Local() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FInGame_Local();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FInGame_Local>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInGame_Local cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FInGame_Local::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FInGame_Local_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInGame_Local, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("InGame_Local"), sizeof(FInGame_Local), Get_Z_Construct_UScriptStruct_FInGame_Local_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FInGame_Local>()
{
	return FInGame_Local::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInGame_Local(FInGame_Local::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("InGame_Local"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFInGame_Local
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFInGame_Local()
	{
		UScriptStruct::DeferCppStructOps<FInGame_Local>(FName(TEXT("InGame_Local")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFInGame_Local;
	struct Z_Construct_UScriptStruct_FInGame_Local_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Korean_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Korean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInGame_Local_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Table/DataStruct/InGame_Local.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInGame_Local_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInGame_Local>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInGame_Local_Statics::NewProp_Korean_MetaData[] = {
		{ "Category", "InGame_Local" },
		{ "ModuleRelativePath", "Table/DataStruct/InGame_Local.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInGame_Local_Statics::NewProp_Korean = { "Korean", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInGame_Local, Korean), METADATA_PARAMS(Z_Construct_UScriptStruct_FInGame_Local_Statics::NewProp_Korean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGame_Local_Statics::NewProp_Korean_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInGame_Local_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGame_Local_Statics::NewProp_Korean,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInGame_Local_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InGame_Local",
		sizeof(FInGame_Local),
		alignof(FInGame_Local),
		Z_Construct_UScriptStruct_FInGame_Local_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGame_Local_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInGame_Local_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGame_Local_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInGame_Local()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInGame_Local_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InGame_Local"), sizeof(FInGame_Local), Get_Z_Construct_UScriptStruct_FInGame_Local_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInGame_Local_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInGame_Local_Hash() { return 3026178647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
