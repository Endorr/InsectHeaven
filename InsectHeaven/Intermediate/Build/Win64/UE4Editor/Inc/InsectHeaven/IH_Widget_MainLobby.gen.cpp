// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/MainLobby/IH_Widget_MainLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_MainLobby() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_MainLobby_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_MainLobby();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueScene_NoRegister();
// End Cross Module References
	void UIH_Widget_MainLobby::StaticRegisterNativesUIH_Widget_MainLobby()
	{
	}
	UClass* Z_Construct_UClass_UIH_Widget_MainLobby_NoRegister()
	{
		return UIH_Widget_MainLobby::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_MainLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Widget_DialogueScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Widget_DialogueScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_MainLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_MainLobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/MainLobby/IH_Widget_MainLobby.h" },
		{ "ModuleRelativePath", "Widget/MainLobby/IH_Widget_MainLobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_MainLobby_Statics::NewProp_CPP_Widget_DialogueScene_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/MainLobby/IH_Widget_MainLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_MainLobby_Statics::NewProp_CPP_Widget_DialogueScene = { "CPP_Widget_DialogueScene", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_MainLobby, CPP_Widget_DialogueScene), Z_Construct_UClass_UIH_Widget_DialogueScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_MainLobby_Statics::NewProp_CPP_Widget_DialogueScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_MainLobby_Statics::NewProp_CPP_Widget_DialogueScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_Widget_MainLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_MainLobby_Statics::NewProp_CPP_Widget_DialogueScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_MainLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_MainLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_MainLobby_Statics::ClassParams = {
		&UIH_Widget_MainLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIH_Widget_MainLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_MainLobby_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_MainLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_MainLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_MainLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_MainLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_MainLobby, 3889274328);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_MainLobby>()
	{
		return UIH_Widget_MainLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_MainLobby(Z_Construct_UClass_UIH_Widget_MainLobby, &UIH_Widget_MainLobby::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_MainLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_MainLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
