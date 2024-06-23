// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/IH_GameMode_DialgueTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_GameMode_DialgueTool() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AIH_GameMode_DialgueTool_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AIH_GameMode_DialgueTool();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void AIH_GameMode_DialgueTool::StaticRegisterNativesAIH_GameMode_DialgueTool()
	{
	}
	UClass* Z_Construct_UClass_AIH_GameMode_DialgueTool_NoRegister()
	{
		return AIH_GameMode_DialgueTool::StaticClass();
	}
	struct Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Library/Dialogue/IH_GameMode_DialgueTool.h" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_GameMode_DialgueTool.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIH_GameMode_DialgueTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::ClassParams = {
		&AIH_GameMode_DialgueTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIH_GameMode_DialgueTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIH_GameMode_DialgueTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIH_GameMode_DialgueTool, 2155685244);
	template<> INSECTHEAVEN_API UClass* StaticClass<AIH_GameMode_DialgueTool>()
	{
		return AIH_GameMode_DialgueTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIH_GameMode_DialgueTool(Z_Construct_UClass_AIH_GameMode_DialgueTool, &AIH_GameMode_DialgueTool::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("AIH_GameMode_DialgueTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIH_GameMode_DialgueTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
