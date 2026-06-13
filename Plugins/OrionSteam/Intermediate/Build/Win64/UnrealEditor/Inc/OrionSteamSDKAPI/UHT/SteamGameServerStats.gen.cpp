// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameServerStats/SteamGameServerStats.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamGameServerStats() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamGameServerStats();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamGameServerStats_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamGameServerStats Function ClearUserAchievement *****************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics
{
	struct OrionSteamGameServerStats_eventClearUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the unlock status of an achievement for the specified user.\n\x09 *\n\x09 * This is primarily only ever used for testing.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to clear the achievement for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the Achievement to reset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the unlock status of an achievement for the specified user.\n\nThis is primarily only ever used for testing.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param       SteamIDUser             The Steam ID of the user to clear the achievement for.\n@param       Name                    The 'API Name' of the Achievement to reset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventClearUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventClearUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventClearUserAchievement_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "ClearUserAchievement", Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::OrionSteamGameServerStats_eventClearUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::OrionSteamGameServerStats_eventClearUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execClearUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function ClearUserAchievement *******************

// ********** Begin Class UOrionSteamGameServerStats Function GetSteamGameServerStats **************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics
{
	struct OrionSteamGameServerStats_eventGetSteamGameServerStats_Parms
	{
		UOrionSteamGameServerStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetSteamGameServerStats_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamGameServerStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "GetSteamGameServerStats", Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::OrionSteamGameServerStats_eventGetSteamGameServerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::OrionSteamGameServerStats_eventGetSteamGameServerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execGetSteamGameServerStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamGameServerStats**)Z_Param__Result=UOrionSteamGameServerStats::GetSteamGameServerStats();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function GetSteamGameServerStats ****************

// ********** Begin Class UOrionSteamGameServerStats Function GetUserAchievement *******************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics
{
	struct OrionSteamGameServerStats_eventGetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the unlock status of the Achievement.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09 * @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\n@param       SteamIDUser             The Steam ID of the user to get the achievement for.\n@param       Name                    The 'API Name' of the achievement.\n@param       bAchieved               Returns the unlock status of the achievement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "GetUserAchievement", Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::OrionSteamGameServerStats_eventGetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::OrionSteamGameServerStats_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execGetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function GetUserAchievement *********************

// ********** Begin Class UOrionSteamGameServerStats Function GetUserStatFloat *********************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics
{
	struct OrionSteamGameServerStats_eventGetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the specified user.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param       SteamIDUser             The Steam ID of the user to get the stat for.\n@param       Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data                    The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "GetUserStatFloat", Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::OrionSteamGameServerStats_eventGetUserStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::OrionSteamGameServerStats_eventGetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execGetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function GetUserStatFloat ***********************

// ********** Begin Class UOrionSteamGameServerStats Function GetUserStatInt ***********************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics
{
	struct OrionSteamGameServerStats_eventGetUserStatInt_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the specified user.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09\x09The variable to return the stat value into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param       SteamIDUser             The Steam ID of the user to get the stat for.\n@param       Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data                    The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventGetUserStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventGetUserStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventGetUserStatInt_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "GetUserStatInt", Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::OrionSteamGameServerStats_eventGetUserStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::OrionSteamGameServerStats_eventGetUserStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execGetUserStatInt)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function GetUserStatInt *************************

// ********** Begin Class UOrionSteamGameServerStats Function ServerRequestUserStats ***************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics
{
	struct OrionSteamGameServerStats_eventServerRequestUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asynchronously downloads stats and achievements for the specified user from the server.\n\x09 *\n\x09 * These stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to request the stats for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\n@param       SteamIDUser             The Steam ID of the user to request the stats for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventServerRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerRequestUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1551945292
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventServerRequestUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "ServerRequestUserStats", Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::OrionSteamGameServerStats_eventServerRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::OrionSteamGameServerStats_eventServerRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execServerRequestUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestUserStats(FOnServerRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function ServerRequestUserStats *****************

// ********** Begin Class UOrionSteamGameServerStats Function ServerStoreUserStats *****************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics
{
	struct OrionSteamGameServerStats_eventServerStoreUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\x09 *\n\x09 * If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09 * This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\n\x09 * You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09 * If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process\n\x09 * ends then this function will automatically be called.\n\x09 * You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to store the stats of.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process\nends then this function will automatically be called.\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\n@param       SteamIDUser             The Steam ID of the user to store the stats of." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventServerStoreUserStats_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnServerStoreUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1289454992
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventServerStoreUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "ServerStoreUserStats", Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::OrionSteamGameServerStats_eventServerStoreUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::OrionSteamGameServerStats_eventServerStoreUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execServerStoreUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStoreUserStats(FOnServerStoreUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function ServerStoreUserStats *******************

// ********** Begin Class UOrionSteamGameServerStats Function SetUserAchievement *******************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics
{
	struct OrionSteamGameServerStats_eventSetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unlocks an achievement for the specified user.\n\x09 *\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to unlock the achievement for.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the Achievement to unlock.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlocks an achievement for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param       SteamIDUser             The Steam ID of the user to unlock the achievement for.\n@param       Name                    The 'API Name' of the Achievement to unlock." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventSetUserAchievement_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "SetUserAchievement", Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::OrionSteamGameServerStats_eventSetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::OrionSteamGameServerStats_eventSetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execSetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function SetUserAchievement *********************

// ********** Begin Class UOrionSteamGameServerStats Function SetUserStatFloat *********************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics
{
	struct OrionSteamGameServerStats_eventSetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the specified user.\n\x09 *\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param       SteamIDUser             The Steam ID of the user to set the stat on.\n@param       Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventSetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventSetUserStatFloat_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "SetUserStatFloat", Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::OrionSteamGameServerStats_eventSetUserStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::OrionSteamGameServerStats_eventSetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execSetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function SetUserStatFloat ***********************

// ********** Begin Class UOrionSteamGameServerStats Function SetUserStatInt ***********************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics
{
	struct OrionSteamGameServerStats_eventSetUserStatInt_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the specified user.\n\x09 *\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 *\n\x09 * @param\x09SteamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09 * @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param\x09""Data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param       SteamIDUser             The Steam ID of the user to set the stat on.\n@param       Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param       Data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventSetUserStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventSetUserStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventSetUserStatInt_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "SetUserStatInt", Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::OrionSteamGameServerStats_eventSetUserStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::OrionSteamGameServerStats_eventSetUserStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execSetUserStatInt)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function SetUserStatInt *************************

// ********** Begin Class UOrionSteamGameServerStats Function UpdateUserAvgRateStat ****************
struct Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics
{
	struct OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float CountThisSession;
		float SessionLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Updates an AVGRATE stat with new values for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09* These updates will work only on stats that game servers are allowed to edit.\n\x09* If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially\n\x09* controlled by you will be able to set it. To do this you must set the IP range of your official servers in the\n\x09* Dedicated Servers section of App Admin.\n\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09\x09The Steam ID of the user to update the AVGRATE stat for.\n\x09* @param\x09Name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""CountThisSession\x09The value accumulation since the last call to this function.\n\x09* @param\x09SessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an AVGRATE stat with new values for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nThese updates will work only on stats that game servers are allowed to edit.\nIf the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially\ncontrolled by you will be able to set it. To do this you must set the IP range of your official servers in the\nDedicated Servers section of App Admin.\n\n\n@param        SteamIDUser                     The Steam ID of the user to update the AVGRATE stat for.\n@param        Name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        CountThisSession        The value accumulation since the last call to this function.\n@param        SessionLength           The amount of time in seconds since the last call to this function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms, SessionLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameServerStats, nullptr, "UpdateUserAvgRateStat", Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::OrionSteamGameServerStats_eventUpdateUserAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameServerStats::execUpdateUserAvgRateStat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateUserAvgRateStat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameServerStats Function UpdateUserAvgRateStat ******************

// ********** Begin Class UOrionSteamGameServerStats ***********************************************
void UOrionSteamGameServerStats::StaticRegisterNativesUOrionSteamGameServerStats()
{
	UClass* Class = UOrionSteamGameServerStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearUserAchievement", &UOrionSteamGameServerStats::execClearUserAchievement },
		{ "GetSteamGameServerStats", &UOrionSteamGameServerStats::execGetSteamGameServerStats },
		{ "GetUserAchievement", &UOrionSteamGameServerStats::execGetUserAchievement },
		{ "GetUserStatFloat", &UOrionSteamGameServerStats::execGetUserStatFloat },
		{ "GetUserStatInt", &UOrionSteamGameServerStats::execGetUserStatInt },
		{ "ServerRequestUserStats", &UOrionSteamGameServerStats::execServerRequestUserStats },
		{ "ServerStoreUserStats", &UOrionSteamGameServerStats::execServerStoreUserStats },
		{ "SetUserAchievement", &UOrionSteamGameServerStats::execSetUserAchievement },
		{ "SetUserStatFloat", &UOrionSteamGameServerStats::execSetUserStatFloat },
		{ "SetUserStatInt", &UOrionSteamGameServerStats::execSetUserStatInt },
		{ "UpdateUserAvgRateStat", &UOrionSteamGameServerStats::execUpdateUserAvgRateStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamGameServerStats;
UClass* UOrionSteamGameServerStats::GetPrivateStaticClass()
{
	using TClass = UOrionSteamGameServerStats;
	if (!Z_Registration_Info_UClass_UOrionSteamGameServerStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamGameServerStats"),
			Z_Registration_Info_UClass_UOrionSteamGameServerStats.InnerSingleton,
			StaticRegisterNativesUOrionSteamGameServerStats,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UOrionSteamGameServerStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamGameServerStats_NoRegister()
{
	return UOrionSteamGameServerStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamGameServerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServerStats/SteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSStatsUnloaded_MetaData[] = {
		{ "Category", "OrionSteam|GameServerStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_ClearUserAchievement, "ClearUserAchievement" }, // 2587448756
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_GetSteamGameServerStats, "GetSteamGameServerStats" }, // 4178926868
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserAchievement, "GetUserAchievement" }, // 2483522307
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatFloat, "GetUserStatFloat" }, // 3166087989
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_GetUserStatInt, "GetUserStatInt" }, // 1077372442
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_ServerRequestUserStats, "ServerRequestUserStats" }, // 415725657
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_ServerStoreUserStats, "ServerStoreUserStats" }, // 3406999566
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserAchievement, "SetUserAchievement" }, // 3260118832
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatFloat, "SetUserStatFloat" }, // 1912459141
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_SetUserStatInt, "SetUserStatInt" }, // 2899218103
		{ &Z_Construct_UFunction_UOrionSteamGameServerStats_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 3654738646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamGameServerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameServerStats_Statics::NewProp_GSStatsUnloaded = { "GSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameServerStats, GSStatsUnloaded), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGSStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSStatsUnloaded_MetaData), NewProp_GSStatsUnloaded_MetaData) }; // 3525647972
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamGameServerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameServerStats_Statics::NewProp_GSStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameServerStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamGameServerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameServerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamGameServerStats_Statics::ClassParams = {
	&UOrionSteamGameServerStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamGameServerStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameServerStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameServerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamGameServerStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamGameServerStats()
{
	if (!Z_Registration_Info_UClass_UOrionSteamGameServerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamGameServerStats.OuterSingleton, Z_Construct_UClass_UOrionSteamGameServerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamGameServerStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamGameServerStats);
// ********** End Class UOrionSteamGameServerStats *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamGameServerStats, UOrionSteamGameServerStats::StaticClass, TEXT("UOrionSteamGameServerStats"), &Z_Registration_Info_UClass_UOrionSteamGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamGameServerStats), 4180800696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h__Script_OrionSteamSDKAPI_1140788945(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameServerStats_SteamGameServerStats_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
