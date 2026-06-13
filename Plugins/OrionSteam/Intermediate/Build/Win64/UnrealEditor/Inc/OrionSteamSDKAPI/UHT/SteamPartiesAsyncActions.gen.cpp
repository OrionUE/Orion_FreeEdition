// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamParties/SteamPartiesAsyncActions.h"
#include "SteamParties/SteamPartiesTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamPartiesAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_NoRegister();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnJoinPartyCallback **************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1165211703
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnJoinPartyCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnJoinPartyCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinPartyCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinPartyCallback ****************************************************

// ********** Begin Delegate FOnCreateBeaconCallback ***********************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2855989342
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnCreateBeaconCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnCreateBeaconCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateBeaconCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateBeaconCallback *************************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsCallback *****************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2082891983
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnChangeNumOpenSlotsCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventOnChangeNumOpenSlotsCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnChangeNumOpenSlotsCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnChangeNumOpenSlotsCallback *******************************************

// ********** Begin Class UOrionSteamPartiesAsyncActionJoinParty Function HandleCallback ***********
struct Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics
{
	struct OrionSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1165211703
void Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::OrionSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::OrionSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamPartiesAsyncActionJoinParty::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinPartyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamPartiesAsyncActionJoinParty Function HandleCallback *************

// ********** Begin Class UOrionSteamPartiesAsyncActionJoinParty Function JoinPartyAsync ***********
struct Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics
{
	struct OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms
	{
		UObject* WorldContextObject;
		FPartyBeaconID BeaconId;
		float Timeout;
		UOrionSteamPartiesAsyncActionJoinParty* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|SteamParties|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When the user indicates they wish to join the party advertised by a given beacon, call this method.\n\x09 * On success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\x09 *\n\x09 * @param\x09""BeaconId\x09\x09""Beacon ID for the party you wish to join.\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Party" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the user indicates they wish to join the party advertised by a given beacon, call this method.\nOn success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\n@param       BeaconId                Beacon ID for the party you wish to join.\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 1773947503
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty, nullptr, "JoinPartyAsync", Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::OrionSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamPartiesAsyncActionJoinParty::execJoinPartyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamPartiesAsyncActionJoinParty**)Z_Param__Result=UOrionSteamPartiesAsyncActionJoinParty::JoinPartyAsync(Z_Param_WorldContextObject,Z_Param_BeaconId,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamPartiesAsyncActionJoinParty Function JoinPartyAsync *************

// ********** Begin Class UOrionSteamPartiesAsyncActionJoinParty ***********************************
void UOrionSteamPartiesAsyncActionJoinParty::StaticRegisterNativesUOrionSteamPartiesAsyncActionJoinParty()
{
	UClass* Class = UOrionSteamPartiesAsyncActionJoinParty::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamPartiesAsyncActionJoinParty::execHandleCallback },
		{ "JoinPartyAsync", &UOrionSteamPartiesAsyncActionJoinParty::execJoinPartyAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty;
UClass* UOrionSteamPartiesAsyncActionJoinParty::GetPrivateStaticClass()
{
	using TClass = UOrionSteamPartiesAsyncActionJoinParty;
	if (!Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamPartiesAsyncActionJoinParty"),
			Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty.InnerSingleton,
			StaticRegisterNativesUOrionSteamPartiesAsyncActionJoinParty,
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
	return Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_NoRegister()
{
	return UOrionSteamPartiesAsyncActionJoinParty::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamPartiesAsyncActionJoinParty\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamPartiesAsyncActionJoinParty\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_HandleCallback, "HandleCallback" }, // 1877267856
		{ &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionJoinParty_JoinPartyAsync, "JoinPartyAsync" }, // 624749924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamPartiesAsyncActionJoinParty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamPartiesAsyncActionJoinParty, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnJoinPartyCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 694639550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::ClassParams = {
	&UOrionSteamPartiesAsyncActionJoinParty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty()
{
	if (!Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty.OuterSingleton, Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty.OuterSingleton;
}
UOrionSteamPartiesAsyncActionJoinParty::UOrionSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamPartiesAsyncActionJoinParty);
UOrionSteamPartiesAsyncActionJoinParty::~UOrionSteamPartiesAsyncActionJoinParty() {}
// ********** End Class UOrionSteamPartiesAsyncActionJoinParty *************************************

// ********** Begin Class UOrionSteamPartiesAsyncActionCreateBeacon Function CreateBeaconAsync *****
struct Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics
{
	struct OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms
	{
		UObject* WorldContextObject;
		int32 OpenSlots;
		FSteamPartyBeaconLocation BeaconLocation;
		FString ConnectString;
		FString Metadata;
		float Timeout;
		UOrionSteamPartiesAsyncActionCreateBeacon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|SteamParties|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a beacon. You can only create one beacon at a time.\n\x09 * Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09 *\n\x09 * If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09 *\n\x09 * @param\x09OpenSlots\x09\x09\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09 * @param\x09""BeaconLocation\x09\x09\x09Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n\x09 * @param\x09""ConnectString\x09\x09\x09""Connect string that will be given to the game on launch for a user that follows the beacon.\n\x09 * @param\x09Metadata\x09\x09\x09\x09""Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n\x09 * @param\x09Timeout\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Beacon" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param       OpenSlots                               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param       BeaconLocation                  Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n@param       ConnectString                   Connect string that will be given to the game on launch for a user that follows the beacon.\n@param       Metadata                                Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n@param       Timeout                                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 1380247389
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Metadata), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon, nullptr, "CreateBeaconAsync", Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::OrionSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamPartiesAsyncActionCreateBeacon**)Z_Param__Result=UOrionSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(Z_Param_WorldContextObject,Z_Param_OpenSlots,Z_Param_BeaconLocation,Z_Param_ConnectString,Z_Param_Metadata,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamPartiesAsyncActionCreateBeacon Function CreateBeaconAsync *******

// ********** Begin Class UOrionSteamPartiesAsyncActionCreateBeacon Function HandleCallback ********
struct Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics
{
	struct OrionSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2855989342
void Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::OrionSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::OrionSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamPartiesAsyncActionCreateBeacon::execHandleCallback)
{
	P_GET_STRUCT_REF(FCreateBeaconData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamPartiesAsyncActionCreateBeacon Function HandleCallback **********

// ********** Begin Class UOrionSteamPartiesAsyncActionCreateBeacon ********************************
void UOrionSteamPartiesAsyncActionCreateBeacon::StaticRegisterNativesUOrionSteamPartiesAsyncActionCreateBeacon()
{
	UClass* Class = UOrionSteamPartiesAsyncActionCreateBeacon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBeaconAsync", &UOrionSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync },
		{ "HandleCallback", &UOrionSteamPartiesAsyncActionCreateBeacon::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon;
UClass* UOrionSteamPartiesAsyncActionCreateBeacon::GetPrivateStaticClass()
{
	using TClass = UOrionSteamPartiesAsyncActionCreateBeacon;
	if (!Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamPartiesAsyncActionCreateBeacon"),
			Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon.InnerSingleton,
			StaticRegisterNativesUOrionSteamPartiesAsyncActionCreateBeacon,
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
	return Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_NoRegister()
{
	return UOrionSteamPartiesAsyncActionCreateBeacon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync, "CreateBeaconAsync" }, // 3006074846
		{ &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionCreateBeacon_HandleCallback, "HandleCallback" }, // 807570490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamPartiesAsyncActionCreateBeacon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamPartiesAsyncActionCreateBeacon, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCreateBeaconCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 655375511
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams = {
	&UOrionSteamPartiesAsyncActionCreateBeacon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon()
{
	if (!Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon.OuterSingleton, Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon.OuterSingleton;
}
UOrionSteamPartiesAsyncActionCreateBeacon::UOrionSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamPartiesAsyncActionCreateBeacon);
UOrionSteamPartiesAsyncActionCreateBeacon::~UOrionSteamPartiesAsyncActionCreateBeacon() {}
// ********** End Class UOrionSteamPartiesAsyncActionCreateBeacon **********************************

// ********** Begin Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots Function ChangeNumOpenSlotsAsync 
struct Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics
{
	struct OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms
	{
		UObject* WorldContextObject;
		FPartyBeaconID BeaconId;
		int32 OpenSlots;
		float Timeout;
		UOrionSteamPartiesAsyncActionChangeNumOpenSlots* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|SteamParties|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a beacon. You can only create one beacon at a time.\n\x09 * Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09 *\n\x09 * If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09 *\n\x09 * @param\x09OpenSlots\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09 * @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Change Num Open Slots" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param       OpenSlots               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param       Timeout                 How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 1773947503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "ChangeNumOpenSlotsAsync", Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamPartiesAsyncActionChangeNumOpenSlots**)Z_Param__Result=UOrionSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(Z_Param_WorldContextObject,Z_Param_BeaconId,Z_Param_OpenSlots,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots Function ChangeNumOpenSlotsAsync 

// ********** Begin Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots Function HandleCallback **
struct Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics
{
	struct OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2082891983
void Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::OrionSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback)
{
	P_GET_STRUCT_REF(FChangeNumOpenSlotsData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots Function HandleCallback ****

// ********** Begin Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots **************************
void UOrionSteamPartiesAsyncActionChangeNumOpenSlots::StaticRegisterNativesUOrionSteamPartiesAsyncActionChangeNumOpenSlots()
{
	UClass* Class = UOrionSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeNumOpenSlotsAsync", &UOrionSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync },
		{ "HandleCallback", &UOrionSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots;
UClass* UOrionSteamPartiesAsyncActionChangeNumOpenSlots::GetPrivateStaticClass()
{
	using TClass = UOrionSteamPartiesAsyncActionChangeNumOpenSlots;
	if (!Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamPartiesAsyncActionChangeNumOpenSlots"),
			Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots.InnerSingleton,
			StaticRegisterNativesUOrionSteamPartiesAsyncActionChangeNumOpenSlots,
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
	return Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister()
{
	return UOrionSteamPartiesAsyncActionChangeNumOpenSlots::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync, "ChangeNumOpenSlotsAsync" }, // 3413200382
		{ &Z_Construct_UFunction_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback, "HandleCallback" }, // 613853795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamPartiesAsyncActionChangeNumOpenSlots>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamPartiesAsyncActionChangeNumOpenSlots, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnChangeNumOpenSlotsCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 236820226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams = {
	&UOrionSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots()
{
	if (!Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton, Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton;
}
UOrionSteamPartiesAsyncActionChangeNumOpenSlots::UOrionSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamPartiesAsyncActionChangeNumOpenSlots);
UOrionSteamPartiesAsyncActionChangeNumOpenSlots::~UOrionSteamPartiesAsyncActionChangeNumOpenSlots() {}
// ********** End Class UOrionSteamPartiesAsyncActionChangeNumOpenSlots ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamPartiesAsyncActionJoinParty, UOrionSteamPartiesAsyncActionJoinParty::StaticClass, TEXT("UOrionSteamPartiesAsyncActionJoinParty"), &Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionJoinParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamPartiesAsyncActionJoinParty), 3273011467U) },
		{ Z_Construct_UClass_UOrionSteamPartiesAsyncActionCreateBeacon, UOrionSteamPartiesAsyncActionCreateBeacon::StaticClass, TEXT("UOrionSteamPartiesAsyncActionCreateBeacon"), &Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionCreateBeacon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamPartiesAsyncActionCreateBeacon), 3889757780U) },
		{ Z_Construct_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots, UOrionSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass, TEXT("UOrionSteamPartiesAsyncActionChangeNumOpenSlots"), &Z_Registration_Info_UClass_UOrionSteamPartiesAsyncActionChangeNumOpenSlots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamPartiesAsyncActionChangeNumOpenSlots), 106558654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h__Script_OrionSteamSDKAPI_3698190148(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamParties_SteamPartiesAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
