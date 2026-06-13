// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreExperienceUserFacingDefinition.h"

#ifdef GAMECORE_CoreExperienceUserFacingDefinition_generated_h
#error "CoreExperienceUserFacingDefinition.generated.h already included, missing '#pragma once' in CoreExperienceUserFacingDefinition.h"
#endif
#define GAMECORE_CoreExperienceUserFacingDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonSession_HostSessionRequest;
class UObject;

// ********** Begin Class UCoreExperienceUserFacingDefinition **************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateHostingRequest);


GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreExperienceUserFacingDefinition(); \
	friend struct Z_Construct_UClass_UCoreExperienceUserFacingDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreExperienceUserFacingDefinition, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreExperienceUserFacingDefinition_NoRegister) \
	DECLARE_SERIALIZER(UCoreExperienceUserFacingDefinition)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreExperienceUserFacingDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreExperienceUserFacingDefinition(UCoreExperienceUserFacingDefinition&&) = delete; \
	UCoreExperienceUserFacingDefinition(const UCoreExperienceUserFacingDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreExperienceUserFacingDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreExperienceUserFacingDefinition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreExperienceUserFacingDefinition) \
	NO_API virtual ~UCoreExperienceUserFacingDefinition();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_18_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreExperienceUserFacingDefinition;

// ********** End Class UCoreExperienceUserFacingDefinition ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreExperienceUserFacingDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
