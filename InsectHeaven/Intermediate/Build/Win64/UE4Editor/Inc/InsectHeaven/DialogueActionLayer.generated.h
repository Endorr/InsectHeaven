// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_DialogueActionLayer_generated_h
#error "DialogueActionLayer.generated.h already included, missing '#pragma once' in DialogueActionLayer.h"
#endif
#define INSECTHEAVEN_DialogueActionLayer_generated_h

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_43_DELEGATE \
struct DialogueActionLayer_eventOnPlayingActionChanged_Parms \
{ \
	int32 ActionIndex; \
}; \
static inline void FOnPlayingActionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayingActionChanged, int32 ActionIndex) \
{ \
	DialogueActionLayer_eventOnPlayingActionChanged_Parms Parms; \
	Parms.ActionIndex=ActionIndex; \
	OnPlayingActionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_RPC_WRAPPERS
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueActionLayer(); \
	friend struct Z_Construct_UClass_UDialogueActionLayer_Statics; \
public: \
	DECLARE_CLASS(UDialogueActionLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueActionLayer)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueActionLayer(); \
	friend struct Z_Construct_UClass_UDialogueActionLayer_Statics; \
public: \
	DECLARE_CLASS(UDialogueActionLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueActionLayer)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueActionLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueActionLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueActionLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueActionLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueActionLayer(UDialogueActionLayer&&); \
	NO_API UDialogueActionLayer(const UDialogueActionLayer&); \
public:


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueActionLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueActionLayer(UDialogueActionLayer&&); \
	NO_API UDialogueActionLayer(const UDialogueActionLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueActionLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueActionLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueActionLayer)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Actions() { return STRUCT_OFFSET(UDialogueActionLayer, Actions); }


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_9_PROLOG
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_INCLASS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UDialogueActionLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueActionLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
