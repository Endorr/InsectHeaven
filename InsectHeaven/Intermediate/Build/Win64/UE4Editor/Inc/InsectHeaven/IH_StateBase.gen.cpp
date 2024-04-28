// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Util/IH_StateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_StateBase() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateBase_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	DEFINE_FUNCTION(UIH_StateBase::execOnExitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_StateBase::execOnTickState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_StateBase::execOnBeginState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginState();
		P_NATIVE_END;
	}
	void UIH_StateBase::StaticRegisterNativesUIH_StateBase()
	{
		UClass* Class = UIH_StateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginState", &UIH_StateBase::execOnBeginState },
			{ "OnExitState", &UIH_StateBase::execOnExitState },
			{ "OnTickState", &UIH_StateBase::execOnTickState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_StateBase_OnBeginState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_StateBase_OnBeginState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/IH_StateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_StateBase_OnBeginState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_StateBase, nullptr, "OnBeginState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_StateBase_OnBeginState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_StateBase_OnBeginState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_StateBase_OnBeginState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_StateBase_OnBeginState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_StateBase_OnExitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_StateBase_OnExitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/IH_StateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_StateBase_OnExitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_StateBase, nullptr, "OnExitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_StateBase_OnExitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_StateBase_OnExitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_StateBase_OnExitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_StateBase_OnExitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_StateBase_OnTickState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_StateBase_OnTickState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/IH_StateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_StateBase_OnTickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_StateBase, nullptr, "OnTickState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_StateBase_OnTickState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_StateBase_OnTickState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_StateBase_OnTickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_StateBase_OnTickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_StateBase_NoRegister()
	{
		return UIH_StateBase::StaticClass();
	}
	struct Z_Construct_UClass_UIH_StateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_StateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_StateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_StateBase_OnBeginState, "OnBeginState" }, // 4193759163
		{ &Z_Construct_UFunction_UIH_StateBase_OnExitState, "OnExitState" }, // 1440884686
		{ &Z_Construct_UFunction_UIH_StateBase_OnTickState, "OnTickState" }, // 3847264173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_StateBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/IH_StateBase.h" },
		{ "ModuleRelativePath", "Util/IH_StateBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateIndex_MetaData[] = {
		{ "ModuleRelativePath", "Util/IH_StateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_StateBase, StateIndex), METADATA_PARAMS(Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateName_MetaData[] = {
		{ "ModuleRelativePath", "Util/IH_StateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_StateBase, StateName), METADATA_PARAMS(Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_StateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_StateBase_Statics::NewProp_StateName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_StateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_StateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_StateBase_Statics::ClassParams = {
		&UIH_StateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_StateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_StateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_StateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_StateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_StateBase, 1029218804);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_StateBase>()
	{
		return UIH_StateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_StateBase(Z_Construct_UClass_UIH_StateBase, &UIH_StateBase::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_StateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_StateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
