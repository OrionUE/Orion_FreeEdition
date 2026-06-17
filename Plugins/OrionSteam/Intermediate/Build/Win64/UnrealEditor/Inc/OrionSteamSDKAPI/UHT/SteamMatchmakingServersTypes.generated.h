// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamMatchmakingServersTypes_generated_h
#error "SteamMatchmakingServersTypes.generated.h already included, missing '#pragma once' in SteamMatchmakingServersTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamMatchmakingServersTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerItem;
struct FGameServerRule;

// ********** Begin Class UServerFilter ************************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterPassword); \
	DECLARE_FUNCTION(execAddFilterProxy); \
	DECLARE_FUNCTION(execAddFilterNotAppId); \
	DECLARE_FUNCTION(execAddFilterWhitelisted); \
	DECLARE_FUNCTION(execAddFilterName); \
	DECLARE_FUNCTION(execAddFilterVersion); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


struct Z_Construct_UClass_UServerFilter_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UServerFilter(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UServerFilter_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UServerFilter(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UServerFilter) \
	DECLARE_SERIALIZER(UServerFilter)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UServerFilter(UServerFilter&&) = delete; \
	UServerFilter(const UServerFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerFilter)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UServerFilter;

// ********** End Class UServerFilter **************************************************************

// ********** Begin ScriptStruct FSteamServerAddr **************************************************
struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamServerAddr_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSteamServerAddr(ETypeConstructPhase::Inner); }


struct FSteamServerAddr;
// ********** End ScriptStruct FSteamServerAddr ****************************************************

// ********** Begin ScriptStruct FGameServerItem ***************************************************
struct Z_Construct_UScriptStruct_FGameServerItem_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_254_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameServerItem_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGameServerItem(ETypeConstructPhase::Inner); }


struct FGameServerItem;
// ********** End ScriptStruct FGameServerItem *****************************************************

// ********** Begin ScriptStruct FGameServerRule ***************************************************
struct Z_Construct_UScriptStruct_FGameServerRule_Statics;
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_316_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameServerRule_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGameServerRule(ETypeConstructPhase::Inner); }


struct FGameServerRule;
// ********** End ScriptStruct FGameServerRule *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
