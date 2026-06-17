// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/CoreGlobalAbilitySubsystem.h"

#ifdef GAMECORE_CoreGlobalAbilitySubsystem_generated_h
#error "CoreGlobalAbilitySubsystem.generated.h already included, missing '#pragma once' in CoreGlobalAbilitySubsystem.h"
#endif
#define GAMECORE_CoreGlobalAbilitySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UGameplayAbility;
class UGameplayEffect;

// ********** Begin ScriptStruct FGlobalAppliedAbilityList *****************************************
struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGlobalAppliedAbilityList(ETypeConstructPhase::Inner); }


struct FGlobalAppliedAbilityList;
// ********** End ScriptStruct FGlobalAppliedAbilityList *******************************************

// ********** Begin ScriptStruct FGlobalAppliedEffectList ******************************************
struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGlobalAppliedEffectList(ETypeConstructPhase::Inner); }


struct FGlobalAppliedEffectList;
// ********** End ScriptStruct FGlobalAppliedEffectList ********************************************

// ********** Begin Class UCoreGlobalAbilitySubsystem **********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveEffectFromAll); \
	DECLARE_FUNCTION(execRemoveAbilityFromAll); \
	DECLARE_FUNCTION(execApplyEffectToAll); \
	DECLARE_FUNCTION(execApplyAbilityToAll);


struct Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreGlobalAbilitySubsystem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreGlobalAbilitySubsystem_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreGlobalAbilitySubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreGlobalAbilitySubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreGlobalAbilitySubsystem) \
	DECLARE_SERIALIZER(UCoreGlobalAbilitySubsystem)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreGlobalAbilitySubsystem(UCoreGlobalAbilitySubsystem&&) = delete; \
	UCoreGlobalAbilitySubsystem(const UCoreGlobalAbilitySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGlobalAbilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGlobalAbilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreGlobalAbilitySubsystem) \
	NO_API virtual ~UCoreGlobalAbilitySubsystem();


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_44_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreGlobalAbilitySubsystem;

// ********** End Class UCoreGlobalAbilitySubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreGlobalAbilitySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
