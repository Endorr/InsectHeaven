// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class UButton;
#ifdef INSECTHEAVEN_DialogueEditToolWidget_generated_h
#error "DialogueEditToolWidget.generated.h already included, missing '#pragma once' in DialogueEditToolWidget.h"
#endif
#define INSECTHEAVEN_DialogueEditToolWidget_generated_h

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIH_Dialogue_Statics; \
	INSECTHEAVEN_API static class UScriptStruct* StaticStruct();


template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<struct FIH_Dialogue>();

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueClip_Statics; \
	INSECTHEAVEN_API static class UScriptStruct* StaticStruct();


template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<struct FDialogueClip>();

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_9_DELEGATE \
static inline void FDialoguePlayer_OnFinish_DelegateWrapper(const FMulticastScriptDelegate& DialoguePlayer_OnFinish) \
{ \
	DialoguePlayer_OnFinish.ProcessMulticastDelegate<UObject>(NULL); \
}


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPostDialogueFinish); \
	DECLARE_FUNCTION(execOnPostPlayingActionChanged); \
	DECLARE_FUNCTION(execOnPropertyChanged_SequenceInspector); \
	DECLARE_FUNCTION(execOnPropertyChange_SearchActionClass); \
	DECLARE_FUNCTION(execOnPropertyChange_ChangeActionClass); \
	DECLARE_FUNCTION(execOnPropertyChange_AddActionClass); \
	DECLARE_FUNCTION(execOnScrollSequenceActionVertical); \
	DECLARE_FUNCTION(execOnScrollSequenceActionHorizontal); \
	DECLARE_FUNCTION(execOnScrollSequenceLayer); \
	DECLARE_FUNCTION(execOnClickStopPreviewButton); \
	DECLARE_FUNCTION(execOnClickPlayPreviewButton); \
	DECLARE_FUNCTION(execOnClickSearchActionNext); \
	DECLARE_FUNCTION(execOnClickSearchActionPrev); \
	DECLARE_FUNCTION(execOnClickChangeActionCancel); \
	DECLARE_FUNCTION(execOnClickChangeActionConfirm); \
	DECLARE_FUNCTION(execOnClickAddActionCancel); \
	DECLARE_FUNCTION(execOnClickAddActionConfirm); \
	DECLARE_FUNCTION(execOnClickLoadButton); \
	DECLARE_FUNCTION(execOnClickSaveButton); \
	DECLARE_FUNCTION(execMoveToNeighbor); \
	DECLARE_FUNCTION(execSetControllPressed); \
	DECLARE_FUNCTION(execDeleteSelectAction); \
	DECLARE_FUNCTION(execQuickSave); \
	DECLARE_FUNCTION(execPasteAction); \
	DECLARE_FUNCTION(execCopyAction); \
	DECLARE_FUNCTION(execDuplicateAction); \
	DECLARE_FUNCTION(execUndoClip); \
	DECLARE_FUNCTION(execIsControllPressing); \
	DECLARE_FUNCTION(execCloseDeselectContext); \
	DECLARE_FUNCTION(execGrabOffAction); \
	DECLARE_FUNCTION(execGrabAction);


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPostDialogueFinish); \
	DECLARE_FUNCTION(execOnPostPlayingActionChanged); \
	DECLARE_FUNCTION(execOnPropertyChanged_SequenceInspector); \
	DECLARE_FUNCTION(execOnPropertyChange_SearchActionClass); \
	DECLARE_FUNCTION(execOnPropertyChange_ChangeActionClass); \
	DECLARE_FUNCTION(execOnPropertyChange_AddActionClass); \
	DECLARE_FUNCTION(execOnScrollSequenceActionVertical); \
	DECLARE_FUNCTION(execOnScrollSequenceActionHorizontal); \
	DECLARE_FUNCTION(execOnScrollSequenceLayer); \
	DECLARE_FUNCTION(execOnClickStopPreviewButton); \
	DECLARE_FUNCTION(execOnClickPlayPreviewButton); \
	DECLARE_FUNCTION(execOnClickSearchActionNext); \
	DECLARE_FUNCTION(execOnClickSearchActionPrev); \
	DECLARE_FUNCTION(execOnClickChangeActionCancel); \
	DECLARE_FUNCTION(execOnClickChangeActionConfirm); \
	DECLARE_FUNCTION(execOnClickAddActionCancel); \
	DECLARE_FUNCTION(execOnClickAddActionConfirm); \
	DECLARE_FUNCTION(execOnClickLoadButton); \
	DECLARE_FUNCTION(execOnClickSaveButton); \
	DECLARE_FUNCTION(execMoveToNeighbor); \
	DECLARE_FUNCTION(execSetControllPressed); \
	DECLARE_FUNCTION(execDeleteSelectAction); \
	DECLARE_FUNCTION(execQuickSave); \
	DECLARE_FUNCTION(execPasteAction); \
	DECLARE_FUNCTION(execCopyAction); \
	DECLARE_FUNCTION(execDuplicateAction); \
	DECLARE_FUNCTION(execUndoClip); \
	DECLARE_FUNCTION(execIsControllPressing); \
	DECLARE_FUNCTION(execCloseDeselectContext); \
	DECLARE_FUNCTION(execGrabOffAction); \
	DECLARE_FUNCTION(execGrabAction);


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueToolWidget(); \
	friend struct Z_Construct_UClass_UDialogueToolWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueToolWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueToolWidget)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueToolWidget(); \
	friend struct Z_Construct_UClass_UDialogueToolWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueToolWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueToolWidget)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueToolWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueToolWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueToolWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueToolWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueToolWidget(UDialogueToolWidget&&); \
	NO_API UDialogueToolWidget(const UDialogueToolWidget&); \
public:


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueToolWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueToolWidget(UDialogueToolWidget&&); \
	NO_API UDialogueToolWidget(const UDialogueToolWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueToolWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueToolWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueToolWidget)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentDialogue() { return STRUCT_OFFSET(UDialogueToolWidget, CurrentDialogue); } \
	FORCEINLINE static uint32 __PPO__CurrentSelectedAction() { return STRUCT_OFFSET(UDialogueToolWidget, CurrentSelectedAction); } \
	FORCEINLINE static uint32 __PPO__Text_Filename_Content() { return STRUCT_OFFSET(UDialogueToolWidget, Text_Filename_Content); } \
	FORCEINLINE static uint32 __PPO__Button_Save() { return STRUCT_OFFSET(UDialogueToolWidget, Button_Save); } \
	FORCEINLINE static uint32 __PPO__Button_Load() { return STRUCT_OFFSET(UDialogueToolWidget, Button_Load); } \
	FORCEINLINE static uint32 __PPO__Text_TimeLineProgress() { return STRUCT_OFFSET(UDialogueToolWidget, Text_TimeLineProgress); } \
	FORCEINLINE static uint32 __PPO__DetailsView_Inspector() { return STRUCT_OFFSET(UDialogueToolWidget, DetailsView_Inspector); } \
	FORCEINLINE static uint32 __PPO__Image_IndexLine() { return STRUCT_OFFSET(UDialogueToolWidget, Image_IndexLine); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_SequenceIndex() { return STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceIndex); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_SequenceLayer() { return STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceLayer); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_SequenceAction_Horizontal() { return STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceAction_Horizontal); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_SequenceAction_Vertical() { return STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_SequenceAction_Vertical); } \
	FORCEINLINE static uint32 __PPO__Canvas_AddAction() { return STRUCT_OFFSET(UDialogueToolWidget, Canvas_AddAction); } \
	FORCEINLINE static uint32 __PPO__Canvas_ChangeAction() { return STRUCT_OFFSET(UDialogueToolWidget, Canvas_ChangeAction); } \
	FORCEINLINE static uint32 __PPO__PropertyView_AddActionClass() { return STRUCT_OFFSET(UDialogueToolWidget, PropertyView_AddActionClass); } \
	FORCEINLINE static uint32 __PPO__PropertyView_ChangeActionClass() { return STRUCT_OFFSET(UDialogueToolWidget, PropertyView_ChangeActionClass); } \
	FORCEINLINE static uint32 __PPO__Button_AddAction_Confirm() { return STRUCT_OFFSET(UDialogueToolWidget, Button_AddAction_Confirm); } \
	FORCEINLINE static uint32 __PPO__Button_AddAction_Cancel() { return STRUCT_OFFSET(UDialogueToolWidget, Button_AddAction_Cancel); } \
	FORCEINLINE static uint32 __PPO__Button_ChangeAction_Confirm() { return STRUCT_OFFSET(UDialogueToolWidget, Button_ChangeAction_Confirm); } \
	FORCEINLINE static uint32 __PPO__Button_ChangeAction_Cancel() { return STRUCT_OFFSET(UDialogueToolWidget, Button_ChangeAction_Cancel); } \
	FORCEINLINE static uint32 __PPO__Image_TimelineBlock() { return STRUCT_OFFSET(UDialogueToolWidget, Image_TimelineBlock); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_Timeline_Hittest() { return STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_Timeline_Hittest); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_Timeline() { return STRUCT_OFFSET(UDialogueToolWidget, ScrollBox_Timeline); } \
	FORCEINLINE static uint32 __PPO__HorizontalBox_Timeline_HitTest_Dummy() { return STRUCT_OFFSET(UDialogueToolWidget, HorizontalBox_Timeline_HitTest_Dummy); } \
	FORCEINLINE static uint32 __PPO__HorizontalBox_Timeline_Dummy() { return STRUCT_OFFSET(UDialogueToolWidget, HorizontalBox_Timeline_Dummy); } \
	FORCEINLINE static uint32 __PPO__Slider_TimeLine_HitTest() { return STRUCT_OFFSET(UDialogueToolWidget, Slider_TimeLine_HitTest); } \
	FORCEINLINE static uint32 __PPO__Slider_TimeLine() { return STRUCT_OFFSET(UDialogueToolWidget, Slider_TimeLine); } \
	FORCEINLINE static uint32 __PPO__GrabView_Action() { return STRUCT_OFFSET(UDialogueToolWidget, GrabView_Action); } \
	FORCEINLINE static uint32 __PPO__CPP_Mouse_Index() { return STRUCT_OFFSET(UDialogueToolWidget, CPP_Mouse_Index); } \
	FORCEINLINE static uint32 __PPO__Button_PlayPreview() { return STRUCT_OFFSET(UDialogueToolWidget, Button_PlayPreview); } \
	FORCEINLINE static uint32 __PPO__Button_StopPreview() { return STRUCT_OFFSET(UDialogueToolWidget, Button_StopPreview); }


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_43_PROLOG
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_INCLASS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UDialogueToolWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_Dialogue_DialogueEditToolWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
