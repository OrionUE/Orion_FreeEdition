// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatures/GameFeatureAction_AddWidgets.h"

#ifdef GAMECORE_GameFeatureAction_AddWidgets_generated_h
#error "GameFeatureAction_AddWidgets.generated.h already included, missing '#pragma once' in GameFeatureAction_AddWidgets.h"
#endif
#define GAMECORE_GameFeatureAction_AddWidgets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCoreHUDLayoutRequest *********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreHUDLayoutRequest;
// ********** End ScriptStruct FCoreHUDLayoutRequest ***********************************************

// ********** Begin ScriptStruct FCoreHUDElementEntry **********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct();


struct FCoreHUDElementEntry;
// ********** End ScriptStruct FCoreHUDElementEntry ************************************************

// ********** Begin Class UGameFeatureAction_AddWidgets ********************************************
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeatureAction_AddWidgets(); \
	friend struct Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AddWidgets, UGameFeatureAction_WorldActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister) \
	DECLARE_SERIALIZER(UGameFeatureAction_AddWidgets)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMECORE_API UGameFeatureAction_AddWidgets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeatureAction_AddWidgets(UGameFeatureAction_AddWidgets&&) = delete; \
	UGameFeatureAction_AddWidgets(const UGameFeatureAction_AddWidgets&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMECORE_API, UGameFeatureAction_AddWidgets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureAction_AddWidgets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureAction_AddWidgets) \
	GAMECORE_API virtual ~UGameFeatureAction_AddWidgets();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_48_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_51_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeatureAction_AddWidgets;

// ********** End Class UGameFeatureAction_AddWidgets **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
