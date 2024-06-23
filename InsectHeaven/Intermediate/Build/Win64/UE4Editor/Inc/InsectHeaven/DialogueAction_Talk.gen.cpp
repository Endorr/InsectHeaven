// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_Talk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_Talk() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Talk_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Talk();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction_Talk::StaticRegisterNativesUDialogueAction_Talk()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_Talk_NoRegister()
	{
		return UDialogueAction_Talk::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_Talk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TalkString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_Talk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Talk, ActorName), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString = { "TalkString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Talk, TalkString), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_Talk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_Talk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_Talk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_Talk_Statics::ClassParams = {
		&UDialogueAction_Talk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_Talk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_Talk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_Talk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_Talk, 3366701155);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_Talk>()
	{
		return UDialogueAction_Talk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_Talk(Z_Construct_UClass_UDialogueAction_Talk, &UDialogueAction_Talk::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_Talk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_Talk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
