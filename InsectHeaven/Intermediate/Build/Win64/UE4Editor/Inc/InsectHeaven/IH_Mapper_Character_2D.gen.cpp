// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/TableMapper/IH_Mapper_Character_2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Mapper_Character_2D() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Mapper_Character_2D_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Mapper_Character_2D();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_TableMapper();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UIH_Mapper_Character_2D::StaticRegisterNativesUIH_Mapper_Character_2D()
	{
	}
	UClass* Z_Construct_UClass_UIH_Mapper_Character_2D_NoRegister()
	{
		return UIH_Mapper_Character_2D::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Mapper_Character_2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_TableMapper,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Table/TableMapper/IH_Mapper_Character_2D.h" },
		{ "ModuleRelativePath", "Table/TableMapper/IH_Mapper_Character_2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Mapper_Character_2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::ClassParams = {
		&UIH_Mapper_Character_2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Mapper_Character_2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Mapper_Character_2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Mapper_Character_2D, 1942887411);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Mapper_Character_2D>()
	{
		return UIH_Mapper_Character_2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Mapper_Character_2D(Z_Construct_UClass_UIH_Mapper_Character_2D, &UIH_Mapper_Character_2D::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Mapper_Character_2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Mapper_Character_2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
