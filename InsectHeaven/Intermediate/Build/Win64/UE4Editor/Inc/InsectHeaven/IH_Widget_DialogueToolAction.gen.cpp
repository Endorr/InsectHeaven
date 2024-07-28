// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/DialogueTool/IH_Widget_DialogueToolAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_DialogueToolAction() {}
// Cross Module References
	INSECTHEAVEN_API UFunction* Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolAction();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueToolWidget_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics
	{
		struct _Script_InsectHeaven_eventSelectDelegate_Parms
		{
			UButton* _Button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::NewProp__Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::NewProp__Button = { "_Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_InsectHeaven_eventSelectDelegate_Parms, _Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::NewProp__Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::NewProp__Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::NewProp__Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InsectHeaven, nullptr, "SelectDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_InsectHeaven_eventSelectDelegate_Parms), Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolAction::execOnClickChangeAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickChangeAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolAction::execOnClickOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolAction::execOnReleaseAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReleaseAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolAction::execOnClickActon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickActon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_Widget_DialogueToolAction::execOnPressSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPressSelectButton();
		P_NATIVE_END;
	}
	void UIH_Widget_DialogueToolAction::StaticRegisterNativesUIH_Widget_DialogueToolAction()
	{
		UClass* Class = UIH_Widget_DialogueToolAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickActon", &UIH_Widget_DialogueToolAction::execOnClickActon },
			{ "OnClickChangeAction", &UIH_Widget_DialogueToolAction::execOnClickChangeAction },
			{ "OnClickOption", &UIH_Widget_DialogueToolAction::execOnClickOption },
			{ "OnPressSelectButton", &UIH_Widget_DialogueToolAction::execOnPressSelectButton },
			{ "OnReleaseAction", &UIH_Widget_DialogueToolAction::execOnReleaseAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolAction, nullptr, "OnClickActon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolAction, nullptr, "OnClickChangeAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolAction, nullptr, "OnClickOption", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolAction, nullptr, "OnPressSelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueToolAction, nullptr, "OnReleaseAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister()
	{
		return UIH_Widget_DialogueToolAction::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Switcher_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Switcher_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Txt_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Txt_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Txt_Desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Txt_Desc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Click_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Click;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Change_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Change;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_PrevAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_PrevAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_NextAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_NextAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Canvas_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Canvas_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Img_Select_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Img_Select;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectClick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_selectClick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickActon, "OnClickActon" }, // 923461360
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickChangeAction, "OnClickChangeAction" }, // 1852766245
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnClickOption, "OnClickOption" }, // 1642519262
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnPressSelectButton, "OnPressSelectButton" }, // 2437650974
		{ &Z_Construct_UFunction_UIH_Widget_DialogueToolAction_OnReleaseAction, "OnReleaseAction" }, // 3844142686
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Switcher_Content_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Switcher_Content = { "CPP_Switcher_Content", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Switcher_Content), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Switcher_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Switcher_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Name = { "CPP_Txt_Name", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Txt_Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Desc_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Desc = { "CPP_Txt_Desc", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Txt_Desc), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Desc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Click_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Click = { "CPP_Btn_Click", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_Click), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Click_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Click_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Option_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Option = { "CPP_Btn_Option", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_Option), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Change_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Change = { "CPP_Btn_Change", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_Change), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Change_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Change_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_PrevAdd_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_PrevAdd = { "CPP_Btn_PrevAdd", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_PrevAdd), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_PrevAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_PrevAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_NextAdd_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_NextAdd = { "CPP_Btn_NextAdd", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_NextAdd), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_NextAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_NextAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Canvas_Option_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Canvas_Option = { "CPP_Canvas_Option", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Canvas_Option), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Canvas_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Canvas_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Img_Select_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Img_Select = { "CPP_Img_Select", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Img_Select), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Img_Select_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Img_Select_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ToolWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ToolWidget = { "ToolWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, ToolWidget), Z_Construct_UClass_UDialogueToolWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ToolWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ToolWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ActionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ActionInfo = { "ActionInfo", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, ActionInfo), Z_Construct_UClass_UDialogueAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ActionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ActionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_selectClick_MetaData[] = {
		{ "ModuleRelativePath", "Widget/DialogueTool/IH_Widget_DialogueToolAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_selectClick = { "selectClick", nullptr, (EPropertyFlags)0x0040000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueToolAction, selectClick), Z_Construct_UDelegateFunction_InsectHeaven_SelectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_selectClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_selectClick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Switcher_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Txt_Desc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Click,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_Change,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_PrevAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Btn_NextAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Canvas_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_CPP_Img_Select,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ToolWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_ActionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::NewProp_selectClick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_DialogueToolAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::ClassParams = {
		&UIH_Widget_DialogueToolAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_DialogueToolAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_DialogueToolAction, 284004249);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_DialogueToolAction>()
	{
		return UIH_Widget_DialogueToolAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_DialogueToolAction(Z_Construct_UClass_UIH_Widget_DialogueToolAction, &UIH_Widget_DialogueToolAction::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_DialogueToolAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_DialogueToolAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
