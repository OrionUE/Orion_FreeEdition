// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/CoreAbilityTagRelationshipMapping.h"

#ifdef GAMECORE_CoreAbilityTagRelationshipMapping_generated_h
#error "CoreAbilityTagRelationshipMapping.generated.h already included, missing '#pragma once' in CoreAbilityTagRelationshipMapping.h"
#endif
#define GAMECORE_CoreAbilityTagRelationshipMapping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCoreAbilityTagRelationship ***************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilityTagRelationship_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreAbilityTagRelationship;
// ********** End ScriptStruct FCoreAbilityTagRelationship *****************************************

// ********** Begin Class UCoreAbilityTagRelationshipMapping ***************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAbilityTagRelationshipMapping(); \
	friend struct Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreAbilityTagRelationshipMapping, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister) \
	DECLARE_SERIALIZER(UCoreAbilityTagRelationshipMapping)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAbilityTagRelationshipMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAbilityTagRelationshipMapping(UCoreAbilityTagRelationshipMapping&&) = delete; \
	UCoreAbilityTagRelationshipMapping(const UCoreAbilityTagRelationshipMapping&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAbilityTagRelationshipMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAbilityTagRelationshipMapping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAbilityTagRelationshipMapping) \
	NO_API virtual ~UCoreAbilityTagRelationshipMapping();


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_52_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_55_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAbilityTagRelationshipMapping;

// ********** End Class UCoreAbilityTagRelationshipMapping *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilityTagRelationshipMapping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
