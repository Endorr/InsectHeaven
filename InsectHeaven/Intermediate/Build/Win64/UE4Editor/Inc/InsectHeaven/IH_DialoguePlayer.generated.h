// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_IH_DialoguePlayer_generated_h
#error "IH_DialoguePlayer.generated.h already included, missing '#pragma once' in IH_DialoguePlayer.h"
#endif
#define INSECTHEAVEN_IH_DialoguePlayer_generated_h

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_69_DELEGATE \
struct IH_DialoguePlayer_eventOnPlayingActionChanged_Parms \
{ \
	int32 ActionIndex; \
}; \
static inline void FOnPlayingActionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayingActionChanged, int32 ActionIndex) \
{ \
	IH_DialoguePlayer_eventOnPlayingActionChanged_Parms Parms; \
	Parms.ActionIndex=ActionIndex; \
	OnPlayingActionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPostActionChanged); \
	DECLARE_FUNCTION(execRemoveActionLayer); \
	DECLARE_FUNCTION(execAddActionLayer); \
	DECLARE_FUNCTION(execSetActionByIndex); \
	DECLARE_FUNCTION(execSetPause); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execLoadToJson); \
	DECLARE_FUNCTION(execSaveToJason);


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPostActionChanged); \
	DECLARE_FUNCTION(execRemoveActionLayer); \
	DECLARE_FUNCTION(execAddActionLayer); \
	DECLARE_FUNCTION(execSetActionByIndex); \
	DECLARE_FUNCTION(execSetPause); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execLoadToJson); \
	DECLARE_FUNCTION(execSaveToJason);


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIH_DialoguePlayer(); \
	friend struct Z_Construct_UClass_AIH_DialoguePlayer_Statics; \
public: \
	DECLARE_CLASS(AIH_DialoguePlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(AIH_DialoguePlayer)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAIH_DialoguePlayer(); \
	friend struct Z_Construct_UClass_AIH_DialoguePlayer_Statics; \
public: \
	DECLARE_CLASS(AIH_DialoguePlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(AIH_DialoguePlayer)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIH_DialoguePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIH_DialoguePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIH_DialoguePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIH_DialoguePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIH_DialoguePlayer(AIH_DialoguePlayer&&); \
	NO_API AIH_DialoguePlayer(const AIH_DialoguePlayer&); \
public:


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIH_DialoguePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIH_DialoguePlayer(AIH_DialoguePlayer&&); \
	NO_API AIH_DialoguePlayer(const AIH_DialoguePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIH_DialoguePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIH_DialoguePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIH_DialoguePlayer)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionLayers() { return STRUCT_OFFSET(AIH_DialoguePlayer, ActionLayers); } \
	FORCEINLINE static uint32 __PPO__DialogueWidget() { return STRUCT_OFFSET(AIH_DialoguePlayer, DialogueWidget); }


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_7_PROLOG
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_INCLASS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class AIH_DialoguePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_Dialogue_IH_DialoguePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
