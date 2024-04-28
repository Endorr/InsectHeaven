// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Scene/Lobby/IH_SceneLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_SceneLobby() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneLobby_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneLobby();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneBase();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UIH_SceneLobby::StaticRegisterNativesUIH_SceneLobby()
	{
	}
	UClass* Z_Construct_UClass_UIH_SceneLobby_NoRegister()
	{
		return UIH_SceneLobby::StaticClass();
	}
	struct Z_Construct_UClass_UIH_SceneLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_SceneLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_SceneBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SceneLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Scene/Lobby/IH_SceneLobby.h" },
		{ "ModuleRelativePath", "Scene/Lobby/IH_SceneLobby.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_SceneLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_SceneLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_SceneLobby_Statics::ClassParams = {
		&UIH_SceneLobby::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIH_SceneLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SceneLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_SceneLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_SceneLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_SceneLobby, 127091999);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_SceneLobby>()
	{
		return UIH_SceneLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_SceneLobby(Z_Construct_UClass_UIH_SceneLobby, &UIH_SceneLobby::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_SceneLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_SceneLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
