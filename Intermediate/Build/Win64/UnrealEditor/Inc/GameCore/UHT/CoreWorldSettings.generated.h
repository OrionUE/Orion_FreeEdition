// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreWorldSettings.h"

#ifdef GAMECORE_CoreWorldSettings_generated_h
#error "CoreWorldSettings.generated.h already included, missing '#pragma once' in CoreWorldSettings.h"
#endif
#define GAMECORE_CoreWorldSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreWorldSettings *******************************************************
struct Z_Construct_UClass_ACoreWorldSettings_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACoreWorldSettings(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACoreWorldSettings_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACoreWorldSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACoreWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACoreWorldSettings) \
	DECLARE_SERIALIZER(ACoreWorldSettings)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreWorldSettings(ACoreWorldSettings&&) = delete; \
	ACoreWorldSettings(const ACoreWorldSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreWorldSettings) \
	NO_API virtual ~ACoreWorldSettings();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h_24_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreWorldSettings;

// ********** End Class ACoreWorldSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
