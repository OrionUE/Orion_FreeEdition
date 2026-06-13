// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorage/SteamRemoteStorage.h"

#ifdef ORIONSTEAMSDKAPI_SteamRemoteStorage_generated_h
#error "SteamRemoteStorage.generated.h already included, missing '#pragma once' in SteamRemoteStorage.h"
#endif
#define ORIONSTEAMSDKAPI_SteamRemoteStorage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionSteamRemoteStorage;
enum class ESteamRemoteStoragePlatform : uint8;
enum class ESteamUGCReadAction : uint8;
struct FRemoteStorageFileReadAsyncComplete;
struct FSteamID;
struct FSteamUGCHandle;
struct FUGCFileWriteStreamHandle;

// ********** Begin Class UOrionSteamRemoteStorage *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndFileWriteBatch); \
	DECLARE_FUNCTION(execBeginFileWriteBatch); \
	DECLARE_FUNCTION(execGetLocalFileChangeCount); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execGetSteamRemoteStorage);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamRemoteStorage_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamRemoteStorage(); \
	friend struct Z_Construct_UClass_UOrionSteamRemoteStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamRemoteStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamRemoteStorage, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamRemoteStorage_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamRemoteStorage)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamRemoteStorage(UOrionSteamRemoteStorage&&) = delete; \
	UOrionSteamRemoteStorage(const UOrionSteamRemoteStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamRemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamRemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamRemoteStorage)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamRemoteStorage;

// ********** End Class UOrionSteamRemoteStorage ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemoteStorage_SteamRemoteStorage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
