// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/OrionSteamParties.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamParties_generated_h
#error "OrionSteamParties.generated.h already included, missing '#pragma once' in OrionSteamParties.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamParties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamParties;
enum class ESteamPartiesBeaconLocationData : uint8;
struct FPartyBeaconID;
struct FSteamID;
struct FSteamPartyBeaconLocation;

// ********** Begin Class UOrionSteamParties *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execChangeNumOpenSlots); \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execOnReservationCompleted); \
	DECLARE_FUNCTION(execCreateBeacon); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetNumActiveBeacons); \
	DECLARE_FUNCTION(execGetSteamParties);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamParties_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamParties(); \
	friend struct Z_Construct_UClass_UOrionSteamParties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamParties_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamParties, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamParties_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamParties)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamParties(UOrionSteamParties&&) = delete; \
	UOrionSteamParties(const UOrionSteamParties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamParties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamParties)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_23_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamParties;

// ********** End Class UOrionSteamParties *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_OrionSteamParties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
