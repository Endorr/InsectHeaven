// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/IH_WidgetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_WidgetManager() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_WidgetManager_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_WidgetManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIH_WidgetManager::execLoadComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_p_sSubName);
		P_GET_PROPERTY(FStrProperty,Z_Param_p_sResourcePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_p_index);
		P_GET_OBJECT(UObject,Z_Param_p_pLoadedResourceObject);
		P_GET_UBOOL(Z_Param_p_bSubBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadComplete(Z_Param_p_sSubName,Z_Param_p_sResourcePath,Z_Param_p_index,Z_Param_p_pLoadedResourceObject,Z_Param_p_bSubBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIH_WidgetManager::execGetWidget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out__TypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIH_Widget**)Z_Param__Result=P_THIS->GetWidget(Z_Param_Out__TypeName);
		P_NATIVE_END;
	}
	void UIH_WidgetManager::StaticRegisterNativesUIH_WidgetManager()
	{
		UClass* Class = UIH_WidgetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWidget", &UIH_WidgetManager::execGetWidget },
			{ "LoadComplete", &UIH_WidgetManager::execLoadComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics
	{
		struct IH_WidgetManager_eventGetWidget_Parms
		{
			FName _TypeName;
			UIH_Widget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__TypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp__TypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp__TypeName = { "_TypeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_WidgetManager_eventGetWidget_Parms, _TypeName), METADATA_PARAMS(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp__TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp__TypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_WidgetManager_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UIH_Widget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp__TypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPV_WidgetManager" },
		{ "ModuleRelativePath", "Widget/IH_WidgetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_WidgetManager, nullptr, "GetWidget", nullptr, nullptr, sizeof(IH_WidgetManager_eventGetWidget_Parms), Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_WidgetManager_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_WidgetManager_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics
	{
		struct IH_WidgetManager_eventLoadComplete_Parms
		{
			FString p_sSubName;
			FString p_sResourcePath;
			int32 p_index;
			UObject* p_pLoadedResourceObject;
			bool p_bSubBool;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_sSubName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_p_sSubName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_sResourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_p_sResourcePath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_p_index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_pLoadedResourceObject;
		static void NewProp_p_bSubBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_p_bSubBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sSubName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sSubName = { "p_sSubName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_WidgetManager_eventLoadComplete_Parms, p_sSubName), METADATA_PARAMS(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sSubName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sSubName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sResourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sResourcePath = { "p_sResourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_WidgetManager_eventLoadComplete_Parms, p_sResourcePath), METADATA_PARAMS(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sResourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sResourcePath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_index = { "p_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_WidgetManager_eventLoadComplete_Parms, p_index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_pLoadedResourceObject = { "p_pLoadedResourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_WidgetManager_eventLoadComplete_Parms, p_pLoadedResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_bSubBool_SetBit(void* Obj)
	{
		((IH_WidgetManager_eventLoadComplete_Parms*)Obj)->p_bSubBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_bSubBool = { "p_bSubBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_WidgetManager_eventLoadComplete_Parms), &Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_bSubBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sSubName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_sResourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_pLoadedResourceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::NewProp_p_bSubBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/IH_WidgetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_WidgetManager, nullptr, "LoadComplete", nullptr, nullptr, sizeof(IH_WidgetManager_eventLoadComplete_Parms), Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_WidgetManager_LoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_WidgetManager_LoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_WidgetManager_NoRegister()
	{
		return UIH_WidgetManager::StaticClass();
	}
	struct Z_Construct_UClass_UIH_WidgetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_mapCreatedWidget_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mapCreatedWidget_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapCreatedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mapCreatedWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrObjectPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrObjectPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrObjectPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeactivePool_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DeactivePool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_WidgetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_WidgetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_WidgetManager_GetWidget, "GetWidget" }, // 3115458728
		{ &Z_Construct_UFunction_UIH_WidgetManager_LoadComplete, "LoadComplete" }, // 229949859
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_WidgetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/IH_WidgetManager.h" },
		{ "ModuleRelativePath", "Widget/IH_WidgetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_ValueProp = { "mapCreatedWidget", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UIH_Widget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_Key_KeyProp = { "mapCreatedWidget_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_MetaData[] = {
		{ "Comment", "//Widget Managing Container\n" },
		{ "ModuleRelativePath", "Widget/IH_WidgetManager.h" },
		{ "ToolTip", "Widget Managing Container" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget = { "mapCreatedWidget", nullptr, (EPropertyFlags)0x0044008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_WidgetManager, mapCreatedWidget), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool_Inner = { "arrObjectPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UIH_Widget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/IH_WidgetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool = { "arrObjectPool", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_WidgetManager, arrObjectPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool_ElementProp = { "DeactivePool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UIH_Widget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/IH_WidgetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool = { "DeactivePool", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_WidgetManager, DeactivePool), METADATA_PARAMS(Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_WidgetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_mapCreatedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_arrObjectPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_WidgetManager_Statics::NewProp_DeactivePool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_WidgetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_WidgetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_WidgetManager_Statics::ClassParams = {
		&UIH_WidgetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_WidgetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_WidgetManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_WidgetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_WidgetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_WidgetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_WidgetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_WidgetManager, 4286270586);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_WidgetManager>()
	{
		return UIH_WidgetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_WidgetManager(Z_Construct_UClass_UIH_WidgetManager, &UIH_WidgetManager::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_WidgetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_WidgetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
