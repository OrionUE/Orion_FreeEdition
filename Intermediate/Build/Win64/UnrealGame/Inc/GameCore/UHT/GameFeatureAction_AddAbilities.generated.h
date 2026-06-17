// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatures/GameFeatureAction_AddAbilities.h"

#ifdef GAMECORE_GameFeatureAction_AddAbilities_generated_h
#error "GameFeatureAction_AddAbilities.generated.h already included, missing '#pragma once' in GameFeatureAction_AddAbilities.h"
#endif
#define GAMECORE_GameFeatureAction_AddAbilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCoreAbilityGrant *************************************************
struct Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAbilityGrant(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCoreAbilityGrant_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCoreAbilityGrant(ETypeConstructPhase::Inner); }


struct FCoreAbilityGrant;
// ********** End ScriptStruct FCoreAbilityGrant ***************************************************

// ********** Begin ScriptStruct FCoreAttributeSetGrant ********************************************
struct Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreAttributeSetGrant(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCoreAttributeSetGrant_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCoreAttributeSetGrant(ETypeConstructPhase::Inner); }


struct FCoreAttributeSetGrant;
// ********** End ScriptStruct FCoreAttributeSetGrant **********************************************

// ********** Begin ScriptStruct FGameFeatureAbilitiesEntry ****************************************
struct Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry(ETypeConstructPhase::Inner); }


struct FGameFeatureAbilitiesEntry;
// ********** End ScriptStruct FGameFeatureAbilitiesEntry ******************************************

// ********** Begin Class UGameFeatureAction_AddAbilities ******************************************
struct Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_75_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UGameFeatureAction_AddAbilities(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AddAbilities, UGameFeatureAction_WorldActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameFeatureAction_AddAbilities) \
	DECLARE_SERIALIZER(UGameFeatureAction_AddAbilities)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMECORE_API UGameFeatureAction_AddAbilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_AddAbilities(UGameFeatureAction_AddAbilities&&) = delete; \
	UGameFeatureAction_AddAbilities(const UGameFeatureAction_AddAbilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMECORE_API, UGameFeatureAction_AddAbilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_AddAbilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_AddAbilities) \
	GAMECORE_API ~UGameFeatureAction_AddAbilities();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_72_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_75_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_AddAbilities;

// ********** End Class UGameFeatureAction_AddAbilities ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddAbilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
