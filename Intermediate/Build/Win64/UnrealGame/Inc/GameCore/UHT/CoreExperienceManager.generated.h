// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreExperienceManager.h"

#ifdef GAMECORE_CoreExperienceManager_generated_h
#error "CoreExperienceManager.generated.h already included, missing '#pragma once' in CoreExperienceManager.h"
#endif
#define GAMECORE_CoreExperienceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreExperienceManager ***************************************************
struct Z_Construct_UClass_UCoreExperienceManager_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceManager(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreExperienceManager_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreExperienceManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreExperienceManager, UEngineSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreExperienceManager) \
	DECLARE_SERIALIZER(UCoreExperienceManager)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreExperienceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreExperienceManager(UCoreExperienceManager&&) = delete; \
	UCoreExperienceManager(const UCoreExperienceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreExperienceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreExperienceManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreExperienceManager) \
	NO_API virtual ~UCoreExperienceManager();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h_19_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreExperienceManager;

// ********** End Class UCoreExperienceManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
