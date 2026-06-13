// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMusic/SteamMusic.h"

#ifdef ORIONSTEAMSDKAPI_SteamMusic_generated_h
#error "SteamMusic.generated.h already included, missing '#pragma once' in SteamMusic.h"
#endif
#define ORIONSTEAMSDKAPI_SteamMusic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamMusic;
enum class ESteamAudioPlaybackStatus : uint8;

// ********** Begin Class UOrionSteamMusic *********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled); \
	DECLARE_FUNCTION(execGetSteamMusic);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMusic_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamMusic(); \
	friend struct Z_Construct_UClass_UOrionSteamMusic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMusic_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamMusic, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMusic_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamMusic)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMusic(UOrionSteamMusic&&) = delete; \
	UOrionSteamMusic(const UOrionSteamMusic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMusic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMusic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamMusic)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMusic;

// ********** End Class UOrionSteamMusic ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMusic_SteamMusic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
