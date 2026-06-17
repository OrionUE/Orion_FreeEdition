// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreExperienceManagerComponent.h"

#ifdef GAMECORE_CoreExperienceManagerComponent_generated_h
#error "CoreExperienceManagerComponent.generated.h already included, missing '#pragma once' in CoreExperienceManagerComponent.h"
#endif
#define GAMECORE_CoreExperienceManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreExperienceManagerComponent ******************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentExperience);


struct Z_Construct_UClass_UCoreExperienceManagerComponent_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManagerComponent(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreExperienceManagerComponent_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreExperienceManagerComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreExperienceManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreExperienceManagerComponent) \
	DECLARE_SERIALIZER(UCoreExperienceManagerComponent) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UCoreExperienceManagerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentExperience=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentExperience	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreExperienceManagerComponent(UCoreExperienceManagerComponent&&) = delete; \
	UCoreExperienceManagerComponent(const UCoreExperienceManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreExperienceManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreExperienceManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreExperienceManagerComponent) \
	NO_API virtual ~UCoreExperienceManagerComponent();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_41_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreExperienceManagerComponent;

// ********** End Class UCoreExperienceManagerComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
