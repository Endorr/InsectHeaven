// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Scene/IH_SceneManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_SceneManager() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FChangeSceneData();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneManager_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SceneManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateMachine_NoRegister();
// End Cross Module References
class UScriptStruct* FChangeSceneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FChangeSceneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeSceneData, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("ChangeSceneData"), sizeof(FChangeSceneData), Get_Z_Construct_UScriptStruct_FChangeSceneData_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FChangeSceneData>()
{
	return FChangeSceneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChangeSceneData(FChangeSceneData::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("ChangeSceneData"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFChangeSceneData
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFChangeSceneData()
	{
		UScriptStruct::DeferCppStructOps<FChangeSceneData>(FName(TEXT("ChangeSceneData")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFChangeSceneData;
	struct Z_Construct_UScriptStruct_FChangeSceneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeSceneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scene/IH_SceneManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeSceneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeSceneData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeSceneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		nullptr,
		&NewStructOps,
		"ChangeSceneData",
		sizeof(FChangeSceneData),
		alignof(FChangeSceneData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeSceneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeSceneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChangeSceneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChangeSceneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChangeSceneData"), sizeof(FChangeSceneData), Get_Z_Construct_UScriptStruct_FChangeSceneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChangeSceneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChangeSceneData_Hash() { return 1462062607U; }
	void UIH_SceneManager::StaticRegisterNativesUIH_SceneManager()
	{
	}
	UClass* Z_Construct_UClass_UIH_SceneManager_NoRegister()
	{
		return UIH_SceneManager::StaticClass();
	}
	struct Z_Construct_UClass_UIH_SceneManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeSceneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeSceneData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneStateMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_SceneManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SceneManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Scene/IH_SceneManager.h" },
		{ "ModuleRelativePath", "Scene/IH_SceneManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_ChangeSceneData_MetaData[] = {
		{ "ModuleRelativePath", "Scene/IH_SceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_ChangeSceneData = { "ChangeSceneData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_SceneManager, ChangeSceneData), Z_Construct_UScriptStruct_FChangeSceneData, METADATA_PARAMS(Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_ChangeSceneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_ChangeSceneData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_SceneStateMachine_MetaData[] = {
		{ "ModuleRelativePath", "Scene/IH_SceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_SceneStateMachine = { "SceneStateMachine", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_SceneManager, SceneStateMachine), Z_Construct_UClass_UIH_StateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_SceneStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_SceneStateMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_SceneManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_ChangeSceneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_SceneManager_Statics::NewProp_SceneStateMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_SceneManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_SceneManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_SceneManager_Statics::ClassParams = {
		&UIH_SceneManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIH_SceneManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SceneManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_SceneManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SceneManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_SceneManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_SceneManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_SceneManager, 1520780264);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_SceneManager>()
	{
		return UIH_SceneManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_SceneManager(Z_Construct_UClass_UIH_SceneManager, &UIH_SceneManager::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_SceneManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_SceneManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
