// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmaking/SteamMatchmakingAsyncActions.h"
#include "FindSessionsCallbackProxy.h"
#include "OrionSteamSharedTypes.h"
#include "SteamMatchmaking/SteamMatchmakingTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSession();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSession_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamDestroySession();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamDestroySession_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFindSession();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFindSession_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamJoinSession();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamJoinSession_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUpdateSession();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUpdateSession_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamSessionFindType();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
ORIONSTEAMSHARED_API UEnum* Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestLobbyListAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 914106887
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnRequestLobbyListAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnRequestLobbyListAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestLobbyListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestLobbyListAsyncDelegate ****************************************

// ********** Begin Delegate FOnCreateLobbyAsyncDelegate *******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3285289632
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnCreateLobbyAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnCreateLobbyAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateLobbyAsyncDelegate *********************************************

// ********** Begin Delegate FOnJoinLobbyAsyncDelegate *********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2863065251
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnJoinLobbyAsyncDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnJoinLobbyAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinLobbyAsyncDelegate ***********************************************

// ********** Begin Delegate FJoinOrionSteamSessionDelegate ****************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventJoinOrionSteamSessionDelegate_Parms
	{
		FString JoinFailReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinFailReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JoinFailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::NewProp_JoinFailReason = { "JoinFailReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventJoinOrionSteamSessionDelegate_Parms, JoinFailReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinFailReason_MetaData), NewProp_JoinFailReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::NewProp_JoinFailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "JoinOrionSteamSessionDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventJoinOrionSteamSessionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventJoinOrionSteamSessionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FJoinOrionSteamSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& JoinOrionSteamSessionDelegate, const FString& JoinFailReason)
{
	struct _Script_OrionSteamSDKAPI_eventJoinOrionSteamSessionDelegate_Parms
	{
		FString JoinFailReason;
	};
	_Script_OrionSteamSDKAPI_eventJoinOrionSteamSessionDelegate_Parms Parms;
	Parms.JoinFailReason=JoinFailReason;
	JoinOrionSteamSessionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FJoinOrionSteamSessionDelegate ******************************************

// ********** Begin Class UOrionSteamMatchmakingAsyncActionCreateLobby Function CreateLobbyAsync ***
struct Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics
{
	struct OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms
	{
		UObject* WorldContextObject;
		ESteamLobbyType LobbyType;
		int32 MaxMembers;
		float Timeout;
		UOrionSteamMatchmakingAsyncActionCreateLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new matchmaking lobby.\n\x09 *\n\x09 * @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09 * @param\x09MaxMembers\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param       LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param       MaxMembers              The maximum number of players that can join this lobby. This can not be above 250.\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, LobbyType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 921498350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby, nullptr, "CreateLobbyAsync", Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::OrionSteamMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamMatchmakingAsyncActionCreateLobby**)Z_Param__Result=UOrionSteamMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(Z_Param_WorldContextObject,ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingAsyncActionCreateLobby Function CreateLobbyAsync *****

// ********** Begin Class UOrionSteamMatchmakingAsyncActionCreateLobby Function HandleCallback *****
struct Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics
{
	struct OrionSteamMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3285289632
void Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::OrionSteamMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::OrionSteamMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingAsyncActionCreateLobby::execHandleCallback)
{
	P_GET_STRUCT_REF(FCreateLobbyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingAsyncActionCreateLobby Function HandleCallback *******

// ********** Begin Class UOrionSteamMatchmakingAsyncActionCreateLobby *****************************
void UOrionSteamMatchmakingAsyncActionCreateLobby::StaticRegisterNativesUOrionSteamMatchmakingAsyncActionCreateLobby()
{
	UClass* Class = UOrionSteamMatchmakingAsyncActionCreateLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLobbyAsync", &UOrionSteamMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync },
		{ "HandleCallback", &UOrionSteamMatchmakingAsyncActionCreateLobby::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby;
UClass* UOrionSteamMatchmakingAsyncActionCreateLobby::GetPrivateStaticClass()
{
	using TClass = UOrionSteamMatchmakingAsyncActionCreateLobby;
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamMatchmakingAsyncActionCreateLobby"),
			Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby.InnerSingleton,
			StaticRegisterNativesUOrionSteamMatchmakingAsyncActionCreateLobby,
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
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_NoRegister()
{
	return UOrionSteamMatchmakingAsyncActionCreateLobby::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamMatchmakingAsyncActionCreateLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamMatchmakingAsyncActionCreateLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_CreateLobbyAsync, "CreateLobbyAsync" }, // 1448433061
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionCreateLobby_HandleCallback, "HandleCallback" }, // 1747060318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamMatchmakingAsyncActionCreateLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmakingAsyncActionCreateLobby, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2057276148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::ClassParams = {
	&UOrionSteamMatchmakingAsyncActionCreateLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby()
{
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby.OuterSingleton, Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby.OuterSingleton;
}
UOrionSteamMatchmakingAsyncActionCreateLobby::UOrionSteamMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamMatchmakingAsyncActionCreateLobby);
UOrionSteamMatchmakingAsyncActionCreateLobby::~UOrionSteamMatchmakingAsyncActionCreateLobby() {}
// ********** End Class UOrionSteamMatchmakingAsyncActionCreateLobby *******************************

// ********** Begin Class UOrionSteamMatchmakingAsyncActionRequestLobbyList Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics
{
	struct OrionSteamMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 914106887
void Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::OrionSteamMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::OrionSteamMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingAsyncActionRequestLobbyList::execHandleCallback)
{
	P_GET_STRUCT_REF(FLobbyMatchList,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingAsyncActionRequestLobbyList Function HandleCallback **

// ********** Begin Class UOrionSteamMatchmakingAsyncActionRequestLobbyList Function RequestLobbyListAsync 
struct Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics
{
	struct OrionSteamMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		UOrionSteamMatchmakingAsyncActionRequestLobbyList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a filtered list of relevant lobbies.\n\x09 * There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09 * To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09 * If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09 * This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09 *\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 *\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Lobby List" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a filtered list of relevant lobbies.\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList, nullptr, "RequestLobbyListAsync", Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::OrionSteamMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::OrionSteamMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamMatchmakingAsyncActionRequestLobbyList**)Z_Param__Result=UOrionSteamMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingAsyncActionRequestLobbyList Function RequestLobbyListAsync 

// ********** Begin Class UOrionSteamMatchmakingAsyncActionRequestLobbyList ************************
void UOrionSteamMatchmakingAsyncActionRequestLobbyList::StaticRegisterNativesUOrionSteamMatchmakingAsyncActionRequestLobbyList()
{
	UClass* Class = UOrionSteamMatchmakingAsyncActionRequestLobbyList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamMatchmakingAsyncActionRequestLobbyList::execHandleCallback },
		{ "RequestLobbyListAsync", &UOrionSteamMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList;
UClass* UOrionSteamMatchmakingAsyncActionRequestLobbyList::GetPrivateStaticClass()
{
	using TClass = UOrionSteamMatchmakingAsyncActionRequestLobbyList;
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamMatchmakingAsyncActionRequestLobbyList"),
			Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList.InnerSingleton,
			StaticRegisterNativesUOrionSteamMatchmakingAsyncActionRequestLobbyList,
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
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_NoRegister()
{
	return UOrionSteamMatchmakingAsyncActionRequestLobbyList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamMatchmakingAsyncActionRequestLobbyList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamMatchmakingAsyncActionRequestLobbyList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_HandleCallback, "HandleCallback" }, // 1892973609
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync, "RequestLobbyListAsync" }, // 1662817106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamMatchmakingAsyncActionRequestLobbyList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmakingAsyncActionRequestLobbyList, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnRequestLobbyListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1920716704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams = {
	&UOrionSteamMatchmakingAsyncActionRequestLobbyList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList()
{
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList.OuterSingleton, Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList.OuterSingleton;
}
UOrionSteamMatchmakingAsyncActionRequestLobbyList::UOrionSteamMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamMatchmakingAsyncActionRequestLobbyList);
UOrionSteamMatchmakingAsyncActionRequestLobbyList::~UOrionSteamMatchmakingAsyncActionRequestLobbyList() {}
// ********** End Class UOrionSteamMatchmakingAsyncActionRequestLobbyList **************************

// ********** Begin Class UOrionSteamMatchmakingAsyncActionJoinLobby Function HandleCallback *******
struct Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics
{
	struct OrionSteamMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2863065251
void Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::OrionSteamMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::OrionSteamMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingAsyncActionJoinLobby::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinLobbyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingAsyncActionJoinLobby Function HandleCallback *********

// ********** Begin Class UOrionSteamMatchmakingAsyncActionJoinLobby Function JoinLobbyAsync *******
struct Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics
{
	struct OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDLobby;
		float Timeout;
		UOrionSteamMatchmakingAsyncActionJoinLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Joins an existing lobby.\n\x09 * The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09 *\n\x09 * @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Joins an existing lobby.\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param       SteamIDLobby    The Steam ID of the lobby to join.\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby, nullptr, "JoinLobbyAsync", Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::OrionSteamMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamMatchmakingAsyncActionJoinLobby**)Z_Param__Result=UOrionSteamMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(Z_Param_WorldContextObject,Z_Param_SteamIDLobby,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamMatchmakingAsyncActionJoinLobby Function JoinLobbyAsync *********

// ********** Begin Class UOrionSteamMatchmakingAsyncActionJoinLobby *******************************
void UOrionSteamMatchmakingAsyncActionJoinLobby::StaticRegisterNativesUOrionSteamMatchmakingAsyncActionJoinLobby()
{
	UClass* Class = UOrionSteamMatchmakingAsyncActionJoinLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamMatchmakingAsyncActionJoinLobby::execHandleCallback },
		{ "JoinLobbyAsync", &UOrionSteamMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby;
UClass* UOrionSteamMatchmakingAsyncActionJoinLobby::GetPrivateStaticClass()
{
	using TClass = UOrionSteamMatchmakingAsyncActionJoinLobby;
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamMatchmakingAsyncActionJoinLobby"),
			Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby.InnerSingleton,
			StaticRegisterNativesUOrionSteamMatchmakingAsyncActionJoinLobby,
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
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_NoRegister()
{
	return UOrionSteamMatchmakingAsyncActionJoinLobby::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamMatchmakingAsyncActionJoinLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamMatchmakingAsyncActionJoinLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_HandleCallback, "HandleCallback" }, // 427241898
		{ &Z_Construct_UFunction_UOrionSteamMatchmakingAsyncActionJoinLobby_JoinLobbyAsync, "JoinLobbyAsync" }, // 4007776034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamMatchmakingAsyncActionJoinLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamMatchmakingAsyncActionJoinLobby, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3150683459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::ClassParams = {
	&UOrionSteamMatchmakingAsyncActionJoinLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby()
{
	if (!Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby.OuterSingleton, Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby.OuterSingleton;
}
UOrionSteamMatchmakingAsyncActionJoinLobby::UOrionSteamMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamMatchmakingAsyncActionJoinLobby);
UOrionSteamMatchmakingAsyncActionJoinLobby::~UOrionSteamMatchmakingAsyncActionJoinLobby() {}
// ********** End Class UOrionSteamMatchmakingAsyncActionJoinLobby *********************************

// ********** Begin Class UOrionSteamCreateSessionExtra Function CreateOrionSteamSessionExtra ******
struct Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics
{
	struct OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> SessionSettings;
		FString SessionPassword;
		FString SessionName;
		int32 MaxPlayers;
		bool bUseLAN;
		bool bAllowInvites;
		bool bUsesPresence;
		bool bAllowJoinViaPresence;
		bool bAllowJoinViaPresenceFriendsOnly;
		bool bAntiCheatProtected;
		bool bUsesStats;
		bool bShouldAdvertise;
		bool bUseLobbiesVoiceChatIfAvailable;
		UOrionSteamCreateSessionExtra* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates an online session\n\x09 *\n\x09 * Automatically detects if we're running a dedicated or listen server\n\x09 *\n\x09 * Listen servers will create a Lobby Session, use \"FindOrionSteamSession\" to find Listen Servers\n\x09 *\n\x09 *    @param SessionPassword\x09\x09\x09\x09\x09\x09Optional session password\n\x09 *    @param SessionName\x09\x09\x09\x09\x09\x09\x09Name of our session\n\x09 *    @param MaxPlayers\x09\x09\x09\x09\x09\x09\x09Number of public connections\n\x09 *    @param bUseLAN\x09\x09\x09\x09\x09\x09\x09\x09Used for LAN server\n\x09 */" },
#endif
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_bUseLobbiesVoiceChatIfAvailable", "true" },
		{ "CPP_Default_bUsesPresence", "true" },
		{ "CPP_Default_bUsesStats", "false" },
		{ "CPP_Default_MaxPlayers", "5" },
		{ "CPP_Default_SessionName", "OrionSteamSession" },
		{ "DisplayName", "Create Orion Steam Session (Extra)" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an online session\n\nAutomatically detects if we're running a dedicated or listen server\n\nListen servers will create a Lobby Session, use \"FindOrionSteamSession\" to find Listen Servers\n\n   @param SessionPassword                                            Optional session password\n   @param SessionName                                                        Name of our session\n   @param MaxPlayers                                                 Number of public connections\n   @param bUseLAN                                                            Used for LAN server" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionPassword;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bUsesPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
	static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
	static void NewProp_bUsesStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionPassword = { "SessionPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms, SessionPassword), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bUsesPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bAntiCheatProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesStats_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bUsesStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
{
	((OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamCreateSessionExtra_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bAntiCheatProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUsesStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamCreateSessionExtra, nullptr, "CreateOrionSteamSessionExtra", Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::OrionSteamCreateSessionExtra_eventCreateOrionSteamSessionExtra_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamCreateSessionExtra::execCreateOrionSteamSessionExtra)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_SessionSettings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionPassword);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_UBOOL(Z_Param_bAllowInvites);
	P_GET_UBOOL(Z_Param_bUsesPresence);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
	P_GET_UBOOL(Z_Param_bAntiCheatProtected);
	P_GET_UBOOL(Z_Param_bUsesStats);
	P_GET_UBOOL(Z_Param_bShouldAdvertise);
	P_GET_UBOOL(Z_Param_bUseLobbiesVoiceChatIfAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamCreateSessionExtra**)Z_Param__Result=UOrionSteamCreateSessionExtra::CreateOrionSteamSessionExtra(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_SessionPassword,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise,Z_Param_bUseLobbiesVoiceChatIfAvailable);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamCreateSessionExtra Function CreateOrionSteamSessionExtra ********

// ********** Begin Class UOrionSteamCreateSessionExtra ********************************************
void UOrionSteamCreateSessionExtra::StaticRegisterNativesUOrionSteamCreateSessionExtra()
{
	UClass* Class = UOrionSteamCreateSessionExtra::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateOrionSteamSessionExtra", &UOrionSteamCreateSessionExtra::execCreateOrionSteamSessionExtra },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra;
UClass* UOrionSteamCreateSessionExtra::GetPrivateStaticClass()
{
	using TClass = UOrionSteamCreateSessionExtra;
	if (!Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamCreateSessionExtra"),
			Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra.InnerSingleton,
			StaticRegisterNativesUOrionSteamCreateSessionExtra,
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
	return Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra_NoRegister()
{
	return UOrionSteamCreateSessionExtra::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamCreateSessionExtra\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamCreateSessionExtra\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamCreateSessionExtra_CreateOrionSteamSessionExtra, "CreateOrionSteamSessionExtra" }, // 1950533071
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamCreateSessionExtra>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamCreateSessionExtra, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1205031399
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamCreateSessionExtra, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1205031399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::ClassParams = {
	&UOrionSteamCreateSessionExtra::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamCreateSessionExtra()
{
	if (!Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra.OuterSingleton, Z_Construct_UClass_UOrionSteamCreateSessionExtra_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamCreateSessionExtra);
UOrionSteamCreateSessionExtra::~UOrionSteamCreateSessionExtra() {}
// ********** End Class UOrionSteamCreateSessionExtra **********************************************

// ********** Begin Class UOrionSteamCreateSession Function CreateOrionSteamSession ****************
struct Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics
{
	struct OrionSteamCreateSession_eventCreateOrionSteamSession_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> SessionSettings;
		FString SessionPassword;
		FString SessionName;
		int32 MaxPlayers;
		bool bUseLAN;
		bool bAllowJoinViaPresence;
		bool bAntiCheatProtected;
		bool bShouldAdvertise;
		UOrionSteamCreateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates an online session\n\x09 *\n\x09 * Automatically detects if we're running a dedicated or listen server\n\x09 *\n\x09 * Listen servers will create a Lobby Session, use \"FindOrionSteamSession\" to find Listen Servers\n\x09 *\n\x09 *    @param SessionPassword\x09\x09\x09\x09\x09\x09Optional session password\n\x09 *    @param SessionName\x09\x09\x09\x09\x09\x09\x09Name of our session\n\x09 *    @param MaxPlayers\x09\x09\x09\x09\x09\x09\x09Number of public connections\n\x09 *    @param bUseLAN\x09\x09\x09\x09\x09\x09\x09\x09Used for LAN server\n\x09 */" },
#endif
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_MaxPlayers", "5" },
		{ "CPP_Default_SessionName", "OrionSteamSession" },
		{ "DisplayName", "Create Orion Steam Session" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an online session\n\nAutomatically detects if we're running a dedicated or listen server\n\nListen servers will create a Lobby Session, use \"FindOrionSteamSession\" to find Listen Servers\n\n   @param SessionPassword                                            Optional session password\n   @param SessionName                                                        Name of our session\n   @param MaxPlayers                                                 Number of public connections\n   @param bUseLAN                                                            Used for LAN server" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionPassword;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionPassword = { "SessionPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms, SessionPassword), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((OrionSteamCreateSession_eventCreateOrionSteamSession_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms), &Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((OrionSteamCreateSession_eventCreateOrionSteamSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms), &Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
{
	((OrionSteamCreateSession_eventCreateOrionSteamSession_Parms*)Obj)->bAntiCheatProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms), &Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((OrionSteamCreateSession_eventCreateOrionSteamSession_Parms*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms), &Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamCreateSession_eventCreateOrionSteamSession_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamCreateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bAntiCheatProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamCreateSession, nullptr, "CreateOrionSteamSession", Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::OrionSteamCreateSession_eventCreateOrionSteamSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::OrionSteamCreateSession_eventCreateOrionSteamSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamCreateSession::execCreateOrionSteamSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_SessionSettings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionPassword);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
	P_GET_UBOOL(Z_Param_bAntiCheatProtected);
	P_GET_UBOOL(Z_Param_bShouldAdvertise);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamCreateSession**)Z_Param__Result=UOrionSteamCreateSession::CreateOrionSteamSession(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_SessionPassword,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bUseLAN,Z_Param_bAllowJoinViaPresence,Z_Param_bAntiCheatProtected,Z_Param_bShouldAdvertise);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamCreateSession Function CreateOrionSteamSession ******************

// ********** Begin Class UOrionSteamCreateSession *************************************************
void UOrionSteamCreateSession::StaticRegisterNativesUOrionSteamCreateSession()
{
	UClass* Class = UOrionSteamCreateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateOrionSteamSession", &UOrionSteamCreateSession::execCreateOrionSteamSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamCreateSession;
UClass* UOrionSteamCreateSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamCreateSession;
	if (!Z_Registration_Info_UClass_UOrionSteamCreateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamCreateSession"),
			Z_Registration_Info_UClass_UOrionSteamCreateSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamCreateSession,
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
	return Z_Registration_Info_UClass_UOrionSteamCreateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamCreateSession_NoRegister()
{
	return UOrionSteamCreateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamCreateSession_CreateOrionSteamSession, "CreateOrionSteamSession" }, // 1540084973
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamCreateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamCreateSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamCreateSession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1205031399
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamCreateSession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamCreateSession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1205031399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamCreateSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamCreateSession_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamCreateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamCreateSession_Statics::ClassParams = {
	&UOrionSteamCreateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamCreateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamCreateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamCreateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamCreateSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamCreateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamCreateSession.OuterSingleton, Z_Construct_UClass_UOrionSteamCreateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamCreateSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamCreateSession);
UOrionSteamCreateSession::~UOrionSteamCreateSession() {}
// ********** End Class UOrionSteamCreateSession ***************************************************

// ********** Begin Delegate FFindSteamSessionsResultDelegate **************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventFindSteamSessionsResultDelegate_Parms
	{
		TArray<FSteamSessionResult> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamSessionResult, METADATA_PARAMS(0, nullptr) }; // 2123520971
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventFindSteamSessionsResultDelegate_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 2123520971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "FindSteamSessionsResultDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventFindSteamSessionsResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventFindSteamSessionsResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& Results)
{
	struct _Script_OrionSteamSDKAPI_eventFindSteamSessionsResultDelegate_Parms
	{
		TArray<FSteamSessionResult> Results;
	};
	_Script_OrionSteamSDKAPI_eventFindSteamSessionsResultDelegate_Parms Parms;
	Parms.Results=Results;
	FindSteamSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFindSteamSessionsResultDelegate ****************************************

// ********** Begin Class UOrionSteamFindSession Function FindOrionSteamSessions *******************
struct Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics
{
	struct OrionSteamFindSession_eventFindOrionSteamSessions_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSearchSetting> SearchSettings;
		int32 MaxResults;
		bool bUseLAN;
		ESteamSessionFindType ServerType;
		ESteamLobbyDistanceFilter DistanceFilter;
		bool bEmptyServersOnly;
		bool bSecureServersOnly;
		float Timeout;
		UOrionSteamFindSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SearchSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find Online Sessions\n\x09 *\n\x09 * This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\x09 *\n\x09 * @param\x09MaxResults\x09\x09\x09\x09Max Number of Servers\n\x09 * @param\x09ServerType\x09\x09\x09\x09Search for Listen or Dedicated servers\n\x09 * @param\x09""DistanceFilter\x09\x09\x09""Distance Filter for Listen servers (does not work for dedicated servers)\n\x09 * @param\x09""bUseLAN\x09\x09\x09\x09\x09Search for LAN servers only\n\x09 * @param\x09""bEmptyServersOnly\x09\x09Only empty servers\n\x09 * @param\x09""bSecureServersOnly\x09\x09Only secure servers\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_DistanceFilter", "k_ELobbyDistanceFilterWorldwide" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerType", "Listen" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Online Sessions\n\nThis is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\n@param       MaxResults                              Max Number of Servers\n@param       ServerType                              Search for Listen or Dedicated servers\n@param       DistanceFilter                  Distance Filter for Listen servers (does not work for dedicated servers)\n@param       bUseLAN                                 Search for LAN servers only\n@param       bEmptyServersOnly               Only empty servers\n@param       bSecureServersOnly              Only secure servers\n@param       Timeout                                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SearchSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceFilter;
	static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
	static void NewProp_bSecureServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_SearchSettings_ValueProp = { "SearchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 761709690
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_SearchSettings_Key_KeyProp = { "SearchSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_SearchSettings = { "SearchSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, SearchSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 761709690
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((OrionSteamFindSession_eventFindOrionSteamSessions_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFindSession_eventFindOrionSteamSessions_Parms), &Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, ServerType), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamSessionFindType, METADATA_PARAMS(0, nullptr) }; // 556656202
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_DistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_DistanceFilter = { "DistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, DistanceFilter), Z_Construct_UEnum_OrionSteamShared_ESteamLobbyDistanceFilter, METADATA_PARAMS(0, nullptr) }; // 2792033207
void Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
{
	((OrionSteamFindSession_eventFindOrionSteamSessions_Parms*)Obj)->bEmptyServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFindSession_eventFindOrionSteamSessions_Parms), &Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
{
	((OrionSteamFindSession_eventFindOrionSteamSessions_Parms*)Obj)->bSecureServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFindSession_eventFindOrionSteamSessions_Parms), &Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFindSession_eventFindOrionSteamSessions_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamFindSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_SearchSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_SearchSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_SearchSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_ServerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_ServerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_DistanceFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_DistanceFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bEmptyServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_bSecureServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFindSession, nullptr, "FindOrionSteamSessions", Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::OrionSteamFindSession_eventFindOrionSteamSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::OrionSteamFindSession_eventFindOrionSteamSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFindSession::execFindOrionSteamSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSearchSetting,Z_Param_SearchSettings);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_ENUM(ESteamSessionFindType,Z_Param_ServerType);
	P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_DistanceFilter);
	P_GET_UBOOL(Z_Param_bEmptyServersOnly);
	P_GET_UBOOL(Z_Param_bSecureServersOnly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamFindSession**)Z_Param__Result=UOrionSteamFindSession::FindOrionSteamSessions(Z_Param_WorldContextObject,Z_Param_SearchSettings,Z_Param_MaxResults,Z_Param_bUseLAN,ESteamSessionFindType(Z_Param_ServerType),ESteamLobbyDistanceFilter(Z_Param_DistanceFilter),Z_Param_bEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFindSession Function FindOrionSteamSessions *********************

// ********** Begin Class UOrionSteamFindSession Function OnCompleted ******************************
struct Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics
{
	struct OrionSteamFindSession_eventOnCompleted_Parms
	{
		bool bSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit(void* Obj)
{
	((OrionSteamFindSession_eventOnCompleted_Parms*)Obj)->bSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamFindSession_eventOnCompleted_Parms), &Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::NewProp_bSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFindSession, nullptr, "OnCompleted", Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::OrionSteamFindSession_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::OrionSteamFindSession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFindSession::execOnCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_bSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFindSession Function OnCompleted ********************************

// ********** Begin Class UOrionSteamFindSession ***************************************************
void UOrionSteamFindSession::StaticRegisterNativesUOrionSteamFindSession()
{
	UClass* Class = UOrionSteamFindSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindOrionSteamSessions", &UOrionSteamFindSession::execFindOrionSteamSessions },
		{ "OnCompleted", &UOrionSteamFindSession::execOnCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFindSession;
UClass* UOrionSteamFindSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFindSession;
	if (!Z_Registration_Info_UClass_UOrionSteamFindSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFindSession"),
			Z_Registration_Info_UClass_UOrionSteamFindSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamFindSession,
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
	return Z_Registration_Info_UClass_UOrionSteamFindSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFindSession_NoRegister()
{
	return UOrionSteamFindSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFindSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamFindSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamFindSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFindSession_FindOrionSteamSessions, "FindOrionSteamSessions" }, // 3242544079
		{ &Z_Construct_UFunction_UOrionSteamFindSession_OnCompleted, "OnCompleted" }, // 1173727122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFindSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamFindSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamFindSession, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_FindSteamSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2099356185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamFindSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamFindSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFindSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamFindSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFindSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFindSession_Statics::ClassParams = {
	&UOrionSteamFindSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamFindSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFindSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFindSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFindSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFindSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFindSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFindSession.OuterSingleton, Z_Construct_UClass_UOrionSteamFindSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFindSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFindSession);
UOrionSteamFindSession::~UOrionSteamFindSession() {}
// ********** End Class UOrionSteamFindSession *****************************************************

// ********** Begin Class UOrionSteamJoinSession Function JoinOrionSteamSession ********************
struct Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics
{
	struct OrionSteamJoinSession_eventJoinOrionSteamSession_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FString SessionPassword;
		FBlueprintSessionResult SearchResult;
		UOrionSteamJoinSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionPassword;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamJoinSession_eventJoinOrionSteamSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamJoinSession_eventJoinOrionSteamSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_SessionPassword = { "SessionPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamJoinSession_eventJoinOrionSteamSession_Parms, SessionPassword), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamJoinSession_eventJoinOrionSteamSession_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchResult_MetaData), NewProp_SearchResult_MetaData) }; // 3859927135
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamJoinSession_eventJoinOrionSteamSession_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamJoinSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_SessionPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_SearchResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamJoinSession, nullptr, "JoinOrionSteamSession", Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::OrionSteamJoinSession_eventJoinOrionSteamSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::OrionSteamJoinSession_eventJoinOrionSteamSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamJoinSession::execJoinOrionSteamSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionPassword);
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SearchResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamJoinSession**)Z_Param__Result=UOrionSteamJoinSession::JoinOrionSteamSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_SessionPassword,Z_Param_Out_SearchResult);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamJoinSession Function JoinOrionSteamSession **********************

// ********** Begin Class UOrionSteamJoinSession ***************************************************
void UOrionSteamJoinSession::StaticRegisterNativesUOrionSteamJoinSession()
{
	UClass* Class = UOrionSteamJoinSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JoinOrionSteamSession", &UOrionSteamJoinSession::execJoinOrionSteamSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamJoinSession;
UClass* UOrionSteamJoinSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamJoinSession;
	if (!Z_Registration_Info_UClass_UOrionSteamJoinSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamJoinSession"),
			Z_Registration_Info_UClass_UOrionSteamJoinSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamJoinSession,
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
	return Z_Registration_Info_UClass_UOrionSteamJoinSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamJoinSession_NoRegister()
{
	return UOrionSteamJoinSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamJoinSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamJoinSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamJoinSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamJoinSession_JoinOrionSteamSession, "JoinOrionSteamSession" }, // 1351510002
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamJoinSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamJoinSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamJoinSession, OnSuccess), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3751697520
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamJoinSession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamJoinSession, OnFailure), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_JoinOrionSteamSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3751697520
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionSteamJoinSession_Statics::NewProp_m_WorldContextObject = { "m_WorldContextObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamJoinSession, m_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_WorldContextObject_MetaData), NewProp_m_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamJoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamJoinSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamJoinSession_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamJoinSession_Statics::NewProp_m_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamJoinSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamJoinSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamJoinSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamJoinSession_Statics::ClassParams = {
	&UOrionSteamJoinSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamJoinSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamJoinSession_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamJoinSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamJoinSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamJoinSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamJoinSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamJoinSession.OuterSingleton, Z_Construct_UClass_UOrionSteamJoinSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamJoinSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamJoinSession);
UOrionSteamJoinSession::~UOrionSteamJoinSession() {}
// ********** End Class UOrionSteamJoinSession *****************************************************

// ********** Begin Class UOrionSteamDestroySession Function DestroyOrionSteamSession **************
struct Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics
{
	struct OrionSteamDestroySession_eventDestroyOrionSteamSession_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		UOrionSteamDestroySession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Destroy an Online Session\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy an Online Session\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamDestroySession_eventDestroyOrionSteamSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamDestroySession_eventDestroyOrionSteamSession_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamDestroySession_eventDestroyOrionSteamSession_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamDestroySession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamDestroySession, nullptr, "DestroyOrionSteamSession", Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::OrionSteamDestroySession_eventDestroyOrionSteamSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::OrionSteamDestroySession_eventDestroyOrionSteamSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamDestroySession::execDestroyOrionSteamSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamDestroySession**)Z_Param__Result=UOrionSteamDestroySession::DestroyOrionSteamSession(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamDestroySession Function DestroyOrionSteamSession ****************

// ********** Begin Class UOrionSteamDestroySession Function OnCompleted ***************************
struct Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics
{
	struct OrionSteamDestroySession_eventOnCompleted_Parms
	{
		FName sessionName;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_sessionName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamDestroySession_eventOnCompleted_Parms, sessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamDestroySession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamDestroySession_eventOnCompleted_Parms), &Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::NewProp_sessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamDestroySession, nullptr, "OnCompleted", Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::OrionSteamDestroySession_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::OrionSteamDestroySession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamDestroySession::execOnCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_sessionName,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamDestroySession Function OnCompleted *****************************

// ********** Begin Class UOrionSteamDestroySession ************************************************
void UOrionSteamDestroySession::StaticRegisterNativesUOrionSteamDestroySession()
{
	UClass* Class = UOrionSteamDestroySession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyOrionSteamSession", &UOrionSteamDestroySession::execDestroyOrionSteamSession },
		{ "OnCompleted", &UOrionSteamDestroySession::execOnCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamDestroySession;
UClass* UOrionSteamDestroySession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamDestroySession;
	if (!Z_Registration_Info_UClass_UOrionSteamDestroySession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamDestroySession"),
			Z_Registration_Info_UClass_UOrionSteamDestroySession.InnerSingleton,
			StaticRegisterNativesUOrionSteamDestroySession,
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
	return Z_Registration_Info_UClass_UOrionSteamDestroySession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamDestroySession_NoRegister()
{
	return UOrionSteamDestroySession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamDestroySession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamDestroySession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamDestroySession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamDestroySession_DestroyOrionSteamSession, "DestroyOrionSteamSession" }, // 3245464543
		{ &Z_Construct_UFunction_UOrionSteamDestroySession_OnCompleted, "OnCompleted" }, // 1410274893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamDestroySession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamDestroySession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamDestroySession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1205031399
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamDestroySession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamDestroySession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1205031399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamDestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamDestroySession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamDestroySession_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamDestroySession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamDestroySession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamDestroySession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamDestroySession_Statics::ClassParams = {
	&UOrionSteamDestroySession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamDestroySession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamDestroySession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamDestroySession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamDestroySession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamDestroySession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamDestroySession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamDestroySession.OuterSingleton, Z_Construct_UClass_UOrionSteamDestroySession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamDestroySession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamDestroySession);
UOrionSteamDestroySession::~UOrionSteamDestroySession() {}
// ********** End Class UOrionSteamDestroySession **************************************************

// ********** Begin Class UOrionSteamUpdateSession Function OnCompleted ****************************
struct Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics
{
	struct OrionSteamUpdateSession_eventOnCompleted_Parms
	{
		FName SessionName;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUpdateSession_eventOnCompleted_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUpdateSession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUpdateSession_eventOnCompleted_Parms), &Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUpdateSession, nullptr, "OnCompleted", Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::OrionSteamUpdateSession_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::OrionSteamUpdateSession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUpdateSession::execOnCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_SessionName,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUpdateSession Function OnCompleted ******************************

// ********** Begin Class UOrionSteamUpdateSession Function UpdateOrionSteamSession ****************
struct Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics
{
	struct OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> Settings;
		FString SessionName;
		int32 MaxPlayers;
		bool bAllowJoinInProgress;
		UOrionSteamUpdateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Settings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|Matchmaking|Async" },
		{ "CPP_Default_bAllowJoinInProgress", "true" },
		{ "CPP_Default_MaxPlayers", "4" },
		{ "CPP_Default_SessionName", "OrionSteamSession" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_Settings_ValueProp = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_Settings_Key_KeyProp = { "Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms, Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms), &Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUpdateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUpdateSession, nullptr, "UpdateOrionSteamSession", Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::OrionSteamUpdateSession_eventUpdateOrionSteamSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUpdateSession::execUpdateOrionSteamSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUpdateSession**)Z_Param__Result=UOrionSteamUpdateSession::UpdateOrionSteamSession(Z_Param_WorldContextObject,Z_Param_Settings,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bAllowJoinInProgress);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUpdateSession Function UpdateOrionSteamSession ******************

// ********** Begin Class UOrionSteamUpdateSession *************************************************
void UOrionSteamUpdateSession::StaticRegisterNativesUOrionSteamUpdateSession()
{
	UClass* Class = UOrionSteamUpdateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCompleted", &UOrionSteamUpdateSession::execOnCompleted },
		{ "UpdateOrionSteamSession", &UOrionSteamUpdateSession::execUpdateOrionSteamSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUpdateSession;
UClass* UOrionSteamUpdateSession::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUpdateSession;
	if (!Z_Registration_Info_UClass_UOrionSteamUpdateSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUpdateSession"),
			Z_Registration_Info_UClass_UOrionSteamUpdateSession.InnerSingleton,
			StaticRegisterNativesUOrionSteamUpdateSession,
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
	return Z_Registration_Info_UClass_UOrionSteamUpdateSession.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUpdateSession_NoRegister()
{
	return UOrionSteamUpdateSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUpdateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUpdateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUpdateSession_OnCompleted, "OnCompleted" }, // 789599688
		{ &Z_Construct_UFunction_UOrionSteamUpdateSession_UpdateOrionSteamSession, "UpdateOrionSteamSession" }, // 2672419554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUpdateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUpdateSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUpdateSession, OnCallback), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1205031399
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionSteamUpdateSession_Statics::NewProp_m_WorldContextObject = { "m_WorldContextObject", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUpdateSession, m_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_WorldContextObject_MetaData), NewProp_m_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUpdateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUpdateSession_Statics::NewProp_OnCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUpdateSession_Statics::NewProp_m_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUpdateSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUpdateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUpdateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUpdateSession_Statics::ClassParams = {
	&UOrionSteamUpdateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUpdateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUpdateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUpdateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUpdateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUpdateSession()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUpdateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUpdateSession.OuterSingleton, Z_Construct_UClass_UOrionSteamUpdateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUpdateSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUpdateSession);
UOrionSteamUpdateSession::~UOrionSteamUpdateSession() {}
// ********** End Class UOrionSteamUpdateSession ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby, UOrionSteamMatchmakingAsyncActionCreateLobby::StaticClass, TEXT("UOrionSteamMatchmakingAsyncActionCreateLobby"), &Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionCreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamMatchmakingAsyncActionCreateLobby), 1292680638U) },
		{ Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList, UOrionSteamMatchmakingAsyncActionRequestLobbyList::StaticClass, TEXT("UOrionSteamMatchmakingAsyncActionRequestLobbyList"), &Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionRequestLobbyList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamMatchmakingAsyncActionRequestLobbyList), 1087912493U) },
		{ Z_Construct_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby, UOrionSteamMatchmakingAsyncActionJoinLobby::StaticClass, TEXT("UOrionSteamMatchmakingAsyncActionJoinLobby"), &Z_Registration_Info_UClass_UOrionSteamMatchmakingAsyncActionJoinLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamMatchmakingAsyncActionJoinLobby), 1721856392U) },
		{ Z_Construct_UClass_UOrionSteamCreateSessionExtra, UOrionSteamCreateSessionExtra::StaticClass, TEXT("UOrionSteamCreateSessionExtra"), &Z_Registration_Info_UClass_UOrionSteamCreateSessionExtra, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamCreateSessionExtra), 1411363487U) },
		{ Z_Construct_UClass_UOrionSteamCreateSession, UOrionSteamCreateSession::StaticClass, TEXT("UOrionSteamCreateSession"), &Z_Registration_Info_UClass_UOrionSteamCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamCreateSession), 3984893144U) },
		{ Z_Construct_UClass_UOrionSteamFindSession, UOrionSteamFindSession::StaticClass, TEXT("UOrionSteamFindSession"), &Z_Registration_Info_UClass_UOrionSteamFindSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFindSession), 1781172776U) },
		{ Z_Construct_UClass_UOrionSteamJoinSession, UOrionSteamJoinSession::StaticClass, TEXT("UOrionSteamJoinSession"), &Z_Registration_Info_UClass_UOrionSteamJoinSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamJoinSession), 1993880361U) },
		{ Z_Construct_UClass_UOrionSteamDestroySession, UOrionSteamDestroySession::StaticClass, TEXT("UOrionSteamDestroySession"), &Z_Registration_Info_UClass_UOrionSteamDestroySession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamDestroySession), 3101296588U) },
		{ Z_Construct_UClass_UOrionSteamUpdateSession, UOrionSteamUpdateSession::StaticClass, TEXT("UOrionSteamUpdateSession"), &Z_Registration_Info_UClass_UOrionSteamUpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUpdateSession), 785543110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_OrionSteamSDKAPI_1059322741(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
