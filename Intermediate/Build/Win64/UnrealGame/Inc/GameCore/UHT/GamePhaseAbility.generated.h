// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/Phases/GamePhaseAbility.h"

#ifdef GAMECORE_GamePhaseAbility_generated_h
#error "GamePhaseAbility.generated.h already included, missing '#pragma once' in GamePhaseAbility.h"
#endif
#define GAMECORE_GamePhaseAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGamePhaseAbility ********************************************************
struct Z_Construct_UClass_UGamePhaseAbility_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseAbility(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGamePhaseAbility_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UGamePhaseAbility(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGamePhaseAbility, UCoreGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGamePhaseAbility) \
	DECLARE_SERIALIZER(UGamePhaseAbility)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGamePhaseAbility(UGamePhaseAbility&&) = delete; \
	UGamePhaseAbility(const UGamePhaseAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamePhaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamePhaseAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamePhaseAbility) \
	NO_API virtual ~UGamePhaseAbility();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h_12_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGamePhaseAbility;

// ********** End Class UGamePhaseAbility **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
