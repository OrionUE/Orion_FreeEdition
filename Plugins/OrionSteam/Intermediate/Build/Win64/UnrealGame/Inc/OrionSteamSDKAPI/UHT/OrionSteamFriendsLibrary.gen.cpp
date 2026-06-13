// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamFriendsLibrary.h"
#include "OrionSteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamFriendsLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsLibrary();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamFriendsLibrary_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamId();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetFriendByIndex **********************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics
{
	struct OrionSteamFriendsLibrary_eventGetFriendByIndex_Parms
	{
		int32 InFriendIndex;
		FOrionSteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFriendIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::NewProp_InFriendIndex = { "InFriendIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendByIndex_Parms, InFriendIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::NewProp_InFriendIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetFriendByIndex", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::OrionSteamFriendsLibrary_eventGetFriendByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::OrionSteamFriendsLibrary_eventGetFriendByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetFriendByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFriendIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOrionSteamId*)Z_Param__Result=UOrionSteamFriendsLibrary::GetFriendByIndex(Z_Param_InFriendIndex);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetFriendByIndex ************************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetFriendCount ************************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics
{
	struct OrionSteamFriendsLibrary_eventGetFriendCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetFriendCount", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::OrionSteamFriendsLibrary_eventGetFriendCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::OrionSteamFriendsLibrary_eventGetFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetFriendCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamFriendsLibrary::GetFriendCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetFriendCount **************************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetFriendPersonaName ******************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics
{
	struct OrionSteamFriendsLibrary_eventGetFriendPersonaName_Parms
	{
		FOrionSteamId InFriendId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFriendId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::NewProp_InFriendId = { "InFriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendPersonaName_Parms, InFriendId), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::NewProp_InFriendId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetFriendPersonaName", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::OrionSteamFriendsLibrary_eventGetFriendPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::OrionSteamFriendsLibrary_eventGetFriendPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetFriendPersonaName)
{
	P_GET_STRUCT(FOrionSteamId,Z_Param_InFriendId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamFriendsLibrary::GetFriendPersonaName(Z_Param_InFriendId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetFriendPersonaName ********************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetFriendPersonaState *****************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics
{
	struct OrionSteamFriendsLibrary_eventGetFriendPersonaState_Parms
	{
		FOrionSteamId InFriendId;
		EOrionSteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFriendId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::NewProp_InFriendId = { "InFriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendPersonaState_Parms, InFriendId), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 1911211830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::NewProp_InFriendId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetFriendPersonaState", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::OrionSteamFriendsLibrary_eventGetFriendPersonaState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::OrionSteamFriendsLibrary_eventGetFriendPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetFriendPersonaState)
{
	P_GET_STRUCT(FOrionSteamId,Z_Param_InFriendId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOrionSteamPersonaState*)Z_Param__Result=UOrionSteamFriendsLibrary::GetFriendPersonaState(Z_Param_InFriendId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetFriendPersonaState *******************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetLargeFriendAvatar ******************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics
{
	struct OrionSteamFriendsLibrary_eventGetLargeFriendAvatar_Parms
	{
		FOrionSteamId InFriendId;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFriendId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_InFriendId = { "InFriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetLargeFriendAvatar_Parms, InFriendId), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_InFriendId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetLargeFriendAvatar", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::OrionSteamFriendsLibrary_eventGetLargeFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::OrionSteamFriendsLibrary_eventGetLargeFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetLargeFriendAvatar)
{
	P_GET_STRUCT(FOrionSteamId,Z_Param_InFriendId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamFriendsLibrary::GetLargeFriendAvatar(Z_Param_InFriendId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetLargeFriendAvatar ********************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetMediumFriendAvatar *****************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics
{
	struct OrionSteamFriendsLibrary_eventGetMediumFriendAvatar_Parms
	{
		FOrionSteamId InFriendId;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFriendId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_InFriendId = { "InFriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetMediumFriendAvatar_Parms, InFriendId), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_InFriendId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetMediumFriendAvatar", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::OrionSteamFriendsLibrary_eventGetMediumFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::OrionSteamFriendsLibrary_eventGetMediumFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetMediumFriendAvatar)
{
	P_GET_STRUCT(FOrionSteamId,Z_Param_InFriendId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamFriendsLibrary::GetMediumFriendAvatar(Z_Param_InFriendId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetMediumFriendAvatar *******************

// ********** Begin Class UOrionSteamFriendsLibrary Function GetSmallFriendAvatar ******************
struct Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics
{
	struct OrionSteamFriendsLibrary_eventGetSmallFriendAvatar_Parms
	{
		FOrionSteamId InFriendId;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Friends" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFriendId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_InFriendId = { "InFriendId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetSmallFriendAvatar_Parms, InFriendId), Z_Construct_UScriptStruct_FOrionSteamId, METADATA_PARAMS(0, nullptr) }; // 3522859118
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamFriendsLibrary_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_InFriendId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamFriendsLibrary, nullptr, "GetSmallFriendAvatar", Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::OrionSteamFriendsLibrary_eventGetSmallFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::OrionSteamFriendsLibrary_eventGetSmallFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamFriendsLibrary::execGetSmallFriendAvatar)
{
	P_GET_STRUCT(FOrionSteamId,Z_Param_InFriendId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UOrionSteamFriendsLibrary::GetSmallFriendAvatar(Z_Param_InFriendId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamFriendsLibrary Function GetSmallFriendAvatar ********************

// ********** Begin Class UOrionSteamFriendsLibrary ************************************************
void UOrionSteamFriendsLibrary::StaticRegisterNativesUOrionSteamFriendsLibrary()
{
	UClass* Class = UOrionSteamFriendsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFriendByIndex", &UOrionSteamFriendsLibrary::execGetFriendByIndex },
		{ "GetFriendCount", &UOrionSteamFriendsLibrary::execGetFriendCount },
		{ "GetFriendPersonaName", &UOrionSteamFriendsLibrary::execGetFriendPersonaName },
		{ "GetFriendPersonaState", &UOrionSteamFriendsLibrary::execGetFriendPersonaState },
		{ "GetLargeFriendAvatar", &UOrionSteamFriendsLibrary::execGetLargeFriendAvatar },
		{ "GetMediumFriendAvatar", &UOrionSteamFriendsLibrary::execGetMediumFriendAvatar },
		{ "GetSmallFriendAvatar", &UOrionSteamFriendsLibrary::execGetSmallFriendAvatar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamFriendsLibrary;
UClass* UOrionSteamFriendsLibrary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamFriendsLibrary;
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamFriendsLibrary"),
			Z_Registration_Info_UClass_UOrionSteamFriendsLibrary.InnerSingleton,
			StaticRegisterNativesUOrionSteamFriendsLibrary,
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
	return Z_Registration_Info_UClass_UOrionSteamFriendsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamFriendsLibrary_NoRegister()
{
	return UOrionSteamFriendsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendByIndex, "GetFriendByIndex" }, // 862537389
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendCount, "GetFriendCount" }, // 4271106136
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaName, "GetFriendPersonaName" }, // 1739154406
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetFriendPersonaState, "GetFriendPersonaState" }, // 3787812657
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 390611026
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 2356597446
		{ &Z_Construct_UFunction_UOrionSteamFriendsLibrary_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 1763328708
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamFriendsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics::ClassParams = {
	&UOrionSteamFriendsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamFriendsLibrary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamFriendsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamFriendsLibrary.OuterSingleton, Z_Construct_UClass_UOrionSteamFriendsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamFriendsLibrary.OuterSingleton;
}
UOrionSteamFriendsLibrary::UOrionSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamFriendsLibrary);
UOrionSteamFriendsLibrary::~UOrionSteamFriendsLibrary() {}
// ********** End Class UOrionSteamFriendsLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamFriendsLibrary_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamFriendsLibrary, UOrionSteamFriendsLibrary::StaticClass, TEXT("UOrionSteamFriendsLibrary"), &Z_Registration_Info_UClass_UOrionSteamFriendsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamFriendsLibrary), 3579908654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamFriendsLibrary_h__Script_OrionSteamSDKAPI_2675448915(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamFriendsLibrary_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamFriendsLibrary_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
