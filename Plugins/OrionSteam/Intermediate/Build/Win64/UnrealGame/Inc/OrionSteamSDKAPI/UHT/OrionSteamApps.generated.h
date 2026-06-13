// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/OrionSteamApps.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamApps_generated_h
#error "OrionSteamApps.generated.h already included, missing '#pragma once' in OrionSteamApps.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamApps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamApps;
enum class ESteamBetaBranchFlags : uint8;
struct FSteamID;

// ********** Begin Class UOrionSteamApps **********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execSetActiveBeta); \
	DECLARE_FUNCTION(execGetBetaInfo); \
	DECLARE_FUNCTION(execGetNumBetas); \
	DECLARE_FUNCTION(execSetDlcContext); \
	DECLARE_FUNCTION(execBIsTimedTrial); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execGetSteamApps);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamApps_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamApps(); \
	friend struct Z_Construct_UClass_UOrionSteamApps_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamApps_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamApps, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamApps_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamApps)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamApps(UOrionSteamApps&&) = delete; \
	UOrionSteamApps(const UOrionSteamApps&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamApps)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamApps;

// ********** End Class UOrionSteamApps ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamApps_OrionSteamApps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
