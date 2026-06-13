// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CoreGameplayAbility.h"

#ifdef GAMECORE_CoreGameplayAbility_generated_h
#error "CoreGameplayAbility.generated.h already included, missing '#pragma once' in CoreGameplayAbility.h"
#endif
#define GAMECORE_CoreGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;
class ACoreCharacter;
class ACorePlayerController;
class UCoreAbilitySystemComponent;
class UCorePawnControlComponent;
enum class ECoreAbilityActivationGroup : uint8;
struct FGameplayTagContainer;

// ********** Begin ScriptStruct FCoreAbilitySimpleFailureMessage **********************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilitySimpleFailureMessage_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreAbilitySimpleFailureMessage;
// ********** End ScriptStruct FCoreAbilitySimpleFailureMessage ************************************

// ********** Begin ScriptStruct FCoreAbilityMontageFailureMessage *********************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreAbilityMontageFailureMessage_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreAbilityMontageFailureMessage;
// ********** End ScriptStruct FCoreAbilityMontageFailureMessage ***********************************

// ********** Begin Class UCoreGameplayAbility *****************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetPawnControlComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetCoreCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetCorePlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetCoreAbilitySystemComponentFromActorInfo);


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_CALLBACK_WRAPPERS
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayAbility_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreGameplayAbility(); \
	friend struct Z_Construct_UClass_UCoreGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UCoreGameplayAbility)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreGameplayAbility(UCoreGameplayAbility&&) = delete; \
	UCoreGameplayAbility(const UCoreGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreGameplayAbility) \
	NO_API virtual ~UCoreGameplayAbility();


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_118_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_CALLBACK_WRAPPERS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreGameplayAbility;

// ********** End Class UCoreGameplayAbility *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreGameplayAbility_h

// ********** Begin Enum ECoreAbilityActivationPolicy **********************************************
#define FOREACH_ENUM_ECOREABILITYACTIVATIONPOLICY(op) \
	op(ECoreAbilityActivationPolicy::OnInputTriggered) \
	op(ECoreAbilityActivationPolicy::WhileInputActive) \
	op(ECoreAbilityActivationPolicy::OnSpawn) \
	op(ECoreAbilityActivationPolicy::OnInputStarted) 

enum class ECoreAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<ECoreAbilityActivationPolicy> { enum { Value = true }; };
template<> GAMECORE_API UEnum* StaticEnum<ECoreAbilityActivationPolicy>();
// ********** End Enum ECoreAbilityActivationPolicy ************************************************

// ********** Begin Enum ECoreAbilityActivationGroup ***********************************************
#define FOREACH_ENUM_ECOREABILITYACTIVATIONGROUP(op) \
	op(ECoreAbilityActivationGroup::Independent) \
	op(ECoreAbilityActivationGroup::Exclusive_Replaceable) \
	op(ECoreAbilityActivationGroup::Exclusive_Blocking) 

enum class ECoreAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<ECoreAbilityActivationGroup> { enum { Value = true }; };
template<> GAMECORE_API UEnum* StaticEnum<ECoreAbilityActivationGroup>();
// ********** End Enum ECoreAbilityActivationGroup *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
