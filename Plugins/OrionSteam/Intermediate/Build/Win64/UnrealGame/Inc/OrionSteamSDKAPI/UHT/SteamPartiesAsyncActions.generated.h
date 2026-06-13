// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesAsyncActions.h"

#ifdef ORIONSTEAMSDKAPI_SteamPartiesAsyncActions_generated_h
#error "SteamPartiesAsyncActions.generated.h already included, missing '#pragma once' in SteamPartiesAsyncActions.h"
#endif
#define ORIONSTEAMSDKAPI_SteamPartiesAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOrionSteamPartiesAsyncActionChangeNumOpenSlots;
class UOrionSteamPartiesAsyncActionCreateBeacon;
class UOrionSteamPartiesAsyncActionJoinParty;
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FPartyBeaconID;
struct FSteamPartyBeaconLocation;

// ********** Begin Delegate FOnJoinPartyCallback **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_15_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnJoinPartyCallback ****************************************************

// ********** Begin Delegate FOnCreateBeaconCallback ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_16_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateBeaconCallback *************************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsCallback *****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_17_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnChangeNumOpenSlotsCallback *******************************************

// ********** Begin Class UOrionSteamPartiesAsyncActionJoinParty ***********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamPartiesAsyncActionJoinParty(); \
	friend struct Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamPartiesAsyncActionJoinParty, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamPartiesAsyncActionJoinParty)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamPartiesAsyncActionJoinParty(UOrionSteamPartiesAsyncActionJoinParty&&) = delete; \
	UOrionSteamPartiesAsyncActionJoinParty(const UOrionSteamPartiesAsyncActionJoinParty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamPartiesAsyncActionJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamPartiesAsyncActionJoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamPartiesAsyncActionJoinParty) \
	NO_API virtual ~UOrionSteamPartiesAsyncActionJoinParty();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_23_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamPartiesAsyncActionJoinParty;

// ********** End Class UOrionSteamPartiesAsyncActionJoinParty *************************************

// ********** Begin Class UOrionSteamPartiesAsyncActionCreateBeacon ********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamPartiesAsyncActionCreateBeacon(); \
	friend struct Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamPartiesAsyncActionCreateBeacon, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamPartiesAsyncActionCreateBeacon)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamPartiesAsyncActionCreateBeacon(UOrionSteamPartiesAsyncActionCreateBeacon&&) = delete; \
	UOrionSteamPartiesAsyncActionCreateBeacon(const UOrionSteamPartiesAsyncActionCreateBeacon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamPartiesAsyncActionCreateBeacon) \
	NO_API virtual ~UOrionSteamPartiesAsyncActionCreateBeacon();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_51_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamPartiesAsyncActionCreateBeacon;

// ********** End Class UOrionSteamPartiesAsyncActionCreateBeacon **********************************

// ********** Begin Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamPartiesAsyncActionChangeNumOpenSlots, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamPartiesAsyncActionChangeNumOpenSlots)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamPartiesAsyncActionChangeNumOpenSlots(UOrionSteamPartiesAsyncActionChangeNumOpenSlots&&) = delete; \
	UOrionSteamPartiesAsyncActionChangeNumOpenSlots(const UOrionSteamPartiesAsyncActionChangeNumOpenSlots&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamPartiesAsyncActionChangeNumOpenSlots) \
	NO_API virtual ~UOrionSteamPartiesAsyncActionChangeNumOpenSlots();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_84_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamPartiesAsyncActionChangeNumOpenSlots;

// ********** End Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
