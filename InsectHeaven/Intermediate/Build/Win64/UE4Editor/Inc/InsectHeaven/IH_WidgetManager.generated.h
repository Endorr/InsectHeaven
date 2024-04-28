// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UIH_Widget;
#ifdef INSECTHEAVEN_IH_WidgetManager_generated_h
#error "IH_WidgetManager.generated.h already included, missing '#pragma once' in IH_WidgetManager.h"
#endif
#define INSECTHEAVEN_IH_WidgetManager_generated_h

#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadComplete); \
	DECLARE_FUNCTION(execGetWidget);


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadComplete); \
	DECLARE_FUNCTION(execGetWidget);


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_WidgetManager(); \
	friend struct Z_Construct_UClass_UIH_WidgetManager_Statics; \
public: \
	DECLARE_CLASS(UIH_WidgetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_WidgetManager)


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUIH_WidgetManager(); \
	friend struct Z_Construct_UClass_UIH_WidgetManager_Statics; \
public: \
	DECLARE_CLASS(UIH_WidgetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_WidgetManager)


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_WidgetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_WidgetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_WidgetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_WidgetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_WidgetManager(UIH_WidgetManager&&); \
	NO_API UIH_WidgetManager(const UIH_WidgetManager&); \
public:


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_WidgetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_WidgetManager(UIH_WidgetManager&&); \
	NO_API UIH_WidgetManager(const UIH_WidgetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_WidgetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_WidgetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_WidgetManager)


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mapCreatedWidget() { return STRUCT_OFFSET(UIH_WidgetManager, mapCreatedWidget); } \
	FORCEINLINE static uint32 __PPO__arrObjectPool() { return STRUCT_OFFSET(UIH_WidgetManager, arrObjectPool); } \
	FORCEINLINE static uint32 __PPO__DeactivePool() { return STRUCT_OFFSET(UIH_WidgetManager, DeactivePool); }


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_10_PROLOG
#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_INCLASS \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_WidgetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Widget_IH_WidgetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
