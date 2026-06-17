// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CoreHUD.h"

#ifdef GAMECORE_CoreHUD_generated_h
#error "CoreHUD.generated.h already included, missing '#pragma once' in CoreHUD.h"
#endif
#define GAMECORE_CoreHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreHUD *****************************************************************
struct Z_Construct_UClass_ACoreHUD_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACoreHUD(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACoreHUD_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACoreHUD(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACoreHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACoreHUD) \
	DECLARE_SERIALIZER(ACoreHUD)


#define FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoreHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreHUD(ACoreHUD&&) = delete; \
	ACoreHUD(const ACoreHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreHUD) \
	NO_API virtual ~ACoreHUD();


#define FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h_17_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h_20_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreHUD;

// ********** End Class ACoreHUD *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
