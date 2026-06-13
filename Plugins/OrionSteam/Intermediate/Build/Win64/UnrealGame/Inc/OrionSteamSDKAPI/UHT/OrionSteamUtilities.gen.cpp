// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamUtilities.h"
#include "Engine/LatentActionManager.h"
#include "FindSessionsCallbackProxy.h"
#include "OrionSteamSharedTypes.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamUtilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncAction();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtilities();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtilities_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamVoice();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamVoice_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamNetworkingIdentityType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAccountType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAttributeType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamComparisonOp();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamMessageType();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkingIdentity();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFriendListType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFriendListType;
static UEnum* EFriendListType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFriendListType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFriendListType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EFriendListType"));
	}
	return Z_Registration_Info_UEnum_EFriendListType.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EFriendListType>()
{
	return EFriendListType_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/** default friends list */" },
		{ "Default.Name", "Default" },
		{ "Default.ToolTip", "default friends list" },
		{ "InGameAndSessionPlayers.Comment", "/** list of players running the same title/game and in a session that has started */" },
		{ "InGameAndSessionPlayers.Name", "InGameAndSessionPlayers" },
		{ "InGameAndSessionPlayers.ToolTip", "list of players running the same title/game and in a session that has started" },
		{ "InGamePlayers.Comment", "/** list of players running the same title/game */" },
		{ "InGamePlayers.Name", "InGamePlayers" },
		{ "InGamePlayers.ToolTip", "list of players running the same title/game" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "OnlinePlayers.Comment", "/** online players friends list */" },
		{ "OnlinePlayers.Name", "OnlinePlayers" },
		{ "OnlinePlayers.ToolTip", "online players friends list" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Default", (int64)Default },
		{ "OnlinePlayers", (int64)OnlinePlayers },
		{ "InGamePlayers", (int64)InGamePlayers },
		{ "InGameAndSessionPlayers", (int64)InGameAndSessionPlayers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EFriendListType",
	"EFriendListType",
	Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType()
{
	if (!Z_Registration_Info_UEnum_EFriendListType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFriendListType.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFriendListType.InnerSingleton;
}
// ********** End Enum EFriendListType *************************************************************

// ********** Begin Delegate FOnSteamMessage *******************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms
	{
		ESteamMessageType Type;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms, Type), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamMessageType, METADATA_PARAMS(0, nullptr) }; // 2943133721
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSteamMessage__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message)
{
	struct _Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms
	{
		ESteamMessageType Type;
		FString Message;
	};
	_Script_OrionSteamSDKAPI_eventOnSteamMessage_Parms Parms;
	Parms.Type=Type;
	Parms.Message=Message;
	OnSteamMessage.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamMessage *********************************************************

// ********** Begin Delegate FOnHTTPResponse *******************************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnHTTPResponse_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnHTTPResponse_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnHTTPResponse__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnHTTPResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnHTTPResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response)
{
	struct _Script_OrionSteamSDKAPI_eventOnHTTPResponse_Parms
	{
		FString Response;
	};
	_Script_OrionSteamSDKAPI_eventOnHTTPResponse_Parms Parms;
	Parms.Response=Response;
	OnHTTPResponse.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHTTPResponse *********************************************************

// ********** Begin Delegate FOnControllerChangedCallback ******************************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms
	{
		bool bIsConnected;
		int32 UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnControllerChangedCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId)
{
	struct _Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms
	{
		bool bIsConnected;
		int32 UserId;
	};
	_Script_OrionSteamSDKAPI_eventOnControllerChangedCallback_Parms Parms;
	Parms.bIsConnected=bIsConnected ? true : false;
	Parms.UserId=UserId;
	OnControllerChangedCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnControllerChangedCallback ********************************************

// ********** Begin Delegate FOnSessionUserInviteAcceptedCallback **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms
	{
		bool bWasSuccessful;
		int32 LocalPlayerNum;
		FString InvitedBy;
		FBlueprintSessionResult Session;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvitedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms), &Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms, LocalPlayerNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InvitedBy = { "InvitedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms, InvitedBy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms, Session), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 3859927135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalPlayerNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InvitedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_Session,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSessionUserInviteAcceptedCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSessionUserInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteAcceptedCallback, bool bWasSuccessful, int32 LocalPlayerNum, const FString& InvitedBy, FBlueprintSessionResult const& Session)
{
	struct _Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms
	{
		bool bWasSuccessful;
		int32 LocalPlayerNum;
		FString InvitedBy;
		FBlueprintSessionResult Session;
	};
	_Script_OrionSteamSDKAPI_eventOnSessionUserInviteAcceptedCallback_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	Parms.LocalPlayerNum=LocalPlayerNum;
	Parms.InvitedBy=InvitedBy;
	Parms.Session=Session;
	OnSessionUserInviteAcceptedCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSessionUserInviteAcceptedCallback ************************************

// ********** Begin Delegate FOnSessionUserInviteRecievedCallback **********************************
struct Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics
{
	struct _Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms
	{
		FString InvitedBy;
		FBlueprintSessionResult InviteResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvitedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InviteResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::NewProp_InvitedBy = { "InvitedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms, InvitedBy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::NewProp_InviteResult = { "InviteResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms, InviteResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteResult_MetaData), NewProp_InviteResult_MetaData) }; // 3859927135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::NewProp_InvitedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::NewProp_InviteResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI, nullptr, "OnSessionUserInviteRecievedCallback__DelegateSignature", Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::_Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSessionUserInviteRecievedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteRecievedCallback, const FString& InvitedBy, FBlueprintSessionResult const& InviteResult)
{
	struct _Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms
	{
		FString InvitedBy;
		FBlueprintSessionResult InviteResult;
	};
	_Script_OrionSteamSDKAPI_eventOnSessionUserInviteRecievedCallback_Parms Parms;
	Parms.InvitedBy=InvitedBy;
	Parms.InviteResult=InviteResult;
	OnSessionUserInviteRecievedCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSessionUserInviteRecievedCallback ************************************

// ********** Begin Class UOrionSteamVoice Function AddAudioBuffer *********************************
struct Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics
{
	struct OrionSteamVoice_eventAddAudioBuffer_Parms
	{
		TArray<uint8> Buffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVoice_eventAddAudioBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffer_MetaData), NewProp_Buffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::NewProp_Buffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVoice, nullptr, "AddAudioBuffer", Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::OrionSteamVoice_eventAddAudioBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::OrionSteamVoice_eventAddAudioBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVoice::execAddAudioBuffer)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAudioBuffer(Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVoice Function AddAudioBuffer ***********************************

// ********** Begin Class UOrionSteamVoice Function ConstructOrionSteamVoice ***********************
struct Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics
{
	struct OrionSteamVoice_eventConstructOrionSteamVoice_Parms
	{
		int32 AudioSampleRate;
		UOrionSteamVoice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "CPP_Default_AudioSampleRate", "24000" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVoice_eventConstructOrionSteamVoice_Parms, AudioSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVoice_eventConstructOrionSteamVoice_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::NewProp_AudioSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVoice, nullptr, "ConstructOrionSteamVoice", Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::OrionSteamVoice_eventConstructOrionSteamVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::OrionSteamVoice_eventConstructOrionSteamVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVoice::execConstructOrionSteamVoice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AudioSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamVoice**)Z_Param__Result=UOrionSteamVoice::ConstructOrionSteamVoice(Z_Param_AudioSampleRate);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVoice Function ConstructOrionSteamVoice *************************

// ********** Begin Class UOrionSteamVoice Function DestroyOrionSteamVoice *************************
struct Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics
{
	struct OrionSteamVoice_eventDestroyOrionSteamVoice_Parms
	{
		UOrionSteamVoice* OBJ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OBJ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::NewProp_OBJ = { "OBJ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamVoice_eventDestroyOrionSteamVoice_Parms, OBJ), Z_Construct_UClass_UOrionSteamVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::NewProp_OBJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamVoice, nullptr, "DestroyOrionSteamVoice", Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::OrionSteamVoice_eventDestroyOrionSteamVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::OrionSteamVoice_eventDestroyOrionSteamVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamVoice::execDestroyOrionSteamVoice)
{
	P_GET_OBJECT(UOrionSteamVoice,Z_Param_OBJ);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamVoice::DestroyOrionSteamVoice(Z_Param_OBJ);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamVoice Function DestroyOrionSteamVoice ***************************

// ********** Begin Class UOrionSteamVoice *********************************************************
void UOrionSteamVoice::StaticRegisterNativesUOrionSteamVoice()
{
	UClass* Class = UOrionSteamVoice::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAudioBuffer", &UOrionSteamVoice::execAddAudioBuffer },
		{ "ConstructOrionSteamVoice", &UOrionSteamVoice::execConstructOrionSteamVoice },
		{ "DestroyOrionSteamVoice", &UOrionSteamVoice::execDestroyOrionSteamVoice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamVoice;
UClass* UOrionSteamVoice::GetPrivateStaticClass()
{
	using TClass = UOrionSteamVoice;
	if (!Z_Registration_Info_UClass_UOrionSteamVoice.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamVoice"),
			Z_Registration_Info_UClass_UOrionSteamVoice.InnerSingleton,
			StaticRegisterNativesUOrionSteamVoice,
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
	return Z_Registration_Info_UClass_UOrionSteamVoice.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamVoice_NoRegister()
{
	return UOrionSteamVoice::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamVoice_AddAudioBuffer, "AddAudioBuffer" }, // 4282502190
		{ &Z_Construct_UFunction_UOrionSteamVoice_ConstructOrionSteamVoice, "ConstructOrionSteamVoice" }, // 3253936603
		{ &Z_Construct_UFunction_UOrionSteamVoice_DestroyOrionSteamVoice, "DestroyOrionSteamVoice" }, // 3786173284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamVoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamVoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamVoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamVoice_Statics::ClassParams = {
	&UOrionSteamVoice::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamVoice_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamVoice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamVoice()
{
	if (!Z_Registration_Info_UClass_UOrionSteamVoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamVoice.OuterSingleton, Z_Construct_UClass_UOrionSteamVoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamVoice.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamVoice);
UOrionSteamVoice::~UOrionSteamVoice() {}
// ********** End Class UOrionSteamVoice ***********************************************************

// ********** Begin Class UOrionSteamAsyncActionListenForControllerChange Function HandleCallback **
struct Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics
{
	struct OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms
	{
		bool bIsConnected;
		int32 PlatformUserId;
		int32 UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms), &Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms, PlatformUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange, nullptr, "HandleCallback", Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::OrionSteamAsyncActionListenForControllerChange_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAsyncActionListenForControllerChange::execHandleCallback)
{
	P_GET_UBOOL(Z_Param_bIsConnected);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlatformUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_bIsConnected,Z_Param_PlatformUserId,Z_Param_UserId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAsyncActionListenForControllerChange Function HandleCallback ****

// ********** Begin Class UOrionSteamAsyncActionListenForControllerChange Function ListenForControllerChange 
struct Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics
{
	struct OrionSteamAsyncActionListenForControllerChange_eventListenForControllerChange_Parms
	{
		UObject* WorldContextObject;
		UOrionSteamAsyncActionListenForControllerChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange, nullptr, "ListenForControllerChange", Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::OrionSteamAsyncActionListenForControllerChange_eventListenForControllerChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::OrionSteamAsyncActionListenForControllerChange_eventListenForControllerChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAsyncActionListenForControllerChange::execListenForControllerChange)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamAsyncActionListenForControllerChange**)Z_Param__Result=UOrionSteamAsyncActionListenForControllerChange::ListenForControllerChange(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAsyncActionListenForControllerChange Function ListenForControllerChange 

// ********** Begin Class UOrionSteamAsyncActionListenForControllerChange **************************
void UOrionSteamAsyncActionListenForControllerChange::StaticRegisterNativesUOrionSteamAsyncActionListenForControllerChange()
{
	UClass* Class = UOrionSteamAsyncActionListenForControllerChange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &UOrionSteamAsyncActionListenForControllerChange::execHandleCallback },
		{ "ListenForControllerChange", &UOrionSteamAsyncActionListenForControllerChange::execListenForControllerChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange;
UClass* UOrionSteamAsyncActionListenForControllerChange::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAsyncActionListenForControllerChange;
	if (!Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAsyncActionListenForControllerChange"),
			Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange.InnerSingleton,
			StaticRegisterNativesUOrionSteamAsyncActionListenForControllerChange,
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
	return Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_NoRegister()
{
	return UOrionSteamAsyncActionListenForControllerChange::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAsyncActionListenForControllerChange\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAsyncActionListenForControllerChange\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_HandleCallback, "HandleCallback" }, // 1613346046
		{ &Z_Construct_UFunction_UOrionSteamAsyncActionListenForControllerChange_ListenForControllerChange, "ListenForControllerChange" }, // 3403456089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAsyncActionListenForControllerChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged = { "OnControllerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamAsyncActionListenForControllerChange, OnControllerChanged), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnControllerChangedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerChanged_MetaData), NewProp_OnControllerChanged_MetaData) }; // 4064114623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::ClassParams = {
	&UOrionSteamAsyncActionListenForControllerChange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange.OuterSingleton, Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange.OuterSingleton;
}
UOrionSteamAsyncActionListenForControllerChange::UOrionSteamAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAsyncActionListenForControllerChange);
UOrionSteamAsyncActionListenForControllerChange::~UOrionSteamAsyncActionListenForControllerChange() {}
// ********** End Class UOrionSteamAsyncActionListenForControllerChange ****************************

// ********** Begin Enum EOrionSteamValid **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamValid;
static UEnum* EOrionSteamValid_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamValid.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamValid.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamValid"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamValid.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamValid>()
{
	return EOrionSteamValid_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NotValid.Name", "EOrionSteamValid::NotValid" },
		{ "Valid.Name", "EOrionSteamValid::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamValid::Valid", (int64)EOrionSteamValid::Valid },
		{ "EOrionSteamValid::NotValid", (int64)EOrionSteamValid::NotValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamValid",
	"EOrionSteamValid",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamValid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamValid.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamValid.InnerSingleton;
}
// ********** End Enum EOrionSteamValid ************************************************************

// ********** Begin Enum EOrionSteamIdentical ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamIdentical;
static UEnum* EOrionSteamIdentical_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamIdentical.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamIdentical.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamIdentical"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamIdentical.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamIdentical>()
{
	return EOrionSteamIdentical_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Identical.Name", "EOrionSteamIdentical::Identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NotIdentical.Name", "EOrionSteamIdentical::NotIdentical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamIdentical::Identical", (int64)EOrionSteamIdentical::Identical },
		{ "EOrionSteamIdentical::NotIdentical", (int64)EOrionSteamIdentical::NotIdentical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamIdentical",
	"EOrionSteamIdentical",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamIdentical.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamIdentical.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamIdentical.InnerSingleton;
}
// ********** End Enum EOrionSteamIdentical ********************************************************

// ********** Begin Class UOrionSteamUtilities Function BP_BytesToString ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics
{
	struct OrionSteamUtilities_eventBP_BytesToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Bytes to String" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBP_BytesToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBP_BytesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BP_BytesToString", Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::OrionSteamUtilities_eventBP_BytesToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::OrionSteamUtilities_eventBP_BytesToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBP_BytesToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BP_BytesToString(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BP_BytesToString *****************************

// ********** Begin Class UOrionSteamUtilities Function BP_StringToBytes ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics
{
	struct OrionSteamUtilities_eventBP_StringToBytes_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "String to Bytes" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBP_StringToBytes_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBP_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BP_StringToBytes", Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::OrionSteamUtilities_eventBP_StringToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::OrionSteamUtilities_eventBP_StringToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBP_StringToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UOrionSteamUtilities::BP_StringToBytes(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BP_StringToBytes *****************************

// ********** Begin Class UOrionSteamUtilities Function BreakInventoryUpdateHandle *****************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics
{
	struct OrionSteamUtilities_eventBreakInventoryUpdateHandle_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakInventoryUpdateHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakInventoryUpdateHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakInventoryUpdateHandle", Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::OrionSteamUtilities_eventBreakInventoryUpdateHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::OrionSteamUtilities_eventBreakInventoryUpdateHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakInventoryUpdateHandle)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BreakInventoryUpdateHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakInventoryUpdateHandle *******************

// ********** Begin Class UOrionSteamUtilities Function BreakPublishedFileID ***********************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics
{
	struct OrionSteamUtilities_eventBreakPublishedFileID_Parms
	{
		FPublishedFileID FileID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID = { "FileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakPublishedFileID_Parms, FileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakPublishedFileID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakPublishedFileID", Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::OrionSteamUtilities_eventBreakPublishedFileID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::OrionSteamUtilities_eventBreakPublishedFileID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakPublishedFileID)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_FileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BreakPublishedFileID(Z_Param_FileID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakPublishedFileID *************************

// ********** Begin Class UOrionSteamUtilities Function BreakSteamGameID ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics
{
	struct OrionSteamUtilities_eventBreakSteamGameID_Parms
	{
		FSteamGameID SteamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakSteamGameID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 1837921192
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakSteamGameID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakSteamGameID", Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::OrionSteamUtilities_eventBreakSteamGameID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::OrionSteamUtilities_eventBreakSteamGameID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakSteamGameID)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BreakSteamGameID(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakSteamGameID *****************************

// ********** Begin Class UOrionSteamUtilities Function BreakSteamID *******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics
{
	struct OrionSteamUtilities_eventBreakSteamID_Parms
	{
		FSteamID SteamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakSteamID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakSteamID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakSteamID", Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::OrionSteamUtilities_eventBreakSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::OrionSteamUtilities_eventBreakSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakSteamID)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BreakSteamID(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakSteamID *********************************

// ********** Begin Class UOrionSteamUtilities Function BreakSteamItemInstanceID *******************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics
{
	struct OrionSteamUtilities_eventBreakSteamItemInstanceID_Parms
	{
		FSteamItemInstanceID SteamItemInstanceID;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamItemInstanceID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_SteamItemInstanceID = { "SteamItemInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakSteamItemInstanceID_Parms, SteamItemInstanceID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakSteamItemInstanceID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_SteamItemInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakSteamItemInstanceID", Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::OrionSteamUtilities_eventBreakSteamItemInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::OrionSteamUtilities_eventBreakSteamItemInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakSteamItemInstanceID)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_SteamItemInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UOrionSteamUtilities::BreakSteamItemInstanceID(Z_Param_SteamItemInstanceID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakSteamItemInstanceID *********************

// ********** Begin Class UOrionSteamUtilities Function BreakTicketHandle **************************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics
{
	struct OrionSteamUtilities_eventBreakTicketHandle_Parms
	{
		FSteamTicketHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakTicketHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 3663624285
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakTicketHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakTicketHandle", Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::OrionSteamUtilities_eventBreakTicketHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::OrionSteamUtilities_eventBreakTicketHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakTicketHandle)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BreakTicketHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakTicketHandle ****************************

// ********** Begin Class UOrionSteamUtilities Function BreakUGCHandle *****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics
{
	struct OrionSteamUtilities_eventBreakUGCHandle_Parms
	{
		FSteamUGCHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakUGCHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 4209419894
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventBreakUGCHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "BreakUGCHandle", Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::OrionSteamUtilities_eventBreakUGCHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::OrionSteamUtilities_eventBreakUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execBreakUGCHandle)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::BreakUGCHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function BreakUGCHandle *******************************

// ********** Begin Class UOrionSteamUtilities Function ConstructServerFilter **********************
struct Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics
{
	struct OrionSteamUtilities_eventConstructServerFilter_Parms
	{
		UObject* WorldContextObject;
		UServerFilter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventConstructServerFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventConstructServerFilter_Parms, ReturnValue), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ConstructServerFilter", Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::OrionSteamUtilities_eventConstructServerFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::OrionSteamUtilities_eventConstructServerFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execConstructServerFilter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UServerFilter**)Z_Param__Result=UOrionSteamUtilities::ConstructServerFilter(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ConstructServerFilter ************************

// ********** Begin Class UOrionSteamUtilities Function EncryptString ******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics
{
	struct OrionSteamUtilities_eventEncryptString_Parms
	{
		FString String;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a hashed/encrypted version of the string\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a hashed/encrypted version of the string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEncryptString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEncryptString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "EncryptString", Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::OrionSteamUtilities_eventEncryptString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::OrionSteamUtilities_eventEncryptString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_EncryptString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_EncryptString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execEncryptString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::EncryptString(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function EncryptString ********************************

// ********** Begin Class UOrionSteamUtilities Function Equal **************************************
struct Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics
{
	struct OrionSteamUtilities_eventEqual_Parms
	{
		FSteamID A;
		FSteamID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventEqual_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "Equal", Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::OrionSteamUtilities_eventEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::OrionSteamUtilities_eventEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_Equal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_Equal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execEqual)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::Equal(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function Equal ****************************************

// ********** Begin Class UOrionSteamUtilities Function Equal_Exec *********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics
{
	struct OrionSteamUtilities_eventEqual_Exec_Parms
	{
		FSteamID A;
		FSteamID b;
		EOrionSteamIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_b;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEqual_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEqual_Exec_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b_MetaData), NewProp_b_MetaData) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventEqual_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical, METADATA_PARAMS(0, nullptr) }; // 204710683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "Equal_Exec", Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::OrionSteamUtilities_eventEqual_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::OrionSteamUtilities_eventEqual_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execEqual_Exec)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_b);
	P_GET_ENUM_REF(EOrionSteamIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::Equal_Exec(Z_Param_A,Z_Param_b,(EOrionSteamIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function Equal_Exec ***********************************

// ********** Begin Class UOrionSteamUtilities Function FromUnixTimestamp **************************
struct Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics
{
	struct OrionSteamUtilities_eventFromUnixTimestamp_Parms
	{
		FString Timestamp;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventFromUnixTimestamp_Parms, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventFromUnixTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "FromUnixTimestamp", Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::OrionSteamUtilities_eventFromUnixTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::OrionSteamUtilities_eventFromUnixTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execFromUnixTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=UOrionSteamUtilities::FromUnixTimestamp(Z_Param_Timestamp);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function FromUnixTimestamp ****************************

// ********** Begin Class UOrionSteamUtilities Function GetAccountId *******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics
{
	struct OrionSteamUtilities_eventGetAccountId_Parms
	{
		FSteamID SteamId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetAccountId_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetAccountId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetAccountId", Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::OrionSteamUtilities_eventGetAccountId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::OrionSteamUtilities_eventGetAccountId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetAccountId)
{
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::GetAccountId(Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetAccountId *********************************

// ********** Begin Class UOrionSteamUtilities Function GetAccountType *****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics
{
	struct OrionSteamUtilities_eventGetAccountType_Parms
	{
		FSteamID SteamID;
		ESteamAccountType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetAccountType_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetAccountType_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAccountType, METADATA_PARAMS(0, nullptr) }; // 3800982049
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetAccountType", Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::OrionSteamUtilities_eventGetAccountType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::OrionSteamUtilities_eventGetAccountType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetAccountType)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAccountType*)Z_Param__Result=UOrionSteamUtilities::GetAccountType(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetAccountType *******************************

// ********** Begin Class UOrionSteamUtilities Function GetFriendsList *****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics
{
	struct OrionSteamUtilities_eventGetFriendsList_Parms
	{
		TEnumAsByte<EFriendListType> FriendListType;
		TArray<FOnlineFriendOrionSteamBlueprint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Get Friends list\n\x09 * Copies the list of friends for the player previously retrieved from the online service\n\x09 *\n\x09 * Call ReadFriendList function before calling this to ensure you're getting an updated version of your friends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Get Friends list\n* Copies the list of friends for the player previously retrieved from the online service\n*\n* Call ReadFriendList function before calling this to ensure you're getting an updated version of your friends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendListType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::NewProp_FriendListType = { "FriendListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetFriendsList_Parms, FriendListType), Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType, METADATA_PARAMS(0, nullptr) }; // 3380097800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOnlineFriendOrionSteamBlueprint, METADATA_PARAMS(0, nullptr) }; // 366832869
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetFriendsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 366832869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::NewProp_FriendListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetFriendsList", Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::OrionSteamUtilities_eventGetFriendsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::OrionSteamUtilities_eventGetFriendsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetFriendsList)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FriendListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOnlineFriendOrionSteamBlueprint>*)Z_Param__Result=UOrionSteamUtilities::GetFriendsList(EFriendListType(Z_Param_FriendListType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetFriendsList *******************************

// ********** Begin Class UOrionSteamUtilities Function GetGameEngineInitialized *******************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics
{
	struct OrionSteamUtilities_eventGetGameEngineInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventGetGameEngineInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventGetGameEngineInitialized_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetGameEngineInitialized", Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::OrionSteamUtilities_eventGetGameEngineInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::OrionSteamUtilities_eventGetGameEngineInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetGameEngineInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::GetGameEngineInitialized();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetGameEngineInitialized *********************

// ********** Begin Class UOrionSteamUtilities Function GetHostPingData ****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics
{
	struct OrionSteamUtilities_eventGetHostPingData_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the P2P relay ping information for the current machine. This information can be\n\x09 * serialized over the network and used to calculate the ping data between a client and a host.\n\x09 *\n\x09 * @return relay information blob stored as a string for relaying over the network.\n\x09 *         If an error occurred, the return is an empty string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the P2P relay ping information for the current machine. This information can be\nserialized over the network and used to calculate the ping data between a client and a host.\n\n@return relay information blob stored as a string for relaying over the network.\n        If an error occurred, the return is an empty string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetHostPingData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetHostPingData", Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::OrionSteamUtilities_eventGetHostPingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::OrionSteamUtilities_eventGetHostPingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetHostPingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::GetHostPingData();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetHostPingData ******************************

// ********** Begin Class UOrionSteamUtilities Function GetInteger *********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics
{
	struct OrionSteamUtilities_eventGetInteger_Parms
	{
		FSteamSessionSetting Settings;
		FString Key;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Function for getting a Integer attribute from session settings\n\x09 * the function will return false if the string was not found or is not a integer\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Function for getting a Integer attribute from session settings\n* the function will return false if the string was not found or is not a integer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetInteger_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetInteger_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetInteger_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventGetInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventGetInteger_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetInteger", Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::OrionSteamUtilities_eventGetInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::OrionSteamUtilities_eventGetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetInteger)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::GetInteger(Z_Param_Settings,Z_Param_Out_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetInteger ***********************************

// ********** Begin Class UOrionSteamUtilities Function GetPingFromHostData ************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics
{
	struct OrionSteamUtilities_eventGetPingFromHostData_Parms
	{
		FString Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\x09 *\n\x09 * @param HostPingStr The relay information blob we got from the host. This information\n\x09 *                    should be directly serialized over the network and not tampered with.\n\x09 *\n\x09 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\n@param HostPingStr The relay information blob we got from the host. This information\n                   should be directly serialized over the network and not tampered with.\n\n@return The ping value to the given host if it can be calculated, otherwise -1 on error." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetPingFromHostData_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetPingFromHostData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetPingFromHostData", Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::OrionSteamUtilities_eventGetPingFromHostData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::OrionSteamUtilities_eventGetPingFromHostData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetPingFromHostData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtilities::GetPingFromHostData(Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetPingFromHostData **************************

// ********** Begin Class UOrionSteamUtilities Function GetPublicIp ********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics
{
	struct OrionSteamUtilities_eventGetPublicIp_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Try getting our public ip\n" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try getting our public ip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetPublicIp_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnHTTPResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1089361380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetPublicIp", Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::OrionSteamUtilities_eventGetPublicIp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::OrionSteamUtilities_eventGetPublicIp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetPublicIp)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::GetPublicIp(FOnHTTPResponse(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetPublicIp **********************************

// ********** Begin Class UOrionSteamUtilities Function GetSteamIdFromPlayerState ******************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics
{
	struct OrionSteamUtilities_eventGetSteamIdFromPlayerState_Parms
	{
		APlayerState* PlayerState;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetSteamIdFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetSteamIdFromPlayerState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetSteamIdFromPlayerState", Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::OrionSteamUtilities_eventGetSteamIdFromPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::OrionSteamUtilities_eventGetSteamIdFromPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetSteamIdFromPlayerState)
{
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamUtilities::GetSteamIdFromPlayerState(Z_Param_PlayerState);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetSteamIdFromPlayerState ********************

// ********** Begin Class UOrionSteamUtilities Function GetString **********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics
{
	struct OrionSteamUtilities_eventGetString_Parms
	{
		FSteamSessionSetting Settings;
		FString Key;
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Function for getting a String attribute from session settings\n\x09 * the function will return false if the string was not found or is not a string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Function for getting a String attribute from session settings\n* the function will return false if the string was not found or is not a string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetString_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetString_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventGetString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventGetString_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetString", Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::OrionSteamUtilities_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::OrionSteamUtilities_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetString)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::GetString(Z_Param_Settings,Z_Param_Out_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetString ************************************

// ********** Begin Class UOrionSteamUtilities Function GetType ************************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics
{
	struct OrionSteamUtilities_eventGetType_Parms
	{
		FSteamSessionSetting Settings;
		ESteamAttributeType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetType_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamAttributeType, METADATA_PARAMS(0, nullptr) }; // 2966462703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetType", Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::OrionSteamUtilities_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::OrionSteamUtilities_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetType)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAttributeType*)Z_Param__Result=UOrionSteamUtilities::GetType(Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetType **************************************

// ********** Begin Class UOrionSteamUtilities Function GetVoiceInputDevice ************************
struct Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics
{
	struct OrionSteamUtilities_eventGetVoiceInputDevice_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventGetVoiceInputDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "GetVoiceInputDevice", Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::OrionSteamUtilities_eventGetVoiceInputDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::OrionSteamUtilities_eventGetVoiceInputDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execGetVoiceInputDevice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::GetVoiceInputDevice();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function GetVoiceInputDevice **************************

// ********** Begin Class UOrionSteamUtilities Function IsGameIDValid ******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics
{
	struct OrionSteamUtilities_eventIsGameIDValid_Parms
	{
		FSteamGameID GameID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsGameIDValid_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1837921192
void Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsGameIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsGameIDValid_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsGameIDValid", Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::OrionSteamUtilities_eventIsGameIDValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::OrionSteamUtilities_eventIsGameIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsGameIDValid)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsGameIDValid(Z_Param_GameID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsGameIDValid ********************************

// ********** Begin Class UOrionSteamUtilities Function IsGameIDValid_Exec *************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics
{
	struct OrionSteamUtilities_eventIsGameIDValid_Exec_Parms
	{
		FSteamGameID GameID;
		EOrionSteamValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsGameIDValid_Exec_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1837921192
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsGameIDValid_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, METADATA_PARAMS(0, nullptr) }; // 179084096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsGameIDValid_Exec", Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::OrionSteamUtilities_eventIsGameIDValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::OrionSteamUtilities_eventIsGameIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsGameIDValid_Exec)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
	P_GET_ENUM_REF(EOrionSteamValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::IsGameIDValid_Exec(Z_Param_GameID,(EOrionSteamValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsGameIDValid_Exec ***************************

// ********** Begin Class UOrionSteamUtilities Function IsLobby ************************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics
{
	struct OrionSteamUtilities_eventIsLobby_Parms
	{
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsLobby_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsLobby_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsLobby", Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::OrionSteamUtilities_eventIsLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::OrionSteamUtilities_eventIsLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsLobby(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsLobby **************************************

// ********** Begin Class UOrionSteamUtilities Function IsLocalPlayerTalking ***********************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics
{
	struct OrionSteamUtilities_eventIsLocalPlayerTalking_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether a local user index is currently talking or not\n\x09 *\n\x09 * @param UserIndex the user to check status for\n\x09 *\n\x09 * @return true if the user is talking, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether a local user index is currently talking or not\n\n@param UserIndex the user to check status for\n\n@return true if the user is talking, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsLocalPlayerTalking_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsLocalPlayerTalking_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsLocalPlayerTalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsLocalPlayerTalking_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsLocalPlayerTalking", Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::OrionSteamUtilities_eventIsLocalPlayerTalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::OrionSteamUtilities_eventIsLocalPlayerTalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsLocalPlayerTalking)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsLocalPlayerTalking(Z_Param_WorldContextObject,Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsLocalPlayerTalking *************************

// ********** Begin Class UOrionSteamUtilities Function IsPlayerMuted ******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics
{
	struct OrionSteamUtilities_eventIsPlayerMuted_Parms
	{
		UObject* WorldContextObject;
		APlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks that a unique player id is on the specified user's mute list\n\x09 *\n\x09 * @param Player the id of the player being checked\n\x09 *\n\x09 * @return true if the specified user is muted, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks that a unique player id is on the specified user's mute list\n\n@param Player the id of the player being checked\n\n@return true if the specified user is muted, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsPlayerMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsPlayerMuted_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsPlayerMuted_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsPlayerMuted", Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::OrionSteamUtilities_eventIsPlayerMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::OrionSteamUtilities_eventIsPlayerMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsPlayerMuted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsPlayerMuted(Z_Param_WorldContextObject,Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsPlayerMuted ********************************

// ********** Begin Class UOrionSteamUtilities Function IsPublishedFileIDValid *********************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics
{
	struct OrionSteamUtilities_eventIsPublishedFileIDValid_Parms
	{
		FPublishedFileID PublishedFileId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsPublishedFileIDValid_Parms, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsPublishedFileIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsPublishedFileIDValid_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsPublishedFileIDValid", Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::OrionSteamUtilities_eventIsPublishedFileIDValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::OrionSteamUtilities_eventIsPublishedFileIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsPublishedFileIDValid)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsPublishedFileIDValid(Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsPublishedFileIDValid ***********************

// ********** Begin Class UOrionSteamUtilities Function IsPublishedFileIDValid_Exec ****************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics
{
	struct OrionSteamUtilities_eventIsPublishedFileIDValid_Exec_Parms
	{
		FPublishedFileID Handle;
		EOrionSteamValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 2295931229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, METADATA_PARAMS(0, nullptr) }; // 179084096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsPublishedFileIDValid_Exec", Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::OrionSteamUtilities_eventIsPublishedFileIDValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::OrionSteamUtilities_eventIsPublishedFileIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsPublishedFileIDValid_Exec)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_Handle);
	P_GET_ENUM_REF(EOrionSteamValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::IsPublishedFileIDValid_Exec(Z_Param_Handle,(EOrionSteamValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsPublishedFileIDValid_Exec ******************

// ********** Begin Class UOrionSteamUtilities Function IsRecalculatingPing ************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics
{
	struct OrionSteamUtilities_eventIsRecalculatingPing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An informative member that allows us to check if we are recalculating our ping\n\x09 * information over the Valve network. Data is additively modified during recalculation\n\x09 * such that we do not need to block on this function returning false before using\n\x09 * ping data.\n\x09 *\n\x09 * @return true if we're recalculating our ping within the Valve relay network.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An informative member that allows us to check if we are recalculating our ping\ninformation over the Valve network. Data is additively modified during recalculation\nsuch that we do not need to block on this function returning false before using\nping data.\n\n@return true if we're recalculating our ping within the Valve relay network." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsRecalculatingPing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsRecalculatingPing_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsRecalculatingPing", Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::OrionSteamUtilities_eventIsRecalculatingPing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::OrionSteamUtilities_eventIsRecalculatingPing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsRecalculatingPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsRecalculatingPing();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsRecalculatingPing **************************

// ********** Begin Class UOrionSteamUtilities Function IsRemotePlayerTalking **********************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics
{
	struct OrionSteamUtilities_eventIsRemotePlayerTalking_Parms
	{
		UObject* WorldContextObject;
		APlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether a remote talker is currently talking or not\n\x09 *\n\x09 * @param Player the unique id of the talker to check status on\n\x09 *\n\x09 * @return true if the user is talking, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether a remote talker is currently talking or not\n\n@param Player the unique id of the talker to check status on\n\n@return true if the user is talking, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsRemotePlayerTalking_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsRemotePlayerTalking_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsRemotePlayerTalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsRemotePlayerTalking_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsRemotePlayerTalking", Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::OrionSteamUtilities_eventIsRemotePlayerTalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::OrionSteamUtilities_eventIsRemotePlayerTalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsRemotePlayerTalking)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsRemotePlayerTalking(Z_Param_WorldContextObject,Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsRemotePlayerTalking ************************

// ********** Begin Class UOrionSteamUtilities Function IsSteamAvailable ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics
{
	struct OrionSteamUtilities_eventIsSteamAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsSteamAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsSteamAvailable_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamAvailable", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::OrionSteamUtilities_eventIsSteamAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::OrionSteamUtilities_eventIsSteamAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsSteamAvailable();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamAvailable *****************************

// ********** Begin Class UOrionSteamUtilities Function IsSteamIDValid_Exec ************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics
{
	struct OrionSteamUtilities_eventIsSteamIDValid_Exec_Parms
	{
		FSteamID SteamID;
		EOrionSteamValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamIDValid_Exec_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 3241029009
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamIDValid_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, METADATA_PARAMS(0, nullptr) }; // 179084096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamIDValid_Exec", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::OrionSteamUtilities_eventIsSteamIDValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::OrionSteamUtilities_eventIsSteamIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamIDValid_Exec)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_ENUM_REF(EOrionSteamValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::IsSteamIDValid_Exec(Z_Param_SteamID,(EOrionSteamValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamIDValid_Exec **************************

// ********** Begin Class UOrionSteamUtilities Function IsSteamInventoryUpdateHandleValid **********
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics
{
	struct OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3607744349
void Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamInventoryUpdateHandleValid)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsSteamInventoryUpdateHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamInventoryUpdateHandleValid ************

// ********** Begin Class UOrionSteamUtilities Function IsSteamInventoryUpdateHandleValid_Exec *****
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics
{
	struct OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		EOrionSteamValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3607744349
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, METADATA_PARAMS(0, nullptr) }; // 179084096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid_Exec", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::OrionSteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_ENUM_REF(EOrionSteamValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(Z_Param_Handle,(EOrionSteamValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamInventoryUpdateHandleValid_Exec *******

// ********** Begin Class UOrionSteamUtilities Function IsSteamServerInitialized *******************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics
{
	struct OrionSteamUtilities_eventIsSteamServerInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsSteamServerInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsSteamServerInitialized_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamServerInitialized", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::OrionSteamUtilities_eventIsSteamServerInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::OrionSteamUtilities_eventIsSteamServerInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamServerInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsSteamServerInitialized();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamServerInitialized *********************

// ********** Begin Class UOrionSteamUtilities Function IsSteamTicketHandleValid *******************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics
{
	struct OrionSteamUtilities_eventIsSteamTicketHandleValid_Parms
	{
		FSteamTicketHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamTicketHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3663624285
void Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsSteamTicketHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsSteamTicketHandleValid_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamTicketHandleValid", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::OrionSteamUtilities_eventIsSteamTicketHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::OrionSteamUtilities_eventIsSteamTicketHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamTicketHandleValid)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsSteamTicketHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamTicketHandleValid *********************

// ********** Begin Class UOrionSteamUtilities Function IsSteamTicketHandleValid_Exec **************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics
{
	struct OrionSteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms
	{
		FSteamTicketHandle Handle;
		EOrionSteamValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3663624285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, METADATA_PARAMS(0, nullptr) }; // 179084096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsSteamTicketHandleValid_Exec", Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::OrionSteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::OrionSteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsSteamTicketHandleValid_Exec)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_GET_ENUM_REF(EOrionSteamValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::IsSteamTicketHandleValid_Exec(Z_Param_Handle,(EOrionSteamValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsSteamTicketHandleValid_Exec ****************

// ********** Begin Class UOrionSteamUtilities Function IsUGCHandleValid ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics
{
	struct OrionSteamUtilities_eventIsUGCHandleValid_Parms
	{
		FSteamUGCHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsUGCHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 4209419894
void Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsUGCHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsUGCHandleValid_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsUGCHandleValid", Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::OrionSteamUtilities_eventIsUGCHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::OrionSteamUtilities_eventIsUGCHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsUGCHandleValid)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsUGCHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsUGCHandleValid *****************************

// ********** Begin Class UOrionSteamUtilities Function IsUGCHandleValid_Exec **********************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics
{
	struct OrionSteamUtilities_eventIsUGCHandleValid_Exec_Parms
	{
		FSteamUGCHandle Handle;
		EOrionSteamValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsUGCHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 4209419894
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsUGCHandleValid_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamValid, METADATA_PARAMS(0, nullptr) }; // 179084096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsUGCHandleValid_Exec", Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::OrionSteamUtilities_eventIsUGCHandleValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::OrionSteamUtilities_eventIsUGCHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsUGCHandleValid_Exec)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_ENUM_REF(EOrionSteamValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::IsUGCHandleValid_Exec(Z_Param_Handle,(EOrionSteamValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsUGCHandleValid_Exec ************************

// ********** Begin Class UOrionSteamUtilities Function IsUsingP2PRelays ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics
{
	struct OrionSteamUtilities_eventIsUsingP2PRelays_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns if this application is set up to use the Steam P2P Relay Network\n\x09 * for communication.\n\x09 *\n\x09 * Uses OrionOnlineSubsystemSteam.bAllowP2PPacketRelay\n\x09 *\n\x09 * @return true if relays are enabled for P2P connections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if this application is set up to use the Steam P2P Relay Network\nfor communication.\n\nUses OrionOnlineSubsystemSteam.bAllowP2PPacketRelay\n\n@return true if relays are enabled for P2P connections." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsUsingP2PRelays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsUsingP2PRelays_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsUsingP2PRelays", Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::OrionSteamUtilities_eventIsUsingP2PRelays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::OrionSteamUtilities_eventIsUsingP2PRelays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsUsingP2PRelays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsUsingP2PRelays();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsUsingP2PRelays *****************************

// ********** Begin Class UOrionSteamUtilities Function IsValid ************************************
struct Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics
{
	struct OrionSteamUtilities_eventIsValid_Parms
	{
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventIsValid_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventIsValid_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "IsValid", Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::OrionSteamUtilities_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::OrionSteamUtilities_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execIsValid)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::IsValid(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function IsValid **************************************

// ********** Begin Class UOrionSteamUtilities Function K2_HexToBytes ******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics
{
	struct OrionSteamUtilities_eventK2_HexToBytes_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Hex to Bytes" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventK2_HexToBytes_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventK2_HexToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "K2_HexToBytes", Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::OrionSteamUtilities_eventK2_HexToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::OrionSteamUtilities_eventK2_HexToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execK2_HexToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UOrionSteamUtilities::K2_HexToBytes(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function K2_HexToBytes ********************************

// ********** Begin Class UOrionSteamUtilities Function K2_HexToString *****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics
{
	struct OrionSteamUtilities_eventK2_HexToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Hex to String" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventK2_HexToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventK2_HexToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "K2_HexToString", Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::OrionSteamUtilities_eventK2_HexToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::OrionSteamUtilities_eventK2_HexToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execK2_HexToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtilities::K2_HexToString(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function K2_HexToString *******************************

// ********** Begin Class UOrionSteamUtilities Function K2_IsPlayerInSession ***********************
struct Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics
{
	struct OrionSteamUtilities_eventK2_IsPlayerInSession_Parms
	{
		int32 LocalUserNum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine if the player is registered in the specified session\n\x09 *\n\x09 * @return true if the player is registered in the session\n\x09 */" },
#endif
		{ "DisplayName", "Is Player In Session" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if the player is registered in the specified session\n\n@return true if the player is registered in the session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventK2_IsPlayerInSession_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventK2_IsPlayerInSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventK2_IsPlayerInSession_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "K2_IsPlayerInSession", Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::OrionSteamUtilities_eventK2_IsPlayerInSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::OrionSteamUtilities_eventK2_IsPlayerInSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execK2_IsPlayerInSession)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::K2_IsPlayerInSession(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function K2_IsPlayerInSession *************************

// ********** Begin Class UOrionSteamUtilities Function KickPlayer *********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics
{
	struct OrionSteamUtilities_eventKickPlayer_Parms
	{
		UObject* WorldContextObject;
		APlayerController* KickedPlayer;
		FText KickReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Forcibly remove player from the server\n\x09 *\n\x09 * @param KickedPlayer player to kick\n\x09 * @param KickReason text reason to display to player\n\x09 *\n\x09 * @return true if player was able to be kicked, false otherwise\n\x09 */" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forcibly remove player from the server\n\n@param KickedPlayer player to kick\n@param KickReason text reason to display to player\n\n@return true if player was able to be kicked, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KickedPlayer;
	static const UECodeGen_Private::FTextPropertyParams NewProp_KickReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventKickPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_KickedPlayer = { "KickedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventKickPlayer_Parms, KickedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventKickPlayer_Parms, KickReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickReason_MetaData), NewProp_KickReason_MetaData) };
void Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventKickPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventKickPlayer_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_KickedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_KickReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "KickPlayer", Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::OrionSteamUtilities_eventKickPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::OrionSteamUtilities_eventKickPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execKickPlayer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_KickedPlayer);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_KickReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::KickPlayer(Z_Param_WorldContextObject,Z_Param_KickedPlayer,Z_Param_Out_KickReason);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function KickPlayer ***********************************

// ********** Begin Class UOrionSteamUtilities Function ListenForSessionInviteAccepted *************
struct Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics
{
	struct OrionSteamUtilities_eventListenForSessionInviteAccepted_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventListenForSessionInviteAccepted_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteAcceptedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2018586928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ListenForSessionInviteAccepted", Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::OrionSteamUtilities_eventListenForSessionInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::OrionSteamUtilities_eventListenForSessionInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execListenForSessionInviteAccepted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::ListenForSessionInviteAccepted(FOnSessionUserInviteAcceptedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ListenForSessionInviteAccepted ***************

// ********** Begin Class UOrionSteamUtilities Function ListenForSessionInviteRecieved *************
struct Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics
{
	struct OrionSteamUtilities_eventListenForSessionInviteRecieved_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventListenForSessionInviteRecieved_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSessionUserInviteRecievedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3194786994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ListenForSessionInviteRecieved", Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::OrionSteamUtilities_eventListenForSessionInviteRecieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::OrionSteamUtilities_eventListenForSessionInviteRecieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execListenForSessionInviteRecieved)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::ListenForSessionInviteRecieved(FOnSessionUserInviteRecievedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ListenForSessionInviteRecieved ***************

// ********** Begin Class UOrionSteamUtilities Function ListenForSteamMessages *********************
struct Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics
{
	struct OrionSteamUtilities_eventListenForSteamMessages_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventListenForSteamMessages_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4166036490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ListenForSteamMessages", Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::OrionSteamUtilities_eventListenForSteamMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::OrionSteamUtilities_eventListenForSteamMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execListenForSteamMessages)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::ListenForSteamMessages(FOnSteamMessage(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ListenForSteamMessages ***********************

// ********** Begin Class UOrionSteamUtilities Function MakeInteger ********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics
{
	struct OrionSteamUtilities_eventMakeInteger_Parms
	{
		int32 Value;
		FSteamSessionSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeInteger", Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::OrionSteamUtilities_eventMakeInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::OrionSteamUtilities_eventMakeInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSetting*)Z_Param__Result=UOrionSteamUtilities::MakeInteger(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeInteger **********************************

// ********** Begin Class UOrionSteamUtilities Function MakeInventoryUpdateHandle ******************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics
{
	struct OrionSteamUtilities_eventMakeInventoryUpdateHandle_Parms
	{
		FString Value;
		FSteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeInventoryUpdateHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeInventoryUpdateHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3607744349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeInventoryUpdateHandle", Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::OrionSteamUtilities_eventMakeInventoryUpdateHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::OrionSteamUtilities_eventMakeInventoryUpdateHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeInventoryUpdateHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamInventoryUpdateHandle*)Z_Param__Result=UOrionSteamUtilities::MakeInventoryUpdateHandle(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeInventoryUpdateHandle ********************

// ********** Begin Class UOrionSteamUtilities Function MakePublishedFileID ************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics
{
	struct OrionSteamUtilities_eventMakePublishedFileID_Parms
	{
		FString Value;
		FPublishedFileID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakePublishedFileID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakePublishedFileID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakePublishedFileID", Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::OrionSteamUtilities_eventMakePublishedFileID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::OrionSteamUtilities_eventMakePublishedFileID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakePublishedFileID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPublishedFileID*)Z_Param__Result=UOrionSteamUtilities::MakePublishedFileID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakePublishedFileID **************************

// ********** Begin Class UOrionSteamUtilities Function MakeSearchBoolean **************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics
{
	struct OrionSteamUtilities_eventMakeSearchBoolean_Parms
	{
		bool Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbf\xae\xe6\x94\xb9\xef\xbc\x9a\xe6\xb7\xbb\xe5\x8a\xa0 MakeSearchBoolean \xe5\x87\xbd\xe6\x95\xb0\n\x09 * @author LiuZe\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\xae\xe6\x94\xb9\xef\xbc\x9a\xe6\xb7\xbb\xe5\x8a\xa0 MakeSearchBoolean \xe5\x87\xbd\xe6\x95\xb0\n@author LiuZe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventMakeSearchBoolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventMakeSearchBoolean_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSearchBoolean_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 761709690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeSearchBoolean", Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::OrionSteamUtilities_eventMakeSearchBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::OrionSteamUtilities_eventMakeSearchBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeSearchBoolean)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=UOrionSteamUtilities::MakeSearchBoolean(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeSearchBoolean ****************************

// ********** Begin Class UOrionSteamUtilities Function MakeSearchInteger **************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics
{
	struct OrionSteamUtilities_eventMakeSearchInteger_Parms
	{
		ESteamComparisonOp ComparisonOperator;
		int32 Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOperator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonOperator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator = { "ComparisonOperator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSearchInteger_Parms, ComparisonOperator), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOperator_MetaData), NewProp_ComparisonOperator_MetaData) }; // 3384085431
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSearchInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSearchInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 761709690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeSearchInteger", Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::OrionSteamUtilities_eventMakeSearchInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::OrionSteamUtilities_eventMakeSearchInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeSearchInteger)
{
	P_GET_ENUM(ESteamComparisonOp,Z_Param_ComparisonOperator);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=UOrionSteamUtilities::MakeSearchInteger(ESteamComparisonOp(Z_Param_ComparisonOperator),Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeSearchInteger ****************************

// ********** Begin Class UOrionSteamUtilities Function MakeSearchString ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics
{
	struct OrionSteamUtilities_eventMakeSearchString_Parms
	{
		FString Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSearchString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSearchString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 761709690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeSearchString", Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::OrionSteamUtilities_eventMakeSearchString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::OrionSteamUtilities_eventMakeSearchString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeSearchString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=UOrionSteamUtilities::MakeSearchString(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeSearchString *****************************

// ********** Begin Class UOrionSteamUtilities Function MakeSteamGameID ****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics
{
	struct OrionSteamUtilities_eventMakeSteamGameID_Parms
	{
		FString Value;
		FSteamGameID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSteamGameID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSteamGameID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 1837921192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeSteamGameID", Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::OrionSteamUtilities_eventMakeSteamGameID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::OrionSteamUtilities_eventMakeSteamGameID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeSteamGameID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamGameID*)Z_Param__Result=UOrionSteamUtilities::MakeSteamGameID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeSteamGameID ******************************

// ********** Begin Class UOrionSteamUtilities Function MakeSteamID ********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics
{
	struct OrionSteamUtilities_eventMakeSteamID_Parms
	{
		FString Value;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSteamID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeSteamID", Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::OrionSteamUtilities_eventMakeSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::OrionSteamUtilities_eventMakeSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeSteamID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UOrionSteamUtilities::MakeSteamID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeSteamID **********************************

// ********** Begin Class UOrionSteamUtilities Function MakeSteamItemInstanceID ********************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics
{
	struct OrionSteamUtilities_eventMakeSteamItemInstanceID_Parms
	{
		int64 Value;
		FSteamItemInstanceID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSteamItemInstanceID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeSteamItemInstanceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeSteamItemInstanceID", Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::OrionSteamUtilities_eventMakeSteamItemInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::OrionSteamUtilities_eventMakeSteamItemInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeSteamItemInstanceID)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamItemInstanceID*)Z_Param__Result=UOrionSteamUtilities::MakeSteamItemInstanceID(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeSteamItemInstanceID **********************

// ********** Begin Class UOrionSteamUtilities Function MakeString *********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics
{
	struct OrionSteamUtilities_eventMakeString_Parms
	{
		FString Value;
		FSteamSessionSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1619414451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeString", Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::OrionSteamUtilities_eventMakeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::OrionSteamUtilities_eventMakeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSetting*)Z_Param__Result=UOrionSteamUtilities::MakeString(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeString ***********************************

// ********** Begin Class UOrionSteamUtilities Function MakeTicketHandle ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics
{
	struct OrionSteamUtilities_eventMakeTicketHandle_Parms
	{
		FString Value;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeTicketHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeTicketHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 3663624285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeTicketHandle", Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::OrionSteamUtilities_eventMakeTicketHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::OrionSteamUtilities_eventMakeTicketHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeTicketHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=UOrionSteamUtilities::MakeTicketHandle(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeTicketHandle *****************************

// ********** Begin Class UOrionSteamUtilities Function MakeUGCHandle ******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics
{
	struct OrionSteamUtilities_eventMakeUGCHandle_Parms
	{
		FString Value;
		FSteamUGCHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeUGCHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMakeUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 4209419894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MakeUGCHandle", Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::OrionSteamUtilities_eventMakeUGCHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::OrionSteamUtilities_eventMakeUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMakeUGCHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamUGCHandle*)Z_Param__Result=UOrionSteamUtilities::MakeUGCHandle(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MakeUGCHandle ********************************

// ********** Begin Class UOrionSteamUtilities Function MuteRemoteTalker ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics
{
	struct OrionSteamUtilities_eventMuteRemoteTalker_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		APlayerState* PlayerState;
		bool bIsSystemWide;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Mute a remote user for a given local player\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Mute a remote user for a given local player" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static void NewProp_bIsSystemWide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMuteRemoteTalker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMuteRemoteTalker_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventMuteRemoteTalker_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventMuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventMuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "MuteRemoteTalker", Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::OrionSteamUtilities_eventMuteRemoteTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::OrionSteamUtilities_eventMuteRemoteTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execMuteRemoteTalker)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_GET_UBOOL(Z_Param_bIsSystemWide);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::MuteRemoteTalker(Z_Param_WorldContextObject,Z_Param_LocalUserNum,Z_Param_PlayerState,Z_Param_bIsSystemWide);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function MuteRemoteTalker *****************************

// ********** Begin Class UOrionSteamUtilities Function NotEqual ***********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics
{
	struct OrionSteamUtilities_eventNotEqual_Parms
	{
		FSteamID A;
		FSteamID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventNotEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventNotEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
void Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventNotEqual_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "NotEqual", Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::OrionSteamUtilities_eventNotEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::OrionSteamUtilities_eventNotEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_NotEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_NotEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execNotEqual)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::NotEqual(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function NotEqual *************************************

// ********** Begin Class UOrionSteamUtilities Function PublishedFileID_Equals *********************
struct Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics
{
	struct OrionSteamUtilities_eventPublishedFileID_Equals_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_Equals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_Equals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventPublishedFileID_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventPublishedFileID_Equals_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "PublishedFileID_Equals", Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::OrionSteamUtilities_eventPublishedFileID_Equals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::OrionSteamUtilities_eventPublishedFileID_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execPublishedFileID_Equals)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::PublishedFileID_Equals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function PublishedFileID_Equals ***********************

// ********** Begin Class UOrionSteamUtilities Function PublishedFileID_Equals_Exec ****************
struct Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics
{
	struct OrionSteamUtilities_eventPublishedFileID_Equals_Exec_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		EOrionSteamIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_Equals_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical, METADATA_PARAMS(0, nullptr) }; // 204710683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "PublishedFileID_Equals_Exec", Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::OrionSteamUtilities_eventPublishedFileID_Equals_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::OrionSteamUtilities_eventPublishedFileID_Equals_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execPublishedFileID_Equals_Exec)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_GET_ENUM_REF(EOrionSteamIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::PublishedFileID_Equals_Exec(Z_Param_A,Z_Param_B,(EOrionSteamIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function PublishedFileID_Equals_Exec ******************

// ********** Begin Class UOrionSteamUtilities Function PublishedFileID_NotEquals ******************
struct Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics
{
	struct OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2295931229
void Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "PublishedFileID_NotEquals", Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::OrionSteamUtilities_eventPublishedFileID_NotEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execPublishedFileID_NotEquals)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::PublishedFileID_NotEquals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function PublishedFileID_NotEquals ********************

// ********** Begin Class UOrionSteamUtilities Function ReadFileToBytes ****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics
{
	struct OrionSteamUtilities_eventReadFileToBytes_Parms
	{
		FString AbsoluteFilePath;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Reads a binary file and returns an array of uint8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Reads a binary file and returns an array of uint8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventReadFileToBytes_Parms, AbsoluteFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteFilePath_MetaData), NewProp_AbsoluteFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventReadFileToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ReadFileToBytes", Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::OrionSteamUtilities_eventReadFileToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::OrionSteamUtilities_eventReadFileToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execReadFileToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UOrionSteamUtilities::ReadFileToBytes(Z_Param_AbsoluteFilePath);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ReadFileToBytes ******************************

// ********** Begin Class UOrionSteamUtilities Function ReadFriendList *****************************
struct Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics
{
	struct OrionSteamUtilities_eventReadFriendList_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TEnumAsByte<EFriendListType> FriendListType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Read Friend List\n\x09 * Cache friends list\n\x09 *\n\x09 * Call \"Get Friends List\" after calling this to get a list of your friends\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "Name", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Read Friend List\n* Cache friends list\n*\n* Call \"Get Friends List\" after calling this to get a list of your friends" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendListType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventReadFriendList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventReadFriendList_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::NewProp_FriendListType = { "FriendListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventReadFriendList_Parms, FriendListType), Z_Construct_UEnum_OrionSteamSDKAPI_EFriendListType, METADATA_PARAMS(0, nullptr) }; // 3380097800
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::NewProp_FriendListType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ReadFriendList", Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::OrionSteamUtilities_eventReadFriendList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::OrionSteamUtilities_eventReadFriendList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execReadFriendList)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY(FByteProperty,Z_Param_FriendListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::ReadFriendList(Z_Param_WorldContextObject,Z_Param_LatentInfo,EFriendListType(Z_Param_FriendListType));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ReadFriendList *******************************

// ********** Begin Class UOrionSteamUtilities Function ServerTravel *******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics
{
	struct OrionSteamUtilities_eventServerTravel_Parms
	{
		UObject* WorldContextObject;
		TSoftObjectPtr<UWorld> Level;
		bool bAbsolute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventServerTravel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventServerTravel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventServerTravel_Parms*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventServerTravel_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::NewProp_bAbsolute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "ServerTravel", Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::OrionSteamUtilities_eventServerTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::OrionSteamUtilities_eventServerTravel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execServerTravel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
	P_GET_UBOOL(Z_Param_bAbsolute);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::ServerTravel(Z_Param_WorldContextObject,Z_Param_Level,Z_Param_bAbsolute);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function ServerTravel *********************************

// ********** Begin Class UOrionSteamUtilities Function SetLocalHost *******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics
{
	struct OrionSteamUtilities_eventSetLocalHost_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetLocalHost_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 1975650397
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::NewProp_SteamNetworkingIdentity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SetLocalHost", Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::OrionSteamUtilities_eventSetLocalHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::OrionSteamUtilities_eventSetLocalHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSetLocalHost)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::SetLocalHost(Z_Param_Out_SteamNetworkingIdentity);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SetLocalHost *********************************

// ********** Begin Class UOrionSteamUtilities Function SetPSNId ***********************************
struct Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics
{
	struct OrionSteamUtilities_eventSetPSNId_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		int64 Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "DisplayName", "Set PSN Id" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetPSNId_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 1975650397
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetPSNId_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SetPSNId", Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::OrionSteamUtilities_eventSetPSNId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::OrionSteamUtilities_eventSetPSNId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSetPSNId)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_PROPERTY(FInt64Property,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::SetPSNId(Z_Param_Out_SteamNetworkingIdentity,Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SetPSNId *************************************

// ********** Begin Class UOrionSteamUtilities Function SetSteamId64 *******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics
{
	struct OrionSteamUtilities_eventSetSteamId64_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		FSteamID SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetSteamId64_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 1975650397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetSteamId64_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SetSteamId64", Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::OrionSteamUtilities_eventSetSteamId64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::OrionSteamUtilities_eventSetSteamId64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSetSteamId64)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::SetSteamId64(Z_Param_Out_SteamNetworkingIdentity,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SetSteamId64 *********************************

// ********** Begin Class UOrionSteamUtilities Function SetType ************************************
struct Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics
{
	struct OrionSteamUtilities_eventSetType_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		EOrionSteamNetworkingIdentityType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetType_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 1975650397
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetType_Parms, Type), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamNetworkingIdentityType, METADATA_PARAMS(0, nullptr) }; // 3303502692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SetType", Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::OrionSteamUtilities_eventSetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::OrionSteamUtilities_eventSetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSetType)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_ENUM(EOrionSteamNetworkingIdentityType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::SetType(Z_Param_Out_SteamNetworkingIdentity,EOrionSteamNetworkingIdentityType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SetType **************************************

// ********** Begin Class UOrionSteamUtilities Function SetXboxPairwiseId **************************
struct Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics
{
	struct OrionSteamUtilities_eventSetXboxPairwiseId_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetXboxPairwiseId_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 1975650397
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSetXboxPairwiseId_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SetXboxPairwiseId", Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::OrionSteamUtilities_eventSetXboxPairwiseId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::OrionSteamUtilities_eventSetXboxPairwiseId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSetXboxPairwiseId)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::SetXboxPairwiseId(Z_Param_Out_SteamNetworkingIdentity,Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SetXboxPairwiseId ****************************

// ********** Begin Class UOrionSteamUtilities Function SteamItemInstanceID_Equals *****************
struct Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics
{
	struct OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms
	{
		FSteamItemInstanceID A;
		FSteamItemInstanceID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
void Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SteamItemInstanceID_Equals", Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::OrionSteamUtilities_eventSteamItemInstanceID_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSteamItemInstanceID_Equals)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::SteamItemInstanceID_Equals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SteamItemInstanceID_Equals *******************

// ********** Begin Class UOrionSteamUtilities Function SteamItemInstanceID_Equals_Exec ************
struct Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics
{
	struct OrionSteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms
	{
		FSteamItemInstanceID A;
		FSteamItemInstanceID B;
		EOrionSteamIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 605370625
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, Result), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIdentical, METADATA_PARAMS(0, nullptr) }; // 204710683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "SteamItemInstanceID_Equals_Exec", Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::OrionSteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::OrionSteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execSteamItemInstanceID_Equals_Exec)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
	P_GET_ENUM_REF(EOrionSteamIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::SteamItemInstanceID_Equals_Exec(Z_Param_A,Z_Param_B,(EOrionSteamIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function SteamItemInstanceID_Equals_Exec **************

// ********** Begin Class UOrionSteamUtilities Function StopListeningForSessionInviteAccepted ******
struct Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "StopListeningForSessionInviteAccepted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execStopListeningForSessionInviteAccepted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::StopListeningForSessionInviteAccepted();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function StopListeningForSessionInviteAccepted ********

// ********** Begin Class UOrionSteamUtilities Function StopListeningForSessionInviteRecieved ******
struct Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Matchmaking" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "StopListeningForSessionInviteRecieved", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execStopListeningForSessionInviteRecieved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::StopListeningForSessionInviteRecieved();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function StopListeningForSessionInviteRecieved ********

// ********** Begin Class UOrionSteamUtilities Function TryJoinServer ******************************
struct Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics
{
	struct OrionSteamUtilities_eventTryJoinServer_Parms
	{
		FString OutErrorMessage;
		const UObject* WorldContextObject;
		FSteamServerAddr ServerAddr;
		APlayerController* SpecificPlayer;
		bool bUsingSockets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try joining a specific steam server\n\x09 */" },
#endif
		{ "CPP_Default_bUsingSockets", "true" },
		{ "CPP_Default_SpecificPlayer", "None" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try joining a specific steam server" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerAddr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecificPlayer;
	static void NewProp_bUsingSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingSockets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventTryJoinServer_Parms, OutErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventTryJoinServer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_ServerAddr = { "ServerAddr", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventTryJoinServer_Parms, ServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAddr_MetaData), NewProp_ServerAddr_MetaData) }; // 2142072178
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_SpecificPlayer = { "SpecificPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventTryJoinServer_Parms, SpecificPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventTryJoinServer_Parms*)Obj)->bUsingSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets = { "bUsingSockets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventTryJoinServer_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventTryJoinServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventTryJoinServer_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_OutErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_ServerAddr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_SpecificPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "TryJoinServer", Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::OrionSteamUtilities_eventTryJoinServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::OrionSteamUtilities_eventTryJoinServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execTryJoinServer)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorMessage);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FSteamServerAddr,Z_Param_Out_ServerAddr);
	P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer);
	P_GET_UBOOL(Z_Param_bUsingSockets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::TryJoinServer(Z_Param_Out_OutErrorMessage,Z_Param_WorldContextObject,Z_Param_Out_ServerAddr,Z_Param_SpecificPlayer,Z_Param_bUsingSockets);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function TryJoinServer ********************************

// ********** Begin Class UOrionSteamUtilities Function UnmuteRemoteTalker *************************
struct Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics
{
	struct OrionSteamUtilities_eventUnmuteRemoteTalker_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		APlayerState* PlayerState;
		bool bIsSystemWide;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * UnMute a remote user for a given local player\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* UnMute a remote user for a given local player" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static void NewProp_bIsSystemWide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventUnmuteRemoteTalker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventUnmuteRemoteTalker_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventUnmuteRemoteTalker_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventUnmuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventUnmuteRemoteTalker_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventUnmuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventUnmuteRemoteTalker_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "UnmuteRemoteTalker", Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::OrionSteamUtilities_eventUnmuteRemoteTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::OrionSteamUtilities_eventUnmuteRemoteTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execUnmuteRemoteTalker)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_GET_UBOOL(Z_Param_bIsSystemWide);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::UnmuteRemoteTalker(Z_Param_WorldContextObject,Z_Param_LocalUserNum,Z_Param_PlayerState,Z_Param_bIsSystemWide);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function UnmuteRemoteTalker ***************************

// ********** Begin Class UOrionSteamUtilities Function UpdateVoiceInputDevice *********************
struct Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics
{
	struct OrionSteamUtilities_eventUpdateVoiceInputDevice_Parms
	{
		FString DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities|Voice" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventUpdateVoiceInputDevice_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "UpdateVoiceInputDevice", Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::OrionSteamUtilities_eventUpdateVoiceInputDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::OrionSteamUtilities_eventUpdateVoiceInputDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execUpdateVoiceInputDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtilities::UpdateVoiceInputDevice(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function UpdateVoiceInputDevice ***********************

// ********** Begin Class UOrionSteamUtilities Function WriteBytesToFile ***************************
struct Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics
{
	struct OrionSteamUtilities_eventWriteBytesToFile_Parms
	{
		bool bOverwriteIfExists;
		FString AbsoluteFilePath;
		TArray<uint8> DataBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Writes an array of uint8 to a binary file\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Writes an array of uint8 to a binary file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverwriteIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteIfExists;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventWriteBytesToFile_Parms*)Obj)->bOverwriteIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists = { "bOverwriteIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventWriteBytesToFile_Parms, AbsoluteFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteFilePath_MetaData), NewProp_AbsoluteFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtilities_eventWriteBytesToFile_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataBuffer_MetaData), NewProp_DataBuffer_MetaData) };
void Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtilities_eventWriteBytesToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtilities, nullptr, "WriteBytesToFile", Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::OrionSteamUtilities_eventWriteBytesToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::OrionSteamUtilities_eventWriteBytesToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtilities::execWriteBytesToFile)
{
	P_GET_UBOOL(Z_Param_bOverwriteIfExists);
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtilities::WriteBytesToFile(Z_Param_bOverwriteIfExists,Z_Param_AbsoluteFilePath,Z_Param_Out_DataBuffer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtilities Function WriteBytesToFile *****************************

// ********** Begin Class UOrionSteamUtilities *****************************************************
void UOrionSteamUtilities::StaticRegisterNativesUOrionSteamUtilities()
{
	UClass* Class = UOrionSteamUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_BytesToString", &UOrionSteamUtilities::execBP_BytesToString },
		{ "BP_StringToBytes", &UOrionSteamUtilities::execBP_StringToBytes },
		{ "BreakInventoryUpdateHandle", &UOrionSteamUtilities::execBreakInventoryUpdateHandle },
		{ "BreakPublishedFileID", &UOrionSteamUtilities::execBreakPublishedFileID },
		{ "BreakSteamGameID", &UOrionSteamUtilities::execBreakSteamGameID },
		{ "BreakSteamID", &UOrionSteamUtilities::execBreakSteamID },
		{ "BreakSteamItemInstanceID", &UOrionSteamUtilities::execBreakSteamItemInstanceID },
		{ "BreakTicketHandle", &UOrionSteamUtilities::execBreakTicketHandle },
		{ "BreakUGCHandle", &UOrionSteamUtilities::execBreakUGCHandle },
		{ "ConstructServerFilter", &UOrionSteamUtilities::execConstructServerFilter },
		{ "EncryptString", &UOrionSteamUtilities::execEncryptString },
		{ "Equal", &UOrionSteamUtilities::execEqual },
		{ "Equal_Exec", &UOrionSteamUtilities::execEqual_Exec },
		{ "FromUnixTimestamp", &UOrionSteamUtilities::execFromUnixTimestamp },
		{ "GetAccountId", &UOrionSteamUtilities::execGetAccountId },
		{ "GetAccountType", &UOrionSteamUtilities::execGetAccountType },
		{ "GetFriendsList", &UOrionSteamUtilities::execGetFriendsList },
		{ "GetGameEngineInitialized", &UOrionSteamUtilities::execGetGameEngineInitialized },
		{ "GetHostPingData", &UOrionSteamUtilities::execGetHostPingData },
		{ "GetInteger", &UOrionSteamUtilities::execGetInteger },
		{ "GetPingFromHostData", &UOrionSteamUtilities::execGetPingFromHostData },
		{ "GetPublicIp", &UOrionSteamUtilities::execGetPublicIp },
		{ "GetSteamIdFromPlayerState", &UOrionSteamUtilities::execGetSteamIdFromPlayerState },
		{ "GetString", &UOrionSteamUtilities::execGetString },
		{ "GetType", &UOrionSteamUtilities::execGetType },
		{ "GetVoiceInputDevice", &UOrionSteamUtilities::execGetVoiceInputDevice },
		{ "IsGameIDValid", &UOrionSteamUtilities::execIsGameIDValid },
		{ "IsGameIDValid_Exec", &UOrionSteamUtilities::execIsGameIDValid_Exec },
		{ "IsLobby", &UOrionSteamUtilities::execIsLobby },
		{ "IsLocalPlayerTalking", &UOrionSteamUtilities::execIsLocalPlayerTalking },
		{ "IsPlayerMuted", &UOrionSteamUtilities::execIsPlayerMuted },
		{ "IsPublishedFileIDValid", &UOrionSteamUtilities::execIsPublishedFileIDValid },
		{ "IsPublishedFileIDValid_Exec", &UOrionSteamUtilities::execIsPublishedFileIDValid_Exec },
		{ "IsRecalculatingPing", &UOrionSteamUtilities::execIsRecalculatingPing },
		{ "IsRemotePlayerTalking", &UOrionSteamUtilities::execIsRemotePlayerTalking },
		{ "IsSteamAvailable", &UOrionSteamUtilities::execIsSteamAvailable },
		{ "IsSteamIDValid_Exec", &UOrionSteamUtilities::execIsSteamIDValid_Exec },
		{ "IsSteamInventoryUpdateHandleValid", &UOrionSteamUtilities::execIsSteamInventoryUpdateHandleValid },
		{ "IsSteamInventoryUpdateHandleValid_Exec", &UOrionSteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec },
		{ "IsSteamServerInitialized", &UOrionSteamUtilities::execIsSteamServerInitialized },
		{ "IsSteamTicketHandleValid", &UOrionSteamUtilities::execIsSteamTicketHandleValid },
		{ "IsSteamTicketHandleValid_Exec", &UOrionSteamUtilities::execIsSteamTicketHandleValid_Exec },
		{ "IsUGCHandleValid", &UOrionSteamUtilities::execIsUGCHandleValid },
		{ "IsUGCHandleValid_Exec", &UOrionSteamUtilities::execIsUGCHandleValid_Exec },
		{ "IsUsingP2PRelays", &UOrionSteamUtilities::execIsUsingP2PRelays },
		{ "IsValid", &UOrionSteamUtilities::execIsValid },
		{ "K2_HexToBytes", &UOrionSteamUtilities::execK2_HexToBytes },
		{ "K2_HexToString", &UOrionSteamUtilities::execK2_HexToString },
		{ "K2_IsPlayerInSession", &UOrionSteamUtilities::execK2_IsPlayerInSession },
		{ "KickPlayer", &UOrionSteamUtilities::execKickPlayer },
		{ "ListenForSessionInviteAccepted", &UOrionSteamUtilities::execListenForSessionInviteAccepted },
		{ "ListenForSessionInviteRecieved", &UOrionSteamUtilities::execListenForSessionInviteRecieved },
		{ "ListenForSteamMessages", &UOrionSteamUtilities::execListenForSteamMessages },
		{ "MakeInteger", &UOrionSteamUtilities::execMakeInteger },
		{ "MakeInventoryUpdateHandle", &UOrionSteamUtilities::execMakeInventoryUpdateHandle },
		{ "MakePublishedFileID", &UOrionSteamUtilities::execMakePublishedFileID },
		{ "MakeSearchBoolean", &UOrionSteamUtilities::execMakeSearchBoolean },
		{ "MakeSearchInteger", &UOrionSteamUtilities::execMakeSearchInteger },
		{ "MakeSearchString", &UOrionSteamUtilities::execMakeSearchString },
		{ "MakeSteamGameID", &UOrionSteamUtilities::execMakeSteamGameID },
		{ "MakeSteamID", &UOrionSteamUtilities::execMakeSteamID },
		{ "MakeSteamItemInstanceID", &UOrionSteamUtilities::execMakeSteamItemInstanceID },
		{ "MakeString", &UOrionSteamUtilities::execMakeString },
		{ "MakeTicketHandle", &UOrionSteamUtilities::execMakeTicketHandle },
		{ "MakeUGCHandle", &UOrionSteamUtilities::execMakeUGCHandle },
		{ "MuteRemoteTalker", &UOrionSteamUtilities::execMuteRemoteTalker },
		{ "NotEqual", &UOrionSteamUtilities::execNotEqual },
		{ "PublishedFileID_Equals", &UOrionSteamUtilities::execPublishedFileID_Equals },
		{ "PublishedFileID_Equals_Exec", &UOrionSteamUtilities::execPublishedFileID_Equals_Exec },
		{ "PublishedFileID_NotEquals", &UOrionSteamUtilities::execPublishedFileID_NotEquals },
		{ "ReadFileToBytes", &UOrionSteamUtilities::execReadFileToBytes },
		{ "ReadFriendList", &UOrionSteamUtilities::execReadFriendList },
		{ "ServerTravel", &UOrionSteamUtilities::execServerTravel },
		{ "SetLocalHost", &UOrionSteamUtilities::execSetLocalHost },
		{ "SetPSNId", &UOrionSteamUtilities::execSetPSNId },
		{ "SetSteamId64", &UOrionSteamUtilities::execSetSteamId64 },
		{ "SetType", &UOrionSteamUtilities::execSetType },
		{ "SetXboxPairwiseId", &UOrionSteamUtilities::execSetXboxPairwiseId },
		{ "SteamItemInstanceID_Equals", &UOrionSteamUtilities::execSteamItemInstanceID_Equals },
		{ "SteamItemInstanceID_Equals_Exec", &UOrionSteamUtilities::execSteamItemInstanceID_Equals_Exec },
		{ "StopListeningForSessionInviteAccepted", &UOrionSteamUtilities::execStopListeningForSessionInviteAccepted },
		{ "StopListeningForSessionInviteRecieved", &UOrionSteamUtilities::execStopListeningForSessionInviteRecieved },
		{ "TryJoinServer", &UOrionSteamUtilities::execTryJoinServer },
		{ "UnmuteRemoteTalker", &UOrionSteamUtilities::execUnmuteRemoteTalker },
		{ "UpdateVoiceInputDevice", &UOrionSteamUtilities::execUpdateVoiceInputDevice },
		{ "WriteBytesToFile", &UOrionSteamUtilities::execWriteBytesToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUtilities;
UClass* UOrionSteamUtilities::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUtilities;
	if (!Z_Registration_Info_UClass_UOrionSteamUtilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUtilities"),
			Z_Registration_Info_UClass_UOrionSteamUtilities.InnerSingleton,
			StaticRegisterNativesUOrionSteamUtilities,
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
	return Z_Registration_Info_UClass_UOrionSteamUtilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUtilities_NoRegister()
{
	return UOrionSteamUtilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamUtilities.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BP_BytesToString, "BP_BytesToString" }, // 2201564706
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BP_StringToBytes, "BP_StringToBytes" }, // 3285483533
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakInventoryUpdateHandle, "BreakInventoryUpdateHandle" }, // 2619317072
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakPublishedFileID, "BreakPublishedFileID" }, // 18525524
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamGameID, "BreakSteamGameID" }, // 4268986679
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamID, "BreakSteamID" }, // 3061160089
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakSteamItemInstanceID, "BreakSteamItemInstanceID" }, // 1188702458
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakTicketHandle, "BreakTicketHandle" }, // 419716069
		{ &Z_Construct_UFunction_UOrionSteamUtilities_BreakUGCHandle, "BreakUGCHandle" }, // 2317646424
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ConstructServerFilter, "ConstructServerFilter" }, // 1569864949
		{ &Z_Construct_UFunction_UOrionSteamUtilities_EncryptString, "EncryptString" }, // 843220716
		{ &Z_Construct_UFunction_UOrionSteamUtilities_Equal, "Equal" }, // 1390778056
		{ &Z_Construct_UFunction_UOrionSteamUtilities_Equal_Exec, "Equal_Exec" }, // 3554482541
		{ &Z_Construct_UFunction_UOrionSteamUtilities_FromUnixTimestamp, "FromUnixTimestamp" }, // 3114494681
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetAccountId, "GetAccountId" }, // 1818761526
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetAccountType, "GetAccountType" }, // 2016483771
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetFriendsList, "GetFriendsList" }, // 3025425846
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetGameEngineInitialized, "GetGameEngineInitialized" }, // 1072293605
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetHostPingData, "GetHostPingData" }, // 3140461667
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetInteger, "GetInteger" }, // 3272311979
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetPingFromHostData, "GetPingFromHostData" }, // 3838554
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetPublicIp, "GetPublicIp" }, // 2563615520
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetSteamIdFromPlayerState, "GetSteamIdFromPlayerState" }, // 2949242345
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetString, "GetString" }, // 4197117152
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetType, "GetType" }, // 1525784958
		{ &Z_Construct_UFunction_UOrionSteamUtilities_GetVoiceInputDevice, "GetVoiceInputDevice" }, // 3403130574
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid, "IsGameIDValid" }, // 4152569053
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsGameIDValid_Exec, "IsGameIDValid_Exec" }, // 1310195305
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsLobby, "IsLobby" }, // 3616919169
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsLocalPlayerTalking, "IsLocalPlayerTalking" }, // 3331506894
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsPlayerMuted, "IsPlayerMuted" }, // 383282659
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid, "IsPublishedFileIDValid" }, // 1991268588
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsPublishedFileIDValid_Exec, "IsPublishedFileIDValid_Exec" }, // 1400248535
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsRecalculatingPing, "IsRecalculatingPing" }, // 2974744683
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsRemotePlayerTalking, "IsRemotePlayerTalking" }, // 2826293583
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamAvailable, "IsSteamAvailable" }, // 1151412859
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamIDValid_Exec, "IsSteamIDValid_Exec" }, // 1311105468
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid, "IsSteamInventoryUpdateHandleValid" }, // 1257398305
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamInventoryUpdateHandleValid_Exec, "IsSteamInventoryUpdateHandleValid_Exec" }, // 1258190287
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamServerInitialized, "IsSteamServerInitialized" }, // 1121616018
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid, "IsSteamTicketHandleValid" }, // 2059584935
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsSteamTicketHandleValid_Exec, "IsSteamTicketHandleValid_Exec" }, // 3258213410
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid, "IsUGCHandleValid" }, // 1587030211
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsUGCHandleValid_Exec, "IsUGCHandleValid_Exec" }, // 1412191939
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsUsingP2PRelays, "IsUsingP2PRelays" }, // 321807803
		{ &Z_Construct_UFunction_UOrionSteamUtilities_IsValid, "IsValid" }, // 2769642942
		{ &Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToBytes, "K2_HexToBytes" }, // 3293914084
		{ &Z_Construct_UFunction_UOrionSteamUtilities_K2_HexToString, "K2_HexToString" }, // 1448988796
		{ &Z_Construct_UFunction_UOrionSteamUtilities_K2_IsPlayerInSession, "K2_IsPlayerInSession" }, // 1215823551
		{ &Z_Construct_UFunction_UOrionSteamUtilities_KickPlayer, "KickPlayer" }, // 2361859081
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteAccepted, "ListenForSessionInviteAccepted" }, // 1422521238
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ListenForSessionInviteRecieved, "ListenForSessionInviteRecieved" }, // 971207596
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ListenForSteamMessages, "ListenForSteamMessages" }, // 368582770
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeInteger, "MakeInteger" }, // 3254297880
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeInventoryUpdateHandle, "MakeInventoryUpdateHandle" }, // 3001174370
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakePublishedFileID, "MakePublishedFileID" }, // 2034814228
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchBoolean, "MakeSearchBoolean" }, // 418587259
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchInteger, "MakeSearchInteger" }, // 1075338412
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeSearchString, "MakeSearchString" }, // 366288569
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamGameID, "MakeSteamGameID" }, // 1139094639
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamID, "MakeSteamID" }, // 2825522844
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeSteamItemInstanceID, "MakeSteamItemInstanceID" }, // 50519200
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeString, "MakeString" }, // 2246174646
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeTicketHandle, "MakeTicketHandle" }, // 4133527566
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MakeUGCHandle, "MakeUGCHandle" }, // 2378653688
		{ &Z_Construct_UFunction_UOrionSteamUtilities_MuteRemoteTalker, "MuteRemoteTalker" }, // 2672922326
		{ &Z_Construct_UFunction_UOrionSteamUtilities_NotEqual, "NotEqual" }, // 603155639
		{ &Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals, "PublishedFileID_Equals" }, // 2317916322
		{ &Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_Equals_Exec, "PublishedFileID_Equals_Exec" }, // 86572436
		{ &Z_Construct_UFunction_UOrionSteamUtilities_PublishedFileID_NotEquals, "PublishedFileID_NotEquals" }, // 234553621
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ReadFileToBytes, "ReadFileToBytes" }, // 2567203455
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ReadFriendList, "ReadFriendList" }, // 306812838
		{ &Z_Construct_UFunction_UOrionSteamUtilities_ServerTravel, "ServerTravel" }, // 3228700073
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SetLocalHost, "SetLocalHost" }, // 3618761979
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SetPSNId, "SetPSNId" }, // 2285470546
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SetSteamId64, "SetSteamId64" }, // 897453834
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SetType, "SetType" }, // 136602973
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SetXboxPairwiseId, "SetXboxPairwiseId" }, // 2284007116
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals, "SteamItemInstanceID_Equals" }, // 605513125
		{ &Z_Construct_UFunction_UOrionSteamUtilities_SteamItemInstanceID_Equals_Exec, "SteamItemInstanceID_Equals_Exec" }, // 3969736746
		{ &Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteAccepted, "StopListeningForSessionInviteAccepted" }, // 2888848961
		{ &Z_Construct_UFunction_UOrionSteamUtilities_StopListeningForSessionInviteRecieved, "StopListeningForSessionInviteRecieved" }, // 3386153067
		{ &Z_Construct_UFunction_UOrionSteamUtilities_TryJoinServer, "TryJoinServer" }, // 3679362806
		{ &Z_Construct_UFunction_UOrionSteamUtilities_UnmuteRemoteTalker, "UnmuteRemoteTalker" }, // 3013235580
		{ &Z_Construct_UFunction_UOrionSteamUtilities_UpdateVoiceInputDevice, "UpdateVoiceInputDevice" }, // 2225450002
		{ &Z_Construct_UFunction_UOrionSteamUtilities_WriteBytesToFile, "WriteBytesToFile" }, // 2502282626
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUtilities_Statics::ClassParams = {
	&UOrionSteamUtilities::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUtilities()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUtilities.OuterSingleton, Z_Construct_UClass_UOrionSteamUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUtilities.OuterSingleton;
}
UOrionSteamUtilities::UOrionSteamUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUtilities);
UOrionSteamUtilities::~UOrionSteamUtilities() {}
// ********** End Class UOrionSteamUtilities *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFriendListType_StaticEnum, TEXT("EFriendListType"), &Z_Registration_Info_UEnum_EFriendListType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3380097800U) },
		{ EOrionSteamValid_StaticEnum, TEXT("EOrionSteamValid"), &Z_Registration_Info_UEnum_EOrionSteamValid, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 179084096U) },
		{ EOrionSteamIdentical_StaticEnum, TEXT("EOrionSteamIdentical"), &Z_Registration_Info_UEnum_EOrionSteamIdentical, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 204710683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamVoice, UOrionSteamVoice::StaticClass, TEXT("UOrionSteamVoice"), &Z_Registration_Info_UClass_UOrionSteamVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamVoice), 2565152211U) },
		{ Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange, UOrionSteamAsyncActionListenForControllerChange::StaticClass, TEXT("UOrionSteamAsyncActionListenForControllerChange"), &Z_Registration_Info_UClass_UOrionSteamAsyncActionListenForControllerChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAsyncActionListenForControllerChange), 2722637824U) },
		{ Z_Construct_UClass_UOrionSteamUtilities, UOrionSteamUtilities::StaticClass, TEXT("UOrionSteamUtilities"), &Z_Registration_Info_UClass_UOrionSteamUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUtilities), 2577308116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h__Script_OrionSteamSDKAPI_1215169680(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
