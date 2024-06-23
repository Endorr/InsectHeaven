// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/Dialogue/DialogueManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueManager() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueManager_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueManager::execStopDialoguePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDialoguePlayer();
		P_NATIVE_END;
	}
	void UDialogueManager::StaticRegisterNativesUDialogueManager()
	{
		UClass* Class = UDialogueManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StopDialoguePlayer", &UDialogueManager::execStopDialoguePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Dialogue/DialogueManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueManager, nullptr, "StopDialoguePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueManager_NoRegister()
	{
		return UDialogueManager::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueManager_StopDialoguePlayer, "StopDialoguePlayer" }, // 2827349652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/Dialogue/DialogueManager.h" },
		{ "ModuleRelativePath", "Widget/Dialogue/DialogueManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueManager_Statics::ClassParams = {
		&UDialogueManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueManager, 2029638018);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueManager>()
	{
		return UDialogueManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueManager(Z_Construct_UClass_UDialogueManager, &UDialogueManager::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
