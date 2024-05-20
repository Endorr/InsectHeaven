// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef INSECTHEAVEN_DialogueEditToolWidget_generated_h
#error "DialogueEditToolWidget.generated.h already included, missing '#pragma once' in DialogueEditToolWidget.h"
#endif
#define INSECTHEAVEN_DialogueEditToolWidget_generated_h

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueClip_Statics; \
	INSECTHEAVEN_API static class UScriptStruct* StaticStruct();


template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<struct FDialogueClip>();

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIH_Dialogue_Statics; \
	INSECTHEAVEN_API static class UScriptStruct* StaticStruct();


template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<struct FIH_Dialogue>();

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateActionPos); \
	DECLARE_FUNCTION(execDeleteSelectAction); \
	DECLARE_FUNCTION(execOnClick_CancelAction); \
	DECLARE_FUNCTION(execOnClick_ChangeAction); \
	DECLARE_FUNCTION(execOnClick_LoadButton); \
	DECLARE_FUNCTION(execOnClick_SaveButton); \
	DECLARE_FUNCTION(execGrabOffAction);


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateActionPos); \
	DECLARE_FUNCTION(execDeleteSelectAction); \
	DECLARE_FUNCTION(execOnClick_CancelAction); \
	DECLARE_FUNCTION(execOnClick_ChangeAction); \
	DECLARE_FUNCTION(execOnClick_LoadButton); \
	DECLARE_FUNCTION(execOnClick_SaveButton); \
	DECLARE_FUNCTION(execGrabOffAction);


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueEditToolWidget(); \
	friend struct Z_Construct_UClass_UDialogueEditToolWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueEditToolWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEditToolWidget)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueEditToolWidget(); \
	friend struct Z_Construct_UClass_UDialogueEditToolWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueEditToolWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEditToolWidget)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueEditToolWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueEditToolWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEditToolWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEditToolWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEditToolWidget(UDialogueEditToolWidget&&); \
	NO_API UDialogueEditToolWidget(const UDialogueEditToolWidget&); \
public:


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueEditToolWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEditToolWidget(UDialogueEditToolWidget&&); \
	NO_API UDialogueEditToolWidget(const UDialogueEditToolWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEditToolWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEditToolWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueEditToolWidget)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CPP_Scroll_Layer() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Scroll_Layer); } \
	FORCEINLINE static uint32 __PPO__CPP_Scroll_ActionLine() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Scroll_ActionLine); } \
	FORCEINLINE static uint32 __PPO__CPP_Canvas_ActionChange() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Canvas_ActionChange); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_ChangeAction() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_ChangeAction); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_CancelAction() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_CancelAction); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_Save() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_Save); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_Load() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Btn_Load); } \
	FORCEINLINE static uint32 __PPO__CPP_Widget_SelectShadow() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Widget_SelectShadow); } \
	FORCEINLINE static uint32 __PPO__CPP_Txt_FileName() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Txt_FileName); } \
	FORCEINLINE static uint32 __PPO__CPP_Img_Test() { return STRUCT_OFFSET(UDialogueEditToolWidget, CPP_Img_Test); } \
	FORCEINLINE static uint32 __PPO__CurrentDialogue() { return STRUCT_OFFSET(UDialogueEditToolWidget, CurrentDialogue); }


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_45_PROLOG
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_INCLASS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UDialogueEditToolWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
