// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_IH_StateBase_generated_h
#error "IH_StateBase.generated.h already included, missing '#pragma once' in IH_StateBase.h"
#endif
#define INSECTHEAVEN_IH_StateBase_generated_h

#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitState); \
	DECLARE_FUNCTION(execOnTickState); \
	DECLARE_FUNCTION(execOnBeginState);


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitState); \
	DECLARE_FUNCTION(execOnTickState); \
	DECLARE_FUNCTION(execOnBeginState);


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_StateBase(); \
	friend struct Z_Construct_UClass_UIH_StateBase_Statics; \
public: \
	DECLARE_CLASS(UIH_StateBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_StateBase)


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUIH_StateBase(); \
	friend struct Z_Construct_UClass_UIH_StateBase_Statics; \
public: \
	DECLARE_CLASS(UIH_StateBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_StateBase)


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_StateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_StateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_StateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_StateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_StateBase(UIH_StateBase&&); \
	NO_API UIH_StateBase(const UIH_StateBase&); \
public:


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_StateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_StateBase(UIH_StateBase&&); \
	NO_API UIH_StateBase(const UIH_StateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_StateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_StateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_StateBase)


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateIndex() { return STRUCT_OFFSET(UIH_StateBase, StateIndex); } \
	FORCEINLINE static uint32 __PPO__StateName() { return STRUCT_OFFSET(UIH_StateBase, StateName); }


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_6_PROLOG
#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_INCLASS \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_StateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Util_IH_StateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
