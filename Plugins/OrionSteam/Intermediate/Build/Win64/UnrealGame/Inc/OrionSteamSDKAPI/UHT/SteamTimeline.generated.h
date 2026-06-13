// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamTimeline/SteamTimeline.h"

#ifdef ORIONSTEAMSDKAPI_SteamTimeline_generated_h
#error "SteamTimeline.generated.h already included, missing '#pragma once' in SteamTimeline.h"
#endif
#define ORIONSTEAMSDKAPI_SteamTimeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamTimeline;
class UOrionSteamTimelineGamePhases;
enum class ESteamTimelineEventClipPriority : uint8;
enum class ESteamTimelineGameMode : uint8;
struct FTimelineEventHandle;

// ********** Begin Class UOrionSteamTimeline ******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTimelineGameMode); \
	DECLARE_FUNCTION(execRemoveTimelineEvent); \
	DECLARE_FUNCTION(execEndRangeTimelineEvent); \
	DECLARE_FUNCTION(execUpdateRangeTimelineEvent); \
	DECLARE_FUNCTION(execStartRangeTimelineEvent); \
	DECLARE_FUNCTION(execAddRangeTimelineEvent); \
	DECLARE_FUNCTION(execAddInstantaneousTimelineEvent); \
	DECLARE_FUNCTION(execClearTimelineTooltip); \
	DECLARE_FUNCTION(execSetTimelineTooltip); \
	DECLARE_FUNCTION(execGetSteamTimeline);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamTimeline_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamTimeline(); \
	friend struct Z_Construct_UClass_UOrionSteamTimeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamTimeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamTimeline, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamTimeline_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamTimeline)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamTimeline(UOrionSteamTimeline&&) = delete; \
	UOrionSteamTimeline(const UOrionSteamTimeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamTimeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamTimeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamTimeline)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamTimeline;

// ********** End Class UOrionSteamTimeline ********************************************************

// ********** Begin Class UOrionSteamTimelineGamePhases ********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenOverlayToTimelineEvent); \
	DECLARE_FUNCTION(execOpenOverlayToGamePhase); \
	DECLARE_FUNCTION(execSetGamePhaseAttribute); \
	DECLARE_FUNCTION(execAddGamePhaseTag); \
	DECLARE_FUNCTION(execSetGamePhaseID); \
	DECLARE_FUNCTION(execEndGamePhase); \
	DECLARE_FUNCTION(execStartGamePhase); \
	DECLARE_FUNCTION(execGetSteamTimelineGamePhase);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamTimelineGamePhases_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamTimelineGamePhases(); \
	friend struct Z_Construct_UClass_UOrionSteamTimelineGamePhases_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamTimelineGamePhases_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamTimelineGamePhases, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamTimelineGamePhases_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamTimelineGamePhases)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamTimelineGamePhases(UOrionSteamTimelineGamePhases&&) = delete; \
	UOrionSteamTimelineGamePhases(const UOrionSteamTimelineGamePhases&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamTimelineGamePhases); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamTimelineGamePhases); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamTimelineGamePhases)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_154_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamTimelineGamePhases;

// ********** End Class UOrionSteamTimelineGamePhases **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamTimeline_SteamTimeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
