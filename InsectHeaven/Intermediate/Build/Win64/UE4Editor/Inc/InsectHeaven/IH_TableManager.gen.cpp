// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/IH_TableManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_TableManager() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_TableManager_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_TableManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INSECTHEAVEN_API UEnum* Z_Construct_UEnum_InsectHeaven_ETableDataType();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_TableMapper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIH_TableManager::execLoadComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubName);
		P_GET_PROPERTY(FStrProperty,Z_Param__ResourcePath);
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_OBJECT(UObject,Z_Param__LoadedTable);
		P_GET_UBOOL(Z_Param__ExtraBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadComplete(Z_Param_SubName,Z_Param__ResourcePath,Z_Param__Index,Z_Param__LoadedTable,Z_Param__ExtraBool);
		P_NATIVE_END;
	}
	void UIH_TableManager::StaticRegisterNativesUIH_TableManager()
	{
		UClass* Class = UIH_TableManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadComplete", &UIH_TableManager::execLoadComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics
	{
		struct IH_TableManager_eventLoadComplete_Parms
		{
			FString SubName;
			FString _ResourcePath;
			int32 _Index;
			UObject* _LoadedTable;
			bool _ExtraBool;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ResourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__ResourcePath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__LoadedTable;
		static void NewProp__ExtraBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__ExtraBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp_SubName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp_SubName = { "SubName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_TableManager_eventLoadComplete_Parms, SubName), METADATA_PARAMS(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp_SubName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp_SubName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ResourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ResourcePath = { "_ResourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_TableManager_eventLoadComplete_Parms, _ResourcePath), METADATA_PARAMS(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ResourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ResourcePath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_TableManager_eventLoadComplete_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__LoadedTable = { "_LoadedTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IH_TableManager_eventLoadComplete_Parms, _LoadedTable), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ExtraBool_SetBit(void* Obj)
	{
		((IH_TableManager_eventLoadComplete_Parms*)Obj)->_ExtraBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ExtraBool = { "_ExtraBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IH_TableManager_eventLoadComplete_Parms), &Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ExtraBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp_SubName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ResourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__LoadedTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::NewProp__ExtraBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Row DataMap\n" },
		{ "ModuleRelativePath", "Table/IH_TableManager.h" },
		{ "ToolTip", "Row DataMap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_TableManager, nullptr, "LoadComplete", nullptr, nullptr, sizeof(IH_TableManager_eventLoadComplete_Parms), Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_TableManager_LoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_TableManager_LoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_TableManager_NoRegister()
	{
		return UIH_TableManager::StaticClass();
	}
	struct Z_Construct_UClass_UIH_TableManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapTablePath_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_mapTablePath_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mapTablePath_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapTablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mapTablePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mapTableMapper_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_mapTableMapper_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mapTableMapper_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapTableMapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mapTableMapper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RawTable_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RawTable_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RawTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_TableManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_TableManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_TableManager_LoadComplete, "LoadComplete" }, // 3011248285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_TableManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Table/IH_TableManager.h" },
		{ "ModuleRelativePath", "Table/IH_TableManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_ValueProp = { "mapTablePath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_Key_KeyProp = { "mapTablePath_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_InsectHeaven_ETableDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_MetaData[] = {
		{ "ModuleRelativePath", "Table/IH_TableManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath = { "mapTablePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_TableManager, mapTablePath), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_ValueProp = { "mapTableMapper", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UIH_TableMapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_Key_KeyProp = { "mapTableMapper_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_InsectHeaven_ETableDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_MetaData[] = {
		{ "ModuleRelativePath", "Table/IH_TableManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper = { "mapTableMapper", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_TableManager, mapTableMapper), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_ValueProp = { "RawTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_Key_KeyProp = { "RawTable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_MetaData[] = {
		{ "ModuleRelativePath", "Table/IH_TableManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable = { "RawTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_TableManager, RawTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_TableManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_mapTableMapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_TableManager_Statics::NewProp_RawTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_TableManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_TableManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_TableManager_Statics::ClassParams = {
		&UIH_TableManager::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_TableManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_TableManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_TableManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_TableManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_TableManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_TableManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_TableManager, 1103660870);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_TableManager>()
	{
		return UIH_TableManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_TableManager(Z_Construct_UClass_UIH_TableManager, &UIH_TableManager::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_TableManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_TableManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
