// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/Dialogue/UIH_DetailsView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIH_DetailsView() {}
// Cross Module References
	INSECTHEAVEN_API UFunction* Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_DetailsView();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_DetailsView_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UDetailsView();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics
	{
		struct IH_DetailsView_eventPVOnPropertyValueChanged_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_DetailsView_eventPVOnPropertyValueChanged_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Dialogue/UIH_DetailsView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_DetailsView, nullptr, "PVOnPropertyValueChanged__DelegateSignature", nullptr, nullptr, sizeof(IH_DetailsView_eventPVOnPropertyValueChanged_Parms), Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UIH_DetailsView::StaticRegisterNativesUIH_DetailsView()
	{
	}
	UClass* Z_Construct_UClass_UIH_DetailsView_NoRegister()
	{
		return UIH_DetailsView::StaticClass();
	}
	struct Z_Construct_UClass_UIH_DetailsView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_DetailsView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDetailsView,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_DetailsView_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UIH_DetailsView_PVOnPropertyValueChanged__DelegateSignature, "PVOnPropertyValueChanged__DelegateSignature" }, // 2752954680
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_DetailsView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/Dialogue/UIH_DetailsView.h" },
		{ "ModuleRelativePath", "Widget/Dialogue/UIH_DetailsView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_DetailsView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_DetailsView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_DetailsView_Statics::ClassParams = {
		&UIH_DetailsView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_DetailsView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_DetailsView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_DetailsView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_DetailsView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_DetailsView, 4040933792);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_DetailsView>()
	{
		return UIH_DetailsView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_DetailsView(Z_Construct_UClass_UIH_DetailsView, &UIH_DetailsView::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_DetailsView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_DetailsView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
