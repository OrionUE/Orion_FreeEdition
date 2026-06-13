// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServer/SteamGameServerTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamGameServerTypes_generated_h
#error "SteamGameServerTypes.generated.h already included, missing '#pragma once' in SteamGameServerTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamGameServerTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAssociateWithClanResult;
struct FComputeNewPlayerCompatibilityResult;
struct FGSClientApprove;
struct FGSClientDeny;
struct FGSClientGroupStatus;
struct FGSPolicyResponse;
struct FValidateAuthTicketResponse;

// ********** Begin ScriptStruct FGSPolicyResponse *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSPolicyResponse;
// ********** End ScriptStruct FGSPolicyResponse ***************************************************

// ********** Begin ScriptStruct FGSClientGroupStatus **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSClientGroupStatus;
// ********** End ScriptStruct FGSClientGroupStatus ************************************************

// ********** Begin ScriptStruct FAssociateWithClanResult ******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FAssociateWithClanResult;
// ********** End ScriptStruct FAssociateWithClanResult ********************************************

// ********** Begin ScriptStruct FComputeNewPlayerCompatibilityResult ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FComputeNewPlayerCompatibilityResult;
// ********** End ScriptStruct FComputeNewPlayerCompatibilityResult ********************************

// ********** Begin ScriptStruct FGSClientApprove **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientApprove_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSClientApprove;
// ********** End ScriptStruct FGSClientApprove ****************************************************

// ********** Begin ScriptStruct FGSClientDeny *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientDeny_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FGSClientDeny;
// ********** End ScriptStruct FGSClientDeny *******************************************************

// ********** Begin Delegate FOnAssociateWithClan **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_164_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnAssociateWithClan ****************************************************

// ********** Begin Delegate FOnComputeNewPlayerCompatibility **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_165_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnComputeNewPlayerCompatibility ****************************************

// ********** Begin Delegate FOnGSPolicyResponse ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_166_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& Data);


// ********** End Delegate FOnGSPolicyResponse *****************************************************

// ********** Begin Delegate FOnGSClientGroupStatus ************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_167_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& Data);


// ********** End Delegate FOnGSClientGroupStatus **************************************************

// ********** Begin Delegate FOnGSValidateAuthTicketResponse ***************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_168_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data);


// ********** End Delegate FOnGSValidateAuthTicketResponse *****************************************

// ********** Begin Delegate FOnGSClientApprove ****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_169_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& Data);


// ********** End Delegate FOnGSClientApprove ******************************************************

// ********** Begin Delegate FOnGSClientDeny *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h_170_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& Data);


// ********** End Delegate FOnGSClientDeny *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServer_SteamGameServerTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
