// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUGC/SteamUGCAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamUGCAsyncActions_generated_h
#error "SteamUGCAsyncActions.generated.h already included, missing '#pragma once' in SteamUGCAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamUGCAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionSteamUGCAsyncActionAddAppDependency;
class UOrionSteamUGCAsyncActionAddItemToFavorites;
class UOrionSteamUGCAsyncActionAddUGCDependency;
class UOrionSteamUGCAsyncActionCreateItem;
class UOrionSteamUGCAsyncActionDeleteItem;
class UOrionSteamUGCAsyncActionDownloadItem;
class UOrionSteamUGCAsyncActionGetAppDependencies;
class UOrionSteamUGCAsyncActionGetUserItemVote;
class UOrionSteamUGCAsyncActionRemoveAppDependency;
class UOrionSteamUGCAsyncActionRemoveItemFromFavorites;
class UOrionSteamUGCAsyncActionRemoveUGCDependency;
class UOrionSteamUGCAsyncActionSendQueryUGCRequest;
class UOrionSteamUGCAsyncActionSetUserItemVote;
class UOrionSteamUGCAsyncActionStartPlaytimeTracking;
class UOrionSteamUGCAsyncActionStopPlaytimeTracking;
class UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems;
class UOrionSteamUGCAsyncActionSubmitItemUpdate;
class UOrionSteamUGCAsyncActionSubscribeItem;
class UOrionSteamUGCAsyncActionUnsubscribeItem;
enum class ESteamWorkshopFileType : uint8;
struct FAddAppDependencyResult;
struct FAddUGCDependencyResult;
struct FCreateItemResult;
struct FDownloadItemResult;
struct FGetAppDependenciesResult;
struct FGetUserItemVoteResult;
struct FPublishedFileID;
struct FRemoteStorageSubscribePublishedFileResult;
struct FRemoveAppDependencyResult;
struct FRemoveUGCDependencyResult;
struct FSetUserItemVoteResult;
struct FStartPlaytimeTrackingResult;
struct FSteamUGCQueryCompleted;
struct FStopPlaytimeTrackingResult;
struct FSubmitItemUpdateResult;
struct FUGCDeleteItemResult;
struct FUGCQueryHandle;
struct FUGCUpdateHandle;
struct FUserFavoriteItemsListChanged;

// ********** Begin Class UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems *****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItemsAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems(UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems&&) = delete; \
	UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems(const UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems) \
	NO_API virtual ~UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_38_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems;

// ********** End Class UOrionSteamUGCAsyncActionStopPlaytimeTrackingForAllItems *******************

// ********** Begin Class UOrionSteamUGCAsyncActionStopPlaytimeTracking ****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTracking_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTracking(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTracking_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTracking(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionStopPlaytimeTracking, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionStopPlaytimeTracking) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionStopPlaytimeTracking)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionStopPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionStopPlaytimeTracking(UOrionSteamUGCAsyncActionStopPlaytimeTracking&&) = delete; \
	UOrionSteamUGCAsyncActionStopPlaytimeTracking(const UOrionSteamUGCAsyncActionStopPlaytimeTracking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionStopPlaytimeTracking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionStopPlaytimeTracking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionStopPlaytimeTracking) \
	NO_API virtual ~UOrionSteamUGCAsyncActionStopPlaytimeTracking();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_64_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionStopPlaytimeTracking;

// ********** End Class UOrionSteamUGCAsyncActionStopPlaytimeTracking ******************************

// ********** Begin Class UOrionSteamUGCAsyncActionStartPlaytimeTracking ***************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPlaytimeTrackingAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionStartPlaytimeTracking_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionStartPlaytimeTracking(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionStartPlaytimeTracking_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionStartPlaytimeTracking(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionStartPlaytimeTracking, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionStartPlaytimeTracking) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionStartPlaytimeTracking)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionStartPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionStartPlaytimeTracking(UOrionSteamUGCAsyncActionStartPlaytimeTracking&&) = delete; \
	UOrionSteamUGCAsyncActionStartPlaytimeTracking(const UOrionSteamUGCAsyncActionStartPlaytimeTracking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionStartPlaytimeTracking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionStartPlaytimeTracking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionStartPlaytimeTracking) \
	NO_API virtual ~UOrionSteamUGCAsyncActionStartPlaytimeTracking();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_91_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionStartPlaytimeTracking;

// ********** End Class UOrionSteamUGCAsyncActionStartPlaytimeTracking *****************************

// ********** Begin Class UOrionSteamUGCAsyncActionUnsubscribeItem *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execUnsubscribeItemAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionUnsubscribeItem_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionUnsubscribeItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionUnsubscribeItem_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionUnsubscribeItem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionUnsubscribeItem, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionUnsubscribeItem) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionUnsubscribeItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionUnsubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionUnsubscribeItem(UOrionSteamUGCAsyncActionUnsubscribeItem&&) = delete; \
	UOrionSteamUGCAsyncActionUnsubscribeItem(const UOrionSteamUGCAsyncActionUnsubscribeItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionUnsubscribeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionUnsubscribeItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionUnsubscribeItem) \
	NO_API virtual ~UOrionSteamUGCAsyncActionUnsubscribeItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_118_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionUnsubscribeItem;

// ********** End Class UOrionSteamUGCAsyncActionUnsubscribeItem ***********************************

// ********** Begin Class UOrionSteamUGCAsyncActionSubscribeItem ***********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubscribeItemAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionSubscribeItem_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionSubscribeItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSubscribeItem_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSubscribeItem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionSubscribeItem, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionSubscribeItem) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionSubscribeItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionSubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionSubscribeItem(UOrionSteamUGCAsyncActionSubscribeItem&&) = delete; \
	UOrionSteamUGCAsyncActionSubscribeItem(const UOrionSteamUGCAsyncActionSubscribeItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionSubscribeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionSubscribeItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionSubscribeItem) \
	NO_API virtual ~UOrionSteamUGCAsyncActionSubscribeItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_144_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionSubscribeItem;

// ********** End Class UOrionSteamUGCAsyncActionSubscribeItem *************************************

// ********** Begin Class UOrionSteamUGCAsyncActionRemoveItemFromFavorites *************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveItemFromFavoritesAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveItemFromFavorites_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveItemFromFavorites(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveItemFromFavorites_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveItemFromFavorites(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionRemoveItemFromFavorites, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveItemFromFavorites) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionRemoveItemFromFavorites)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionRemoveItemFromFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionRemoveItemFromFavorites(UOrionSteamUGCAsyncActionRemoveItemFromFavorites&&) = delete; \
	UOrionSteamUGCAsyncActionRemoveItemFromFavorites(const UOrionSteamUGCAsyncActionRemoveItemFromFavorites&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionRemoveItemFromFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionRemoveItemFromFavorites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionRemoveItemFromFavorites) \
	NO_API virtual ~UOrionSteamUGCAsyncActionRemoveItemFromFavorites();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_170_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionRemoveItemFromFavorites;

// ********** End Class UOrionSteamUGCAsyncActionRemoveItemFromFavorites ***************************

// ********** Begin Class UOrionSteamUGCAsyncActionAddItemToFavorites ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddItemToFavoritesAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionAddItemToFavorites_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionAddItemToFavorites(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionAddItemToFavorites_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionAddItemToFavorites(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionAddItemToFavorites, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionAddItemToFavorites) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionAddItemToFavorites)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionAddItemToFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionAddItemToFavorites(UOrionSteamUGCAsyncActionAddItemToFavorites&&) = delete; \
	UOrionSteamUGCAsyncActionAddItemToFavorites(const UOrionSteamUGCAsyncActionAddItemToFavorites&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionAddItemToFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionAddItemToFavorites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionAddItemToFavorites) \
	NO_API virtual ~UOrionSteamUGCAsyncActionAddItemToFavorites();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_197_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionAddItemToFavorites;

// ********** End Class UOrionSteamUGCAsyncActionAddItemToFavorites ********************************

// ********** Begin Class UOrionSteamUGCAsyncActionGetUserItemVote *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetUserItemVoteAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionGetUserItemVote_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionGetUserItemVote(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionGetUserItemVote_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionGetUserItemVote(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionGetUserItemVote, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionGetUserItemVote) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionGetUserItemVote)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionGetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionGetUserItemVote(UOrionSteamUGCAsyncActionGetUserItemVote&&) = delete; \
	UOrionSteamUGCAsyncActionGetUserItemVote(const UOrionSteamUGCAsyncActionGetUserItemVote&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionGetUserItemVote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionGetUserItemVote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionGetUserItemVote) \
	NO_API virtual ~UOrionSteamUGCAsyncActionGetUserItemVote();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_224_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionGetUserItemVote;

// ********** End Class UOrionSteamUGCAsyncActionGetUserItemVote ***********************************

// ********** Begin Class UOrionSteamUGCAsyncActionSetUserItemVote *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetUserItemVoteAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionSetUserItemVote_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionSetUserItemVote(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSetUserItemVote_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSetUserItemVote(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionSetUserItemVote, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionSetUserItemVote) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionSetUserItemVote)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionSetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionSetUserItemVote(UOrionSteamUGCAsyncActionSetUserItemVote&&) = delete; \
	UOrionSteamUGCAsyncActionSetUserItemVote(const UOrionSteamUGCAsyncActionSetUserItemVote&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionSetUserItemVote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionSetUserItemVote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionSetUserItemVote) \
	NO_API virtual ~UOrionSteamUGCAsyncActionSetUserItemVote();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_250_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionSetUserItemVote;

// ********** End Class UOrionSteamUGCAsyncActionSetUserItemVote ***********************************

// ********** Begin Class UOrionSteamUGCAsyncActionSubmitItemUpdate ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubmitItemUpdateAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionSubmitItemUpdate_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionSubmitItemUpdate(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSubmitItemUpdate_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSubmitItemUpdate(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionSubmitItemUpdate, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionSubmitItemUpdate) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionSubmitItemUpdate)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionSubmitItemUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionSubmitItemUpdate(UOrionSteamUGCAsyncActionSubmitItemUpdate&&) = delete; \
	UOrionSteamUGCAsyncActionSubmitItemUpdate(const UOrionSteamUGCAsyncActionSubmitItemUpdate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionSubmitItemUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionSubmitItemUpdate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionSubmitItemUpdate) \
	NO_API virtual ~UOrionSteamUGCAsyncActionSubmitItemUpdate();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_277_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_280_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionSubmitItemUpdate;

// ********** End Class UOrionSteamUGCAsyncActionSubmitItemUpdate **********************************

// ********** Begin Class UOrionSteamUGCAsyncActionCreateItem **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateItemAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionCreateItem_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionCreateItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionCreateItem_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionCreateItem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionCreateItem, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionCreateItem) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionCreateItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionCreateItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionCreateItem(UOrionSteamUGCAsyncActionCreateItem&&) = delete; \
	UOrionSteamUGCAsyncActionCreateItem(const UOrionSteamUGCAsyncActionCreateItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionCreateItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionCreateItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionCreateItem) \
	NO_API virtual ~UOrionSteamUGCAsyncActionCreateItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_305_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_308_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionCreateItem;

// ********** End Class UOrionSteamUGCAsyncActionCreateItem ****************************************

// ********** Begin Class UOrionSteamUGCAsyncActionSendQueryUGCRequest *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSendQueryUGCRequestAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionSendQueryUGCRequest_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionSendQueryUGCRequest(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSendQueryUGCRequest_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionSendQueryUGCRequest(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionSendQueryUGCRequest, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionSendQueryUGCRequest) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionSendQueryUGCRequest)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionSendQueryUGCRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionSendQueryUGCRequest(UOrionSteamUGCAsyncActionSendQueryUGCRequest&&) = delete; \
	UOrionSteamUGCAsyncActionSendQueryUGCRequest(const UOrionSteamUGCAsyncActionSendQueryUGCRequest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionSendQueryUGCRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionSendQueryUGCRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionSendQueryUGCRequest) \
	NO_API virtual ~UOrionSteamUGCAsyncActionSendQueryUGCRequest();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_332_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_335_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionSendQueryUGCRequest;

// ********** End Class UOrionSteamUGCAsyncActionSendQueryUGCRequest *******************************

// ********** Begin Class UOrionSteamUGCAsyncActionAddAppDependency ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddAppDependencyAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionAddAppDependency_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionAddAppDependency(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionAddAppDependency_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionAddAppDependency(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionAddAppDependency, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionAddAppDependency) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionAddAppDependency)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionAddAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionAddAppDependency(UOrionSteamUGCAsyncActionAddAppDependency&&) = delete; \
	UOrionSteamUGCAsyncActionAddAppDependency(const UOrionSteamUGCAsyncActionAddAppDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionAddAppDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionAddAppDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionAddAppDependency) \
	NO_API virtual ~UOrionSteamUGCAsyncActionAddAppDependency();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_360_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_363_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionAddAppDependency;

// ********** End Class UOrionSteamUGCAsyncActionAddAppDependency **********************************

// ********** Begin Class UOrionSteamUGCAsyncActionRemoveAppDependency *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveAppDependencyAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveAppDependency_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveAppDependency(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveAppDependency_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveAppDependency(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionRemoveAppDependency, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveAppDependency) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionRemoveAppDependency)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionRemoveAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionRemoveAppDependency(UOrionSteamUGCAsyncActionRemoveAppDependency&&) = delete; \
	UOrionSteamUGCAsyncActionRemoveAppDependency(const UOrionSteamUGCAsyncActionRemoveAppDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionRemoveAppDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionRemoveAppDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionRemoveAppDependency) \
	NO_API virtual ~UOrionSteamUGCAsyncActionRemoveAppDependency();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_390_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_393_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionRemoveAppDependency;

// ********** End Class UOrionSteamUGCAsyncActionRemoveAppDependency *******************************

// ********** Begin Class UOrionSteamUGCAsyncActionAddUGCDependency ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddDependencyAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionAddUGCDependency_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionAddUGCDependency(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionAddUGCDependency_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionAddUGCDependency(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionAddUGCDependency, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionAddUGCDependency) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionAddUGCDependency)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionAddUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionAddUGCDependency(UOrionSteamUGCAsyncActionAddUGCDependency&&) = delete; \
	UOrionSteamUGCAsyncActionAddUGCDependency(const UOrionSteamUGCAsyncActionAddUGCDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionAddUGCDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionAddUGCDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionAddUGCDependency) \
	NO_API virtual ~UOrionSteamUGCAsyncActionAddUGCDependency();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_417_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_420_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionAddUGCDependency;

// ********** End Class UOrionSteamUGCAsyncActionAddUGCDependency **********************************

// ********** Begin Class UOrionSteamUGCAsyncActionRemoveUGCDependency *****************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveDependencyAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveUGCDependency_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveUGCDependency(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveUGCDependency_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveUGCDependency(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionRemoveUGCDependency, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionRemoveUGCDependency) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionRemoveUGCDependency)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionRemoveUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionRemoveUGCDependency(UOrionSteamUGCAsyncActionRemoveUGCDependency&&) = delete; \
	UOrionSteamUGCAsyncActionRemoveUGCDependency(const UOrionSteamUGCAsyncActionRemoveUGCDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionRemoveUGCDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionRemoveUGCDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionRemoveUGCDependency) \
	NO_API virtual ~UOrionSteamUGCAsyncActionRemoveUGCDependency();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_447_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_450_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionRemoveUGCDependency;

// ********** End Class UOrionSteamUGCAsyncActionRemoveUGCDependency *******************************

// ********** Begin Class UOrionSteamUGCAsyncActionDeleteItem **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDeleteItemAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionDeleteItem_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionDeleteItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionDeleteItem_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionDeleteItem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionDeleteItem, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionDeleteItem) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionDeleteItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionDeleteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionDeleteItem(UOrionSteamUGCAsyncActionDeleteItem&&) = delete; \
	UOrionSteamUGCAsyncActionDeleteItem(const UOrionSteamUGCAsyncActionDeleteItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionDeleteItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionDeleteItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionDeleteItem) \
	NO_API virtual ~UOrionSteamUGCAsyncActionDeleteItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_474_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_477_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionDeleteItem;

// ********** End Class UOrionSteamUGCAsyncActionDeleteItem ****************************************

// ********** Begin Class UOrionSteamUGCAsyncActionGetAppDependencies ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetAppDependenciesAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionGetAppDependencies_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionGetAppDependencies(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionGetAppDependencies_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionGetAppDependencies(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionGetAppDependencies, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionGetAppDependencies) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionGetAppDependencies)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionGetAppDependencies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionGetAppDependencies(UOrionSteamUGCAsyncActionGetAppDependencies&&) = delete; \
	UOrionSteamUGCAsyncActionGetAppDependencies(const UOrionSteamUGCAsyncActionGetAppDependencies&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionGetAppDependencies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionGetAppDependencies); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionGetAppDependencies) \
	NO_API virtual ~UOrionSteamUGCAsyncActionGetAppDependencies();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_500_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_503_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionGetAppDependencies;

// ********** End Class UOrionSteamUGCAsyncActionGetAppDependencies ********************************

// ********** Begin Class UOrionSteamUGCAsyncActionDownloadItem ************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadItemAsync);


struct Z_Construct_UClass_UOrionSteamUGCAsyncActionDownloadItem_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUGCAsyncActionDownloadItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamUGCAsyncActionDownloadItem_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamUGCAsyncActionDownloadItem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamUGCAsyncActionDownloadItem, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUGCAsyncActionDownloadItem) \
	DECLARE_SERIALIZER(UOrionSteamUGCAsyncActionDownloadItem)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUGCAsyncActionDownloadItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUGCAsyncActionDownloadItem(UOrionSteamUGCAsyncActionDownloadItem&&) = delete; \
	UOrionSteamUGCAsyncActionDownloadItem(const UOrionSteamUGCAsyncActionDownloadItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUGCAsyncActionDownloadItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUGCAsyncActionDownloadItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUGCAsyncActionDownloadItem) \
	NO_API virtual ~UOrionSteamUGCAsyncActionDownloadItem();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_528_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h_531_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUGCAsyncActionDownloadItem;

// ********** End Class UOrionSteamUGCAsyncActionDownloadItem **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUGC_SteamUGCAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
