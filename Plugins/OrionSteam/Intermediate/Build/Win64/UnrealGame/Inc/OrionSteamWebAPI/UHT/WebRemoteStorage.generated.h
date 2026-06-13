// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorage/WebRemoteStorage.h"

#ifdef ORIONSTEAMWEBAPI_WebRemoteStorage_generated_h
#error "WebRemoteStorage.generated.h already included, missing '#pragma once' in WebRemoteStorage.h"
#endif
#define ORIONSTEAMWEBAPI_WebRemoteStorage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebRemoteStorage ********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnsubscribePublishedFile); \
	DECLARE_FUNCTION(execSubscribePublishedFile); \
	DECLARE_FUNCTION(execSetUGCUsedByGC); \
	DECLARE_FUNCTION(execGetUGCFileDetails); \
	DECLARE_FUNCTION(execGetPublishedFileDetails); \
	DECLARE_FUNCTION(execGetCollectionDetails); \
	DECLARE_FUNCTION(execEnumerateUserSubscribedFiles); \
	DECLARE_FUNCTION(execEnumerateUserPublishedFiles);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebRemoteStorage(); \
	friend struct Z_Construct_UClass_UWebRemoteStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebRemoteStorage, UOrionSteamWebAPISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UWebRemoteStorage_NoRegister) \
	DECLARE_SERIALIZER(UWebRemoteStorage)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebRemoteStorage(UWebRemoteStorage&&) = delete; \
	UWebRemoteStorage(const UWebRemoteStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebRemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebRemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebRemoteStorage) \
	NO_API virtual ~UWebRemoteStorage();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_11_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebRemoteStorage;

// ********** End Class UWebRemoteStorage **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
