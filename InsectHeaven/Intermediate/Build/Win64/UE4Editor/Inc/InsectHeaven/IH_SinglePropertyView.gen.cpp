// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/Dialogue/IH_SinglePropertyView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_SinglePropertyView() {}
// Cross Module References
	INSECTHEAVEN_API UFunction* Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SinglePropertyView();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_SinglePropertyView_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_USinglePropertyView();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics
	{
		struct IH_SinglePropertyView_eventPVOnPropertyValueChanged_Parms
		{
			FName Name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_SinglePropertyView_eventPVOnPropertyValueChanged_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Dialogue/IH_SinglePropertyView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_SinglePropertyView, nullptr, "PVOnPropertyValueChanged__DelegateSignature", nullptr, nullptr, sizeof(IH_SinglePropertyView_eventPVOnPropertyValueChanged_Parms), Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UIH_SinglePropertyView::execPostPropertyChanged_PV)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostPropertyChanged_PV(Z_Param__PropertyName);
		P_NATIVE_END;
	}
	void UIH_SinglePropertyView::StaticRegisterNativesUIH_SinglePropertyView()
	{
		UClass* Class = UIH_SinglePropertyView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostPropertyChanged_PV", &UIH_SinglePropertyView::execPostPropertyChanged_PV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics
	{
		struct IH_SinglePropertyView_eventPostPropertyChanged_PV_Parms
		{
			FName _PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::NewProp__PropertyName = { "_PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_SinglePropertyView_eventPostPropertyChanged_PV_Parms, _PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::NewProp__PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Dialogue/IH_SinglePropertyView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_SinglePropertyView, nullptr, "PostPropertyChanged_PV", nullptr, nullptr, sizeof(IH_SinglePropertyView_eventPostPropertyChanged_PV_Parms), Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_SinglePropertyView_NoRegister()
	{
		return UIH_SinglePropertyView::StaticClass();
	}
	struct Z_Construct_UClass_UIH_SinglePropertyView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_SinglePropertyView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USinglePropertyView,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_SinglePropertyView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_SinglePropertyView_PostPropertyChanged_PV, "PostPropertyChanged_PV" }, // 2950222340
		{ &Z_Construct_UDelegateFunction_UIH_SinglePropertyView_PVOnPropertyValueChanged__DelegateSignature, "PVOnPropertyValueChanged__DelegateSignature" }, // 2254212799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_SinglePropertyView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/Dialogue/IH_SinglePropertyView.h" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_SinglePropertyView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_SinglePropertyView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_SinglePropertyView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_SinglePropertyView_Statics::ClassParams = {
		&UIH_SinglePropertyView::StaticClass,
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
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_SinglePropertyView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_SinglePropertyView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_SinglePropertyView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_SinglePropertyView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_SinglePropertyView, 3930570958);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_SinglePropertyView>()
	{
		return UIH_SinglePropertyView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_SinglePropertyView(Z_Construct_UClass_UIH_SinglePropertyView, &UIH_SinglePropertyView::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_SinglePropertyView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_SinglePropertyView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
