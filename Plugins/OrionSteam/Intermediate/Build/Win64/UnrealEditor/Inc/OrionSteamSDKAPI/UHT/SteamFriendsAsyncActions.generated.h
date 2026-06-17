// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamFriends/SteamFriendsAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamFriendsAsyncActions_generated_h
#error "SteamFriendsAsyncActions.generated.h already included, missing '#pragma once' in SteamFriendsAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamFriendsAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts;
class UOrionSteamFriendsAsyncActionEnumerateFollowingList;
class UOrionSteamFriendsAsyncActionGetFollowerCount;
class UOrionSteamFriendsAsyncActionIsFollowing;
class UOrionSteamFriendsAsyncActionJoinClanChatRoom;
class UOrionSteamFriendsAsyncActionRequestClanOfficerList;
class UOrionSteamFriendsAsyncActionRequestUserInformation;
struct FClanOfficerListResponse;
struct FDownloadClanActivityCountsResult;
struct FFriendsEnumerateFollowingList;
struct FFriendsGetFollowerCount;
struct FFriendsIsFollowing;
struct FJoinClanChatRoomCompletionResult;
struct FSteamID;

// ********** Begin Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts ******************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadClanActivityCountsAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionDownloadClanActivityCounts(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts&&) = delete; \
	UOrionSteamFriendsAsyncActionDownloadClanActivityCounts(const UOrionSteamFriendsAsyncActionDownloadClanActivityCounts&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionDownloadClanActivityCounts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionDownloadClanActivityCounts();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_27_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts;

// ********** End Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts ********************

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestClanOfficerList **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestClanOfficerListAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionRequestClanOfficerList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionRequestClanOfficerList)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionRequestClanOfficerList(UOrionSteamFriendsAsyncActionRequestClanOfficerList&&) = delete; \
	UOrionSteamFriendsAsyncActionRequestClanOfficerList(const UOrionSteamFriendsAsyncActionRequestClanOfficerList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionRequestClanOfficerList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionRequestClanOfficerList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionRequestClanOfficerList) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionRequestClanOfficerList();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_55_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionRequestClanOfficerList;

// ********** End Class UOrionSteamFriendsAsyncActionRequestClanOfficerList ************************

// ********** Begin Class UOrionSteamFriendsAsyncActionJoinClanChatRoom ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinClanChatRoomAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionJoinClanChatRoom, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionJoinClanChatRoom)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionJoinClanChatRoom(UOrionSteamFriendsAsyncActionJoinClanChatRoom&&) = delete; \
	UOrionSteamFriendsAsyncActionJoinClanChatRoom(const UOrionSteamFriendsAsyncActionJoinClanChatRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionJoinClanChatRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionJoinClanChatRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionJoinClanChatRoom) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionJoinClanChatRoom();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_83_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionJoinClanChatRoom;

// ********** End Class UOrionSteamFriendsAsyncActionJoinClanChatRoom ******************************

// ********** Begin Class UOrionSteamFriendsAsyncActionEnumerateFollowingList **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execEnumerateFollowingListAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionEnumerateFollowingList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionEnumerateFollowingList)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionEnumerateFollowingList(UOrionSteamFriendsAsyncActionEnumerateFollowingList&&) = delete; \
	UOrionSteamFriendsAsyncActionEnumerateFollowingList(const UOrionSteamFriendsAsyncActionEnumerateFollowingList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionEnumerateFollowingList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionEnumerateFollowingList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionEnumerateFollowingList) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionEnumerateFollowingList();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_111_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionEnumerateFollowingList;

// ********** End Class UOrionSteamFriendsAsyncActionEnumerateFollowingList ************************

// ********** Begin Class UOrionSteamFriendsAsyncActionIsFollowing *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execIsFollowingAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionIsFollowing, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionIsFollowing)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionIsFollowing(UOrionSteamFriendsAsyncActionIsFollowing&&) = delete; \
	UOrionSteamFriendsAsyncActionIsFollowing(const UOrionSteamFriendsAsyncActionIsFollowing&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionIsFollowing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionIsFollowing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionIsFollowing) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionIsFollowing();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_140_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionIsFollowing;

// ********** End Class UOrionSteamFriendsAsyncActionIsFollowing ***********************************

// ********** Begin Class UOrionSteamFriendsAsyncActionGetFollowerCount ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFollowerCountAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionGetFollowerCount, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionGetFollowerCount)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionGetFollowerCount(UOrionSteamFriendsAsyncActionGetFollowerCount&&) = delete; \
	UOrionSteamFriendsAsyncActionGetFollowerCount(const UOrionSteamFriendsAsyncActionGetFollowerCount&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionGetFollowerCount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionGetFollowerCount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionGetFollowerCount) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionGetFollowerCount();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_166_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionGetFollowerCount;

// ********** End Class UOrionSteamFriendsAsyncActionGetFollowerCount ******************************

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestUserInformation **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestUserInformationAsync);


struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionRequestUserInformation, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation) \
	DECLARE_SERIALIZER(UOrionSteamFriendsAsyncActionRequestUserInformation)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamFriendsAsyncActionRequestUserInformation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamFriendsAsyncActionRequestUserInformation(UOrionSteamFriendsAsyncActionRequestUserInformation&&) = delete; \
	UOrionSteamFriendsAsyncActionRequestUserInformation(const UOrionSteamFriendsAsyncActionRequestUserInformation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamFriendsAsyncActionRequestUserInformation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamFriendsAsyncActionRequestUserInformation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamFriendsAsyncActionRequestUserInformation) \
	NO_API virtual ~UOrionSteamFriendsAsyncActionRequestUserInformation();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_192_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamFriendsAsyncActionRequestUserInformation;

// ********** End Class UOrionSteamFriendsAsyncActionRequestUserInformation ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
