// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatures/GameFeatureAction_WorldActionBase.h"

#ifdef GAMECORE_GameFeatureAction_WorldActionBase_generated_h
#error "GameFeatureAction_WorldActionBase.generated.h already included, missing '#pragma once' in GameFeatureAction_WorldActionBase.h"
#endif
#define GAMECORE_GameFeatureAction_WorldActionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameFeatureAction_WorldActionBase ***************************************
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_WorldActionBase(); \
	friend struct Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_WorldActionBase, UGameFeatureAction, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_WorldActionBase)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameFeatureAction_WorldActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_WorldActionBase(UGameFeatureAction_WorldActionBase&&) = delete; \
	UGameFeatureAction_WorldActionBase(const UGameFeatureAction_WorldActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameFeatureAction_WorldActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_WorldActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_WorldActionBase) \
	NO_API virtual ~UGameFeatureAction_WorldActionBase();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h_24_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_WorldActionBase;

// ********** End Class UGameFeatureAction_WorldActionBase *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_WorldActionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
