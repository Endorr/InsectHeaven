// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/InsectHeavenGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsectHeavenGameModeBase() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AInsectHeavenGameModeBase_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AInsectHeavenGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void AInsectHeavenGameModeBase::StaticRegisterNativesAInsectHeavenGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AInsectHeavenGameModeBase_NoRegister()
	{
		return AInsectHeavenGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AInsectHeavenGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InsectHeavenGameModeBase.h" },
		{ "ModuleRelativePath", "InsectHeavenGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInsectHeavenGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::ClassParams = {
		&AInsectHeavenGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInsectHeavenGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInsectHeavenGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInsectHeavenGameModeBase, 4248538179);
	template<> INSECTHEAVEN_API UClass* StaticClass<AInsectHeavenGameModeBase>()
	{
		return AInsectHeavenGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInsectHeavenGameModeBase(Z_Construct_UClass_AInsectHeavenGameModeBase, &AInsectHeavenGameModeBase::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("AInsectHeavenGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInsectHeavenGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
