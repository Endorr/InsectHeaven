// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_IH_SingletonManager_generated_h
#error "IH_SingletonManager.generated.h already included, missing '#pragma once' in IH_SingletonManager.h"
#endif
#define INSECTHEAVEN_IH_SingletonManager_generated_h

#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_RPC_WRAPPERS
#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_SingletonManager(); \
	friend struct Z_Construct_UClass_UIH_SingletonManager_Statics; \
public: \
	DECLARE_CLASS(UIH_SingletonManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_SingletonManager)


#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUIH_SingletonManager(); \
	friend struct Z_Construct_UClass_UIH_SingletonManager_Statics; \
public: \
	DECLARE_CLASS(UIH_SingletonManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_SingletonManager)


#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_SingletonManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_SingletonManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_SingletonManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_SingletonManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_SingletonManager(UIH_SingletonManager&&); \
	NO_API UIH_SingletonManager(const UIH_SingletonManager&); \
public:


#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_SingletonManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_SingletonManager(UIH_SingletonManager&&); \
	NO_API UIH_SingletonManager(const UIH_SingletonManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_SingletonManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_SingletonManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_SingletonManager)


#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameInstance() { return STRUCT_OFFSET(UIH_SingletonManager, GameInstance); }


#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_10_PROLOG
#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_INCLASS \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_SingletonManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_IH_SingletonManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
