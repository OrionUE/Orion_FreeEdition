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
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FReservationNotificationData;

// ********** Begin ScriptStruct FSteamPartyBeaconLocation *****************************************
struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSteamPartyBeaconLocation(ETypeConstructPhase::Inner); }


struct FSteamPartyBeaconLocation;
// ********** End ScriptStruct FSteamPartyBeaconLocation *******************************************

// ********** Begin ScriptStruct FJoinPartyData ****************************************************
struct Z_Construct_UScriptStruct_FJoinPartyData_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJoinPartyData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FJoinPartyData(ETypeConstructPhase::Inner); }


struct FJoinPartyData;
// ********** End ScriptStruct FJoinPartyData ******************************************************

// ********** Begin ScriptStruct FCreateBeaconData *************************************************
struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateBeaconData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCreateBeaconData(ETypeConstructPhase::Inner); }


struct FCreateBeaconData;
// ********** End ScriptStruct FCreateBeaconData ***************************************************

// ********** Begin ScriptStruct FReservationNotificationData **************************************
struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReservationNotificationData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FReservationNotificationData(ETypeConstructPhase::Inner); }


struct FReservationNotificationData;
// ********** End ScriptStruct FReservationNotificationData ****************************************

// ********** Begin ScriptStruct FChangeNumOpenSlotsData *******************************************
struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FChangeNumOpenSlotsData(ETypeConstructPhase::Inner); }


struct FChangeNumOpenSlotsData;
// ********** End ScriptStruct FChangeNumOpenSlotsData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesTypes_h

// ********** Begin Enum ESteamPartiesBeaconLocationType *******************************************
#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONTYPE(op) \
	op(ESteamPartiesBeaconLocationType::Invalid) \
	op(ESteamPartiesBeaconLocationType::ChatGroup) \
	op(ESteamPartiesBeaconLocationType::Max) 

enum class ESteamPartiesBeaconLocationType : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationType> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>();
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
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>();
// ********** End Enum ESteamPartiesBeaconLocationData *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
