// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_DialogueToolActionAdd() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	DEFINE_FUNCTION(UIH_Widget_DialogueToolActionAdd::execOnClickAddSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddSelectButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolActionAdd::execOnClickAddEmptyButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddEmptyButton();
		P_NATIVE_END;
	}
	static FName NAME_UIH_Widget_DialogueToolActionAdd_PlayPullAnim = FName(TEXT("PlayPullAnim"));
	void UIH_Widget_DialogueToolActionAdd::PlayPullAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolActionAdd_PlayPullAnim),NULL);
	}
	static FName NAME_UIH_Widget_DialogueToolActionAdd_PlayPushAnim = FName(TEXT("PlayPushAnim"));
	void UIH_Widget_DialogueToolActionAdd::PlayPushAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolActionAdd_PlayPushAnim),NULL);
	}
	void UIH_Widget_DialogueToolActionAdd::StaticRegisterNativesUIH_Widget_DialogueToolActionAdd()
	{
		UClass* Class = UIH_Widget_DialogueToolActionAdd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickAddEmptyButton", &UIH_Widget_DialogueToolActionAdd::execOnClickAddEmptyButton },
			{ "OnClickAddSelectButton", &UIH_Widget_DialogueToolActionAdd::execOnClickAddSelectButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd, nullptr, "OnClickAddEmptyButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd, nullptr, "OnClickAddSelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd, nullptr, "PlayPullAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd, nullptr, "PlayPushAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_NoRegister()
	{
		return UIH_Widget_DialogueToolActionAdd::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddEmptyButton, "OnClickAddEmptyButton" }, // 2326400535
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_OnClickAddSelectButton, "OnClickAddSelectButton" }, // 1804251278
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPullAnim, "PlayPullAnim" }, // 2630646228
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolActionAdd_PlayPushAnim, "PlayPushAnim" }, // 1767267568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolActionAdd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_DialogueToolActionAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::ClassParams = {
		&UIH_Widget_DialogueToolActionAdd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_DialogueToolActionAdd, 335773861);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_DialogueToolActionAdd>()
	{
		return UIH_Widget_DialogueToolActionAdd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_DialogueToolActionAdd(Z_Construct_UClass_UIH_Widget_DialogueToolActionAdd, &UIH_Widget_DialogueToolActionAdd::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_DialogueToolActionAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_DialogueToolActionAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
