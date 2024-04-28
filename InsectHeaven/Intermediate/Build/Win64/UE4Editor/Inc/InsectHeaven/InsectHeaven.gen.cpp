// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/InsectHeaven.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsectHeaven() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UInsectHeaven_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UInsectHeaven();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	void UInsectHeaven::StaticRegisterNativesUInsectHeaven()
	{
	}
	UClass* Z_Construct_UClass_UInsectHeaven_NoRegister()
	{
		return UInsectHeaven::StaticClass();
	}
	struct Z_Construct_UClass_UInsectHeaven_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pBaseWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_pBaseWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInsectHeaven_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInsectHeaven_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InsectHeaven.h" },
		{ "ModuleRelativePath", "InsectHeaven.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInsectHeaven_Statics::NewProp_pBaseWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UHI_GameInstance" },
		{ "ModuleRelativePath", "InsectHeaven.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInsectHeaven_Statics::NewProp_pBaseWorld = { "pBaseWorld", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInsectHeaven, pBaseWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInsectHeaven_Statics::NewProp_pBaseWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInsectHeaven_Statics::NewProp_pBaseWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInsectHeaven_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInsectHeaven_Statics::NewProp_pBaseWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInsectHeaven_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInsectHeaven>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInsectHeaven_Statics::ClassParams = {
		&UInsectHeaven::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInsectHeaven_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInsectHeaven_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInsectHeaven_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInsectHeaven_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInsectHeaven()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInsectHeaven_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInsectHeaven, 972289147);
	template<> INSECTHEAVEN_API UClass* StaticClass<UInsectHeaven>()
	{
		return UInsectHeaven::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInsectHeaven(Z_Construct_UClass_UInsectHeaven, &UInsectHeaven::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UInsectHeaven"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInsectHeaven);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
