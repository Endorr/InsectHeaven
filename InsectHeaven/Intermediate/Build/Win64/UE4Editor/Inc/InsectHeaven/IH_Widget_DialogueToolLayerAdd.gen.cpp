// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/DialogueTool/IH_Widget_DialogueToolLayerAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_DialogueToolLayerAdd() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	DEFINE_FUNCTION(UIH_Widget_DialogueToolLayerAdd::execOnClickAddButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddButton();
		P_NATIVE_END;
	}
	static FName NAME_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim = FName(TEXT("PlayPullAnim"));
	void UIH_Widget_DialogueToolLayerAdd::PlayPullAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim),NULL);
	}
	static FName NAME_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim = FName(TEXT("PlayPushAnim"));
	void UIH_Widget_DialogueToolLayerAdd::PlayPushAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim),NULL);
	}
	void UIH_Widget_DialogueToolLayerAdd::StaticRegisterNativesUIH_Widget_DialogueToolLayerAdd()
	{
		UClass* Class = UIH_Widget_DialogueToolLayerAdd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickAddButton", &UIH_Widget_DialogueToolLayerAdd::execOnClickAddButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayerAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd, nullptr, "OnClickAddButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayerAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd, nullptr, "PlayPullAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayerAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd, nullptr, "PlayPushAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_NoRegister()
	{
		return UIH_Widget_DialogueToolLayerAdd::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_OnClickAddButton, "OnClickAddButton" }, // 2536875469
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPullAnim, "PlayPullAnim" }, // 3436279246
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayerAdd_PlayPushAnim, "PlayPushAnim" }, // 1324452724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayerAdd.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayerAdd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_DialogueToolLayerAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::ClassParams = {
		&UIH_Widget_DialogueToolLayerAdd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_DialogueToolLayerAdd, 2299427381);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_DialogueToolLayerAdd>()
	{
		return UIH_Widget_DialogueToolLayerAdd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_DialogueToolLayerAdd(Z_Construct_UClass_UIH_Widget_DialogueToolLayerAdd, &UIH_Widget_DialogueToolLayerAdd::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_DialogueToolLayerAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_DialogueToolLayerAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
