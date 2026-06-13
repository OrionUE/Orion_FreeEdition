// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmaking/SteamMatchmakingAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamMatchmakingAsyncActions_generated_h
#error "SteamMatchmakingAsyncActions.generated.h already included, missing '#pragma once' in SteamMatchmakingAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamMatchmakingAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FSteamSessionSearchSetting;
 struct FSteamSessionSetting;
class APlayerController;
class UObject;
class UOrionSteamCreateSession;
class UOrionSteamCreateSessionExtra;
class UOrionSteamDestroySession;
class UOrionSteamFindSession;
class UOrionSteamJoinSession;
class UOrionSteamMatchmakingAsyncActionCreateLobby;
class UOrionSteamMatchmakingAsyncActionJoinLobby;
class UOrionSteamMatchmakingAsyncActionRequestLobbyList;
class UOrionSteamUpdateSession;
enum class ESteamLobbyDistanceFilter : uint8;
enum class ESteamLobbyType : uint8;
enum class ESteamSessionFindType : uint8;
struct FBlueprintSessionResult;
struct FCreateLobbyData;
struct FJoinLobbyData;
struct FLobbyMatchList;
struct FSteamID;
struct FSteamSessionResult;

// ********** Begin Delegate FOnRequestLobbyListAsyncDelegate **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_27_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRequestLobbyListAsyncDelegate ****************************************

// ********** Begin Delegate FOnCreateLobbyAsyncDelegate *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_28_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateLobbyAsyncDelegate *********************************************

// ********** Begin Delegate FOnJoinLobbyAsyncDelegate *********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_29_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnJoinLobbyAsyncDelegate ***********************************************

// ********** Begin Delegate FJoinOrionSteamSessionDelegate ****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_30_DELEGATE \
ORIONSTEAMSDKAPI_API void FJoinOrionSteamSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& JoinOrionSteamSessionDelegate, const FString& JoinFailReason);


// ********** End Delegate FJoinOrionSteamSessionDelegate ******************************************

// ********** Begin Class UOrionSteamMatchmakingAsyncActionCreateLobby *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamMatchmakingAsyncActionCreateLobby(); \
	friend struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingAsyncActionCreateLobby, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingAsyncActionCreateLobby)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingAsyncActionCreateLobby(UOrionSteamMatchmakingAsyncActionCreateLobby&&) = delete; \
	UOrionSteamMatchmakingAsyncActionCreateLobby(const UOrionSteamMatchmakingAsyncActionCreateLobby&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingAsyncActionCreateLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingAsyncActionCreateLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamMatchmakingAsyncActionCreateLobby) \
	NO_API virtual ~UOrionSteamMatchmakingAsyncActionCreateLobby();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_38_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingAsyncActionCreateLobby;

// ********** End Class UOrionSteamMatchmakingAsyncActionCreateLobby *******************************

// ********** Begin Class UOrionSteamMatchmakingAsyncActionRequestLobbyList ************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestLobbyListAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamMatchmakingAsyncActionRequestLobbyList(); \
	friend struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingAsyncActionRequestLobbyList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingAsyncActionRequestLobbyList)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingAsyncActionRequestLobbyList(UOrionSteamMatchmakingAsyncActionRequestLobbyList&&) = delete; \
	UOrionSteamMatchmakingAsyncActionRequestLobbyList(const UOrionSteamMatchmakingAsyncActionRequestLobbyList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingAsyncActionRequestLobbyList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingAsyncActionRequestLobbyList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamMatchmakingAsyncActionRequestLobbyList) \
	NO_API virtual ~UOrionSteamMatchmakingAsyncActionRequestLobbyList();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_65_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingAsyncActionRequestLobbyList;

// ********** End Class UOrionSteamMatchmakingAsyncActionRequestLobbyList **************************

// ********** Begin Class UOrionSteamMatchmakingAsyncActionJoinLobby *******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinLobbyAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamMatchmakingAsyncActionJoinLobby(); \
	friend struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingAsyncActionJoinLobby, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamMatchmakingAsyncActionJoinLobby)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamMatchmakingAsyncActionJoinLobby(UOrionSteamMatchmakingAsyncActionJoinLobby&&) = delete; \
	UOrionSteamMatchmakingAsyncActionJoinLobby(const UOrionSteamMatchmakingAsyncActionJoinLobby&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamMatchmakingAsyncActionJoinLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamMatchmakingAsyncActionJoinLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamMatchmakingAsyncActionJoinLobby) \
	NO_API virtual ~UOrionSteamMatchmakingAsyncActionJoinLobby();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_95_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamMatchmakingAsyncActionJoinLobby;

// ********** End Class UOrionSteamMatchmakingAsyncActionJoinLobby *********************************

// ********** Begin Class UOrionSteamCreateSessionExtra ********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateOrionSteamSessionExtra);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamCreateSessionExtra(); \
	friend struct Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamCreateSessionExtra, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamCreateSessionExtra_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamCreateSessionExtra)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamCreateSessionExtra(UOrionSteamCreateSessionExtra&&) = delete; \
	UOrionSteamCreateSessionExtra(const UOrionSteamCreateSessionExtra&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamCreateSessionExtra); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamCreateSessionExtra); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamCreateSessionExtra) \
	NO_API virtual ~UOrionSteamCreateSessionExtra();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_122_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamCreateSessionExtra;

// ********** End Class UOrionSteamCreateSessionExtra **********************************************

// ********** Begin Class UOrionSteamCreateSession *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateOrionSteamSession);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamCreateSession(); \
	friend struct Z_Construct_UClass_UOrionSteamCreateSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamCreateSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamCreateSession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamCreateSession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamCreateSession(UOrionSteamCreateSession&&) = delete; \
	UOrionSteamCreateSession(const UOrionSteamCreateSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamCreateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamCreateSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamCreateSession) \
	NO_API virtual ~UOrionSteamCreateSession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_167_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamCreateSession;

// ********** End Class UOrionSteamCreateSession ***************************************************

// ********** Begin Delegate FFindSteamSessionsResultDelegate **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_209_DELEGATE \
ORIONSTEAMSDKAPI_API void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& Results);


// ********** End Delegate FFindSteamSessionsResultDelegate ****************************************

// ********** Begin Class UOrionSteamFindSession ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindOrionSteamSessions);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFindSession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFindSession(); \
	friend struct Z_Construct_UClass_UOrionSteamFindSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFindSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFindSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFindSession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamFindSession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFindSession(UOrionSteamFindSession&&) = delete; \
	UOrionSteamFindSession(const UOrionSteamFindSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFindSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFindSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamFindSession) \
	NO_API virtual ~UOrionSteamFindSession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_214_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFindSession;

// ********** End Class UOrionSteamFindSession *****************************************************

// ********** Begin Class UOrionSteamJoinSession ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinOrionSteamSession);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamJoinSession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamJoinSession(); \
	friend struct Z_Construct_UClass_UOrionSteamJoinSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamJoinSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamJoinSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamJoinSession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamJoinSession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamJoinSession(UOrionSteamJoinSession&&) = delete; \
	UOrionSteamJoinSession(const UOrionSteamJoinSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamJoinSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamJoinSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamJoinSession) \
	NO_API virtual ~UOrionSteamJoinSession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_267_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamJoinSession;

// ********** End Class UOrionSteamJoinSession *****************************************************

// ********** Begin Class UOrionSteamDestroySession ************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execDestroyOrionSteamSession);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamDestroySession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamDestroySession(); \
	friend struct Z_Construct_UClass_UOrionSteamDestroySession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamDestroySession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamDestroySession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamDestroySession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamDestroySession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamDestroySession(UOrionSteamDestroySession&&) = delete; \
	UOrionSteamDestroySession(const UOrionSteamDestroySession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamDestroySession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamDestroySession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamDestroySession) \
	NO_API virtual ~UOrionSteamDestroySession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_302_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamDestroySession;

// ********** End Class UOrionSteamDestroySession **************************************************

// ********** Begin Class UOrionSteamUpdateSession *************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execUpdateOrionSteamSession);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUpdateSession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamUpdateSession(); \
	friend struct Z_Construct_UClass_UOrionSteamUpdateSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUpdateSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamUpdateSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUpdateSession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamUpdateSession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUpdateSession(UOrionSteamUpdateSession&&) = delete; \
	UOrionSteamUpdateSession(const UOrionSteamUpdateSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUpdateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUpdateSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamUpdateSession) \
	NO_API virtual ~UOrionSteamUpdateSession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_339_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUpdateSession;

// ********** End Class UOrionSteamUpdateSession ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
