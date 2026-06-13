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

// ********** Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_16_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& data, bool bWasSuccessful);


// ********** End Delegate FOnDownloadClanActivityCountsAsyncDelegate ******************************

// ********** Begin Delegate FOnRequestClanOfficerListAsyncDelegate ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_17_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& data, bool bWasSuccessful);


// ********** End Delegate FOnRequestClanOfficerListAsyncDelegate **********************************

// ********** Begin Delegate FOnJoinClanChatRoomAsyncDelegate **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_18_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& data, bool bWasSuccessful);


// ********** End Delegate FOnJoinClanChatRoomAsyncDelegate ****************************************

// ********** Begin Delegate FOnEnumerateFollowingListAsyncDelegate ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_19_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& data, bool bWasSuccessful);


// ********** End Delegate FOnEnumerateFollowingListAsyncDelegate **********************************

// ********** Begin Delegate FOnIsFollowingAsyncDelegate *******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_20_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& data, bool bWasSuccessful);


// ********** End Delegate FOnIsFollowingAsyncDelegate *********************************************

// ********** Begin Delegate FOnGetFollowerCountAsyncDelegate **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_21_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& data, bool bWasSuccessful);


// ********** End Delegate FOnGetFollowerCountAsyncDelegate ****************************************

// ********** Begin Delegate FOnRequestUserInformationAsyncDelegate ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_22_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnRequestUserInformationAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserInformationAsyncDelegate);


// ********** End Delegate FOnRequestUserInformationAsyncDelegate **********************************

// ********** Begin Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts ******************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadClanActivityCountsAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionDownloadClanActivityCounts(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_NoRegister) \
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


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionRequestClanOfficerList(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionRequestClanOfficerList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_NoRegister) \
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


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionJoinClanChatRoom(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionJoinClanChatRoom, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_NoRegister) \
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


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionEnumerateFollowingList(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionEnumerateFollowingList, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_NoRegister) \
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


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionIsFollowing(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionIsFollowing, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_NoRegister) \
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


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionGetFollowerCount(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionGetFollowerCount, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_NoRegister) \
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


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamFriendsAsyncActionRequestUserInformation(); \
	friend struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamFriendsAsyncActionRequestUserInformation, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_NoRegister) \
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
