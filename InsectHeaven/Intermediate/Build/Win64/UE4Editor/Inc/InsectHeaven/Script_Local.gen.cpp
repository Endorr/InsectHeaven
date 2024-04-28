// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/DataStruct/Script_Local.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScript_Local() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FScript_Local();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FScript_Local>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FScript_Local cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FScript_Local::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FScript_Local_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScript_Local, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("Script_Local"), sizeof(FScript_Local), Get_Z_Construct_UScriptStruct_FScript_Local_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FScript_Local>()
{
	return FScript_Local::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScript_Local(FScript_Local::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("Script_Local"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFScript_Local
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFScript_Local()
	{
		UScriptStruct::DeferCppStructOps<FScript_Local>(FName(TEXT("Script_Local")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFScript_Local;
	struct Z_Construct_UScriptStruct_FScript_Local_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Korean_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Korean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Test;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScript_Local_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Table/DataStruct/Script_Local.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScript_Local_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScript_Local>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Korean_MetaData[] = {
		{ "Category", "Script_Local" },
		{ "ModuleRelativePath", "Table/DataStruct/Script_Local.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Korean = { "Korean", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScript_Local, Korean), METADATA_PARAMS(Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Korean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Korean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Test_MetaData[] = {
		{ "Category", "Script_Local" },
		{ "ModuleRelativePath", "Table/DataStruct/Script_Local.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScript_Local, Test), METADATA_PARAMS(Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Test_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScript_Local_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Korean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScript_Local_Statics::NewProp_Test,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScript_Local_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Script_Local",
		sizeof(FScript_Local),
		alignof(FScript_Local),
		Z_Construct_UScriptStruct_FScript_Local_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScript_Local_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScript_Local_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScript_Local_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScript_Local()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScript_Local_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Script_Local"), sizeof(FScript_Local), Get_Z_Construct_UScriptStruct_FScript_Local_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScript_Local_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScript_Local_Hash() { return 2868353002U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
