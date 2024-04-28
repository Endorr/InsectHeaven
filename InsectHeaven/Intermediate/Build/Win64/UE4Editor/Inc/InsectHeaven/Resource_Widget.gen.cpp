// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/DataStruct/Resource_Widget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResource_Widget() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FResource_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FResource_Widget>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FResource_Widget cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FResource_Widget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FResource_Widget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResource_Widget, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("Resource_Widget"), sizeof(FResource_Widget), Get_Z_Construct_UScriptStruct_FResource_Widget_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FResource_Widget>()
{
	return FResource_Widget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResource_Widget(FResource_Widget::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("Resource_Widget"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFResource_Widget
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFResource_Widget()
	{
		UScriptStruct::DeferCppStructOps<FResource_Widget>(FName(TEXT("Resource_Widget")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFResource_Widget;
	struct Z_Construct_UScriptStruct_FResource_Widget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResource_Widget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Table/DataStruct/Resource_Widget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResource_Widget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResource_Widget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Resource_Widget" },
		{ "ModuleRelativePath", "Table/DataStruct/Resource_Widget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResource_Widget, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_TypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_PathFile_MetaData[] = {
		{ "Category", "Resource_Widget" },
		{ "ModuleRelativePath", "Table/DataStruct/Resource_Widget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_PathFile = { "PathFile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResource_Widget, PathFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_PathFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_PathFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResource_Widget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_TypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResource_Widget_Statics::NewProp_PathFile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResource_Widget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Resource_Widget",
		sizeof(FResource_Widget),
		alignof(FResource_Widget),
		Z_Construct_UScriptStruct_FResource_Widget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResource_Widget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResource_Widget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResource_Widget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResource_Widget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResource_Widget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Resource_Widget"), sizeof(FResource_Widget), Get_Z_Construct_UScriptStruct_FResource_Widget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResource_Widget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResource_Widget_Hash() { return 2124592933U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
