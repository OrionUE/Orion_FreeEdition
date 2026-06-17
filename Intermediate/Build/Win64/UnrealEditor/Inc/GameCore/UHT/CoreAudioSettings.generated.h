// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/CoreAudioSettings.h"

#ifdef GAMECORE_CoreAudioSettings_generated_h
#error "CoreAudioSettings.generated.h already included, missing '#pragma once' in CoreAudioSettings.h"
#endif
#define GAMECORE_CoreAudioSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSubmixEffectChainMap *********************************************
struct Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics;
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectChainMap(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSubmixEffectChainMap(ETypeConstructPhase::Inner); }


struct FSubmixEffectChainMap;
// ********** End ScriptStruct FSubmixEffectChainMap ***********************************************

// ********** Begin Class UCoreAudioSettings *******************************************************
struct Z_Construct_UClass_UCoreAudioSettings_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreAudioSettings(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreAudioSettings_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreAudioSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAudioSettings) \
	DECLARE_SERIALIZER(UCoreAudioSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAudioSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAudioSettings(UCoreAudioSettings&&) = delete; \
	UCoreAudioSettings(const UCoreAudioSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAudioSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAudioSettings) \
	NO_API virtual ~UCoreAudioSettings();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_32_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAudioSettings;

// ********** End Class UCoreAudioSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
