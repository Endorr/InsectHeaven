// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_IH_SinglePropertyView_generated_h
#error "IH_SinglePropertyView.generated.h already included, missing '#pragma once' in IH_SinglePropertyView.h"
#endif
#define INSECTHEAVEN_IH_SinglePropertyView_generated_h

#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_18_DELEGATE \
struct IH_SinglePropertyView_eventPVOnPropertyValueChanged_Parms \
{ \
	FName Name; \
}; \
static inline void FPVOnPropertyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& PVOnPropertyValueChanged, FName Name) \
{ \
	IH_SinglePropertyView_eventPVOnPropertyValueChanged_Parms Parms; \
	Parms.Name=Name; \
	PVOnPropertyValueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostPropertyChanged_PV);


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostPropertyChanged_PV);


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_SinglePropertyView(); \
	friend struct Z_Construct_UClass_UIH_SinglePropertyView_Statics; \
public: \
	DECLARE_CLASS(UIH_SinglePropertyView, USinglePropertyView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_SinglePropertyView)


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUIH_SinglePropertyView(); \
	friend struct Z_Construct_UClass_UIH_SinglePropertyView_Statics; \
public: \
	DECLARE_CLASS(UIH_SinglePropertyView, USinglePropertyView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_SinglePropertyView)


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_SinglePropertyView(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_SinglePropertyView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_SinglePropertyView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_SinglePropertyView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_SinglePropertyView(UIH_SinglePropertyView&&); \
	NO_API UIH_SinglePropertyView(const UIH_SinglePropertyView&); \
public:


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_SinglePropertyView(UIH_SinglePropertyView&&); \
	NO_API UIH_SinglePropertyView(const UIH_SinglePropertyView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_SinglePropertyView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_SinglePropertyView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIH_SinglePropertyView)


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_PRIVATE_PROPERTY_OFFSET
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_6_PROLOG
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_INCLASS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_SinglePropertyView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Widget_Dialogue_IH_SinglePropertyView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
