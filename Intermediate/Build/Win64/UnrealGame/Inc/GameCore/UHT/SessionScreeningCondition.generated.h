// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Session/SessionScreeningCondition.h"

#ifdef GAMECORE_SessionScreeningCondition_generated_h
#error "SessionScreeningCondition.generated.h already included, missing '#pragma once' in SessionScreeningCondition.h"
#endif
#define GAMECORE_SessionScreeningCondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonSession_SearchResult;

// ********** Begin Class USessionScreeningCondition ***********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CheckCondition_Implementation(UCommonSession_SearchResult* InSearchResult) const; \
	DECLARE_FUNCTION(execCheckCondition); \
	DECLARE_FUNCTION(execK2_FilterSearchResults);


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USessionScreeningCondition_Statics;
GAMECORE_API UClass* Z_Construct_UClass_USessionScreeningCondition(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_USessionScreeningCondition_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_USessionScreeningCondition(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USessionScreeningCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_USessionScreeningCondition) \
	DECLARE_SERIALIZER(USessionScreeningCondition)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USessionScreeningCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USessionScreeningCondition(USessionScreeningCondition&&) = delete; \
	USessionScreeningCondition(const USessionScreeningCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USessionScreeningCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USessionScreeningCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USessionScreeningCondition) \
	NO_API virtual ~USessionScreeningCondition();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_12_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_CALLBACK_WRAPPERS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USessionScreeningCondition;

// ********** End Class USessionScreeningCondition *************************************************

// ********** Begin Class UScreeningConditionComposite *********************************************
struct Z_Construct_UClass_UScreeningConditionComposite_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UScreeningConditionComposite(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_30_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UScreeningConditionComposite_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UScreeningConditionComposite(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UScreeningConditionComposite, USessionScreeningCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UScreeningConditionComposite) \
	DECLARE_SERIALIZER(UScreeningConditionComposite)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreeningConditionComposite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScreeningConditionComposite(UScreeningConditionComposite&&) = delete; \
	UScreeningConditionComposite(const UScreeningConditionComposite&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreeningConditionComposite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreeningConditionComposite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreeningConditionComposite) \
	NO_API virtual ~UScreeningConditionComposite();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_27_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_30_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScreeningConditionComposite;

// ********** End Class UScreeningConditionComposite ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Session_SessionScreeningCondition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
