// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheatReporting/WebCheatReportingAsyncActions.h"

#ifdef ORIONSTEAMWEBAPI_WebCheatReportingAsyncActions_generated_h
#error "WebCheatReportingAsyncActions.generated.h already included, missing '#pragma once' in WebCheatReportingAsyncActions.h"
#endif
#define ORIONSTEAMWEBAPI_WebCheatReportingAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession;
class UOrionSteamWebAPIAsyncActionGetCheatingReports;
class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan;
class UOrionSteamWebAPIAsyncActionReportCheatData;
class UOrionSteamWebAPIAsyncActionReportPlayerCheating;
class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan;
class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser;
class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession;

// ********** Begin Class UOrionSteamWebAPIAsyncActionReportPlayerCheating *************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReportPlayerCheatingAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionReportPlayerCheating(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionReportPlayerCheating, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportPlayerCheating_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionReportPlayerCheating)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionReportPlayerCheating(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionReportPlayerCheating(UOrionSteamWebAPIAsyncActionReportPlayerCheating&&) = delete; \
	UOrionSteamWebAPIAsyncActionReportPlayerCheating(const UOrionSteamWebAPIAsyncActionReportPlayerCheating&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionReportPlayerCheating); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionReportPlayerCheating); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionReportPlayerCheating) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionReportPlayerCheating();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_14_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionReportPlayerCheating;

// ********** End Class UOrionSteamWebAPIAsyncActionReportPlayerCheating ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan *************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestPlayerGameBanAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestPlayerGameBan(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestPlayerGameBan_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionRequestPlayerGameBan(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionRequestPlayerGameBan(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan&&) = delete; \
	UOrionSteamWebAPIAsyncActionRequestPlayerGameBan(const UOrionSteamWebAPIAsyncActionRequestPlayerGameBan&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionRequestPlayerGameBan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionRequestPlayerGameBan) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionRequestPlayerGameBan();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_44_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan;

// ********** End Class UOrionSteamWebAPIAsyncActionRequestPlayerGameBan ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemovePlayerGameBanAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionRemovePlayerGameBan(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRemovePlayerGameBan_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionRemovePlayerGameBan(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionRemovePlayerGameBan(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan&&) = delete; \
	UOrionSteamWebAPIAsyncActionRemovePlayerGameBan(const UOrionSteamWebAPIAsyncActionRemovePlayerGameBan&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionRemovePlayerGameBan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionRemovePlayerGameBan) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionRemovePlayerGameBan();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_69_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan;

// ********** End Class UOrionSteamWebAPIAsyncActionRemovePlayerGameBan ****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCheatingReports ***************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCheatingReportsAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCheatingReports(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionGetCheatingReports, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCheatingReports_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionGetCheatingReports)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionGetCheatingReports(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionGetCheatingReports(UOrionSteamWebAPIAsyncActionGetCheatingReports&&) = delete; \
	UOrionSteamWebAPIAsyncActionGetCheatingReports(const UOrionSteamWebAPIAsyncActionGetCheatingReports&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionGetCheatingReports); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionGetCheatingReports); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionGetCheatingReports) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionGetCheatingReports();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_90_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionGetCheatingReports;

// ********** End Class UOrionSteamWebAPIAsyncActionGetCheatingReports *****************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionReportCheatData ******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReportCheatDataAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionReportCheatData(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionReportCheatData, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionReportCheatData_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionReportCheatData)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionReportCheatData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionReportCheatData(UOrionSteamWebAPIAsyncActionReportCheatData&&) = delete; \
	UOrionSteamWebAPIAsyncActionReportCheatData(const UOrionSteamWebAPIAsyncActionReportCheatData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionReportCheatData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionReportCheatData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionReportCheatData) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionReportCheatData();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_116_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionReportCheatData;

// ********** End Class UOrionSteamWebAPIAsyncActionReportCheatData ********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser **********************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestVacStatusForUserAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionRequestVacStatusForUser(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionRequestVacStatusForUser_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionRequestVacStatusForUser(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionRequestVacStatusForUser(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser&&) = delete; \
	UOrionSteamWebAPIAsyncActionRequestVacStatusForUser(const UOrionSteamWebAPIAsyncActionRequestVacStatusForUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionRequestVacStatusForUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionRequestVacStatusForUser) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionRequestVacStatusForUser();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_147_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser;

// ********** End Class UOrionSteamWebAPIAsyncActionRequestVacStatusForUser ************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession ****************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartSecureMultiplayerSessionAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession&&) = delete; \
	UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession(const UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_173_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession;

// ********** End Class UOrionSteamWebAPIAsyncActionStartSecureMultiplayerSession ******************

// ********** Begin Class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession ******************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndSecureMultiplayerSessionAsync);


ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession(); \
	friend struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession, UOrionSteamWebAPIAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamWebAPI"), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession&&) = delete; \
	UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession(const UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession) \
	NO_API virtual ~UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_192_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession;

// ********** End Class UOrionSteamWebAPIAsyncActionEndSecureMultiplayerSession ********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_CheatReporting_WebCheatReportingAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
