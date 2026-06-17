// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworking/SteamNetworkingTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamNetworkingTypes_generated_h
#error "SteamNetworkingTypes.generated.h already included, missing '#pragma once' in SteamNetworkingTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamNetworkingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FP2PSessionConnectFail;
struct FP2PSessionRequest;

// ********** Begin ScriptStruct FSteamP2PSessionState *********************************************
struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworking_SteamNetworkingTypes_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSteamP2PSessionState(ETypeConstructPhase::Inner); }


struct FSteamP2PSessionState;
// ********** End ScriptStruct FSteamP2PSessionState ***********************************************

// ********** Begin ScriptStruct FP2PSessionRequest ************************************************
struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworking_SteamNetworkingTypes_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FP2PSessionRequest_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FP2PSessionRequest(ETypeConstructPhase::Inner); }


struct FP2PSessionRequest;
// ********** End ScriptStruct FP2PSessionRequest **************************************************

// ********** Begin ScriptStruct FP2PSessionConnectFail ********************************************
struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworking_SteamNetworkingTypes_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FP2PSessionConnectFail(ETypeConstructPhase::Inner); }


struct FP2PSessionConnectFail;
// ********** End ScriptStruct FP2PSessionConnectFail **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworking_SteamNetworkingTypes_h

// ********** Begin Enum ESteamP2PSend *************************************************************
#define FOREACH_ENUM_ESTEAMP2PSEND(op) \
	op(ESteamP2PSend::Unreliable) \
	op(ESteamP2PSend::UnreliableNoDelay) \
	op(ESteamP2PSend::Reliable) \
	op(ESteamP2PSend::ReliableWithBuffering) 

enum class ESteamP2PSend : uint8;
template<> struct TIsUEnumClass<ESteamP2PSend> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamP2PSend>();
// ********** End Enum ESteamP2PSend ***************************************************************

// ********** Begin Enum ESteamP2PSessionError *****************************************************
#define FOREACH_ENUM_ESTEAMP2PSESSIONERROR(op) \
	op(ESteamP2PSessionError::None) \
	op(ESteamP2PSessionError::NotRunningApp) \
	op(ESteamP2PSessionError::NoRightsToApp) \
	op(ESteamP2PSessionError::DestinationNotLoggedIn) \
	op(ESteamP2PSessionError::Timeout) \
	op(ESteamP2PSessionError::Max) 

enum class ESteamP2PSessionError : uint8;
template<> struct TIsUEnumClass<ESteamP2PSessionError> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMSDKAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamP2PSessionError>();
// ********** End Enum ESteamP2PSessionError *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
