// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/IH_Widget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EUMGSequencePlayMode();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIH_Widget::execPlayAnimationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_p_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_p_start_time);
		P_GET_PROPERTY(FIntProperty,Z_Param_p_loop_count);
		P_GET_PROPERTY(FByteProperty,Z_Param_p_play_mode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_p_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayAnimationByName(Z_Param_p_name,Z_Param_p_start_time,Z_Param_p_loop_count,EUMGSequencePlayMode::Type(Z_Param_p_play_mode),Z_Param_p_speed);
		P_NATIVE_END;
	}
	void UIH_Widget::StaticRegisterNativesUIH_Widget()
	{
		UClass* Class = UIH_Widget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayAnimationByName", &UIH_Widget::execPlayAnimationByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics
	{
		struct IH_Widget_eventPlayAnimationByName_Parms
		{
			FName p_name;
			float p_start_time;
			int32 p_loop_count;
			TEnumAsByte<EUMGSequencePlayMode::Type> p_play_mode;
			float p_speed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_p_name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_p_start_time;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_p_loop_count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_p_play_mode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_p_speed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_name = { "p_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_Widget_eventPlayAnimationByName_Parms, p_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_start_time = { "p_start_time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_Widget_eventPlayAnimationByName_Parms, p_start_time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_loop_count = { "p_loop_count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_Widget_eventPlayAnimationByName_Parms, p_loop_count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_play_mode = { "p_play_mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_Widget_eventPlayAnimationByName_Parms, p_play_mode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_speed = { "p_speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_Widget_eventPlayAnimationByName_Parms, p_speed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IH_Widget_eventPlayAnimationByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_Widget_eventPlayAnimationByName_Parms), &Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_start_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_loop_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_play_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_p_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "UIH_Widget" },
		{ "ModuleRelativePath", "Widget/IH_Widget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget, nullptr, "PlayAnimationByName", nullptr, nullptr, sizeof(IH_Widget_eventPlayAnimationByName_Parms), Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_PlayAnimationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_PlayAnimationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_NoRegister()
	{
		return UIH_Widget::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mapAnimations_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mapAnimations_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mapAnimations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_PlayAnimationByName, "PlayAnimationByName" }, // 3266559832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/IH_Widget.h" },
		{ "ModuleRelativePath", "Widget/IH_Widget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_ValueProp = { "mapAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_Key_KeyProp = { "mapAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_MetaData[] = {
		{ "ModuleRelativePath", "Widget/IH_Widget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations = { "mapAnimations", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget, mapAnimations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_Widget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_Statics::NewProp_mapAnimations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_Statics::ClassParams = {
		&UIH_Widget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_Widget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget, 2401802133);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget>()
	{
		return UIH_Widget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget(Z_Construct_UClass_UIH_Widget, &UIH_Widget::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
