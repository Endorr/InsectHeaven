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
	INSECTHEAVEN_API UFunction* Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FIH_Dialogue();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueActionLayer_NoRegister();
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueClip();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueToolWidget_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueToolWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_DetailsView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SinglePropertyView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InsectHeaven, nullptr, "DialoguePlayer_OnFinish__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_InsectHeaven_DialoguePlayer_OnFinish__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formerAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_formerAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nowAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nowAction;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_formerAction_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_formerAction = { "formerAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueClip, formerAction), Z_Construct_UClass_UDialogueAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_formerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_formerAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_nowAction_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_nowAction = { "nowAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueClip, nowAction), Z_Construct_UClass_UDialogueAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_nowAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_nowAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_formerAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueClip_Statics::NewProp_nowAction,
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
	uint32 Get_Z_Construct_UScriptStruct_FDialogueClip_Hash() { return 934474750U; }
	DEFINE_FUNCTION(UDialogueToolWidget::execOnPostDialogueFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostDialogueFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnPostPlayingActionChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__ActionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostPlayingActionChanged(Z_Param__ActionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnPropertyChanged_SequenceInspector)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropertyChanged_SequenceInspector(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnPropertyChange_SearchActionClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropertyChange_SearchActionClass(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnPropertyChange_ChangeActionClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropertyChange_ChangeActionClass(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnPropertyChange_AddActionClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropertyChange_AddActionClass(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnScrollSequenceActionVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__CurrentOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScrollSequenceActionVertical(Z_Param__CurrentOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnScrollSequenceActionHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__CurrentOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScrollSequenceActionHorizontal(Z_Param__CurrentOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnScrollSequenceLayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__CurrentOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScrollSequenceLayer(Z_Param__CurrentOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickStopPreviewButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickStopPreviewButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickPlayPreviewButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickPlayPreviewButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickSearchActionNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickSearchActionNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickSearchActionPrev)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickSearchActionPrev();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickChangeActionCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickChangeActionCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickChangeActionConfirm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickChangeActionConfirm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickAddActionCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddActionCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickAddActionConfirm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickAddActionConfirm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickLoadButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickLoadButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execOnClickSaveButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickSaveButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execMoveToNeighbor)
	{
		P_GET_STRUCT(FKey,Z_Param__Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToNeighbor(Z_Param__Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execSetControllPressed)
	{
		P_GET_UBOOL(Z_Param__bControllPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllPressed(Z_Param__bControllPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execDeleteSelectAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSelectAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execQuickSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickSave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execPasteAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PasteAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execCopyAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execDuplicateAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DuplicateAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execUndoClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UndoClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execIsControllPressing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControllPressing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execCloseDeselectContext)
	{
		P_GET_OBJECT(UButton,Z_Param__Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDeselectContext(Z_Param__Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execGrabOffAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabOffAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueToolWidget::execGrabAction)
	{
		P_GET_OBJECT(UButton,Z_Param__Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabAction(Z_Param__Button);
		P_NATIVE_END;
	}
	void UDialogueToolWidget::StaticRegisterNativesUDialogueToolWidget()
	{
		UClass* Class = UDialogueToolWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDeselectContext", &UDialogueToolWidget::execCloseDeselectContext },
			{ "CopyAction", &UDialogueToolWidget::execCopyAction },
			{ "DeleteSelectAction", &UDialogueToolWidget::execDeleteSelectAction },
			{ "DuplicateAction", &UDialogueToolWidget::execDuplicateAction },
			{ "GrabAction", &UDialogueToolWidget::execGrabAction },
			{ "GrabOffAction", &UDialogueToolWidget::execGrabOffAction },
			{ "IsControllPressing", &UDialogueToolWidget::execIsControllPressing },
			{ "MoveToNeighbor", &UDialogueToolWidget::execMoveToNeighbor },
			{ "OnClickAddActionCancel", &UDialogueToolWidget::execOnClickAddActionCancel },
			{ "OnClickAddActionConfirm", &UDialogueToolWidget::execOnClickAddActionConfirm },
			{ "OnClickChangeActionCancel", &UDialogueToolWidget::execOnClickChangeActionCancel },
			{ "OnClickChangeActionConfirm", &UDialogueToolWidget::execOnClickChangeActionConfirm },
			{ "OnClickLoadButton", &UDialogueToolWidget::execOnClickLoadButton },
			{ "OnClickPlayPreviewButton", &UDialogueToolWidget::execOnClickPlayPreviewButton },
			{ "OnClickSaveButton", &UDialogueToolWidget::execOnClickSaveButton },
			{ "OnClickSearchActionNext", &UDialogueToolWidget::execOnClickSearchActionNext },
			{ "OnClickSearchActionPrev", &UDialogueToolWidget::execOnClickSearchActionPrev },
			{ "OnClickStopPreviewButton", &UDialogueToolWidget::execOnClickStopPreviewButton },
			{ "OnPostDialogueFinish", &UDialogueToolWidget::execOnPostDialogueFinish },
			{ "OnPostPlayingActionChanged", &UDialogueToolWidget::execOnPostPlayingActionChanged },
			{ "OnPropertyChange_AddActionClass", &UDialogueToolWidget::execOnPropertyChange_AddActionClass },
			{ "OnPropertyChange_ChangeActionClass", &UDialogueToolWidget::execOnPropertyChange_ChangeActionClass },
			{ "OnPropertyChange_SearchActionClass", &UDialogueToolWidget::execOnPropertyChange_SearchActionClass },
			{ "OnPropertyChanged_SequenceInspector", &UDialogueToolWidget::execOnPropertyChanged_SequenceInspector },
			{ "OnScrollSequenceActionHorizontal", &UDialogueToolWidget::execOnScrollSequenceActionHorizontal },
			{ "OnScrollSequenceActionVertical", &UDialogueToolWidget::execOnScrollSequenceActionVertical },
			{ "OnScrollSequenceLayer", &UDialogueToolWidget::execOnScrollSequenceLayer },
			{ "PasteAction", &UDialogueToolWidget::execPasteAction },
			{ "QuickSave", &UDialogueToolWidget::execQuickSave },
			{ "SetControllPressed", &UDialogueToolWidget::execSetControllPressed },
			{ "UndoClip", &UDialogueToolWidget::execUndoClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics
	{
		struct DialogueToolWidget_eventCloseDeselectContext_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::NewProp__Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::NewProp__Button = { "_Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventCloseDeselectContext_Parms, _Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::NewProp__Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::NewProp__Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::NewProp__Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "CloseDeselectContext", nullptr, nullptr, sizeof(DialogueToolWidget_eventCloseDeselectContext_Parms), Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_CopyAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_CopyAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Ctrl + D\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Ctrl + D" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_CopyAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "CopyAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_CopyAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_CopyAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_CopyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_CopyAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Ctrl + S\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Ctrl + S" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "DeleteSelectAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Ctrl + Z\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Ctrl + Z" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "DuplicateAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics
	{
		struct DialogueToolWidget_eventGrabAction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::NewProp__Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::NewProp__Button = { "_Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventGrabAction_Parms, _Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::NewProp__Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::NewProp__Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::NewProp__Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "GrabAction", nullptr, nullptr, sizeof(DialogueToolWidget_eventGrabAction_Parms), Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_GrabAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_GrabAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "GrabOffAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics
	{
		struct DialogueToolWidget_eventIsControllPressing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueToolWidget_eventIsControllPressing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueToolWidget_eventIsControllPressing_Parms), &Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Tool Function\n/// </summary>\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "<summary>\nTool Function\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "IsControllPressing", nullptr, nullptr, sizeof(DialogueToolWidget_eventIsControllPressing_Parms), Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics
	{
		struct DialogueToolWidget_eventMoveToNeighbor_Parms
		{
			FKey _Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::NewProp__Key = { "_Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventMoveToNeighbor_Parms, _Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::NewProp__Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "MoveToNeighbor", nullptr, nullptr, sizeof(DialogueToolWidget_eventMoveToNeighbor_Parms), Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickAddActionCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickAddActionConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickChangeActionCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickChangeActionConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickLoadButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickPlayPreviewButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//WASD\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "WASD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickSaveButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickSearchActionNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickSearchActionPrev", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnClickStopPreviewButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnPostDialogueFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics
	{
		struct DialogueToolWidget_eventOnPostPlayingActionChanged_Parms
		{
			int32 _ActionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ActionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::NewProp__ActionIndex = { "_ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnPostPlayingActionChanged_Parms, _ActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::NewProp__ActionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnPostPlayingActionChanged", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnPostPlayingActionChanged_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics
	{
		struct DialogueToolWidget_eventOnPropertyChange_AddActionClass_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnPropertyChange_AddActionClass_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnPropertyChange_AddActionClass", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnPropertyChange_AddActionClass_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics
	{
		struct DialogueToolWidget_eventOnPropertyChange_ChangeActionClass_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnPropertyChange_ChangeActionClass_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnPropertyChange_ChangeActionClass", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnPropertyChange_ChangeActionClass_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics
	{
		struct DialogueToolWidget_eventOnPropertyChange_SearchActionClass_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnPropertyChange_SearchActionClass_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnPropertyChange_SearchActionClass", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnPropertyChange_SearchActionClass_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics
	{
		struct DialogueToolWidget_eventOnPropertyChanged_SequenceInspector_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnPropertyChanged_SequenceInspector_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnPropertyChanged_SequenceInspector", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnPropertyChanged_SequenceInspector_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics
	{
		struct DialogueToolWidget_eventOnScrollSequenceActionHorizontal_Parms
		{
			float _CurrentOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::NewProp__CurrentOffset = { "_CurrentOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnScrollSequenceActionHorizontal_Parms, _CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::NewProp__CurrentOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnScrollSequenceActionHorizontal", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnScrollSequenceActionHorizontal_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics
	{
		struct DialogueToolWidget_eventOnScrollSequenceActionVertical_Parms
		{
			float _CurrentOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::NewProp__CurrentOffset = { "_CurrentOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnScrollSequenceActionVertical_Parms, _CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::NewProp__CurrentOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnScrollSequenceActionVertical", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnScrollSequenceActionVertical_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics
	{
		struct DialogueToolWidget_eventOnScrollSequenceLayer_Parms
		{
			float _CurrentOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::NewProp__CurrentOffset = { "_CurrentOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueToolWidget_eventOnScrollSequenceLayer_Parms, _CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::NewProp__CurrentOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "OnScrollSequenceLayer", nullptr, nullptr, sizeof(DialogueToolWidget_eventOnScrollSequenceLayer_Parms), Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_PasteAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_PasteAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Ctrl + C\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Ctrl + C" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_PasteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "PasteAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_PasteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_PasteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_PasteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_PasteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_QuickSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_QuickSave_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Ctrl + V\n//UFUNCTION(BlueprintCallable) void ToggleSearchAction();\x09//Ctrl + F\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Ctrl + V\nUFUNCTION(BlueprintCallable) void ToggleSearchAction();        Ctrl + F" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_QuickSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "QuickSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_QuickSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_QuickSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_QuickSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_QuickSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics
	{
		struct DialogueToolWidget_eventSetControllPressed_Parms
		{
			bool _bControllPressed;
		};
		static void NewProp__bControllPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bControllPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::NewProp__bControllPressed_SetBit(void* Obj)
	{
		((DialogueToolWidget_eventSetControllPressed_Parms*)Obj)->_bControllPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::NewProp__bControllPressed = { "_bControllPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueToolWidget_eventSetControllPressed_Parms), &Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::NewProp__bControllPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::NewProp__bControllPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delete\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "SetControllPressed", nullptr, nullptr, sizeof(DialogueToolWidget_eventSetControllPressed_Parms), Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueToolWidget_UndoClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueToolWidget_UndoClip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Ctrl\n" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "ToolTip", "Ctrl" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueToolWidget_UndoClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueToolWidget, nullptr, "UndoClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueToolWidget_UndoClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueToolWidget_UndoClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueToolWidget_UndoClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueToolWidget_UndoClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueToolWidget_NoRegister()
	{
		return UDialogueToolWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueToolWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAddActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentAddActionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSearchActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentSearchActionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSelectedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSelectedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Filename_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Filename_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Save_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Save;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Load_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Load;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_TimeLineProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_TimeLineProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailsView_Inspector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetailsView_Inspector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_IndexLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_IndexLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_SequenceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_SequenceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_SequenceLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_SequenceLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_SequenceAction_Horizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_SequenceAction_Horizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_SequenceAction_Vertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_SequenceAction_Vertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_AddAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas_AddAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_ChangeAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas_ChangeAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyView_AddActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyView_AddActionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyView_ChangeActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyView_ChangeActionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_AddAction_Confirm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_AddAction_Confirm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_AddAction_Cancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_AddAction_Cancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_ChangeAction_Confirm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_ChangeAction_Confirm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_ChangeAction_Cancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_ChangeAction_Cancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_TimelineBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_TimelineBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_Timeline_Hittest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_Timeline_Hittest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_Timeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_Timeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_Timeline_HitTest_Dummy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_Timeline_HitTest_Dummy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_Timeline_Dummy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_Timeline_Dummy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_TimeLine_HitTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider_TimeLine_HitTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_TimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider_TimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabView_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabView_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Mouse_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Mouse_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_PlayPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_PlayPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_StopPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_StopPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueToolWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueToolWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueToolWidget_CloseDeselectContext, "CloseDeselectContext" }, // 3347696809
		{ &Z_Construct_UFunction_UDialogueToolWidget_CopyAction, "CopyAction" }, // 2574039016
		{ &Z_Construct_UFunction_UDialogueToolWidget_DeleteSelectAction, "DeleteSelectAction" }, // 621681028
		{ &Z_Construct_UFunction_UDialogueToolWidget_DuplicateAction, "DuplicateAction" }, // 324897661
		{ &Z_Construct_UFunction_UDialogueToolWidget_GrabAction, "GrabAction" }, // 3534002947
		{ &Z_Construct_UFunction_UDialogueToolWidget_GrabOffAction, "GrabOffAction" }, // 3429889432
		{ &Z_Construct_UFunction_UDialogueToolWidget_IsControllPressing, "IsControllPressing" }, // 1379049998
		{ &Z_Construct_UFunction_UDialogueToolWidget_MoveToNeighbor, "MoveToNeighbor" }, // 3856967551
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionCancel, "OnClickAddActionCancel" }, // 1236002229
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickAddActionConfirm, "OnClickAddActionConfirm" }, // 2783267598
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionCancel, "OnClickChangeActionCancel" }, // 416771476
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickChangeActionConfirm, "OnClickChangeActionConfirm" }, // 2466772035
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickLoadButton, "OnClickLoadButton" }, // 1092204583
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickPlayPreviewButton, "OnClickPlayPreviewButton" }, // 2028394772
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickSaveButton, "OnClickSaveButton" }, // 1742852072
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionNext, "OnClickSearchActionNext" }, // 1489484228
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickSearchActionPrev, "OnClickSearchActionPrev" }, // 4174705759
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnClickStopPreviewButton, "OnClickStopPreviewButton" }, // 2353575974
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnPostDialogueFinish, "OnPostDialogueFinish" }, // 1072089265
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnPostPlayingActionChanged, "OnPostPlayingActionChanged" }, // 2226626071
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_AddActionClass, "OnPropertyChange_AddActionClass" }, // 2362890366
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_ChangeActionClass, "OnPropertyChange_ChangeActionClass" }, // 1124562539
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChange_SearchActionClass, "OnPropertyChange_SearchActionClass" }, // 3133725239
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnPropertyChanged_SequenceInspector, "OnPropertyChanged_SequenceInspector" }, // 147464282
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionHorizontal, "OnScrollSequenceActionHorizontal" }, // 1229863930
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceActionVertical, "OnScrollSequenceActionVertical" }, // 1292938888
		{ &Z_Construct_UFunction_UDialogueToolWidget_OnScrollSequenceLayer, "OnScrollSequenceLayer" }, // 2985443430
		{ &Z_Construct_UFunction_UDialogueToolWidget_PasteAction, "PasteAction" }, // 2062540481
		{ &Z_Construct_UFunction_UDialogueToolWidget_QuickSave, "QuickSave" }, // 3976619964
		{ &Z_Construct_UFunction_UDialogueToolWidget_SetControllPressed, "SetControllPressed" }, // 1374871029
		{ &Z_Construct_UFunction_UDialogueToolWidget_UndoClip, "UndoClip" }, // 4158205803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentAddActionClass_MetaData[] = {
		{ "Category", "DialogueToolWidget" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "MustImplement", "UsingActionInterface" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentAddActionClass = { "CurrentAddActionClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, CurrentAddActionClass), Z_Construct_UClass_UDialogueAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentAddActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentAddActionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSearchActionClass_MetaData[] = {
		{ "Category", "DialogueToolWidget" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
		{ "MustImplement", "UsingActionInterface" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSearchActionClass = { "CurrentSearchActionClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, CurrentSearchActionClass), Z_Construct_UClass_UDialogueAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSearchActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSearchActionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, CurrentDialogue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSelectedAction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSelectedAction = { "CurrentSelectedAction", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, CurrentSelectedAction), Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSelectedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSelectedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_Filename_Content_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_Filename_Content = { "Text_Filename_Content", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Text_Filename_Content), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_Filename_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_Filename_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Save_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Save = { "Button_Save", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_Save), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Save_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Load_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Load = { "Button_Load", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_Load), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Load_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Load_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_TimeLineProgress_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_TimeLineProgress = { "Text_TimeLineProgress", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Text_TimeLineProgress), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_TimeLineProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_TimeLineProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_DetailsView_Inspector_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_DetailsView_Inspector = { "DetailsView_Inspector", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, DetailsView_Inspector), Z_Construct_UClass_UIH_DetailsView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_DetailsView_Inspector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_DetailsView_Inspector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_IndexLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_IndexLine = { "Image_IndexLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Image_IndexLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_IndexLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_IndexLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceIndex_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceIndex = { "ScrollBox_SequenceIndex", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceIndex), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceLayer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceLayer = { "ScrollBox_SequenceLayer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceLayer), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Horizontal_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Horizontal = { "ScrollBox_SequenceAction_Horizontal", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceAction_Horizontal), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Horizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Horizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Vertical_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Vertical = { "ScrollBox_SequenceAction_Vertical", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceAction_Vertical), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Vertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Vertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_AddAction_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_AddAction = { "Canvas_AddAction", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Canvas_AddAction), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_AddAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_AddAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_ChangeAction_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_ChangeAction = { "Canvas_ChangeAction", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Canvas_ChangeAction), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_ChangeAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_ChangeAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_AddActionClass_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_AddActionClass = { "PropertyView_AddActionClass", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, PropertyView_AddActionClass), Z_Construct_UClass_UIH_SinglePropertyView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_AddActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_AddActionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_ChangeActionClass_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_ChangeActionClass = { "PropertyView_ChangeActionClass", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, PropertyView_ChangeActionClass), Z_Construct_UClass_UIH_SinglePropertyView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_ChangeActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_ChangeActionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Confirm_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Confirm = { "Button_AddAction_Confirm", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_AddAction_Confirm), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Confirm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Confirm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Cancel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Cancel = { "Button_AddAction_Cancel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_AddAction_Cancel), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Cancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Cancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Confirm_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Confirm = { "Button_ChangeAction_Confirm", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_ChangeAction_Confirm), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Confirm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Confirm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Cancel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Cancel = { "Button_ChangeAction_Cancel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_ChangeAction_Cancel), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Cancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Cancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_TimelineBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_TimelineBlock = { "Image_TimelineBlock", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Image_TimelineBlock), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_TimelineBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_TimelineBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_Hittest_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_Hittest = { "ScrollBox_Timeline_Hittest", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_Timeline_Hittest), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_Hittest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_Hittest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline = { "ScrollBox_Timeline", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_Timeline), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_HitTest_Dummy_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_HitTest_Dummy = { "HorizontalBox_Timeline_HitTest_Dummy", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, HorizontalBox_Timeline_HitTest_Dummy), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_HitTest_Dummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_HitTest_Dummy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_Dummy_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_Dummy = { "HorizontalBox_Timeline_Dummy", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, HorizontalBox_Timeline_Dummy), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_Dummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_Dummy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_HitTest_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_HitTest = { "Slider_TimeLine_HitTest", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Slider_TimeLine_HitTest), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_HitTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_HitTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine = { "Slider_TimeLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Slider_TimeLine), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_GrabView_Action_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_GrabView_Action = { "GrabView_Action", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, GrabView_Action), Z_Construct_UClass_UIH_Widget_DialogueToolAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_GrabView_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_GrabView_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CPP_Mouse_Index_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CPP_Mouse_Index = { "CPP_Mouse_Index", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, CPP_Mouse_Index), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CPP_Mouse_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CPP_Mouse_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_PlayPreview_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_PlayPreview = { "Button_PlayPreview", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_PlayPreview), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_PlayPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_PlayPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_StopPreview_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/DialogueEditToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_StopPreview = { "Button_StopPreview", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueToolWidget, Button_StopPreview), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_StopPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_StopPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueToolWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentAddActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSearchActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CurrentSelectedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_Filename_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Save,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_Load,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Text_TimeLineProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_DetailsView_Inspector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_IndexLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Horizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_SequenceAction_Vertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_AddAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Canvas_ChangeAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_AddActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_PropertyView_ChangeActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Confirm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_AddAction_Cancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Confirm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_ChangeAction_Cancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Image_TimelineBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline_Hittest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_ScrollBox_Timeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_HitTest_Dummy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_HorizontalBox_Timeline_Dummy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine_HitTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Slider_TimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_GrabView_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_CPP_Mouse_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_PlayPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueToolWidget_Statics::NewProp_Button_StopPreview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueToolWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueToolWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueToolWidget_Statics::ClassParams = {
		&UDialogueToolWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueToolWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueToolWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueToolWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueToolWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueToolWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueToolWidget, 464978095);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueToolWidget>()
	{
		return UDialogueToolWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueToolWidget(Z_Construct_UClass_UDialogueToolWidget, &UDialogueToolWidget::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueToolWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueToolWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
