// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamFriends/SteamFriendsAsyncActions.h"
#include "SteamFriends/SteamFriendsTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamFriendsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_NoRegister();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FClanOfficerListResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsGetFollowerCount();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsIsFollowing();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate ****************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
	{
		FDownloadClanActivityCountsResult data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1528034347
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
	{
		FDownloadClanActivityCountsResult data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnDownloadClanActivityCountsAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadClanActivityCountsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadClanActivityCountsAsyncDelegate ******************************

// ********** Begin Delegate FOnRequestClanOfficerListAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms
	{
		FClanOfficerListResponse data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 2045990949
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestClanOfficerListAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms
	{
		FClanOfficerListResponse data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestClanOfficerListAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestClanOfficerListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestClanOfficerListAsyncDelegate **********************************

// ********** Begin Delegate FOnJoinClanChatRoomAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms
	{
		FJoinClanChatRoomCompletionResult data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 283935711
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnJoinClanChatRoomAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms
	{
		FJoinClanChatRoomCompletionResult data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnJoinClanChatRoomAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinClanChatRoomAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinClanChatRoomAsyncDelegate ****************************************

// ********** Begin Delegate FOnEnumerateFollowingListAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms
	{
		FFriendsEnumerateFollowingList data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1340175691
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnEnumerateFollowingListAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms
	{
		FFriendsEnumerateFollowingList data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnEnumerateFollowingListAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnEnumerateFollowingListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEnumerateFollowingListAsyncDelegate **********************************

// ********** Begin Delegate FOnIsFollowingAsyncDelegate *******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms
	{
		FFriendsIsFollowing data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1491108160
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnIsFollowingAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms
	{
		FFriendsIsFollowing data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnIsFollowingAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnIsFollowingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnIsFollowingAsyncDelegate *********************************************

// ********** Begin Delegate FOnGetFollowerCountAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms
	{
		FFriendsGetFollowerCount data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1066616540
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnGetFollowerCountAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms
	{
		FFriendsGetFollowerCount data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnGetFollowerCountAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetFollowerCountAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetFollowerCountAsyncDelegate ****************************************

// ********** Begin Delegate FOnRequestUserInformationAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestUserInformationAsyncDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestUserInformationAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserInformationAsyncDelegate)
{
	OnRequestUserInformationAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestUserInformationAsyncDelegate **********************************

// ********** Begin Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts Function DownloadClanActivityCountsAsync 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics
{
	struct OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FSteamID> SteamIDClans;
		float Timeout;
		UOrionSteamFriendsAsyncActionDownloadClanActivityCounts* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Refresh the Steam Group activity data or get the data from groups other than one that the current\n\x09 * user is a member.\n\x09 * After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09 *\n\x09 * @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Clan Activity Counts" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current\nuser is a member.\nAfter receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param       SteamIDClans    A list of steam groups to get the updated data for.\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, nullptr, "DownloadClanActivityCountsAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts**)Z_Param__Result=UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClans,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts Function DownloadClanActivityCountsAsync 

// ********** Begin Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics
{
	struct OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms
	{
		FDownloadClanActivityCountsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1528034347
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::OrionSteamFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback)
{
	P_GET_STRUCT_REF(FDownloadClanActivityCountsResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts Function HandleCallback 

// ********** Begin Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts ******************
void UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::StaticRegisterNativesUOrionSteamFriendsAsyncActionDownloadClanActivityCounts()
{
	UClass* Class = UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadClanActivityCountsAsync", &UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync },
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts;
UClass* UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionDownloadClanActivityCounts;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionDownloadClanActivityCounts"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionDownloadClanActivityCounts,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_NoRegister()
{
	return UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionDownloadClanActivityCounts\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionDownloadClanActivityCounts\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync, "DownloadClanActivityCountsAsync" }, // 1409899700
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_HandleCallback, "HandleCallback" }, // 2517701351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionDownloadClanActivityCounts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 662582903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton;
}
UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::UOrionSteamFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts);
UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::~UOrionSteamFriendsAsyncActionDownloadClanActivityCounts() {}
// ********** End Class UOrionSteamFriendsAsyncActionDownloadClanActivityCounts ********************

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestClanOfficerList Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics
{
	struct OrionSteamFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms
	{
		FClanOfficerListResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2045990949
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::OrionSteamFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::OrionSteamFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionRequestClanOfficerList::execHandleCallback)
{
	P_GET_STRUCT_REF(FClanOfficerListResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionRequestClanOfficerList Function HandleCallback 

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestClanOfficerList Function RequestClanOfficerListAsync 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics
{
	struct OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDClan;
		float Timeout;
		UOrionSteamFriendsAsyncActionRequestClanOfficerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests information about a Steam group officers (administrators and moderators).\n\x09 * You can only ask about Steam groups that a user is a member of.\n\x09 * This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Clan Officer List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param       SteamIDClan             The Steam group to get the officers list for.\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList, nullptr, "RequestClanOfficerListAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::OrionSteamFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionRequestClanOfficerList**)Z_Param__Result=UOrionSteamFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClan,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionRequestClanOfficerList Function RequestClanOfficerListAsync 

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestClanOfficerList **********************
void UOrionSteamFriendsAsyncActionRequestClanOfficerList::StaticRegisterNativesUOrionSteamFriendsAsyncActionRequestClanOfficerList()
{
	UClass* Class = UOrionSteamFriendsAsyncActionRequestClanOfficerList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionRequestClanOfficerList::execHandleCallback },
		{ "RequestClanOfficerListAsync", &UOrionSteamFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList;
UClass* UOrionSteamFriendsAsyncActionRequestClanOfficerList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionRequestClanOfficerList;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionRequestClanOfficerList"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionRequestClanOfficerList,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_NoRegister()
{
	return UOrionSteamFriendsAsyncActionRequestClanOfficerList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionRequestClanOfficerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionRequestClanOfficerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_HandleCallback, "HandleCallback" }, // 2395897968
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync, "RequestClanOfficerListAsync" }, // 4074798294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionRequestClanOfficerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionRequestClanOfficerList, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestClanOfficerListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 123243348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionRequestClanOfficerList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList.OuterSingleton;
}
UOrionSteamFriendsAsyncActionRequestClanOfficerList::UOrionSteamFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionRequestClanOfficerList);
UOrionSteamFriendsAsyncActionRequestClanOfficerList::~UOrionSteamFriendsAsyncActionRequestClanOfficerList() {}
// ********** End Class UOrionSteamFriendsAsyncActionRequestClanOfficerList ************************

// ********** Begin Class UOrionSteamFriendsAsyncActionJoinClanChatRoom Function HandleCallback ****
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics
{
	struct OrionSteamFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms
	{
		FJoinClanChatRoomCompletionResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 283935711
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::OrionSteamFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::OrionSteamFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionJoinClanChatRoom::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinClanChatRoomCompletionResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionJoinClanChatRoom Function HandleCallback ******

// ********** Begin Class UOrionSteamFriendsAsyncActionJoinClanChatRoom Function JoinClanChatRoomAsync 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics
{
	struct OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDClan;
		float Timeout;
		UOrionSteamFriendsAsyncActionJoinClanChatRoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows the user to join Steam group (clan) chats right within the game.\n\x09 * The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09 * You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09 *\n\x09 * @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Clan Chat Room" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param       SteamIDClan             The Steam ID of the Steam group to join.\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom, nullptr, "JoinClanChatRoomAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::OrionSteamFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionJoinClanChatRoom**)Z_Param__Result=UOrionSteamFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClan,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionJoinClanChatRoom Function JoinClanChatRoomAsync 

// ********** Begin Class UOrionSteamFriendsAsyncActionJoinClanChatRoom ****************************
void UOrionSteamFriendsAsyncActionJoinClanChatRoom::StaticRegisterNativesUOrionSteamFriendsAsyncActionJoinClanChatRoom()
{
	UClass* Class = UOrionSteamFriendsAsyncActionJoinClanChatRoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionJoinClanChatRoom::execHandleCallback },
		{ "JoinClanChatRoomAsync", &UOrionSteamFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom;
UClass* UOrionSteamFriendsAsyncActionJoinClanChatRoom::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionJoinClanChatRoom;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionJoinClanChatRoom"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionJoinClanChatRoom,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_NoRegister()
{
	return UOrionSteamFriendsAsyncActionJoinClanChatRoom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionJoinClanChatRoom\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionJoinClanChatRoom\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_HandleCallback, "HandleCallback" }, // 1214128739
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync, "JoinClanChatRoomAsync" }, // 4133822451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionJoinClanChatRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionJoinClanChatRoom, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinClanChatRoomAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3694198146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionJoinClanChatRoom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom.OuterSingleton;
}
UOrionSteamFriendsAsyncActionJoinClanChatRoom::UOrionSteamFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionJoinClanChatRoom);
UOrionSteamFriendsAsyncActionJoinClanChatRoom::~UOrionSteamFriendsAsyncActionJoinClanChatRoom() {}
// ********** End Class UOrionSteamFriendsAsyncActionJoinClanChatRoom ******************************

// ********** Begin Class UOrionSteamFriendsAsyncActionEnumerateFollowingList Function EnumerateFollowingListAsync 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics
{
	struct OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 StartIndex;
		float Timeout;
		UOrionSteamFriendsAsyncActionEnumerateFollowingList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the list of users that the current user is following.\n\x09 * You can be following people that are not your friends.\n\x09 * Following allows you to receive updates when the person does things like\n\x09 * post a new piece of content to the Steam Workshop.\n\x09 *\n\x09 * @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Enumerate Following List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the list of users that the current user is following.\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param       StartIndex      The index to start receiving followers from. This should be 0 on the initial call.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList, nullptr, "EnumerateFollowingListAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::OrionSteamFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionEnumerateFollowingList**)Z_Param__Result=UOrionSteamFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(Z_Param_WorldContextObject,Z_Param_StartIndex,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionEnumerateFollowingList Function EnumerateFollowingListAsync 

// ********** Begin Class UOrionSteamFriendsAsyncActionEnumerateFollowingList Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics
{
	struct OrionSteamFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms
	{
		FFriendsEnumerateFollowingList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1340175691
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::OrionSteamFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::OrionSteamFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionEnumerateFollowingList::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsEnumerateFollowingList,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionEnumerateFollowingList Function HandleCallback 

// ********** Begin Class UOrionSteamFriendsAsyncActionEnumerateFollowingList **********************
void UOrionSteamFriendsAsyncActionEnumerateFollowingList::StaticRegisterNativesUOrionSteamFriendsAsyncActionEnumerateFollowingList()
{
	UClass* Class = UOrionSteamFriendsAsyncActionEnumerateFollowingList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateFollowingListAsync", &UOrionSteamFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync },
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionEnumerateFollowingList::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList;
UClass* UOrionSteamFriendsAsyncActionEnumerateFollowingList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionEnumerateFollowingList;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionEnumerateFollowingList"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionEnumerateFollowingList,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_NoRegister()
{
	return UOrionSteamFriendsAsyncActionEnumerateFollowingList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionEnumerateFollowingList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionEnumerateFollowingList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync, "EnumerateFollowingListAsync" }, // 294103481
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionEnumerateFollowingList_HandleCallback, "HandleCallback" }, // 213369040
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionEnumerateFollowingList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionEnumerateFollowingList, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnEnumerateFollowingListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2568590601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionEnumerateFollowingList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList.OuterSingleton;
}
UOrionSteamFriendsAsyncActionEnumerateFollowingList::UOrionSteamFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionEnumerateFollowingList);
UOrionSteamFriendsAsyncActionEnumerateFollowingList::~UOrionSteamFriendsAsyncActionEnumerateFollowingList() {}
// ********** End Class UOrionSteamFriendsAsyncActionEnumerateFollowingList ************************

// ********** Begin Class UOrionSteamFriendsAsyncActionIsFollowing Function HandleCallback *********
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics
{
	struct OrionSteamFriendsAsyncActionIsFollowing_eventHandleCallback_Parms
	{
		FFriendsIsFollowing Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionIsFollowing_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1491108160
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionIsFollowing_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::OrionSteamFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::OrionSteamFriendsAsyncActionIsFollowing_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionIsFollowing::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsIsFollowing,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionIsFollowing Function HandleCallback ***********

// ********** Begin Class UOrionSteamFriendsAsyncActionIsFollowing Function IsFollowingAsync *******
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics
{
	struct OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		UOrionSteamFriendsAsyncActionIsFollowing* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the current user is following the specified user.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Is Following" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param       SteamID         The Steam ID of the check if we are following.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing, nullptr, "IsFollowingAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::OrionSteamFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionIsFollowing::execIsFollowingAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionIsFollowing**)Z_Param__Result=UOrionSteamFriendsAsyncActionIsFollowing::IsFollowingAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionIsFollowing Function IsFollowingAsync *********

// ********** Begin Class UOrionSteamFriendsAsyncActionIsFollowing *********************************
void UOrionSteamFriendsAsyncActionIsFollowing::StaticRegisterNativesUOrionSteamFriendsAsyncActionIsFollowing()
{
	UClass* Class = UOrionSteamFriendsAsyncActionIsFollowing::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionIsFollowing::execHandleCallback },
		{ "IsFollowingAsync", &UOrionSteamFriendsAsyncActionIsFollowing::execIsFollowingAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing;
UClass* UOrionSteamFriendsAsyncActionIsFollowing::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionIsFollowing;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionIsFollowing"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionIsFollowing,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_NoRegister()
{
	return UOrionSteamFriendsAsyncActionIsFollowing::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionIsFollowing\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionIsFollowing\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_HandleCallback, "HandleCallback" }, // 4190694070
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionIsFollowing_IsFollowingAsync, "IsFollowingAsync" }, // 1120089428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionIsFollowing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionIsFollowing, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIsFollowingAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 261491788
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionIsFollowing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing.OuterSingleton;
}
UOrionSteamFriendsAsyncActionIsFollowing::UOrionSteamFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionIsFollowing);
UOrionSteamFriendsAsyncActionIsFollowing::~UOrionSteamFriendsAsyncActionIsFollowing() {}
// ********** End Class UOrionSteamFriendsAsyncActionIsFollowing ***********************************

// ********** Begin Class UOrionSteamFriendsAsyncActionGetFollowerCount Function GetFollowerCountAsync 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics
{
	struct OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		UOrionSteamFriendsAsyncActionGetFollowerCount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the number of users following the specified user.\n\x09 *\n\x09 * @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get Follower Count" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param       SteamID         The user to get the follower count for.\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount, nullptr, "GetFollowerCountAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::OrionSteamFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionGetFollowerCount**)Z_Param__Result=UOrionSteamFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionGetFollowerCount Function GetFollowerCountAsync 

// ********** Begin Class UOrionSteamFriendsAsyncActionGetFollowerCount Function HandleCallback ****
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics
{
	struct OrionSteamFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms
	{
		FFriendsGetFollowerCount Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1066616540
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::OrionSteamFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::OrionSteamFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionGetFollowerCount::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsGetFollowerCount,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionGetFollowerCount Function HandleCallback ******

// ********** Begin Class UOrionSteamFriendsAsyncActionGetFollowerCount ****************************
void UOrionSteamFriendsAsyncActionGetFollowerCount::StaticRegisterNativesUOrionSteamFriendsAsyncActionGetFollowerCount()
{
	UClass* Class = UOrionSteamFriendsAsyncActionGetFollowerCount::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFollowerCountAsync", &UOrionSteamFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync },
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionGetFollowerCount::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount;
UClass* UOrionSteamFriendsAsyncActionGetFollowerCount::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionGetFollowerCount;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionGetFollowerCount"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionGetFollowerCount,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_NoRegister()
{
	return UOrionSteamFriendsAsyncActionGetFollowerCount::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionGetFollowerCount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionGetFollowerCount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync, "GetFollowerCountAsync" }, // 907012961
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionGetFollowerCount_HandleCallback, "HandleCallback" }, // 373113805
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionGetFollowerCount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionGetFollowerCount, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGetFollowerCountAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3684062130
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionGetFollowerCount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount.OuterSingleton;
}
UOrionSteamFriendsAsyncActionGetFollowerCount::UOrionSteamFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionGetFollowerCount);
UOrionSteamFriendsAsyncActionGetFollowerCount::~UOrionSteamFriendsAsyncActionGetFollowerCount() {}
// ********** End Class UOrionSteamFriendsAsyncActionGetFollowerCount ******************************

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestUserInformation Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation, nullptr, "HandleCallback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionRequestUserInformation::execHandleCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionRequestUserInformation Function HandleCallback 

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestUserInformation Function RequestUserInformationAsync 
struct Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics
{
	struct OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDUser;
		bool bRequireNameOnly;
		float Timeout;
		UOrionSteamFriendsAsyncActionRequestUserInformation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Friends|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the persona name and optionally the avatar of a specified user.\n\x09 *\n\x09 * Using this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\x09 *\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request User Information (Async)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\nUsing this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bRequireNameOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
{
	((OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms*)Obj)->bRequireNameOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation, nullptr, "RequestUserInformationAsync", Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::OrionSteamFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bRequireNameOnly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFriendsAsyncActionRequestUserInformation**)Z_Param__Result=UOrionSteamFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(Z_Param_WorldContextObject,Z_Param_SteamIDUser,Z_Param_bRequireNameOnly,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsAsyncActionRequestUserInformation Function RequestUserInformationAsync 

// ********** Begin Class UOrionSteamFriendsAsyncActionRequestUserInformation **********************
void UOrionSteamFriendsAsyncActionRequestUserInformation::StaticRegisterNativesUOrionSteamFriendsAsyncActionRequestUserInformation()
{
	UClass* Class = UOrionSteamFriendsAsyncActionRequestUserInformation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamFriendsAsyncActionRequestUserInformation::execHandleCallback },
		{ "RequestUserInformationAsync", &UOrionSteamFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation;
UClass* UOrionSteamFriendsAsyncActionRequestUserInformation::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsAsyncActionRequestUserInformation;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsAsyncActionRequestUserInformation"),
			Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsAsyncActionRequestUserInformation,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_NoRegister()
{
	return UOrionSteamFriendsAsyncActionRequestUserInformation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFriendsAsyncActionRequestUserInformation\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFriendsAsyncActionRequestUserInformation\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_HandleCallback, "HandleCallback" }, // 1418511257
		{ &Z_Construct_UFunction_UOrionSteamFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync, "RequestUserInformationAsync" }, // 1689517740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsAsyncActionRequestUserInformation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFriendsAsyncActionRequestUserInformation, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestUserInformationAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 892026355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::ClassParams = {
	&UOrionSteamFriendsAsyncActionRequestUserInformation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation.OuterSingleton;
}
UOrionSteamFriendsAsyncActionRequestUserInformation::UOrionSteamFriendsAsyncActionRequestUserInformation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsAsyncActionRequestUserInformation);
UOrionSteamFriendsAsyncActionRequestUserInformation::~UOrionSteamFriendsAsyncActionRequestUserInformation() {}
// ********** End Class UOrionSteamFriendsAsyncActionRequestUserInformation ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, UOrionSteamFriendsAsyncActionDownloadClanActivityCounts::StaticClass, TEXT("UOrionSteamFriendsAsyncActionDownloadClanActivityCounts"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionDownloadClanActivityCounts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionDownloadClanActivityCounts), 3392305313U) },
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList, UOrionSteamFriendsAsyncActionRequestClanOfficerList::StaticClass, TEXT("UOrionSteamFriendsAsyncActionRequestClanOfficerList"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestClanOfficerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionRequestClanOfficerList), 812416196U) },
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom, UOrionSteamFriendsAsyncActionJoinClanChatRoom::StaticClass, TEXT("UOrionSteamFriendsAsyncActionJoinClanChatRoom"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionJoinClanChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionJoinClanChatRoom), 114586959U) },
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList, UOrionSteamFriendsAsyncActionEnumerateFollowingList::StaticClass, TEXT("UOrionSteamFriendsAsyncActionEnumerateFollowingList"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionEnumerateFollowingList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionEnumerateFollowingList), 617939858U) },
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionIsFollowing, UOrionSteamFriendsAsyncActionIsFollowing::StaticClass, TEXT("UOrionSteamFriendsAsyncActionIsFollowing"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionIsFollowing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionIsFollowing), 2828695279U) },
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount, UOrionSteamFriendsAsyncActionGetFollowerCount::StaticClass, TEXT("UOrionSteamFriendsAsyncActionGetFollowerCount"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionGetFollowerCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionGetFollowerCount), 2090916015U) },
		{ Z_Construct_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation, UOrionSteamFriendsAsyncActionRequestUserInformation::StaticClass, TEXT("UOrionSteamFriendsAsyncActionRequestUserInformation"), &Z_Registration_Info_UClass_UOrionSteamFriendsAsyncActionRequestUserInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsAsyncActionRequestUserInformation), 2976834283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_OrionSteamSDKAPI_1049117741(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
