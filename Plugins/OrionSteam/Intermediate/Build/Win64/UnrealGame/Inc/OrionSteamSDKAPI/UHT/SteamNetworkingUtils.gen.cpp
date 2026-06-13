// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamNetworkingUtils/SteamNetworkingUtils.h"
#include "SteamNetworkingUtils/SteamNetworkingUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamNetworkingUtils() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamNetworkingUtils();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamNetworkingUtils_NoRegister();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamNetworkingUtils Function CheckPingDataUpToDate ****************
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics
{
	struct OrionSteamNetworkingUtils_eventCheckPingDataUpToDate_Parms
	{
		float MaxAgeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the ping data of sufficient recency is available, and if it's too old, start refreshing it.\n\x09 *\n\x09 * Please only call this function when you really do need to force an immediate refresh of the data.\n\x09 * (For example, in response to a specific user input to refresh this information.)\n\x09 * Don't call it \"just in case\", before every connection, etc. That will cause extra traffic to be sent for no benefit.\n\x09 * The library will automatically refresh the information as needed.\n\x09 *\n\x09 * Returns true if sufficiently recent data is already available.\n\x09 * Returns false if sufficiently recent data is not available. In this case, ping measurement is initiated, if it is not already active.\n\x09 * (You cannot restart a measurement already in progress.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the ping data of sufficient recency is available, and if it's too old, start refreshing it.\n\nPlease only call this function when you really do need to force an immediate refresh of the data.\n(For example, in response to a specific user input to refresh this information.)\nDon't call it \"just in case\", before every connection, etc. That will cause extra traffic to be sent for no benefit.\nThe library will automatically refresh the information as needed.\n\nReturns true if sufficiently recent data is already available.\nReturns false if sufficiently recent data is not available. In this case, ping measurement is initiated, if it is not already active.\n(You cannot restart a measurement already in progress.)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventCheckPingDataUpToDate_Parms, MaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamNetworkingUtils_eventCheckPingDataUpToDate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamNetworkingUtils_eventCheckPingDataUpToDate_Parms), &Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "CheckPingDataUpToDate", Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::OrionSteamNetworkingUtils_eventCheckPingDataUpToDate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::OrionSteamNetworkingUtils_eventCheckPingDataUpToDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execCheckPingDataUpToDate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckPingDataUpToDate(Z_Param_MaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function CheckPingDataUpToDate ******************

// ********** Begin Class UOrionSteamNetworkingUtils Function ConvertPingLocationToString **********
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics
{
	struct OrionSteamNetworkingUtils_eventConvertPingLocationToString_Parms
	{
		FSteamNetworkPingLocation Location;
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert a ping location into a text format suitable for sending over the wire.\n\x09 *\n\x09 * The format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\n\x09 * Your buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a ping location into a text format suitable for sending over the wire.\n\nThe format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\nYour buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventConvertPingLocationToString_Parms, Location), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1656439794
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventConvertPingLocationToString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "ConvertPingLocationToString", Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::OrionSteamNetworkingUtils_eventConvertPingLocationToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::OrionSteamNetworkingUtils_eventConvertPingLocationToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execConvertPingLocationToString)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamNetworkingUtils::ConvertPingLocationToString(Z_Param_Out_Location,Z_Param_Out_String);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function ConvertPingLocationToString ************

// ********** Begin Class UOrionSteamNetworkingUtils Function EstimatePingTimeBetweenTwoLocations **
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics
{
	struct OrionSteamNetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms
	{
		FSteamNetworkPingLocation Location1;
		FSteamNetworkPingLocation Location2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Estimate the round-trip latency between two arbitrary locations, in milliseconds.\n\x09 *\n\x09 * This is a conservative estimate, based on routing through the relay network.\n\x09 * For most basic relayed connections, this ping time will be pretty accurate, since it will be based on the route likely to be actually used.\n\x09 *\n\x09 * If a direct IP route is used (perhaps via NAT traversal), then the route will be different, and the ping time might be better.\n\x09 * Or it might actually be a bit worse! Standard IP routing is frequently suboptimal!\n\x09 *\n\x09 * But even in this case, the estimate obtained using this method is a reasonable upper bound on the ping time.\n\x09 * (Also it has the advantage of returning immediately and not sending any packets.)\n\x09 *\n\x09 * In a few cases we might not able to estimate the route.\n\x09 * In this case a negative value is returned. k_nSteamNetworkingPing_Failed means the reason was because of some networking difficulty.\n\x09 * (Failure to ping, etc) k_nSteamNetworkingPing_Unknown is returned if we cannot currently answer the question for some other reason.\n\x09 *\n\x09 * Do you need to be able to do this from a backend/matchmaking server? You are looking for the \"game coordinator\" library. See steamdatagramrelay for more info on how to obtain the game coordinator SDK.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estimate the round-trip latency between two arbitrary locations, in milliseconds.\n\nThis is a conservative estimate, based on routing through the relay network.\nFor most basic relayed connections, this ping time will be pretty accurate, since it will be based on the route likely to be actually used.\n\nIf a direct IP route is used (perhaps via NAT traversal), then the route will be different, and the ping time might be better.\nOr it might actually be a bit worse! Standard IP routing is frequently suboptimal!\n\nBut even in this case, the estimate obtained using this method is a reasonable upper bound on the ping time.\n(Also it has the advantage of returning immediately and not sending any packets.)\n\nIn a few cases we might not able to estimate the route.\nIn this case a negative value is returned. k_nSteamNetworkingPing_Failed means the reason was because of some networking difficulty.\n(Failure to ping, etc) k_nSteamNetworkingPing_Unknown is returned if we cannot currently answer the question for some other reason.\n\nDo you need to be able to do this from a backend/matchmaking server? You are looking for the \"game coordinator\" library. See steamdatagramrelay for more info on how to obtain the game coordinator SDK." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1 = { "Location1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, Location1), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location1_MetaData), NewProp_Location1_MetaData) }; // 1656439794
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2 = { "Location2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, Location2), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location2_MetaData), NewProp_Location2_MetaData) }; // 1656439794
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "EstimatePingTimeBetweenTwoLocations", Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::OrionSteamNetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::OrionSteamNetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execEstimatePingTimeBetweenTwoLocations)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location1);
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EstimatePingTimeBetweenTwoLocations(Z_Param_Out_Location1,Z_Param_Out_Location2);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function EstimatePingTimeBetweenTwoLocations ****

// ********** Begin Class UOrionSteamNetworkingUtils Function EstimatePingTimeFromLocalHost ********
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics
{
	struct OrionSteamNetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms
	{
		FSteamNetworkPingLocation RemoteLocation;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Same as EstimatePingTime, but assumes that one location is the local host. This is a bit faster, especially if you need to calculate a bunch of these in a loop to find the fastest one.\n\x09 *\n\x09 * In rare cases this might return a slightly different estimate than combining GetLocalPingLocation with EstimatePingTimeBetweenTwoLocations.\n\x09 * That's because this function uses a slightly more complete set of information about what route would be taken.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as EstimatePingTime, but assumes that one location is the local host. This is a bit faster, especially if you need to calculate a bunch of these in a loop to find the fastest one.\n\nIn rare cases this might return a slightly different estimate than combining GetLocalPingLocation with EstimatePingTimeBetweenTwoLocations.\nThat's because this function uses a slightly more complete set of information about what route would be taken." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation = { "RemoteLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms, RemoteLocation), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteLocation_MetaData), NewProp_RemoteLocation_MetaData) }; // 1656439794
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "EstimatePingTimeFromLocalHost", Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::OrionSteamNetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::OrionSteamNetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execEstimatePingTimeFromLocalHost)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_RemoteLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EstimatePingTimeFromLocalHost(Z_Param_Out_RemoteLocation);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function EstimatePingTimeFromLocalHost **********

// ********** Begin Class UOrionSteamNetworkingUtils Function GetLocalPingLocation *****************
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics
{
	struct OrionSteamNetworkingUtils_eventGetLocalPingLocation_Parms
	{
		FSteamNetworkPingLocation Result;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return location info for the current host. Returns the approximate age of the data, in seconds, or -1 if no data is available.\n\x09 *\n\x09 * It takes a few seconds to initialize access to the relay network. If you call this very soon after calling InitializeRelayNetworkAccess, the data may not be available yet.\n\x09 * This always return the most up-to-date information we have available right now, even if we are in the middle of re-calculating ping times.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return location info for the current host. Returns the approximate age of the data, in seconds, or -1 if no data is available.\n\nIt takes a few seconds to initialize access to the relay network. If you call this very soon after calling InitializeRelayNetworkAccess, the data may not be available yet.\nThis always return the most up-to-date information we have available right now, even if we are in the middle of re-calculating ping times." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventGetLocalPingLocation_Parms, Result), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(0, nullptr) }; // 1656439794
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventGetLocalPingLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "GetLocalPingLocation", Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::OrionSteamNetworkingUtils_eventGetLocalPingLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::OrionSteamNetworkingUtils_eventGetLocalPingLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execGetLocalPingLocation)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLocalPingLocation(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function GetLocalPingLocation *******************

// ********** Begin Class UOrionSteamNetworkingUtils Function GetSteamNetworkingUtils **************
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics
{
	struct OrionSteamNetworkingUtils_eventGetSteamNetworkingUtils_Parms
	{
		UOrionSteamNetworkingUtils* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventGetSteamNetworkingUtils_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamNetworkingUtils_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "GetSteamNetworkingUtils", Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::OrionSteamNetworkingUtils_eventGetSteamNetworkingUtils_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::OrionSteamNetworkingUtils_eventGetSteamNetworkingUtils_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execGetSteamNetworkingUtils)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamNetworkingUtils**)Z_Param__Result=UOrionSteamNetworkingUtils::GetSteamNetworkingUtils();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function GetSteamNetworkingUtils ****************

// ********** Begin Class UOrionSteamNetworkingUtils Function InitRelayNetworkAccess ***************
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If you know that you are going to be using the relay network (for example, because you anticipate making P2P connections), call this to initialize the relay network. If you do not call this, the initialization will be delayed until the first time you use a feature that requires access to the relay network, which will delay that first access.\n\x09 *\n\x09 * You can also call this to force a retry if the previous attempt has failed.\n\x09 * Performing any action that requires access to the relay network will also trigger a retry, and so calling this function is never strictly necessary,\n\x09 * but it can be useful to call it a program launch time, if access to the relay network is anticipated.\n\x09 * Use GetRelayNetworkStatus or listen for SteamRelayNetworkStatus_t callbacks to know when initialization has completed.\n\x09 * Typically initialization completes in a few seconds.\n\x09 *\n\x09 * Note: dedicated servers hosted in known data centers do *not* need to call this, since they do not make routing decisions.\n\x09 * However, if the dedicated server will be using P2P functionality, it will act as a \"client\" and this should be called.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you know that you are going to be using the relay network (for example, because you anticipate making P2P connections), call this to initialize the relay network. If you do not call this, the initialization will be delayed until the first time you use a feature that requires access to the relay network, which will delay that first access.\n\nYou can also call this to force a retry if the previous attempt has failed.\nPerforming any action that requires access to the relay network will also trigger a retry, and so calling this function is never strictly necessary,\nbut it can be useful to call it a program launch time, if access to the relay network is anticipated.\nUse GetRelayNetworkStatus or listen for SteamRelayNetworkStatus_t callbacks to know when initialization has completed.\nTypically initialization completes in a few seconds.\n\nNote: dedicated servers hosted in known data centers do *not* need to call this, since they do not make routing decisions.\nHowever, if the dedicated server will be using P2P functionality, it will act as a \"client\" and this should be called." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "InitRelayNetworkAccess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execInitRelayNetworkAccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitRelayNetworkAccess();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function InitRelayNetworkAccess *****************

// ********** Begin Class UOrionSteamNetworkingUtils Function ParsePingLocationString **************
struct Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics
{
	struct OrionSteamNetworkingUtils_eventParsePingLocationString_Parms
	{
		FString String;
		FSteamNetworkPingLocation Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|NetworkingUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert a ping location into a text format suitable for sending over the wire.\n\x09 *\n\x09 * The format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\n\x09 * Your buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a ping location into a text format suitable for sending over the wire.\n\nThe format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\nYour buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventParsePingLocationString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamNetworkingUtils_eventParsePingLocationString_Parms, Result), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(0, nullptr) }; // 1656439794
void Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamNetworkingUtils_eventParsePingLocationString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamNetworkingUtils_eventParsePingLocationString_Parms), &Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamNetworkingUtils, nullptr, "ParsePingLocationString", Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::OrionSteamNetworkingUtils_eventParsePingLocationString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::OrionSteamNetworkingUtils_eventParsePingLocationString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamNetworkingUtils::execParsePingLocationString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamNetworkingUtils::ParsePingLocationString(Z_Param_String,Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamNetworkingUtils Function ParsePingLocationString ****************

// ********** Begin Class UOrionSteamNetworkingUtils ***********************************************
void UOrionSteamNetworkingUtils::StaticRegisterNativesUOrionSteamNetworkingUtils()
{
	UClass* Class = UOrionSteamNetworkingUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckPingDataUpToDate", &UOrionSteamNetworkingUtils::execCheckPingDataUpToDate },
		{ "ConvertPingLocationToString", &UOrionSteamNetworkingUtils::execConvertPingLocationToString },
		{ "EstimatePingTimeBetweenTwoLocations", &UOrionSteamNetworkingUtils::execEstimatePingTimeBetweenTwoLocations },
		{ "EstimatePingTimeFromLocalHost", &UOrionSteamNetworkingUtils::execEstimatePingTimeFromLocalHost },
		{ "GetLocalPingLocation", &UOrionSteamNetworkingUtils::execGetLocalPingLocation },
		{ "GetSteamNetworkingUtils", &UOrionSteamNetworkingUtils::execGetSteamNetworkingUtils },
		{ "InitRelayNetworkAccess", &UOrionSteamNetworkingUtils::execInitRelayNetworkAccess },
		{ "ParsePingLocationString", &UOrionSteamNetworkingUtils::execParsePingLocationString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamNetworkingUtils;
UClass* UOrionSteamNetworkingUtils::GetPrivateStaticClass()
{
	using TClass = UOrionSteamNetworkingUtils;
	if (!Z_Registration_Info_UClass_UOrionSteamNetworkingUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamNetworkingUtils"),
			Z_Registration_Info_UClass_UOrionSteamNetworkingUtils.InnerSingleton,
			StaticRegisterNativesUOrionSteamNetworkingUtils,
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
	return Z_Registration_Info_UClass_UOrionSteamNetworkingUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamNetworkingUtils_NoRegister()
{
	return UOrionSteamNetworkingUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_CheckPingDataUpToDate, "CheckPingDataUpToDate" }, // 1893440731
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_ConvertPingLocationToString, "ConvertPingLocationToString" }, // 2246584496
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations, "EstimatePingTimeBetweenTwoLocations" }, // 213022314
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_EstimatePingTimeFromLocalHost, "EstimatePingTimeFromLocalHost" }, // 967986462
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetLocalPingLocation, "GetLocalPingLocation" }, // 2393206017
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_GetSteamNetworkingUtils, "GetSteamNetworkingUtils" }, // 2019317612
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_InitRelayNetworkAccess, "InitRelayNetworkAccess" }, // 4030794504
		{ &Z_Construct_UFunction_UOrionSteamNetworkingUtils_ParsePingLocationString, "ParsePingLocationString" }, // 2593515336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamNetworkingUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics::ClassParams = {
	&UOrionSteamNetworkingUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamNetworkingUtils()
{
	if (!Z_Registration_Info_UClass_UOrionSteamNetworkingUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamNetworkingUtils.OuterSingleton, Z_Construct_UClass_UOrionSteamNetworkingUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamNetworkingUtils.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamNetworkingUtils);
// ********** End Class UOrionSteamNetworkingUtils *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamNetworkingUtils, UOrionSteamNetworkingUtils::StaticClass, TEXT("UOrionSteamNetworkingUtils"), &Z_Registration_Info_UClass_UOrionSteamNetworkingUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamNetworkingUtils), 2194940734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_OrionSteamSDKAPI_2781419181(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
