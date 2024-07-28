// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class UGameInstance;
#ifdef INSECTHEAVEN_UIH_FunctionLibrary_generated_h
#error "UIH_FunctionLibrary.generated.h already included, missing '#pragma once' in UIH_FunctionLibrary.h"
#endif
#define INSECTHEAVEN_UIH_FunctionLibrary_generated_h

#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetGameInstance);


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetGameInstance);


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_FunctionLibrary(); \
	friend struct Z_Construct_UClass_UIH_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UIH_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_FunctionLibrary)


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_INCLASS \
private: \
	static void StaticRegisterNativesUIH_FunctionLibrary(); \
	friend struct Z_Construct_UClass_UIH_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UIH_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_FunctionLibrary)


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_FunctionLibrary(UIH_FunctionLibrary&&); \
	NO_API UIH_FunctionLibrary(const UIH_FunctionLibrary&); \
public:


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_FunctionLibrary(UIH_FunctionLibrary&&); \
	NO_API UIH_FunctionLibrary(const UIH_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_FunctionLibrary)


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_PRIVATE_PROPERTY_OFFSET
#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_4_PROLOG
#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_INCLASS \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h_7_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Util_UIH_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
