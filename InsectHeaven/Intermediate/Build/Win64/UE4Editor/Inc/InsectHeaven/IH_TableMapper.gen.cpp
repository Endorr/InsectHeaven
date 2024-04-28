// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/TableMapper/IH_TableMapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_TableMapper() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_TableMapper_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_TableMapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UIH_TableMapper::StaticRegisterNativesUIH_TableMapper()
	{
	}
	UClass* Z_Construct_UClass_UIH_TableMapper_NoRegister()
	{
		return UIH_TableMapper::StaticClass();
	}
	struct Z_Construct_UClass_UIH_TableMapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_TableMapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_TableMapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Table/TableMapper/IH_TableMapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Table/TableMapper/IH_TableMapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_TableMapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_TableMapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_TableMapper_Statics::ClassParams = {
		&UIH_TableMapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_TableMapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_TableMapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_TableMapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_TableMapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_TableMapper, 3455830704);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_TableMapper>()
	{
		return UIH_TableMapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_TableMapper(Z_Construct_UClass_UIH_TableMapper, &UIH_TableMapper::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_TableMapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_TableMapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
