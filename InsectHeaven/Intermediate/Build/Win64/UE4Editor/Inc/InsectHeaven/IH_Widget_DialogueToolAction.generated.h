// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
#ifdef INSECTHEAVEN_IH_Widget_DialogueToolAction_generated_h
#error "IH_Widget_DialogueToolAction.generated.h already included, missing '#pragma once' in IH_Widget_DialogueToolAction.h"
#endif
#define INSECTHEAVEN_IH_Widget_DialogueToolAction_generated_h

#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_9_DELEGATE \
struct _Script_InsectHeaven_eventSelectDelegate_Parms \
{ \
	UButton* _Button; \
}; \
static inline void FSelectDelegate_DelegateWrapper(const FMulticastScriptDelegate& SelectDelegate, UButton* _Button) \
{ \
	_Script_InsectHeaven_eventSelectDelegate_Parms Parms; \
	Parms._Button=_Button; \
	SelectDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClickChangeAction); \
	DECLARE_FUNCTION(execOnClickOption); \
	DECLARE_FUNCTION(execOnReleaseAction); \
	DECLARE_FUNCTION(execOnClickActon); \
	DECLARE_FUNCTION(execOnPressSelectButton);


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClickChangeAction); \
	DECLARE_FUNCTION(execOnClickOption); \
	DECLARE_FUNCTION(execOnReleaseAction); \
	DECLARE_FUNCTION(execOnClickActon); \
	DECLARE_FUNCTION(execOnPressSelectButton);


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_Widget_DialogueToolAction(); \
	friend struct Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics; \
public: \
	DECLARE_CLASS(UIH_Widget_DialogueToolAction, UIH_Widget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_Widget_DialogueToolAction)


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUIH_Widget_DialogueToolAction(); \
	friend struct Z_Construct_UClass_UIH_Widget_DialogueToolAction_Statics; \
public: \
	DECLARE_CLASS(UIH_Widget_DialogueToolAction, UIH_Widget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_Widget_DialogueToolAction)


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_Widget_DialogueToolAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_Widget_DialogueToolAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_Widget_DialogueToolAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_Widget_DialogueToolAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_Widget_DialogueToolAction(UIH_Widget_DialogueToolAction&&); \
	NO_API UIH_Widget_DialogueToolAction(const UIH_Widget_DialogueToolAction&); \
public:


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_Widget_DialogueToolAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_Widget_DialogueToolAction(UIH_Widget_DialogueToolAction&&); \
	NO_API UIH_Widget_DialogueToolAction(const UIH_Widget_DialogueToolAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_Widget_DialogueToolAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_Widget_DialogueToolAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_Widget_DialogueToolAction)


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CPP_Switcher_Content() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Switcher_Content); } \
	FORCEINLINE static uint32 __PPO__CPP_Txt_Name() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Txt_Name); } \
	FORCEINLINE static uint32 __PPO__CPP_Txt_Desc() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Txt_Desc); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_Click() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_Click); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_Option() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_Option); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_Change() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_Change); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_PrevAdd() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_PrevAdd); } \
	FORCEINLINE static uint32 __PPO__CPP_Btn_NextAdd() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Btn_NextAdd); } \
	FORCEINLINE static uint32 __PPO__CPP_Canvas_Option() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Canvas_Option); } \
	FORCEINLINE static uint32 __PPO__CPP_Img_Select() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, CPP_Img_Select); } \
	FORCEINLINE static uint32 __PPO__ToolWidget() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, ToolWidget); } \
	FORCEINLINE static uint32 __PPO__ActionInfo() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, ActionInfo); } \
	FORCEINLINE static uint32 __PPO__selectClick() { return STRUCT_OFFSET(UIH_Widget_DialogueToolAction, selectClick); }


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_11_PROLOG
#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_INCLASS \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_Widget_DialogueToolAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Widget_DialogueTool_IH_Widget_DialogueToolAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
