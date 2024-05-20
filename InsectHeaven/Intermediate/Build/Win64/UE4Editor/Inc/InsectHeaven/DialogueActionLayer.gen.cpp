// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/DialogueActionLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueActionLayer() {}
// Cross Module References
	INSECTHEAVEN_API UFunction* Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueActionLayer();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueActionLayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics
	{
		struct DialogueActionLayer_eventOnPlayingActionChanged_Parms
		{
			int32 ActionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueActionLayer_eventOnPlayingActionChanged_Parms, ActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::NewProp_ActionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueActionLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueActionLayer, nullptr, "OnPlayingActionChanged__DelegateSignature", nullptr, nullptr, sizeof(DialogueActionLayer_eventOnPlayingActionChanged_Parms), Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDialogueActionLayer::StaticRegisterNativesUDialogueActionLayer()
	{
	}
	UClass* Z_Construct_UClass_UDialogueActionLayer_NoRegister()
	{
		return UDialogueActionLayer::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueActionLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueActionLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueActionLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDialogueActionLayer_OnPlayingActionChanged__DelegateSignature, "OnPlayingActionChanged__DelegateSignature" }, // 362833717
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueActionLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Library/Dialogue/DialogueActionLayer.h" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueActionLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueActionLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueActionLayer, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueActionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueActionLayer_Statics::NewProp_Actions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueActionLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueActionLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueActionLayer_Statics::ClassParams = {
		&UDialogueActionLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UDialogueActionLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueActionLayer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueActionLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueActionLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueActionLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueActionLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueActionLayer, 1114772552);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueActionLayer>()
	{
		return UDialogueActionLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueActionLayer(Z_Construct_UClass_UDialogueActionLayer, &UDialogueActionLayer::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueActionLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueActionLayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
