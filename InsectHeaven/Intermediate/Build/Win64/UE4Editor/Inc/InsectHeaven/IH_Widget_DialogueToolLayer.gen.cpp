// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/DialogueTool/IH_Widget_DialogueToolLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_DialogueToolLayer() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayer_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayer();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	DEFINE_FUNCTION(UIH_Widget_DialogueToolLayer::execOnClickAddToDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddToDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolLayer::execOnClickAddToUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddToUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolLayer::execOnClickDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickDelete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolLayer::execOnClickContextMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickContextMenu();
		P_NATIVE_END;
	}
	static FName NAME_UIH_Widget_DialogueToolLayer_PlayAppearAnim = FName(TEXT("PlayAppearAnim"));
	void UIH_Widget_DialogueToolLayer::PlayAppearAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolLayer_PlayAppearAnim),NULL);
	}
	static FName NAME_UIH_Widget_DialogueToolLayer_PlayPullAnim = FName(TEXT("PlayPullAnim"));
	void UIH_Widget_DialogueToolLayer::PlayPullAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolLayer_PlayPullAnim),NULL);
	}
	static FName NAME_UIH_Widget_DialogueToolLayer_PlayPushAnim = FName(TEXT("PlayPushAnim"));
	void UIH_Widget_DialogueToolLayer::PlayPushAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIH_Widget_DialogueToolLayer_PlayPushAnim),NULL);
	}
	void UIH_Widget_DialogueToolLayer::StaticRegisterNativesUIH_Widget_DialogueToolLayer()
	{
		UClass* Class = UIH_Widget_DialogueToolLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickAddToDown", &UIH_Widget_DialogueToolLayer::execOnClickAddToDown },
			{ "OnClickAddToUp", &UIH_Widget_DialogueToolLayer::execOnClickAddToUp },
			{ "OnClickContextMenu", &UIH_Widget_DialogueToolLayer::execOnClickContextMenu },
			{ "OnClickDelete", &UIH_Widget_DialogueToolLayer::execOnClickDelete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "OnClickAddToDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "OnClickAddToUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "OnClickContextMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "OnClickDelete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "PlayAppearAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "PlayPullAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolLayer, nullptr, "PlayPushAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayer_NoRegister()
	{
		return UIH_Widget_DialogueToolLayer::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToDown, "OnClickAddToDown" }, // 712595103
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickAddToUp, "OnClickAddToUp" }, // 1229764761
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickContextMenu, "OnClickContextMenu" }, // 3969907927
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_OnClickDelete, "OnClickDelete" }, // 4078007709
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayAppearAnim, "PlayAppearAnim" }, // 3704336368
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPullAnim, "PlayPullAnim" }, // 921464191
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolLayer_PlayPushAnim, "PlayPushAnim" }, // 1041426754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_DialogueToolLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::ClassParams = {
		&UIH_Widget_DialogueToolLayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_DialogueToolLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_DialogueToolLayer, 2643009322);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_DialogueToolLayer>()
	{
		return UIH_Widget_DialogueToolLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_DialogueToolLayer(Z_Construct_UClass_UIH_Widget_DialogueToolLayer, &UIH_Widget_DialogueToolLayer::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_DialogueToolLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_DialogueToolLayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
