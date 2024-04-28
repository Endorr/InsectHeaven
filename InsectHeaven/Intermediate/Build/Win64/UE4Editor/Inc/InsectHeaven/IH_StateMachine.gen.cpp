// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Util/IH_StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_StateMachine() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateMachine_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateMachine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_StateBase_NoRegister();
// End Cross Module References
	void UIH_StateMachine::StaticRegisterNativesUIH_StateMachine()
	{
	}
	UClass* Z_Construct_UClass_UIH_StateMachine_NoRegister()
	{
		return UIH_StateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UIH_StateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mapState_ValueProp;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_mapState_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapState_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mapState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_StateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_StateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/IH_StateMachine.h" },
		{ "ModuleRelativePath", "Util/IH_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_ValueProp = { "mapState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UIH_StateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_Key_KeyProp = { "mapState_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_MetaData[] = {
		{ "ModuleRelativePath", "Util/IH_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState = { "mapState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_StateMachine, mapState), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_StateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_StateMachine_Statics::NewProp_mapState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_StateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_StateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_StateMachine_Statics::ClassParams = {
		&UIH_StateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIH_StateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateMachine_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_StateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_StateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_StateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_StateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_StateMachine, 1543939425);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_StateMachine>()
	{
		return UIH_StateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_StateMachine(Z_Construct_UClass_UIH_StateMachine, &UIH_StateMachine::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_StateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_StateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
