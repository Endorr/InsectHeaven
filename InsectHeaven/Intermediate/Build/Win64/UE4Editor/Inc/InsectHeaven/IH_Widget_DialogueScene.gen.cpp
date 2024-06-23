// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/Dialogue/IH_Widget_DialogueScene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_DialogueScene() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueScene_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueScene();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIH_Widget_DialogueScene::execOnCommit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCommit();
		P_NATIVE_END;
	}
	void UIH_Widget_DialogueScene::StaticRegisterNativesUIH_Widget_DialogueScene()
	{
		UClass* Class = UIH_Widget_DialogueScene::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCommit", &UIH_Widget_DialogueScene::execOnCommit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueScene, nullptr, "OnCommit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_DialogueScene_NoRegister()
	{
		return UIH_Widget_DialogueScene::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_DialogueScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Img_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Img_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Img_BackgroundSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Img_BackgroundSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Txt_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Txt_Script;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Canvas_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Canvas_Script;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Commit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Commit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Img_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Img_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Img_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Img_Right;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_DialogueScene_OnCommit, "OnCommit" }, // 1180596491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Background = { "CPP_Img_Background", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Img_Background), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_BackgroundSwitch_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_BackgroundSwitch = { "CPP_Img_BackgroundSwitch", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Img_BackgroundSwitch), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_BackgroundSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_BackgroundSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Txt_Script_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Txt_Script = { "CPP_Txt_Script", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Txt_Script), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Txt_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Txt_Script_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Canvas_Script_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Canvas_Script = { "CPP_Canvas_Script", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Canvas_Script), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Canvas_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Canvas_Script_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Btn_Commit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Btn_Commit = { "CPP_Btn_Commit", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Btn_Commit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Btn_Commit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Btn_Commit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Left_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Left = { "CPP_Img_Left", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Img_Left), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Right_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Right = { "CPP_Img_Right", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueScene, CPP_Img_Right), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Right_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_BackgroundSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Txt_Script,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Canvas_Script,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Btn_Commit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::NewProp_CPP_Img_Right,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_DialogueScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::ClassParams = {
		&UIH_Widget_DialogueScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_DialogueScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_DialogueScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_DialogueScene, 1777586976);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_DialogueScene>()
	{
		return UIH_Widget_DialogueScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_DialogueScene(Z_Construct_UClass_UIH_Widget_DialogueScene, &UIH_Widget_DialogueScene::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_DialogueScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_DialogueScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
