// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamSharedAudioSubsystem.h"

#ifdef ORIONSTEAMSHARED_OrionSteamSharedAudioSubsystem_generated_h
#error "OrionSteamSharedAudioSubsystem.generated.h already included, missing '#pragma once' in OrionSteamSharedAudioSubsystem.h"
#endif
#define ORIONSTEAMSHARED_OrionSteamSharedAudioSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FOrionSteamAudioInputDeviceInfo;

// ********** Begin Class UOrionSteamAudioCaptureBlueprintLibrary **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execConv_AudioInputDeviceInfoToString);


struct Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics;
ORIONSTEAMSHARED_API UClass* Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics; \
	friend ORIONSTEAMSHARED_API UClass* ::Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamAudioCaptureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamShared"), Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary) \
	DECLARE_SERIALIZER(UOrionSteamAudioCaptureBlueprintLibrary)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamAudioCaptureBlueprintLibrary(UOrionSteamAudioCaptureBlueprintLibrary&&) = delete; \
	UOrionSteamAudioCaptureBlueprintLibrary(const UOrionSteamAudioCaptureBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamAudioCaptureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamAudioCaptureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamAudioCaptureBlueprintLibrary) \
	NO_API virtual ~UOrionSteamAudioCaptureBlueprintLibrary();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_15_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamAudioCaptureBlueprintLibrary;

// ********** End Class UOrionSteamAudioCaptureBlueprintLibrary ************************************

// ********** Begin Class UOrionSteamSharedAudioSubsystem ******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_FindAudioDeviceInfoFromDeviceName); \
	DECLARE_FUNCTION(execK2_GetAudioInputDevices); \
	DECLARE_FUNCTION(execK2_FindAudioDeviceInfoFromDeviceId);


struct Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics;
ORIONSTEAMSHARED_API UClass* Z_Construct_UClass_UOrionSteamSharedAudioSubsystem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics; \
	friend ORIONSTEAMSHARED_API UClass* ::Z_Construct_UClass_UOrionSteamSharedAudioSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamSharedAudioSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamShared"), Z_Construct_UClass_UOrionSteamSharedAudioSubsystem) \
	DECLARE_SERIALIZER(UOrionSteamSharedAudioSubsystem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamSharedAudioSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamSharedAudioSubsystem(UOrionSteamSharedAudioSubsystem&&) = delete; \
	UOrionSteamSharedAudioSubsystem(const UOrionSteamSharedAudioSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamSharedAudioSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamSharedAudioSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamSharedAudioSubsystem) \
	NO_API virtual ~UOrionSteamSharedAudioSubsystem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_40_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamSharedAudioSubsystem;

// ********** End Class UOrionSteamSharedAudioSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
