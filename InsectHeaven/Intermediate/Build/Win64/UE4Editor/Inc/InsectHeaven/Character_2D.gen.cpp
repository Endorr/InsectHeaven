// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/DataStruct/Character_2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_2D() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacter_2D();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacter_2D>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacter_2D cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCharacter_2D::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FCharacter_2D_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacter_2D, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("Character_2D"), sizeof(FCharacter_2D), Get_Z_Construct_UScriptStruct_FCharacter_2D_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FCharacter_2D>()
{
	return FCharacter_2D::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacter_2D(FCharacter_2D::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("Character_2D"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFCharacter_2D
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFCharacter_2D()
	{
		UScriptStruct::DeferCppStructOps<FCharacter_2D>(FName(TEXT("Character_2D")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFCharacter_2D;
	struct Z_Construct_UScriptStruct_FCharacter_2D_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacter_2D_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Table/DataStruct/Character_2D.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacter_2D>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Character_2D" },
		{ "ModuleRelativePath", "Table/DataStruct/Character_2D.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacter_2D, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_ImageID_MetaData[] = {
		{ "Category", "Character_2D" },
		{ "ModuleRelativePath", "Table/DataStruct/Character_2D.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_ImageID = { "ImageID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacter_2D, ImageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_ImageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_ImageID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacter_2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacter_2D_Statics::NewProp_ImageID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacter_2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Character_2D",
		sizeof(FCharacter_2D),
		alignof(FCharacter_2D),
		Z_Construct_UScriptStruct_FCharacter_2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter_2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacter_2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacter_2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacter_2D()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacter_2D_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Character_2D"), sizeof(FCharacter_2D), Get_Z_Construct_UScriptStruct_FCharacter_2D_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacter_2D_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacter_2D_Hash() { return 2915747006U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
