// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_ShowActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_ShowActor() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_ShowActor_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_ShowActor();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction_ShowActor::StaticRegisterNativesUDialogueAction_ShowActor()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_ShowActor_NoRegister()
	{
		return UDialogueAction_ShowActor::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_ShowActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeft_MetaData[];
#endif
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_ShowActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_ShowActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_ShowActor.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_ShowActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_ActorID_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_ShowActor.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_ShowActor, ActorID), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_ActorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_ActorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_ShowActor.h" },
		{ "MultiLine", "true" },
	};
#endif
	void Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((UDialogueAction_ShowActor*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft = { "IsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueAction_ShowActor), &Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_ShowActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_ActorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_ShowActor_Statics::NewProp_IsLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_ShowActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_ShowActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_ShowActor_Statics::ClassParams = {
		&UDialogueAction_ShowActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_ShowActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_ShowActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_ShowActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_ShowActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_ShowActor, 4008577050);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_ShowActor>()
	{
		return UDialogueAction_ShowActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_ShowActor(Z_Construct_UClass_UDialogueAction_ShowActor, &UDialogueAction_ShowActor::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_ShowActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_ShowActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
