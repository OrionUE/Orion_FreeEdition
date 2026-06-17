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
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCoreHUDLayoutRequest *********************************************
struct Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreHUDLayoutRequest(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCoreHUDLayoutRequest(ETypeConstructPhase::Inner); }


struct FCoreHUDLayoutRequest;
// ********** End ScriptStruct FCoreHUDLayoutRequest ***********************************************

// ********** Begin ScriptStruct FCoreHUDElementEntry **********************************************
struct Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreHUDElementEntry(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCoreHUDElementEntry(ETypeConstructPhase::Inner); }


struct FCoreHUDElementEntry;
// ********** End ScriptStruct FCoreHUDElementEntry ************************************************

// ********** Begin Class UGameFeatureAction_AddWidgets ********************************************
struct Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h_51_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UGameFeatureAction_AddWidgets(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGameFeatureAction_AddWidgets, UGameFeatureAction_WorldActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameFeatureAction_AddWidgets) \
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
	GAMECORE_API ~UGameFeatureAction_AddWidgets();


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
