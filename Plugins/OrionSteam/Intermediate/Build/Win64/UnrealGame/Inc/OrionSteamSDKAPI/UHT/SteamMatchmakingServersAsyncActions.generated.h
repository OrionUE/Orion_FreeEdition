// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamMatchmakingServersAsyncActions_generated_h
#error "SteamMatchmakingServersAsyncActions.generated.h already included, missing '#pragma once' in SteamMatchmakingServersAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamMatchmakingServersAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionSteamMatchmakingServersAsyncActionPingServer;
class UOrionSteamMatchmakingServersAsyncActionRequestServerList;
class UOrionSteamMatchmakingServersAsyncActionServerRules;
class UServerFilter;
struct FGameServerItem;
struct FGameServerRule;

// ********** Begin Class UOrionSteamMatchmakingServersAsyncActionPingServer ***********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCancelPingQueries); \
	DECLARE_FUNCTION(execPingServerAsync);


struct Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionPingServer_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionPingServer(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionPingServer_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionPingServer(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingServersAsyncActionPingServer, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionPingServer) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingServersAsyncActionPingServer)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamMatchmakingServersAsyncActionPingServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingServersAsyncActionPingServer(UOrionSteamMatchmakingServersAsyncActionPingServer&&) = delete; \
	UOrionSteamMatchmakingServersAsyncActionPingServer(const UOrionSteamMatchmakingServersAsyncActionPingServer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingServersAsyncActionPingServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingServersAsyncActionPingServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamMatchmakingServersAsyncActionPingServer) \
	NO_API virtual ~UOrionSteamMatchmakingServersAsyncActionPingServer();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_23_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingServersAsyncActionPingServer;

// ********** End Class UOrionSteamMatchmakingServersAsyncActionPingServer *************************

// ********** Begin Class UOrionSteamMatchmakingServersAsyncActionRequestServerList ****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleServerListFinished); \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCancelServerListQueries); \
	DECLARE_FUNCTION(execRequestSpectatorServerListAsync); \
	DECLARE_FUNCTION(execRequestLANServerListAsync); \
	DECLARE_FUNCTION(execRequestInternetServerListAsync); \
	DECLARE_FUNCTION(execRequestHistoryServerListAsync); \
	DECLARE_FUNCTION(execRequestFriendsServerListAsync); \
	DECLARE_FUNCTION(execRequestFavoritesServerListAsync);


struct Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionRequestServerList_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionRequestServerList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionRequestServerList_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionRequestServerList(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingServersAsyncActionRequestServerList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionRequestServerList) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingServersAsyncActionRequestServerList)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamMatchmakingServersAsyncActionRequestServerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingServersAsyncActionRequestServerList(UOrionSteamMatchmakingServersAsyncActionRequestServerList&&) = delete; \
	UOrionSteamMatchmakingServersAsyncActionRequestServerList(const UOrionSteamMatchmakingServersAsyncActionRequestServerList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingServersAsyncActionRequestServerList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingServersAsyncActionRequestServerList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamMatchmakingServersAsyncActionRequestServerList) \
	NO_API virtual ~UOrionSteamMatchmakingServersAsyncActionRequestServerList();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_56_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingServersAsyncActionRequestServerList;

// ********** End Class UOrionSteamMatchmakingServersAsyncActionRequestServerList ******************

// ********** Begin Class UOrionSteamMatchmakingServersAsyncActionServerRules **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCancelServerRulesQueries); \
	DECLARE_FUNCTION(execServerRulesAsync);


struct Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionServerRules_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionServerRules(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionServerRules_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionServerRules(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingServersAsyncActionServerRules, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingServersAsyncActionServerRules) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingServersAsyncActionServerRules)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamMatchmakingServersAsyncActionServerRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingServersAsyncActionServerRules(UOrionSteamMatchmakingServersAsyncActionServerRules&&) = delete; \
	UOrionSteamMatchmakingServersAsyncActionServerRules(const UOrionSteamMatchmakingServersAsyncActionServerRules&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingServersAsyncActionServerRules); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingServersAsyncActionServerRules); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamMatchmakingServersAsyncActionServerRules) \
	NO_API virtual ~UOrionSteamMatchmakingServersAsyncActionServerRules();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_140_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingServersAsyncActionServerRules;

// ********** End Class UOrionSteamMatchmakingServersAsyncActionServerRules ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
