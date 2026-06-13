// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameSearch/OrionSteamGameSearch.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamGameSearch() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamGameSearch();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamGameSearch_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamPlayerResult();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_EndGameResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestPlayersForGameProgressDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestPlayersForGameResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_SearchForGameProgressDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_SearchForGameResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_SubmitPlayerResultResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamGameSearch Function AcceptGame ********************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics
{
	struct OrionSteamGameSearch_eventAcceptGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09 * multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventAcceptGame_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "AcceptGame", Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::OrionSteamGameSearch_eventAcceptGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::OrionSteamGameSearch_eventAcceptGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execAcceptGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AcceptGame();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function AcceptGame **********************************

// ********** Begin Class UOrionSteamGameSearch Function AddGameSearchParams ***********************
struct Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics
{
	struct OrionSteamGameSearch_eventAddGameSearchParams_Parms
	{
		FString KeyToFind;
		TArray<FString> ValuesToFind;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n\x09 * fails if a search is currently in progress\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n* fails if a search is currently in progress" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToFind;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesToFind_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValuesToFind;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind = { "KeyToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventAddGameSearchParams_Parms, KeyToFind), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner = { "ValuesToFind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind = { "ValuesToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventAddGameSearchParams_Parms, ValuesToFind), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventAddGameSearchParams_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "AddGameSearchParams", Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::OrionSteamGameSearch_eventAddGameSearchParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::OrionSteamGameSearch_eventAddGameSearchParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execAddGameSearchParams)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToFind);
	P_GET_TARRAY(FString,Z_Param_ValuesToFind);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AddGameSearchParams(Z_Param_KeyToFind,Z_Param_ValuesToFind);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function AddGameSearchParams *************************

// ********** Begin Class UOrionSteamGameSearch Function CancelRequestPlayersForGame ***************
struct Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics
{
	struct OrionSteamGameSearch_eventCancelRequestPlayersForGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * cancel request and leave the pool of game hosts looking for players\n\x09 * if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* cancel request and leave the pool of game hosts looking for players\n* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventCancelRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "CancelRequestPlayersForGame", Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::OrionSteamGameSearch_eventCancelRequestPlayersForGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::OrionSteamGameSearch_eventCancelRequestPlayersForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execCancelRequestPlayersForGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->CancelRequestPlayersForGame();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function CancelRequestPlayersForGame *****************

// ********** Begin Class UOrionSteamGameSearch Function DeclineGame *******************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics
{
	struct OrionSteamGameSearch_eventDeclineGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09 * multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventDeclineGame_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "DeclineGame", Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::OrionSteamGameSearch_eventDeclineGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::OrionSteamGameSearch_eventDeclineGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execDeclineGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->DeclineGame();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function DeclineGame *********************************

// ********** Begin Class UOrionSteamGameSearch Function EndGame ***********************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics
{
	struct OrionSteamGameSearch_eventEndGame_Parms
	{
		FString UniqueGameID;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n\x09 * any future requests will provide a new ullUniqueGameID\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n* any future requests will provide a new ullUniqueGameID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventEndGame_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventEndGame_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "EndGame", Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::OrionSteamGameSearch_eventEndGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::OrionSteamGameSearch_eventEndGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execEndGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGame(Z_Param_UniqueGameID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function EndGame *************************************

// ********** Begin Class UOrionSteamGameSearch Function EndGameSearch *****************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics
{
	struct OrionSteamGameSearch_eventEndGameSearch_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * leaves queue if still waiting\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* leaves queue if still waiting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventEndGameSearch_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "EndGameSearch", Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::OrionSteamGameSearch_eventEndGameSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::OrionSteamGameSearch_eventEndGameSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execEndGameSearch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGameSearch();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function EndGameSearch *******************************

// ********** Begin Class UOrionSteamGameSearch Function GetSteamGameSearch ************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics
{
	struct OrionSteamGameSearch_eventGetSteamGameSearch_Parms
	{
		UOrionSteamGameSearch* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventGetSteamGameSearch_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamGameSearch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "GetSteamGameSearch", Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::OrionSteamGameSearch_eventGetSteamGameSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::OrionSteamGameSearch_eventGetSteamGameSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execGetSteamGameSearch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamGameSearch**)Z_Param__Result=UOrionSteamGameSearch::GetSteamGameSearch();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function GetSteamGameSearch **************************

// ********** Begin Class UOrionSteamGameSearch Function HostConfirmGameStart **********************
struct Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics
{
	struct OrionSteamGameSearch_eventHostConfirmGameStart_Parms
	{
		FString UniqueGameID;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * accept the player list and release connection details to players\n\x09 * players will only be given connection details and host steamid when this is called\n\x09 * (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* accept the player list and release connection details to players\n* players will only be given connection details and host steamid when this is called\n* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventHostConfirmGameStart_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventHostConfirmGameStart_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "HostConfirmGameStart", Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::OrionSteamGameSearch_eventHostConfirmGameStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::OrionSteamGameSearch_eventHostConfirmGameStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execHostConfirmGameStart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->HostConfirmGameStart(Z_Param_UniqueGameID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function HostConfirmGameStart ************************

// ********** Begin Class UOrionSteamGameSearch Function RequestPlayersForGame *********************
struct Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics
{
	struct OrionSteamGameSearch_eventRequestPlayersForGame_Parms
	{
		int32 PlayerMin;
		int32 PlayerMax;
		int32 MaxTeamSize;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * mark server as available for more players with nPlayerMin,nPlayerMax desired\n\x09 * accept no lobbies with playercount greater than nMaxTeamSize\n\x09 * the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n\x09 * RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n\x09 * multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* mark server as available for more players with nPlayerMin,nPlayerMax desired\n* accept no lobbies with playercount greater than nMaxTeamSize\n* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTeamSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize = { "MaxTeamSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRequestPlayersForGame_Parms, MaxTeamSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "RequestPlayersForGame", Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::OrionSteamGameSearch_eventRequestPlayersForGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::OrionSteamGameSearch_eventRequestPlayersForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execRequestPlayersForGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTeamSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RequestPlayersForGame(Z_Param_PlayerMin,Z_Param_PlayerMax,Z_Param_MaxTeamSize);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function RequestPlayersForGame ***********************

// ********** Begin Class UOrionSteamGameSearch Function RetrieveConnectionDetails *****************
struct Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics
{
	struct OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms
	{
		FSteamID SteamIDHost;
		FString ConnectionDetails;
		int32 NumConnectionDetails;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * after receiving GameStartedByHostCallback_t get connection details to server\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* after receiving GameStartedByHostCallback_t get connection details to server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumConnectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails = { "NumConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms, NumConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "RetrieveConnectionDetails", Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::OrionSteamGameSearch_eventRetrieveConnectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execRetrieveConnectionDetails)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDHost);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ConnectionDetails);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumConnectionDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RetrieveConnectionDetails(Z_Param_SteamIDHost,Z_Param_Out_ConnectionDetails,Z_Param_NumConnectionDetails);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function RetrieveConnectionDetails *******************

// ********** Begin Class UOrionSteamGameSearch Function SearchForGameSolo *************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics
{
	struct OrionSteamGameSearch_eventSearchForGameSolo_Parms
	{
		int32 PlayerMin;
		int32 PlayerMax;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09 * periodic callbacks will be sent as queue time estimates change\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* periodic callbacks will be sent as queue time estimates change" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameSolo_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameSolo_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameSolo_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "SearchForGameSolo", Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::OrionSteamGameSearch_eventSearchForGameSolo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::OrionSteamGameSearch_eventSearchForGameSolo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execSearchForGameSolo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameSolo(Z_Param_PlayerMin,Z_Param_PlayerMax);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function SearchForGameSolo ***************************

// ********** Begin Class UOrionSteamGameSearch Function SearchForGameWithLobby ********************
struct Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics
{
	struct OrionSteamGameSearch_eventSearchForGameWithLobby_Parms
	{
		FSteamID SteamIDLobby;
		int32 PlayerMin;
		int32 PlayerMax;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09 * if not the owner of the lobby or search already in progress this call fails\n\x09 * periodic callbacks will be sent as queue time estimates change\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* if not the owner of the lobby or search already in progress this call fails\n* periodic callbacks will be sent as queue time estimates change" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameWithLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSearchForGameWithLobby_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "SearchForGameWithLobby", Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::OrionSteamGameSearch_eventSearchForGameWithLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::OrionSteamGameSearch_eventSearchForGameWithLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execSearchForGameWithLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameWithLobby(Z_Param_SteamIDLobby,Z_Param_PlayerMin,Z_Param_PlayerMax);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function SearchForGameWithLobby **********************

// ********** Begin Class UOrionSteamGameSearch Function SetConnectionDetails **********************
struct Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics
{
	struct OrionSteamGameSearch_eventSetConnectionDetails_Parms
	{
		FString ConnectionDetails;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * set connection details for players once game is found so they can connect to this server\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* set connection details for players once game is found so they can connect to this server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSetConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSetConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "SetConnectionDetails", Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::OrionSteamGameSearch_eventSetConnectionDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::OrionSteamGameSearch_eventSetConnectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execSetConnectionDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetConnectionDetails(Z_Param_ConnectionDetails);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function SetConnectionDetails ************************

// ********** Begin Class UOrionSteamGameSearch Function SetGameHostParams *************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics
{
	struct OrionSteamGameSearch_eventSetGameHostParams_Parms
	{
		FString Key;
		TArray<FString> Values;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * a keyname and a list of comma separated values: all the values you allow\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* a keyname and a list of comma separated values: all the values you allow" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSetGameHostParams_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSetGameHostParams_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSetGameHostParams_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "SetGameHostParams", Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::OrionSteamGameSearch_eventSetGameHostParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::OrionSteamGameSearch_eventSetGameHostParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execSetGameHostParams)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetGameHostParams(Z_Param_Key,Z_Param_Values);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function SetGameHostParams ***************************

// ********** Begin Class UOrionSteamGameSearch Function SubmitPlayerResult ************************
struct Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics
{
	struct OrionSteamGameSearch_eventSubmitPlayerResult_Parms
	{
		FString UniqueGameID;
		FSteamID SteamIDPlayer;
		ESteamPlayerResult PlayerResult;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|GameSearch|Host" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSubmitPlayerResult_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSubmitPlayerResult_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult = { "PlayerResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSubmitPlayerResult_Parms, PlayerResult), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamPlayerResult, METADATA_PARAMS(0, nullptr) }; // 2195909077
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamGameSearch_eventSubmitPlayerResult_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 2781604986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamGameSearch, nullptr, "SubmitPlayerResult", Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::OrionSteamGameSearch_eventSubmitPlayerResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::OrionSteamGameSearch_eventSubmitPlayerResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamGameSearch::execSubmitPlayerResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDPlayer);
	P_GET_ENUM(ESteamPlayerResult,Z_Param_PlayerResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SubmitPlayerResult(Z_Param_UniqueGameID,Z_Param_SteamIDPlayer,ESteamPlayerResult(Z_Param_PlayerResult));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamGameSearch Function SubmitPlayerResult **************************

// ********** Begin Class UOrionSteamGameSearch ****************************************************
void UOrionSteamGameSearch::StaticRegisterNativesUOrionSteamGameSearch()
{
	UClass* Class = UOrionSteamGameSearch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptGame", &UOrionSteamGameSearch::execAcceptGame },
		{ "AddGameSearchParams", &UOrionSteamGameSearch::execAddGameSearchParams },
		{ "CancelRequestPlayersForGame", &UOrionSteamGameSearch::execCancelRequestPlayersForGame },
		{ "DeclineGame", &UOrionSteamGameSearch::execDeclineGame },
		{ "EndGame", &UOrionSteamGameSearch::execEndGame },
		{ "EndGameSearch", &UOrionSteamGameSearch::execEndGameSearch },
		{ "GetSteamGameSearch", &UOrionSteamGameSearch::execGetSteamGameSearch },
		{ "HostConfirmGameStart", &UOrionSteamGameSearch::execHostConfirmGameStart },
		{ "RequestPlayersForGame", &UOrionSteamGameSearch::execRequestPlayersForGame },
		{ "RetrieveConnectionDetails", &UOrionSteamGameSearch::execRetrieveConnectionDetails },
		{ "SearchForGameSolo", &UOrionSteamGameSearch::execSearchForGameSolo },
		{ "SearchForGameWithLobby", &UOrionSteamGameSearch::execSearchForGameWithLobby },
		{ "SetConnectionDetails", &UOrionSteamGameSearch::execSetConnectionDetails },
		{ "SetGameHostParams", &UOrionSteamGameSearch::execSetGameHostParams },
		{ "SubmitPlayerResult", &UOrionSteamGameSearch::execSubmitPlayerResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamGameSearch;
UClass* UOrionSteamGameSearch::GetPrivateStaticClass()
{
	using TClass = UOrionSteamGameSearch;
	if (!Z_Registration_Info_UClass_UOrionSteamGameSearch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamGameSearch"),
			Z_Registration_Info_UClass_UOrionSteamGameSearch.InnerSingleton,
			StaticRegisterNativesUOrionSteamGameSearch,
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
	return Z_Registration_Info_UClass_UOrionSteamGameSearch.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamGameSearch_NoRegister()
{
	return UOrionSteamGameSearch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamGameSearch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Purpose: Functions for match making services for clients to get to favorites\n * and to operate on game lobbies.\n */" },
#endif
		{ "IncludePath", "SteamGameSearch/OrionSteamGameSearch.h" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameProgressDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameProgressDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmitPlayerResultResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndGameResultDelegate_MetaData[] = {
		{ "Category", "OrionSteam|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/OrionSteamGameSearch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameProgressDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameProgressDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameFinalResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SubmitPlayerResultResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndGameResultDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_AcceptGame, "AcceptGame" }, // 3876180244
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_AddGameSearchParams, "AddGameSearchParams" }, // 786313760
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_CancelRequestPlayersForGame, "CancelRequestPlayersForGame" }, // 661209606
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_DeclineGame, "DeclineGame" }, // 2417350286
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_EndGame, "EndGame" }, // 4117540579
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_EndGameSearch, "EndGameSearch" }, // 3921313184
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_GetSteamGameSearch, "GetSteamGameSearch" }, // 390864530
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_HostConfirmGameStart, "HostConfirmGameStart" }, // 3123092128
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_RequestPlayersForGame, "RequestPlayersForGame" }, // 1205282339
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_RetrieveConnectionDetails, "RetrieveConnectionDetails" }, // 1206746925
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameSolo, "SearchForGameSolo" }, // 2441118833
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_SearchForGameWithLobby, "SearchForGameWithLobby" }, // 1397194777
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_SetConnectionDetails, "SetConnectionDetails" }, // 2728556301
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_SetGameHostParams, "SetGameHostParams" }, // 3556766344
		{ &Z_Construct_UFunction_UOrionSteamGameSearch_SubmitPlayerResult, "SubmitPlayerResult" }, // 3416008114
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamGameSearch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate = { "SearchForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, SearchForGameProgressDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_SearchForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForGameProgressDelegate_MetaData), NewProp_SearchForGameProgressDelegate_MetaData) }; // 2401413740
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_SearchForGameResultDelegate = { "SearchForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, SearchForGameResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_SearchForGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForGameResultDelegate_MetaData), NewProp_SearchForGameResultDelegate_MetaData) }; // 4052646808
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate = { "RequestPlayersForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, RequestPlayersForGameProgressDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestPlayersForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameProgressDelegate_MetaData), NewProp_RequestPlayersForGameProgressDelegate_MetaData) }; // 3237335201
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate = { "RequestPlayersForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, RequestPlayersForGameResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestPlayersForGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameResultDelegate_MetaData), NewProp_RequestPlayersForGameResultDelegate_MetaData) }; // 2713888957
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate = { "RequestPlayersForGameFinalResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, RequestPlayersForGameFinalResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestPlayersForGameFinalResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameFinalResultDelegate_MetaData), NewProp_RequestPlayersForGameFinalResultDelegate_MetaData) }; // 2216204533
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate = { "SubmitPlayerResultResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, SubmitPlayerResultResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_SubmitPlayerResultResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmitPlayerResultResultDelegate_MetaData), NewProp_SubmitPlayerResultResultDelegate_MetaData) }; // 1619966400
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_EndGameResultDelegate = { "EndGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamGameSearch, EndGameResultDelegate), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_EndGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndGameResultDelegate_MetaData), NewProp_EndGameResultDelegate_MetaData) }; // 3798930081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_SearchForGameResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamGameSearch_Statics::NewProp_EndGameResultDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameSearch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamGameSearch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameSearch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamGameSearch_Statics::ClassParams = {
	&UOrionSteamGameSearch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamGameSearch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameSearch_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamGameSearch_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamGameSearch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamGameSearch()
{
	if (!Z_Registration_Info_UClass_UOrionSteamGameSearch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamGameSearch.OuterSingleton, Z_Construct_UClass_UOrionSteamGameSearch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamGameSearch.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamGameSearch);
// ********** End Class UOrionSteamGameSearch ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamGameSearch, UOrionSteamGameSearch::StaticClass, TEXT("UOrionSteamGameSearch"), &Z_Registration_Info_UClass_UOrionSteamGameSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamGameSearch), 1525708181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h__Script_OrionSteamSDKAPI_1034036892(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamGameSearch_OrionSteamGameSearch_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
