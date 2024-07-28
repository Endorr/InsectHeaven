// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Util/UIH_CinemaFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIH_CinemaFunctionLibrary() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_CinemaFunctionLibrary_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_CinemaFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FIH_Dialogue();
// End Cross Module References
	DEFINE_FUNCTION(UIH_CinemaFunctionLibrary::execStopDialoguePreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UIH_CinemaFunctionLibrary::StopDialoguePreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_CinemaFunctionLibrary::execPlayDialoguePreview)
	{
		P_GET_STRUCT_REF(FIH_Dialogue,Z_Param_Out__Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIH_CinemaFunctionLibrary::PlayDialoguePreview(Z_Param_Out__Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_CinemaFunctionLibrary::execSaveActiveDialogue)
	{
		P_GET_STRUCT_REF(FIH_Dialogue,Z_Param_Out__Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIH_CinemaFunctionLibrary::SaveActiveDialogue(Z_Param_Out__Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_CinemaFunctionLibrary::execSaveDialogue)
	{
		P_GET_STRUCT_REF(FIH_Dialogue,Z_Param_Out__Dialogue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UIH_CinemaFunctionLibrary::SaveDialogue(Z_Param_Out__Dialogue,Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_CinemaFunctionLibrary::execLoadActiveDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIH_Dialogue*)Z_Param__Result=UIH_CinemaFunctionLibrary::LoadActiveDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_CinemaFunctionLibrary::execLoadDialogue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIH_Dialogue*)Z_Param__Result=UIH_CinemaFunctionLibrary::LoadDialogue(Z_Param__strFileName);
		P_NATIVE_END;
	}
	void UIH_CinemaFunctionLibrary::StaticRegisterNativesUIH_CinemaFunctionLibrary()
	{
		UClass* Class = UIH_CinemaFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadActiveDialogue", &UIH_CinemaFunctionLibrary::execLoadActiveDialogue },
			{ "LoadDialogue", &UIH_CinemaFunctionLibrary::execLoadDialogue },
			{ "PlayDialoguePreview", &UIH_CinemaFunctionLibrary::execPlayDialoguePreview },
			{ "SaveActiveDialogue", &UIH_CinemaFunctionLibrary::execSaveActiveDialogue },
			{ "SaveDialogue", &UIH_CinemaFunctionLibrary::execSaveDialogue },
			{ "StopDialoguePreview", &UIH_CinemaFunctionLibrary::execStopDialoguePreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics
	{
		struct IH_CinemaFunctionLibrary_eventLoadActiveDialogue_Parms
		{
			FIH_Dialogue ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventLoadActiveDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_CinemaFunctionLibrary, nullptr, "LoadActiveDialogue", nullptr, nullptr, sizeof(IH_CinemaFunctionLibrary_eventLoadActiveDialogue_Parms), Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics
	{
		struct IH_CinemaFunctionLibrary_eventLoadDialogue_Parms
		{
			FString _strFileName;
			FIH_Dialogue ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventLoadDialogue_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp__strFileName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventLoadDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_CinemaFunctionLibrary, nullptr, "LoadDialogue", nullptr, nullptr, sizeof(IH_CinemaFunctionLibrary_eventLoadDialogue_Parms), Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics
	{
		struct IH_CinemaFunctionLibrary_eventPlayDialoguePreview_Parms
		{
			FIH_Dialogue _Dialogue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Dialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::NewProp__Dialogue = { "_Dialogue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventPlayDialoguePreview_Parms, _Dialogue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::NewProp__Dialogue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_CinemaFunctionLibrary, nullptr, "PlayDialoguePreview", nullptr, nullptr, sizeof(IH_CinemaFunctionLibrary_eventPlayDialoguePreview_Parms), Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics
	{
		struct IH_CinemaFunctionLibrary_eventSaveActiveDialogue_Parms
		{
			FIH_Dialogue _Dialogue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Dialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::NewProp__Dialogue = { "_Dialogue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventSaveActiveDialogue_Parms, _Dialogue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::NewProp__Dialogue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_CinemaFunctionLibrary, nullptr, "SaveActiveDialogue", nullptr, nullptr, sizeof(IH_CinemaFunctionLibrary_eventSaveActiveDialogue_Parms), Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics
	{
		struct IH_CinemaFunctionLibrary_eventSaveDialogue_Parms
		{
			FIH_Dialogue _Dialogue;
			FString _strFileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Dialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__Dialogue = { "_Dialogue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventSaveDialogue_Parms, _Dialogue), Z_Construct_UScriptStruct_FIH_Dialogue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_CinemaFunctionLibrary_eventSaveDialogue_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IH_CinemaFunctionLibrary_eventSaveDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_CinemaFunctionLibrary_eventSaveDialogue_Parms), &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__Dialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_CinemaFunctionLibrary, nullptr, "SaveDialogue", nullptr, nullptr, sizeof(IH_CinemaFunctionLibrary_eventSaveDialogue_Parms), Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_CinemaFunctionLibrary, nullptr, "StopDialoguePreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_CinemaFunctionLibrary_NoRegister()
	{
		return UIH_CinemaFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadActiveDialogue, "LoadActiveDialogue" }, // 4121232444
		{ &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_LoadDialogue, "LoadDialogue" }, // 1569010138
		{ &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_PlayDialoguePreview, "PlayDialoguePreview" }, // 1980008150
		{ &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveActiveDialogue, "SaveActiveDialogue" }, // 2685985035
		{ &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_SaveDialogue, "SaveDialogue" }, // 3390179282
		{ &Z_Construct_UFunction_UIH_CinemaFunctionLibrary_StopDialoguePreview, "StopDialoguePreview" }, // 3958472977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/UIH_CinemaFunctionLibrary.h" },
		{ "ModuleRelativePath", "Util/UIH_CinemaFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_CinemaFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::ClassParams = {
		&UIH_CinemaFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_CinemaFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_CinemaFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_CinemaFunctionLibrary, 4039915549);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_CinemaFunctionLibrary>()
	{
		return UIH_CinemaFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_CinemaFunctionLibrary(Z_Construct_UClass_UIH_CinemaFunctionLibrary, &UIH_CinemaFunctionLibrary::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_CinemaFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_CinemaFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
