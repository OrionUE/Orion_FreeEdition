// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorage/SteamRemoteStorageTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamRemoteStorageTypes_generated_h
#error "SteamRemoteStorageTypes.generated.h already included, missing '#pragma once' in SteamRemoteStorageTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamRemoteStorageTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FRemoteStorageDownloadUGCResult;
struct FRemoteStorageFileReadAsyncComplete;
struct FRemoteStorageFileShareResult;
struct FRemoteStorageFileWriteAsyncComplete;
struct FRemoteStoragePublishedFileSubscribed;
struct FRemoteStoragePublishedFileUnsubscribed;
struct FRemoteStorageSubscribePublishedFileResult;
struct FRemoteStorageUnsubscribePublishedFileResult;

// ********** Begin ScriptStruct FUGCFileWriteStreamHandle *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FUGCFileWriteStreamHandle;
// ********** End ScriptStruct FUGCFileWriteStreamHandle *******************************************

// ********** Begin ScriptStruct FRemoteStorageFileWriteAsyncComplete ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStorageFileWriteAsyncComplete;
// ********** End ScriptStruct FRemoteStorageFileWriteAsyncComplete ********************************

// ********** Begin ScriptStruct FRemoteStorageFileReadAsyncComplete *******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStorageFileReadAsyncComplete;
// ********** End ScriptStruct FRemoteStorageFileReadAsyncComplete *********************************

// ********** Begin ScriptStruct FRemoteStorageFileShareResult *************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStorageFileShareResult;
// ********** End ScriptStruct FRemoteStorageFileShareResult ***************************************

// ********** Begin ScriptStruct FRemoteStorageUnsubscribePublishedFileResult **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStorageUnsubscribePublishedFileResult;
// ********** End ScriptStruct FRemoteStorageUnsubscribePublishedFileResult ************************

// ********** Begin ScriptStruct FRemoteStoragePublishedFileUnsubscribed ***************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStoragePublishedFileUnsubscribed;
// ********** End ScriptStruct FRemoteStoragePublishedFileUnsubscribed *****************************

// ********** Begin ScriptStruct FRemoteStoragePublishedFileSubscribed *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStoragePublishedFileSubscribed;
// ********** End ScriptStruct FRemoteStoragePublishedFileSubscribed *******************************

// ********** Begin ScriptStruct FRemoteStorageDownloadUGCResult ***********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemoteStorageDownloadUGCResult;
// ********** End ScriptStruct FRemoteStorageDownloadUGCResult *************************************

// ********** Begin Delegate FOnRemoteStorageUnsubscribePublishedFileResult ************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_271_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& Data);


// ********** End Delegate FOnRemoteStorageUnsubscribePublishedFileResult **************************

// ********** Begin Delegate FOnRemoteStorageSubscribePublishedFileResult **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_272_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& Data);


// ********** End Delegate FOnRemoteStorageSubscribePublishedFileResult ****************************

// ********** Begin Delegate FOnRemoteStoragePublishedFileUnsubscribed *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_273_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& Data);


// ********** End Delegate FOnRemoteStoragePublishedFileUnsubscribed *******************************

// ********** Begin Delegate FOnRemoteStoragePublishedFileSubscribed *******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_274_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& Data);


// ********** End Delegate FOnRemoteStoragePublishedFileSubscribed *********************************

// ********** Begin Delegate FOnFileWriteAsync *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_275_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& Data, bool bWasSuccessful);


// ********** End Delegate FOnFileWriteAsync *******************************************************

// ********** Begin Delegate FOnFileReadAsync ******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_276_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& Data, bool bWasSuccessful);


// ********** End Delegate FOnFileReadAsync ********************************************************

// ********** Begin Delegate FOnUGCDownloadAsync ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_277_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnUGCDownloadAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnUGCDownloadAsync *****************************************************

// ********** Begin Delegate FOnUGCDownloadToLocationAsync *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_278_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnUGCDownloadToLocationAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadToLocationAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnUGCDownloadToLocationAsync *******************************************

// ********** Begin Delegate FOnFileShareAsync *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_279_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnFileShareAsync *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h

// ********** Begin Enum ESteamRemoteStoragePlatform ***********************************************
#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPLATFORM(op) \
	op(ESteamRemoteStoragePlatform::None) \
	op(ESteamRemoteStoragePlatform::Windows) \
	op(ESteamRemoteStoragePlatform::OSX) \
	op(ESteamRemoteStoragePlatform::PS3) \
	op(ESteamRemoteStoragePlatform::Linux) \
	op(ESteamRemoteStoragePlatform::Reserved2) \
	op(ESteamRemoteStoragePlatform::All) 

enum class ESteamRemoteStoragePlatform : uint8;
template<> struct TIsUEnumClass<ESteamRemoteStoragePlatform> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>();
// ********** End Enum ESteamRemoteStoragePlatform *************************************************

// ********** Begin Enum ESteamUGCReadAction *******************************************************
#define FOREACH_ENUM_ESTEAMUGCREADACTION(op) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReading) \
	op(ESteamUGCReadAction::k_EUGCRead_Close) 

enum class ESteamUGCReadAction : uint8;
template<> struct TIsUEnumClass<ESteamUGCReadAction> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamUGCReadAction>();
// ********** End Enum ESteamUGCReadAction *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
