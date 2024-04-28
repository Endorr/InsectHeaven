// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Scene/IH_SceneBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_SceneBase() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneBase_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneBase();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateBase();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UIH_SceneBase::StaticRegisterNativesUIH_SceneBase()
	{
	}
	UClass* Z_Construct_UClass_UIH_SceneBase_NoRegister()
	{
		return UIH_SceneBase::StaticClass();
	}
	struct Z_Construct_UClass_UIH_SceneBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_SceneBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_StateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SceneBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Scene/IH_SceneBase.h" },
		{ "ModuleRelativePath", "Scene/IH_SceneBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_SceneBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_SceneBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_SceneBase_Statics::ClassParams = {
		&UIH_SceneBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIH_SceneBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SceneBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_SceneBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_SceneBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_SceneBase, 378035604);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_SceneBase>()
	{
		return UIH_SceneBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_SceneBase(Z_Construct_UClass_UIH_SceneBase, &UIH_SceneBase::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_SceneBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_SceneBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
