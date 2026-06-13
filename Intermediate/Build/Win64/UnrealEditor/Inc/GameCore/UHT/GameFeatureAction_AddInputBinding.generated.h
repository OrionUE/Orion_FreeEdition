// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatures/GameFeatureAction_AddInputBinding.h"

#ifdef GAMECORE_GameFeatureAction_AddInputBinding_generated_h
#error "GameFeatureAction_AddInputBinding.generated.h already included, missing '#pragma once' in GameFeatureAction_AddInputBinding.h"
#endif
#define GAMECORE_GameFeatureAction_AddInputBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeatureAction_AddInputBinding ***************************************
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_AddInputBinding(); \
	friend struct Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AddInputBinding, UGameFeatureAction_WorldActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_AddInputBinding)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMECORE_API UGameFeatureAction_AddInputBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_AddInputBinding(UGameFeatureAction_AddInputBinding&&) = delete; \
	UGameFeatureAction_AddInputBinding(const UGameFeatureAction_AddInputBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMECORE_API, UGameFeatureAction_AddInputBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_AddInputBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_AddInputBinding) \
	GAMECORE_API virtual ~UGameFeatureAction_AddInputBinding();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h_23_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_AddInputBinding;

// ********** End Class UGameFeatureAction_AddInputBinding *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddInputBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
