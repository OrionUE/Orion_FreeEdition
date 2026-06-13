// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamPartiesTypes_generated_h
#error "SteamPartiesTypes.generated.h already included, missing '#pragma once' in SteamPartiesTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamPartiesTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FReservationNotificationData;

// ********** Begin ScriptStruct FSteamPartyBeaconLocation *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamPartyBeaconLocation;
// ********** End ScriptStruct FSteamPartyBeaconLocation *******************************************

// ********** Begin ScriptStruct FJoinPartyData ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoinPartyData_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FJoinPartyData;
// ********** End ScriptStruct FJoinPartyData ******************************************************

// ********** Begin ScriptStruct FCreateBeaconData *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FCreateBeaconData;
// ********** End ScriptStruct FCreateBeaconData ***************************************************

// ********** Begin ScriptStruct FReservationNotificationData **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FReservationNotificationData;
// ********** End ScriptStruct FReservationNotificationData ****************************************

// ********** Begin ScriptStruct FChangeNumOpenSlotsData *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FChangeNumOpenSlotsData;
// ********** End ScriptStruct FChangeNumOpenSlotsData *********************************************

// ********** Begin Delegate FOnJoinPartyDelegate **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_162_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& Data);


// ********** End Delegate FOnJoinPartyDelegate ****************************************************

// ********** Begin Delegate FOnCreateBeaconDelegate ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_163_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& Data);


// ********** End Delegate FOnCreateBeaconDelegate *************************************************

// ********** Begin Delegate FOnReservationNotificationDelegate ************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_164_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& Data);


// ********** End Delegate FOnReservationNotificationDelegate **************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsDelegate *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_165_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& Data);


// ********** End Delegate FOnChangeNumOpenSlotsDelegate *******************************************

// ********** Begin Delegate FOnAvailableBeaconLocationsDelegate ***********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_166_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnAvailableBeaconLocationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvailableBeaconLocationsDelegate);


// ********** End Delegate FOnAvailableBeaconLocationsDelegate *************************************

// ********** Begin Delegate FOnActiveBeaconsDelegate **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_167_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnActiveBeaconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveBeaconsDelegate);


// ********** End Delegate FOnActiveBeaconsDelegate ************************************************

// ********** Begin Delegate FOnJoinParty **********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_168_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnJoinParty ************************************************************

// ********** Begin Delegate FOnCreateBeacon *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_169_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateBeacon *********************************************************

// ********** Begin Delegate FOnChangeNumOpenSlots *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_170_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnChangeNumOpenSlots_DelegateWrapper(const FScriptDelegate& OnChangeNumOpenSlots, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnChangeNumOpenSlots ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h

// ********** Begin Enum ESteamPartiesBeaconLocationType *******************************************
#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONTYPE(op) \
	op(ESteamPartiesBeaconLocationType::Invalid) \
	op(ESteamPartiesBeaconLocationType::ChatGroup) \
	op(ESteamPartiesBeaconLocationType::Max) 

enum class ESteamPartiesBeaconLocationType : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationType> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>();
// ********** End Enum ESteamPartiesBeaconLocationType *********************************************

// ********** Begin Enum ESteamPartiesBeaconLocationData *******************************************
#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONDATA(op) \
	op(ESteamPartiesBeaconLocationData::Invalid) \
	op(ESteamPartiesBeaconLocationData::Name) \
	op(ESteamPartiesBeaconLocationData::IconURLSmall) \
	op(ESteamPartiesBeaconLocationData::IconURLMedium) \
	op(ESteamPartiesBeaconLocationData::IconURLLarge) 

enum class ESteamPartiesBeaconLocationData : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationData> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>();
// ********** End Enum ESteamPartiesBeaconLocationData *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
