// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUtils/SteamUtils.h"

#ifdef ORIONSTEAMSDKAPI_SteamUtils_generated_h
#error "SteamUtils.generated.h already included, missing '#pragma once' in SteamUtils.h"
#endif
#define ORIONSTEAMSDKAPI_SteamUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamUtils;
enum class EOrionSteamIPv6ConnectivityProtocol : uint8;
enum class EOrionSteamIPv6ConnectivityState : uint8;
enum class ESteamFloatingGamepadTextInputMode : uint8;
enum class ESteamGamepadTextInputLineMode : uint8;
enum class ESteamGamepadTextInputMode : uint8;
enum class ESteamNotificationPosition : uint8;
enum class ESteamTextFilteringContext : uint8;
enum class ESteamUniverse : uint8;
struct FSteamID;

// ********** Begin Class UOrionSteamUtils *********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDismissGamepadTextInput); \
	DECLARE_FUNCTION(execDismissFloatingGamepadTextInput); \
	DECLARE_FUNCTION(execSetGameLauncherMode); \
	DECLARE_FUNCTION(execShowFloatingGamepadTextInput); \
	DECLARE_FUNCTION(execGetIPv6ConnectivityState); \
	DECLARE_FUNCTION(execStartVRDashboard); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execIsSteamRunningOnSteamDeck); \
	DECLARE_FUNCTION(execFilterText); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetAppID_Pure); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execBOverlayNeedsPresent); \
	DECLARE_FUNCTION(execGetSteamUtils);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtils_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamUtils(); \
	friend struct Z_Construct_UClass_UOrionSteamUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamUtils, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUtils_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamUtils)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUtils(UOrionSteamUtils&&) = delete; \
	UOrionSteamUtils(const UOrionSteamUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamUtils)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUtils;

// ********** End Class UOrionSteamUtils ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
