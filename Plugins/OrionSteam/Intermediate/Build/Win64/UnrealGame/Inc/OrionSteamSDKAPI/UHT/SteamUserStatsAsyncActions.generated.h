// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUserStats/SteamUserStatsAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamUserStatsAsyncActions_generated_h
#error "SteamUserStatsAsyncActions.generated.h already included, missing '#pragma once' in SteamUserStatsAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamUserStatsAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC;
class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries;
class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;
class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats;
class UOrionSteamUserStatsAsyncActionFindLeaderboard;
class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard;
class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers;
class UOrionSteamUserStatsAsyncActionRequestCurrentStats;
class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages;
class UOrionSteamUserStatsAsyncActionRequestUserStats;
class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore;
enum class ESteamLeaderboardDataRequest : uint8;
enum class ESteamLeaderboardDisplayType : uint8;
enum class ESteamLeaderboardSortMethod : uint8;
enum class ESteamLeaderboardUploadScoreMethod : uint8;
struct FAttachLeaderboardUGCData;
struct FFindOrCreateLeaderboardData;
struct FGlobalAchievementPercentagesReady;
struct FGlobalStatsReceived;
struct FLeaderboardFindResult;
struct FLeaderboardScoresDownloaded;
struct FLeaderboardScoresDownloadedForUsers;
struct FLeaderboardScoreUploaded;
struct FNumberOfCurrentPlayers;
struct FRequestCurrentStatsData;
struct FRequestUserStatsData;
struct FSteamID;
struct FSteamLeaderboard;
struct FSteamUGCHandle;

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindLeaderboard ***************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execFindLeaderboardAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionFindLeaderboard, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindLeaderboard) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionFindLeaderboard)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionFindLeaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionFindLeaderboard(UOrionSteamUserStatsAsyncActionFindLeaderboard&&) = delete; \
	UOrionSteamUserStatsAsyncActionFindLeaderboard(const UOrionSteamUserStatsAsyncActionFindLeaderboard&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionFindLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionFindLeaderboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionFindLeaderboard) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionFindLeaderboard();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_31_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionFindLeaderboard;

// ********** End Class UOrionSteamUserStatsAsyncActionFindLeaderboard *****************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries ****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries&&) = delete; \
	UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries(const UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_59_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries;

// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntries ******************

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats ****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestGlobalStatsAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats&&) = delete; \
	UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats(const UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_91_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats;

// ********** End Class UOrionSteamUserStatsAsyncActionDownloadRequestGlobalStats ******************

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages *******
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentagesAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages&&) = delete; \
	UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages(const UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_118_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages;

// ********** End Class UOrionSteamUserStatsAsyncActionRequestGlobalAchievementPercentages *********

// ********** Begin Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers *****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayersAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers&&) = delete; \
	UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers(const UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_144_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers;

// ********** End Class UOrionSteamUserStatsAsyncActionGetNumberOfCurrentPlayers *******************

// ********** Begin Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore ********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execUploadLeaderboardScoreAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionUploadLeaderboardScore) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionUploadLeaderboardScore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionUploadLeaderboardScore(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore&&) = delete; \
	UOrionSteamUserStatsAsyncActionUploadLeaderboardScore(const UOrionSteamUserStatsAsyncActionUploadLeaderboardScore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionUploadLeaderboardScore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionUploadLeaderboardScore) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionUploadLeaderboardScore();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_169_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore;

// ********** End Class UOrionSteamUserStatsAsyncActionUploadLeaderboardScore **********************

// ********** Begin Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard *******************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboardAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard&&) = delete; \
	UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard(const UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_201_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_204_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard;

// ********** End Class UOrionSteamUserStatsAsyncActionFindOrCreateLeaderboard *********************

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestUserStats **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestUserStatsAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionRequestUserStats, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestUserStats) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionRequestUserStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionRequestUserStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionRequestUserStats(UOrionSteamUserStatsAsyncActionRequestUserStats&&) = delete; \
	UOrionSteamUserStatsAsyncActionRequestUserStats(const UOrionSteamUserStatsAsyncActionRequestUserStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionRequestUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionRequestUserStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionRequestUserStats) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionRequestUserStats();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_237_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionRequestUserStats;

// ********** End Class UOrionSteamUserStatsAsyncActionRequestUserStats ****************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionRequestCurrentStats ***********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestCurrentStatsAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionRequestCurrentStats, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionRequestCurrentStats) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionRequestCurrentStats)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionRequestCurrentStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionRequestCurrentStats(UOrionSteamUserStatsAsyncActionRequestCurrentStats&&) = delete; \
	UOrionSteamUserStatsAsyncActionRequestCurrentStats(const UOrionSteamUserStatsAsyncActionRequestCurrentStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionRequestCurrentStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionRequestCurrentStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionRequestCurrentStats) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionRequestCurrentStats();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_267_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_270_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionRequestCurrentStats;

// ********** End Class UOrionSteamUserStatsAsyncActionRequestCurrentStats *************************

// ********** Begin Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers ********
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesForUsersAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers&&) = delete; \
	UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(const UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_297_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_300_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;

// ********** End Class UOrionSteamUserStatsAsyncActionDownloadLeaderboardEntriesForUsers **********

// ********** Begin Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAttachLeaderboardUGCAsync);


struct Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC) \
	DECLARE_SERIALIZER(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC&&) = delete; \
	UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC(const UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC) \
	NO_API virtual ~UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_327_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h_330_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC;

// ********** End Class UOrionSteamUserStatsAsyncActionAttachLeaderboardUGC ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUserStats_SteamUserStatsAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
