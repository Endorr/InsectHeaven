// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Scene/IH_LevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_LevelScriptActor() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AIH_LevelScriptActor_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AIH_LevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UEnum* Z_Construct_UEnum_InsectHeaven_ESceneType();
// End Cross Module References
	void AIH_LevelScriptActor::StaticRegisterNativesAIH_LevelScriptActor()
	{
	}
	UClass* Z_Construct_UClass_AIH_LevelScriptActor_NoRegister()
	{
		return AIH_LevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_AIH_LevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GameSceneType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSceneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameSceneType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIH_LevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIH_LevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Scene/IH_LevelScriptActor.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Scene/IH_LevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType_MetaData[] = {
		{ "Category", "IH_LevelScriptActor" },
		{ "ModuleRelativePath", "Scene/IH_LevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType = { "GameSceneType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIH_LevelScriptActor, GameSceneType), Z_Construct_UEnum_InsectHeaven_ESceneType, METADATA_PARAMS(Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIH_LevelScriptActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIH_LevelScriptActor_Statics::NewProp_GameSceneType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIH_LevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIH_LevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIH_LevelScriptActor_Statics::ClassParams = {
		&AIH_LevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIH_LevelScriptActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIH_LevelScriptActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIH_LevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIH_LevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIH_LevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIH_LevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIH_LevelScriptActor, 83819418);
	template<> INSECTHEAVEN_API UClass* StaticClass<AIH_LevelScriptActor>()
	{
		return AIH_LevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIH_LevelScriptActor(Z_Construct_UClass_AIH_LevelScriptActor, &AIH_LevelScriptActor::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("AIH_LevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIH_LevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
