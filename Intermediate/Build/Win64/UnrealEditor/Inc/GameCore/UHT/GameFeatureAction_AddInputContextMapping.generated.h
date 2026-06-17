// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatures/GameFeatureAction_AddInputContextMapping.h"

#ifdef GAMECORE_GameFeatureAction_AddInputContextMapping_generated_h
#error "GameFeatureAction_AddInputContextMapping.generated.h already included, missing '#pragma once' in GameFeatureAction_AddInputContextMapping.h"
#endif
#define GAMECORE_GameFeatureAction_AddInputContextMapping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInputMappingContextAndPriority ***********************************
struct Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FInputMappingContextAndPriority(ETypeConstructPhase::Inner); }


struct FInputMappingContextAndPriority;
// ********** End ScriptStruct FInputMappingContextAndPriority *************************************

// ********** Begin Class UGameFeatureAction_AddInputContextMapping ********************************
struct Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_44_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AddInputContextMapping, UGameFeatureAction_WorldActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping) \
	DECLARE_SERIALIZER(UGameFeatureAction_AddInputContextMapping)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMECORE_API UGameFeatureAction_AddInputContextMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_AddInputContextMapping(UGameFeatureAction_AddInputContextMapping&&) = delete; \
	UGameFeatureAction_AddInputContextMapping(const UGameFeatureAction_AddInputContextMapping&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMECORE_API, UGameFeatureAction_AddInputContextMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_AddInputContextMapping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_AddInputContextMapping) \
	GAMECORE_API ~UGameFeatureAction_AddInputContextMapping();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_41_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_44_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_AddInputContextMapping;

// ********** End Class UGameFeatureAction_AddInputContextMapping **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputContextMapping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
