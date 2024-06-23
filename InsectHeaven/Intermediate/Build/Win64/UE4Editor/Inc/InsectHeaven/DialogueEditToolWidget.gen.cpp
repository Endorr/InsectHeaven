// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/DialogueEditToolWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueEditToolWidget() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueClip();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_NoRegister();
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FIH_Dialogue();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueActionLayer_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueEditToolWidget_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueEditToolWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_USinglePropertyView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FDialogueClip::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FDialogueClip_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueClip, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("DialogueClip"), sizeof(FDialogueClip), Get_Z_Construct_UScriptStruct_FDialogueClip_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FDialogueClip>()
{
	return FDialogueClip::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueClip(FDialogueClip::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("DialogueClip"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFDialogueClip
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFDialogueClip()
	{
		UScriptStruct::DeferCppStructOps<FDialogueClip>(FName(TEXT("DialogueClip")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFDialogueClip;
	struct Z_Construct_UScriptStruct_FDialogueClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormerAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FormerAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NowAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueClip_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueClip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueClip>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_FormerAction_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_FormerAction = { "FormerAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueClip, FormerAction), Z_Construct_UClass_UDialogueAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_FormerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_FormerAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_NowAction_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_NowAction = { "NowAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueClip, NowAction), Z_Construct_UClass_UDialogueAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_NowAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_NowAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_FormerAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_NowAction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueClip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		nullptr,
		&NewStructOps,
		"DialogueClip",
		sizeof(FDialogueClip),
		alignof(FDialogueClip),
		Z_Construct_UScriptStruct_FDialogueClip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueClip_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueClip_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueClip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueClip()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueClip_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueClip"), sizeof(FDialogueClip), Get_Z_Construct_UScriptStruct_FDialogueClip_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueClip_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueClip_Hash() { return 44526114U; }
class UScriptStruct* FIH_Dialogue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FIH_Dialogue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIH_Dialogue, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("IH_Dialogue"), sizeof(FIH_Dialogue), Get_Z_Construct_UScriptStruct_FIH_Dialogue_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FIH_Dialogue>()
{
	return FIH_Dialogue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIH_Dialogue(FIH_Dialogue::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("IH_Dialogue"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFIH_Dialogue
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFIH_Dialogue()
	{
		UScriptStruct::DeferCppStructOps<FIH_Dialogue>(FName(TEXT("IH_Dialogue")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFIH_Dialogue;
	struct Z_Construct_UScriptStruct_FIH_Dialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionLayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIH_Dialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIH_Dialogue>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers_Inner = { "ActionLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueActionLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers = { "ActionLayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIH_Dialogue, ActionLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIH_Dialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIH_Dialogue_Statics::NewProp_ActionLayers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIH_Dialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		nullptr,
		&NewStructOps,
		"IH_Dialogue",
		sizeof(FIH_Dialogue),
		alignof(FIH_Dialogue),
		Z_Construct_UScriptStruct_FIH_Dialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIH_Dialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIH_Dialogue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIH_Dialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIH_Dialogue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIH_Dialogue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IH_Dialogue"), sizeof(FIH_Dialogue), Get_Z_Construct_UScriptStruct_FIH_Dialogue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIH_Dialogue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIH_Dialogue_Hash() { return 3590521618U; }
	DEFINE_FUNCTION(UDialogueEditToolWidget::execCalculateActionPos)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__LayerIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__ActionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->CalculateActionPos(Z_Param__LayerIndex,Z_Param__ActionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execDeleteSelectAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSelectAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execOnClick_Stop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execOnClick_Play)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execOnClick_CancelAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_CancelAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execOnClick_ChangeAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_ChangeAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execOnClick_LoadButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_LoadButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execOnClick_SaveButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_SaveButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueEditToolWidget::execGrabOffAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabOffAction();
		P_NATIVE_END;
	}
	void UDialogueEditToolWidget::StaticRegisterNativesUDialogueEditToolWidget()
	{
		UClass* Class = UDialogueEditToolWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateActionPos", &UDialogueEditToolWidget::execCalculateActionPos },
			{ "DeleteSelectAction", &UDialogueEditToolWidget::execDeleteSelectAction },
			{ "GrabOffAction", &UDialogueEditToolWidget::execGrabOffAction },
			{ "OnClick_CancelAction", &UDialogueEditToolWidget::execOnClick_CancelAction },
			{ "OnClick_ChangeAction", &UDialogueEditToolWidget::execOnClick_ChangeAction },
			{ "OnClick_LoadButton", &UDialogueEditToolWidget::execOnClick_LoadButton },
			{ "OnClick_Play", &UDialogueEditToolWidget::execOnClick_Play },
			{ "OnClick_SaveButton", &UDialogueEditToolWidget::execOnClick_SaveButton },
			{ "OnClick_Stop", &UDialogueEditToolWidget::execOnClick_Stop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics
	{
		struct DialogueEditToolWidget_eventCalculateActionPos_Parms
		{
			int32 _LayerIndex;
			int32 _ActionIndex;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LayerIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ActionIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::NewProp__LayerIndex = { "_LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueEditToolWidget_eventCalculateActionPos_Parms, _LayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::NewProp__ActionIndex = { "_ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueEditToolWidget_eventCalculateActionPos_Parms, _ActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueEditToolWidget_eventCalculateActionPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::NewProp__LayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::NewProp__ActionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "CalculateActionPos", nullptr, nullptr, sizeof(DialogueEditToolWidget_eventCalculateActionPos_Parms), Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "DeleteSelectAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "GrabOffAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "OnClick_CancelAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "OnClick_ChangeAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "OnClick_LoadButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "OnClick_Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "OnClick_SaveButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEditToolWidget, nullptr, "OnClick_Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueEditToolWidget_NoRegister()
	{
		return UDialogueEditToolWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueEditToolWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Scroll_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Scroll_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Scroll_ActionLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Scroll_ActionLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Canvas_ActionChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Canvas_ActionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_PropertyView_ActionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_PropertyView_ActionList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_ChangeAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_ChangeAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_CancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_CancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Save_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Save;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Load_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Load;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Play_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Play;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Stop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Stop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Widget_SelectShadow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Widget_SelectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Txt_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Txt_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Img_Test_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Img_Test;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_DetailView_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_DetailView_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAddActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentAddActionClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueEditToolWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueEditToolWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_CalculateActionPos, "CalculateActionPos" }, // 2275183131
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_DeleteSelectAction, "DeleteSelectAction" }, // 3452094298
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_GrabOffAction, "GrabOffAction" }, // 4170611636
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_CancelAction, "OnClick_CancelAction" }, // 797013548
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_ChangeAction, "OnClick_ChangeAction" }, // 2842796806
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_LoadButton, "OnClick_LoadButton" }, // 1839381115
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Play, "OnClick_Play" }, // 4171642372
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_SaveButton, "OnClick_SaveButton" }, // 1683876630
		{ &Z_Construct_UFunction_UDialogueEditToolWidget_OnClick_Stop, "OnClick_Stop" }, // 2100379718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_Layer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_Layer = { "CPP_Scroll_Layer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Scroll_Layer), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_ActionLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_ActionLine = { "CPP_Scroll_ActionLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Scroll_ActionLine), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_ActionLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_ActionLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Canvas_ActionChange_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Canvas_ActionChange = { "CPP_Canvas_ActionChange", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Canvas_ActionChange), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Canvas_ActionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Canvas_ActionChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_PropertyView_ActionList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_PropertyView_ActionList = { "CPP_PropertyView_ActionList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_PropertyView_ActionList), Z_Construct_UClass_USinglePropertyView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_PropertyView_ActionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_PropertyView_ActionList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_ChangeAction_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_ChangeAction = { "CPP_Btn_ChangeAction", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_ChangeAction), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_ChangeAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_ChangeAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_CancelAction_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_CancelAction = { "CPP_Btn_CancelAction", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_CancelAction), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_CancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_CancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Save_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Save = { "CPP_Btn_Save", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_Save), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Save_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Load_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Load = { "CPP_Btn_Load", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_Load), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Load_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Load_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Play_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Play = { "CPP_Btn_Play", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_Play), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Play_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Play_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Stop_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Stop = { "CPP_Btn_Stop", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_Stop), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Stop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Stop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Widget_SelectShadow_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Widget_SelectShadow = { "CPP_Widget_SelectShadow", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Widget_SelectShadow), Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Widget_SelectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Widget_SelectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Txt_FileName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Txt_FileName = { "CPP_Txt_FileName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Txt_FileName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Txt_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Txt_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Img_Test_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Img_Test = { "CPP_Img_Test", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Img_Test), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Img_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Img_Test_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_DetailView_Action_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_DetailView_Action = { "CPP_DetailView_Action", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CPP_DetailView_Action), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_DetailView_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_DetailView_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CurrentDialogue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentAddActionClass_MetaData[] = {
		{ "Category", "DialogueToolWidget" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentAddActionClass = { "CurrentAddActionClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueEditToolWidget, CurrentAddActionClass), Z_Construct_UClass_UDialogueAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentAddActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentAddActionClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueEditToolWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Scroll_ActionLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Canvas_ActionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_PropertyView_ActionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_ChangeAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_CancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Save,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Load,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Play,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Btn_Stop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Widget_SelectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Txt_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_Img_Test,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CPP_DetailView_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueEditToolWidget_Statics::NewProp_CurrentAddActionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueEditToolWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueEditToolWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueEditToolWidget_Statics::ClassParams = {
		&UDialogueEditToolWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueEditToolWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueEditToolWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditToolWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueEditToolWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueEditToolWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueEditToolWidget, 2262362361);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueEditToolWidget>()
	{
		return UDialogueEditToolWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueEditToolWidget(Z_Construct_UClass_UDialogueEditToolWidget, &UDialogueEditToolWidget::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueEditToolWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEditToolWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
