// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/Phases/GamePhaseSubsystemBase.h"

#ifdef GAMECORE_GamePhaseSubsystemBase_generated_h
#error "GamePhaseSubsystemBase.generated.h already included, missing '#pragma once' in GamePhaseSubsystemBase.h"
#endif
#define GAMECORE_GamePhaseSubsystemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGamePhaseAbility;
enum class EPhaseTagMatchType : uint8;
struct FGameplayTag;

// ********** Begin Delegate FGamePhaseDynamicDelegate *********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_16_DELEGATE \
GAMECORE_API void FGamePhaseDynamicDelegate_DelegateWrapper(const FScriptDelegate& GamePhaseDynamicDelegate, const UGamePhaseAbility* Phase);


// ********** End Delegate FGamePhaseDynamicDelegate ***********************************************

// ********** Begin Delegate FGamePhaseTagDynamicDelegate ******************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_19_DELEGATE \
GAMECORE_API void FGamePhaseTagDynamicDelegate_DelegateWrapper(const FScriptDelegate& GamePhaseTagDynamicDelegate, FGameplayTag const& PhaseTag);


// ********** End Delegate FGamePhaseTagDynamicDelegate ********************************************

// ********** Begin Class UGamePhaseSubsystemBase **************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPhaseActive); \
	DECLARE_FUNCTION(execK2_WhenPhaseEnds); \
	DECLARE_FUNCTION(execK2_WhenPhaseStartsOrIsActive); \
	DECLARE_FUNCTION(execK2_StartPhase);


GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseSubsystemBase_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamePhaseSubsystemBase(); \
	friend struct Z_Construct_UClass_UGamePhaseSubsystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseSubsystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGamePhaseSubsystemBase, UCoreWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGamePhaseSubsystemBase_NoRegister) \
	DECLARE_SERIALIZER(UGamePhaseSubsystemBase)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGamePhaseSubsystemBase(UGamePhaseSubsystemBase&&) = delete; \
	UGamePhaseSubsystemBase(const UGamePhaseSubsystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamePhaseSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamePhaseSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGamePhaseSubsystemBase) \
	NO_API virtual ~UGamePhaseSubsystemBase();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_42_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGamePhaseSubsystemBase;

// ********** End Class UGamePhaseSubsystemBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseSubsystemBase_h

// ********** Begin Enum EPhaseTagMatchType ********************************************************
#define FOREACH_ENUM_EPHASETAGMATCHTYPE(op) \
	op(EPhaseTagMatchType::ExactMatch) \
	op(EPhaseTagMatchType::PartialMatch) 

enum class EPhaseTagMatchType : uint8;
template<> struct TIsUEnumClass<EPhaseTagMatchType> { enum { Value = true }; };
template<> GAMECORE_API UEnum* StaticEnum<EPhaseTagMatchType>();
// ********** End Enum EPhaseTagMatchType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
