// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/SteamUserAsyncActions.h"
#include "SteamUser/SteamUserTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamUserAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_NoRegister();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRequestEncryptedAppTicketDelegate ************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 402256911
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "RequestEncryptedAppTicketDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventRequestEncryptedAppTicketDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	RequestEncryptedAppTicketDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRequestEncryptedAppTicketDelegate **************************************

// ********** Begin Delegate FRequestStoreAuthURLDelegate ******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4157254683
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "RequestStoreAuthURLDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful)
{
	struct _Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
	_Script_OrionSteamSDKAPI_eventRequestStoreAuthURLDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	RequestStoreAuthURLDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRequestStoreAuthURLDelegate ********************************************

// ********** Begin Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket Function HandleCallback 
struct Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics
{
	struct OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 402256911
void Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserAsyncActionRequestEncryptedAppTicket::execHandleCallback)
{
	P_GET_STRUCT_REF(FEncryptedAppTicketResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket Function HandleCallback 

// ********** Begin Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket Function RequestEncryptedAppTicketAsync 
struct Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics
{
	struct OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> DataToInclude;
		float Timeout;
		UOrionSteamUserAsyncActionRequestEncryptedAppTicket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DataToInclude" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|User|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\x09 *\n\x09 * The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\n\x09 * There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\n\x09 * After receiving the response you should call GetEncryptedAppTicket to get the ticket Data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\x09 *\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Encrypted App Ticket" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\nThe encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\nThere can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\nAfter receiving the response you should call GetEncryptedAppTicket to get the ticket Data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket, nullptr, "RequestEncryptedAppTicketAsync", Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::OrionSteamUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(uint8,Z_Param_DataToInclude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserAsyncActionRequestEncryptedAppTicket**)Z_Param__Result=UOrionSteamUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(Z_Param_WorldContextObject,Z_Param_DataToInclude,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket Function RequestEncryptedAppTicketAsync 

// ********** Begin Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket **********************
void UOrionSteamUserAsyncActionRequestEncryptedAppTicket::StaticRegisterNativesUOrionSteamUserAsyncActionRequestEncryptedAppTicket()
{
	UClass* Class = UOrionSteamUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserAsyncActionRequestEncryptedAppTicket::execHandleCallback },
		{ "RequestEncryptedAppTicketAsync", &UOrionSteamUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket;
UClass* UOrionSteamUserAsyncActionRequestEncryptedAppTicket::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserAsyncActionRequestEncryptedAppTicket;
	if (!Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserAsyncActionRequestEncryptedAppTicket"),
			Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserAsyncActionRequestEncryptedAppTicket,
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
	return Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_NoRegister()
{
	return UOrionSteamUserAsyncActionRequestEncryptedAppTicket::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserAsyncActionRequestEncryptedAppTicket\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserAsyncActionRequestEncryptedAppTicket\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_HandleCallback, "HandleCallback" }, // 721587845
		{ &Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync, "RequestEncryptedAppTicketAsync" }, // 4018993203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserAsyncActionRequestEncryptedAppTicket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserAsyncActionRequestEncryptedAppTicket, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestEncryptedAppTicketDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 54160630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams = {
	&UOrionSteamUserAsyncActionRequestEncryptedAppTicket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket.OuterSingleton, Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket.OuterSingleton;
}
UOrionSteamUserAsyncActionRequestEncryptedAppTicket::UOrionSteamUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserAsyncActionRequestEncryptedAppTicket);
UOrionSteamUserAsyncActionRequestEncryptedAppTicket::~UOrionSteamUserAsyncActionRequestEncryptedAppTicket() {}
// ********** End Class UOrionSteamUserAsyncActionRequestEncryptedAppTicket ************************

// ********** Begin Class UOrionSteamUserAsyncActionRequestStoreAuthURL Function HandleCallback ****
struct Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics
{
	struct OrionSteamUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4157254683
void Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((OrionSteamUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::OrionSteamUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::OrionSteamUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserAsyncActionRequestStoreAuthURL::execHandleCallback)
{
	P_GET_STRUCT_REF(FStoreAuthURLResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserAsyncActionRequestStoreAuthURL Function HandleCallback ******

// ********** Begin Class UOrionSteamUserAsyncActionRequestStoreAuthURL Function RequestStoreAuthURLAsync 
struct Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics
{
	struct OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms
	{
		UObject* WorldContextObject;
		FString RedirectURL;
		float Timeout;
		UOrionSteamUserAsyncActionRequestStoreAuthURL* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteam|User|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09 *\n\x09 * As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09 * NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09 * NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09 *\n\x09 * @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09 */" },
#endif
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Store Auth URL" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\n@param       Timeout         How long we wait for this function to finish before aborting" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, RedirectURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL, nullptr, "RequestStoreAuthURLAsync", Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::OrionSteamUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUserAsyncActionRequestStoreAuthURL**)Z_Param__Result=UOrionSteamUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(Z_Param_WorldContextObject,Z_Param_RedirectURL,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUserAsyncActionRequestStoreAuthURL Function RequestStoreAuthURLAsync 

// ********** Begin Class UOrionSteamUserAsyncActionRequestStoreAuthURL ****************************
void UOrionSteamUserAsyncActionRequestStoreAuthURL::StaticRegisterNativesUOrionSteamUserAsyncActionRequestStoreAuthURL()
{
	UClass* Class = UOrionSteamUserAsyncActionRequestStoreAuthURL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamUserAsyncActionRequestStoreAuthURL::execHandleCallback },
		{ "RequestStoreAuthURLAsync", &UOrionSteamUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL;
UClass* UOrionSteamUserAsyncActionRequestStoreAuthURL::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUserAsyncActionRequestStoreAuthURL;
	if (!Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUserAsyncActionRequestStoreAuthURL"),
			Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL.InnerSingleton,
			StaticRegisterNativesUOrionSteamUserAsyncActionRequestStoreAuthURL,
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
	return Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_NoRegister()
{
	return UOrionSteamUserAsyncActionRequestStoreAuthURL::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamUserAsyncActionRequestStoreAuthURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamUserAsyncActionRequestStoreAuthURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_HandleCallback, "HandleCallback" }, // 1974644728
		{ &Z_Construct_UFunction_UOrionSteamUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync, "RequestStoreAuthURLAsync" }, // 2485337234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUserAsyncActionRequestStoreAuthURL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUserAsyncActionRequestStoreAuthURL, OnCallback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_RequestStoreAuthURLDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1403659089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::ClassParams = {
	&UOrionSteamUserAsyncActionRequestStoreAuthURL::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL.OuterSingleton, Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL.OuterSingleton;
}
UOrionSteamUserAsyncActionRequestStoreAuthURL::UOrionSteamUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUserAsyncActionRequestStoreAuthURL);
UOrionSteamUserAsyncActionRequestStoreAuthURL::~UOrionSteamUserAsyncActionRequestStoreAuthURL() {}
// ********** End Class UOrionSteamUserAsyncActionRequestStoreAuthURL ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket, UOrionSteamUserAsyncActionRequestEncryptedAppTicket::StaticClass, TEXT("UOrionSteamUserAsyncActionRequestEncryptedAppTicket"), &Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestEncryptedAppTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserAsyncActionRequestEncryptedAppTicket), 1186237403U) },
		{ Z_Construct_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL, UOrionSteamUserAsyncActionRequestStoreAuthURL::StaticClass, TEXT("UOrionSteamUserAsyncActionRequestStoreAuthURL"), &Z_Registration_Info_UClass_UOrionSteamUserAsyncActionRequestStoreAuthURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUserAsyncActionRequestStoreAuthURL), 4294559223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h__Script_OrionSteamSDKAPI_3007164624(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUser_SteamUserAsyncActions_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
