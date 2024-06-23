// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/IH_DialoguePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_DialoguePlayer() {}
// Cross Module References
	INSECTHEAVEN_API UFunction* Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AIH_DialoguePlayer();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_AIH_DialoguePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueActionLayer_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueScene_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics
	{
		struct IH_DialoguePlayer_eventOnPlayingActionChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventOnPlayingActionChanged_Parms, ActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::NewProp_ActionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "OnPlayingActionChanged__DelegateSignature", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventOnPlayingActionChanged_Parms), Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execOnPostActionChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__ActionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostActionChanged(Z_Param__ActionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execRemoveActionLayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__LayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActionLayer(Z_Param__LayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execAddActionLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddActionLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execSetActionByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__ActionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActionByIndex(Z_Param__ActionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execSetPause)
	{
		P_GET_UBOOL(Z_Param__bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPause(Z_Param__bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execLoadToJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadToJson(Z_Param__strFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIH_DialoguePlayer::execSaveToJason)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveToJason(Z_Param__strFilePath);
		P_NATIVE_END;
	}
	void AIH_DialoguePlayer::StaticRegisterNativesAIH_DialoguePlayer()
	{
		UClass* Class = AIH_DialoguePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionLayer", &AIH_DialoguePlayer::execAddActionLayer },
			{ "IsPlaying", &AIH_DialoguePlayer::execIsPlaying },
			{ "LoadToJson", &AIH_DialoguePlayer::execLoadToJson },
			{ "OnPostActionChanged", &AIH_DialoguePlayer::execOnPostActionChanged },
			{ "Play", &AIH_DialoguePlayer::execPlay },
			{ "RemoveActionLayer", &AIH_DialoguePlayer::execRemoveActionLayer },
			{ "SaveToJason", &AIH_DialoguePlayer::execSaveToJason },
			{ "SetActionByIndex", &AIH_DialoguePlayer::execSetActionByIndex },
			{ "SetPause", &AIH_DialoguePlayer::execSetPause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics
	{
		struct IH_DialoguePlayer_eventAddActionLayer_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventAddActionLayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "AddActionLayer", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventAddActionLayer_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics
	{
		struct IH_DialoguePlayer_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IH_DialoguePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_DialoguePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics
	{
		struct IH_DialoguePlayer_eventLoadToJson_Parms
		{
			FString _strFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp__strFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp__strFilePath = { "_strFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventLoadToJson_Parms, _strFilePath), METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp__strFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp__strFilePath_MetaData)) };
	void Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IH_DialoguePlayer_eventLoadToJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_DialoguePlayer_eventLoadToJson_Parms), &Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp__strFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "LoadToJson", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventLoadToJson_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics
	{
		struct IH_DialoguePlayer_eventOnPostActionChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::NewProp__ActionIndex = { "_ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventOnPostActionChanged_Parms, _ActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::NewProp__ActionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "OnPostActionChanged", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventOnPostActionChanged_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics
	{
		struct IH_DialoguePlayer_eventRemoveActionLayer_Parms
		{
			int32 _LayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::NewProp__LayerIndex = { "_LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventRemoveActionLayer_Parms, _LayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::NewProp__LayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "RemoveActionLayer", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventRemoveActionLayer_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics
	{
		struct IH_DialoguePlayer_eventSaveToJason_Parms
		{
			FString _strFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp__strFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp__strFilePath = { "_strFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventSaveToJason_Parms, _strFilePath), METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp__strFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp__strFilePath_MetaData)) };
	void Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IH_DialoguePlayer_eventSaveToJason_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_DialoguePlayer_eventSaveToJason_Parms), &Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp__strFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "SaveToJason", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventSaveToJason_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics
	{
		struct IH_DialoguePlayer_eventSetActionByIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::NewProp__ActionIndex = { "_ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DialoguePlayer_eventSetActionByIndex_Parms, _ActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::NewProp__ActionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "SetActionByIndex", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventSetActionByIndex_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics
	{
		struct IH_DialoguePlayer_eventSetPause_Parms
		{
			bool _bPause;
		};
		static void NewProp__bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::NewProp__bPause_SetBit(void* Obj)
	{
		((IH_DialoguePlayer_eventSetPause_Parms*)Obj)->_bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::NewProp__bPause = { "_bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_DialoguePlayer_eventSetPause_Parms), &Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::NewProp__bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::NewProp__bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::Function_MetaDataParams[] = {
		{ "Category", "ADialogueActor" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIH_DialoguePlayer, nullptr, "SetPause", nullptr, nullptr, sizeof(IH_DialoguePlayer_eventSetPause_Parms), Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIH_DialoguePlayer_SetPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIH_DialoguePlayer_SetPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIH_DialoguePlayer_NoRegister()
	{
		return AIH_DialoguePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AIH_DialoguePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIH_DialoguePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIH_DialoguePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_AddActionLayer, "AddActionLayer" }, // 152973449
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_IsPlaying, "IsPlaying" }, // 842243103
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_LoadToJson, "LoadToJson" }, // 2235818059
		{ &Z_Construct_UDelegateFunction_AIH_DialoguePlayer_OnPlayingActionChanged__DelegateSignature, "OnPlayingActionChanged__DelegateSignature" }, // 2140094119
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_OnPostActionChanged, "OnPostActionChanged" }, // 3406292665
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_Play, "Play" }, // 3854010375
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_RemoveActionLayer, "RemoveActionLayer" }, // 3604947329
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_SaveToJason, "SaveToJason" }, // 2565227376
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_SetActionByIndex, "SetActionByIndex" }, // 2043856097
		{ &Z_Construct_UFunction_AIH_DialoguePlayer_SetPause, "SetPause" }, // 2391761493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIH_DialoguePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/IH_DialoguePlayer.h" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers_Inner = { "ActionLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueActionLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers_MetaData[] = {
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers = { "ActionLayers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIH_DialoguePlayer, ActionLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_DialogueWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Library/Dialogue/IH_DialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIH_DialoguePlayer, DialogueWidget), Z_Construct_UClass_UIH_Widget_DialogueScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_DialogueWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_DialogueWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIH_DialoguePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_ActionLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIH_DialoguePlayer_Statics::NewProp_DialogueWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIH_DialoguePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIH_DialoguePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIH_DialoguePlayer_Statics::ClassParams = {
		&AIH_DialoguePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIH_DialoguePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIH_DialoguePlayer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIH_DialoguePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIH_DialoguePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIH_DialoguePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIH_DialoguePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIH_DialoguePlayer, 4081899111);
	template<> INSECTHEAVEN_API UClass* StaticClass<AIH_DialoguePlayer>()
	{
		return AIH_DialoguePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIH_DialoguePlayer(Z_Construct_UClass_AIH_DialoguePlayer, &AIH_DialoguePlayer::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("AIH_DialoguePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIH_DialoguePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
