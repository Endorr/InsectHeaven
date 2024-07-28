// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_UIH_DetailsView_generated_h
#error "UIH_DetailsView.generated.h already included, missing '#pragma once' in UIH_DetailsView.h"
#endif
#define INSECTHEAVEN_UIH_DetailsView_generated_h

#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_17_DELEGATE \
struct IH_DetailsView_eventPVOnPropertyValueChanged_Parms \
{ \
	FName PropertyName; \
}; \
static inline void FPVOnPropertyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& PVOnPropertyValueChanged, FName PropertyName) \
{ \
	IH_DetailsView_eventPVOnPropertyValueChanged_Parms Parms; \
	Parms.PropertyName=PropertyName; \
	PVOnPropertyValueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_RPC_WRAPPERS
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIH_DetailsView(); \
	friend struct Z_Construct_UClass_UIH_DetailsView_Statics; \
public: \
	DECLARE_CLASS(UIH_DetailsView, UDetailsView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_DetailsView)


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUIH_DetailsView(); \
	friend struct Z_Construct_UClass_UIH_DetailsView_Statics; \
public: \
	DECLARE_CLASS(UIH_DetailsView, UDetailsView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UIH_DetailsView)


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_DetailsView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_DetailsView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_DetailsView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_DetailsView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_DetailsView(UIH_DetailsView&&); \
	NO_API UIH_DetailsView(const UIH_DetailsView&); \
public:


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIH_DetailsView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIH_DetailsView(UIH_DetailsView&&); \
	NO_API UIH_DetailsView(const UIH_DetailsView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIH_DetailsView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIH_DetailsView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIH_DetailsView)


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_PRIVATE_PROPERTY_OFFSET
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_7_PROLOG
#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_INCLASS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UIH_DetailsView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Widget_Dialogue_UIH_DetailsView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
