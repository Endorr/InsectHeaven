// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/DialogueAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction::StaticRegisterNativesUDialogueAction()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_NoRegister()
	{
		return UDialogueAction::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitInput_MetaData[];
#endif
		static void NewProp_bWaitInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Library/Dialogue/DialogueAction.h" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueAction.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput_SetBit(void* Obj)
	{
		((UDialogueAction*)Obj)->bWaitInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput = { "bWaitInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueAction), &Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Statics::NewProp_bWaitInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_Statics::ClassParams = {
		&UDialogueAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction, 991938666);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction>()
	{
		return UDialogueAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction(Z_Construct_UClass_UDialogueAction, &UDialogueAction::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif