// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_Background.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_Background() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Background_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Background();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction_Background::StaticRegisterNativesUDialogueAction_Background()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_Background_NoRegister()
	{
		return UDialogueAction_Background::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_Background_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BackgroundID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSwitching_MetaData[];
#endif
		static void NewProp_IsSwitching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSwitching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_Background_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Background_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_Background.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Background.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_BackgroundID_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Background.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_BackgroundID = { "BackgroundID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Background, BackgroundID), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_BackgroundID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_BackgroundID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Background.h" },
		{ "MultiLine", "true" },
	};
#endif
	void Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching_SetBit(void* Obj)
	{
		((UDialogueAction_Background*)Obj)->IsSwitching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching = { "IsSwitching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueAction_Background), &Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_Background_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_BackgroundID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Background_Statics::NewProp_IsSwitching,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_Background_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_Background>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_Background_Statics::ClassParams = {
		&UDialogueAction_Background::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_Background_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Background_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Background_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Background_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_Background()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_Background_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_Background, 170866218);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_Background>()
	{
		return UDialogueAction_Background::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_Background(Z_Construct_UClass_UDialogueAction_Background, &UDialogueAction_Background::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_Background"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_Background);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
