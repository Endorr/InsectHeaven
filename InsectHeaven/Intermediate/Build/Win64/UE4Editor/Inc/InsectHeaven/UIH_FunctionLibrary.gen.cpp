// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Util/UIH_FunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIH_FunctionLibrary() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_FunctionLibrary_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_FunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIH_FunctionLibrary::execGetGameWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UIH_FunctionLibrary::GetGameWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_FunctionLibrary::execGetGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstance**)Z_Param__Result=UIH_FunctionLibrary::GetGameInstance();
		P_NATIVE_END;
	}
	void UIH_FunctionLibrary::StaticRegisterNativesUIH_FunctionLibrary()
	{
		UClass* Class = UIH_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameInstance", &UIH_FunctionLibrary::execGetGameInstance },
			{ "GetGameWorld", &UIH_FunctionLibrary::execGetGameWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics
	{
		struct IH_FunctionLibrary_eventGetGameInstance_Parms
		{
			UGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_FunctionLibrary_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_FunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_FunctionLibrary, nullptr, "GetGameInstance", nullptr, nullptr, sizeof(IH_FunctionLibrary_eventGetGameInstance_Parms), Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics
	{
		struct IH_FunctionLibrary_eventGetGameWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_FunctionLibrary_eventGetGameWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/UIH_FunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_FunctionLibrary, nullptr, "GetGameWorld", nullptr, nullptr, sizeof(IH_FunctionLibrary_eventGetGameWorld_Parms), Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_FunctionLibrary_NoRegister()
	{
		return UIH_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UIH_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_FunctionLibrary_GetGameInstance, "GetGameInstance" }, // 3150250958
		{ &Z_Construct_UFunction_UIH_FunctionLibrary_GetGameWorld, "GetGameWorld" }, // 3517879388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/UIH_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Util/UIH_FunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_FunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_FunctionLibrary_Statics::ClassParams = {
		&UIH_FunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIH_FunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_FunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_FunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_FunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_FunctionLibrary, 79391752);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_FunctionLibrary>()
	{
		return UIH_FunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_FunctionLibrary(Z_Construct_UClass_UIH_FunctionLibrary, &UIH_FunctionLibrary::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_FunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_FunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
