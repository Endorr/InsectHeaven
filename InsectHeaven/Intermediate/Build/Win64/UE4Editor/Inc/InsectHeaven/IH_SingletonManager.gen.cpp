// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/IH_SingletonManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_SingletonManager() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SingletonManager_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SingletonManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	void UIH_SingletonManager::StaticRegisterNativesUIH_SingletonManager()
	{
	}
	UClass* Z_Construct_UClass_UIH_SingletonManager_NoRegister()
	{
		return UIH_SingletonManager::StaticClass();
	}
	struct Z_Construct_UClass_UIH_SingletonManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_SingletonManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SingletonManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Library/IH_SingletonManager.h" },
		{ "ModuleRelativePath", "Library/IH_SingletonManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SingletonManager_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Library/IH_SingletonManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_SingletonManager_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_SingletonManager, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_SingletonManager_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SingletonManager_Statics::NewProp_GameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_SingletonManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_SingletonManager_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_SingletonManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_SingletonManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_SingletonManager_Statics::ClassParams = {
		&UIH_SingletonManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIH_SingletonManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SingletonManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_SingletonManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SingletonManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_SingletonManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_SingletonManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_SingletonManager, 1855768508);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_SingletonManager>()
	{
		return UIH_SingletonManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_SingletonManager(Z_Construct_UClass_UIH_SingletonManager, &UIH_SingletonManager::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_SingletonManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_SingletonManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
