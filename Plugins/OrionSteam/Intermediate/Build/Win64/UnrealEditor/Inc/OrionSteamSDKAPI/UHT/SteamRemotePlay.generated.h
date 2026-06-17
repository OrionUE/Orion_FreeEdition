// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlay.h"

#ifdef ORIONSTEAMSDKAPI_SteamRemotePlay_generated_h
#error "SteamRemotePlay.generated.h already included, missing '#pragma once' in SteamRemotePlay.h"
#endif
#define ORIONSTEAMSDKAPI_SteamRemotePlay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOrionSteamRemotePlay;
enum class EOrionSteamDeviceFormFactor : uint8;
struct FRemotePlayCursorID;
struct FRemotePlayInput;
struct FRemotePlaySessionID;
struct FSteamID;

// ********** Begin Class UOrionSteamRemotePlay ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMouseCursor); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execSetMouseVisibility); \
	DECLARE_FUNCTION(execGetInput); \
	DECLARE_FUNCTION(execDisableRemotePlayTogetherDirectInput); \
	DECLARE_FUNCTION(execBEnableRemotePlayTogetherDirectInput); \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execShowRemotePlayTogetherUI); \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionSteamID); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionCount); \
	DECLARE_FUNCTION(execGetSteamRemotePlay);


struct Z_Construct_UClass_UOrionSteamRemotePlay_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamRemotePlay(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamRemotePlay_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamRemotePlay(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamRemotePlay, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamRemotePlay) \
	DECLARE_SERIALIZER(UOrionSteamRemotePlay)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamRemotePlay(UOrionSteamRemotePlay&&) = delete; \
	UOrionSteamRemotePlay(const UOrionSteamRemotePlay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamRemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamRemotePlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamRemotePlay)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamRemotePlay;

// ********** End Class UOrionSteamRemotePlay ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
