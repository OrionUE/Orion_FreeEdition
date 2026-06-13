// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreExperienceDefinition.h"

#ifdef GAMECORE_CoreExperienceDefinition_generated_h
#error "CoreExperienceDefinition.generated.h already included, missing '#pragma once' in CoreExperienceDefinition.h"
#endif
#define GAMECORE_CoreExperienceDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreExperienceDefinition ************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceDefinition_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreExperienceDefinition(); \
	friend struct Z_Construct_UClass_UCoreExperienceDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreExperienceDefinition, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreExperienceDefinition_NoRegister) \
	DECLARE_SERIALIZER(UCoreExperienceDefinition)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreExperienceDefinition(UCoreExperienceDefinition&&) = delete; \
	UCoreExperienceDefinition(const UCoreExperienceDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreExperienceDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreExperienceDefinition); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCoreExperienceDefinition) \
	NO_API virtual ~UCoreExperienceDefinition();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h_19_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h_22_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreExperienceDefinition;

// ********** End Class UCoreExperienceDefinition **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
