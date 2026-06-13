// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/CoreAbilitySet.h"

#ifdef GAMECORE_CoreAbilitySet_generated_h
#error "CoreAbilitySet.generated.h already included, missing '#pragma once' in CoreAbilitySet.h"
#endif
#define GAMECORE_CoreAbilitySet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCoreAbilitySet_GameplayAbility ***********************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayAbility_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreAbilitySet_GameplayAbility;
// ********** End ScriptStruct FCoreAbilitySet_GameplayAbility *************************************

// ********** Begin ScriptStruct FCoreAbilitySet_GameplayEffect ************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilitySet_GameplayEffect_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreAbilitySet_GameplayEffect;
// ********** End ScriptStruct FCoreAbilitySet_GameplayEffect **************************************

// ********** Begin ScriptStruct FCoreAbilitySet_AttributeSet **************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilitySet_AttributeSet_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreAbilitySet_AttributeSet;
// ********** End ScriptStruct FCoreAbilitySet_AttributeSet ****************************************

// ********** Begin ScriptStruct FCoreAbilitySet_GrantedHandles ************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilitySet_GrantedHandles_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCoreAbilitySet_GrantedHandles;
// ********** End ScriptStruct FCoreAbilitySet_GrantedHandles **************************************

// ********** Begin Class UCoreAbilitySet **********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySet_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAbilitySet(); \
	friend struct Z_Construct_UClass_UCoreAbilitySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreAbilitySet, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAbilitySet_NoRegister) \
	DECLARE_SERIALIZER(UCoreAbilitySet)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_118_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAbilitySet(UCoreAbilitySet&&) = delete; \
	UCoreAbilitySet(const UCoreAbilitySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAbilitySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAbilitySet) \
	NO_API virtual ~UCoreAbilitySet();


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_115_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_118_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAbilitySet;

// ********** End Class UCoreAbilitySet ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
