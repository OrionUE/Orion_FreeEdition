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
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
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
struct FSteamSessionSearchSetting;
struct FSteamSessionSetting;

// ********** Begin Class UOrionSteamMatchmakingAsyncActionCreateLobby *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_41_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingAsyncActionCreateLobby, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby) \
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


struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_68_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingAsyncActionRequestLobbyList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList) \
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


struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_98_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamMatchmakingAsyncActionJoinLobby, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby) \
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


struct Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_125_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamCreateSessionExtra(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamCreateSessionExtra, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamCreateSessionExtra) \
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


struct Z_Construct_UClass_UOrionSteamCreateSession_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSession(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_170_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamCreateSession_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamCreateSession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamCreateSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamCreateSession) \
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

// ********** Begin Class UOrionSteamFindSession ***************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindOrionSteamSessions);


struct Z_Construct_UClass_UOrionSteamFindSession_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFindSession(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_217_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFindSession_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFindSession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFindSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFindSession) \
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


struct Z_Construct_UClass_UOrionSteamJoinSession_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamJoinSession(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_270_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamJoinSession_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamJoinSession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamJoinSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamJoinSession) \
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


struct Z_Construct_UClass_UOrionSteamDestroySession_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamDestroySession(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_305_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamDestroySession_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamDestroySession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamDestroySession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamDestroySession) \
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


struct Z_Construct_UClass_UOrionSteamUpdateSession_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUpdateSession(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_342_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUpdateSession_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUpdateSession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUpdateSession, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUpdateSession) \
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
