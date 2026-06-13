// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInput/SteamInput.h"
#include "SteamInput/SteamInputTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamInput() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInput();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInput_NoRegister();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommand();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamInput Function ActivateActionSet ******************************
struct Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics
{
	struct OrionSteamInput_eventActivateActionSet_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\x09 *\n\x09 * This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The Handle of the controller you want to activate an action set for.\n\x09 * @param\x09""ActionSetHandle\x09\x09The Handle of the action set you want to activate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\n@param       Handle                          The Handle of the controller you want to activate an action set for.\n@param       ActionSetHandle         The Handle of the action set you want to activate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventActivateActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::NewProp_ActionSetHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "ActivateActionSet", Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::OrionSteamInput_eventActivateActionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::OrionSteamInput_eventActivateActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execActivateActionSet)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateActionSet(Z_Param_Handle,Z_Param_ActionSetHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function ActivateActionSet ********************************

// ********** Begin Class UOrionSteamInput Function ActivateActionSetLayer *************************
struct Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics
{
	struct OrionSteamInput_eventActivateActionSetLayer_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reconfigure the controller to use the specified action set layer.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to activate an action set layer for.\n\x09 * @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to activate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer.\n\n@param       Handle                                  The Handle of the controller you want to activate an action set layer for.\n@param       ActionSetLayerHandle    The Handle of the action set layer you want to activate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventActivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventActivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "ActivateActionSetLayer", Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::OrionSteamInput_eventActivateActionSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::OrionSteamInput_eventActivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execActivateActionSetLayer)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function ActivateActionSetLayer ***************************

// ********** Begin Class UOrionSteamInput Function BNewDataAvailable ******************************
struct Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics
{
	struct OrionSteamInput_eventBNewDataAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventBNewDataAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventBNewDataAvailable_Parms), &Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "BNewDataAvailable", Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::OrionSteamInput_eventBNewDataAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::OrionSteamInput_eventBNewDataAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execBNewDataAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInput::BNewDataAvailable();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function BNewDataAvailable ********************************

// ********** Begin Class UOrionSteamInput Function BWaitForData ***********************************
struct Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics
{
	struct OrionSteamInput_eventBWaitForData_Parms
	{
		bool bWaitForever;
		int32 Timeout;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Waits on an IPC event from Steam sent when there is new data to be fetched from\n\x09 * the data drop. Returns true when data was recievied before the timeout expires.\n\x09 * Useful for games with a dedicated input thread\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits on an IPC event from Steam sent when there is new data to be fetched from\nthe data drop. Returns true when data was recievied before the timeout expires.\nUseful for games with a dedicated input thread" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWaitForever_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForever;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_bWaitForever_SetBit(void* Obj)
{
	((OrionSteamInput_eventBWaitForData_Parms*)Obj)->bWaitForever = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_bWaitForever = { "bWaitForever", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventBWaitForData_Parms), &Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_bWaitForever_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventBWaitForData_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventBWaitForData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventBWaitForData_Parms), &Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_bWaitForever,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "BWaitForData", Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::OrionSteamInput_eventBWaitForData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::OrionSteamInput_eventBWaitForData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_BWaitForData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_BWaitForData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execBWaitForData)
{
	P_GET_UBOOL(Z_Param_bWaitForever);
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamInput::BWaitForData(Z_Param_bWaitForever,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function BWaitForData *************************************

// ********** Begin Class UOrionSteamInput Function DeactivateActionSetLayer ***********************
struct Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics
{
	struct OrionSteamInput_eventDeactivateActionSetLayer_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reconfigure the controller to stop using the specified action set layer.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to deactivate an action set layer for.\n\x09 * @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to deactivate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer.\n\n@param       Handle                                  The Handle of the controller you want to deactivate an action set layer for.\n@param       ActionSetLayerHandle    The Handle of the action set layer you want to deactivate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventDeactivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventDeactivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "DeactivateActionSetLayer", Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::OrionSteamInput_eventDeactivateActionSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::OrionSteamInput_eventDeactivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execDeactivateActionSetLayer)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function DeactivateActionSetLayer *************************

// ********** Begin Class UOrionSteamInput Function DeactivateAllActionSetLayers *******************
struct Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics
{
	struct OrionSteamInput_eventDeactivateAllActionSetLayers_Parms
	{
		FInputHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reconfigure the controller to stop using all action set layers.\n\x09 *\n\x09 * @param\x09Handle\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers.\n\n@param       Handle  The Handle of the controller you want to deactivate all action set layers for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventDeactivateAllActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "DeactivateAllActionSetLayers", Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::OrionSteamInput_eventDeactivateAllActionSetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::OrionSteamInput_eventDeactivateAllActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execDeactivateAllActionSetLayers)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateAllActionSetLayers(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function DeactivateAllActionSetLayers *********************

// ********** Begin Class UOrionSteamInput Function GetActionOriginFromXboxOrigin ******************
struct Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics
{
	struct OrionSteamInput_eventGetActionOriginFromXboxOrigin_Parms
	{
		FInputHandle Handle;
		EOrionSteamXboxOrigin Origin;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09 *\n\x09 * @param\x09Handle\x09\x09The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n\x09 * @param\x09Origin\x09\x09This is the button you want to get the image for ex: k_EXboxOrigin_A\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param       Handle          The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n@param       Origin          This is the button you want to get the image for ex: k_EXboxOrigin_A" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActionOriginFromXboxOrigin_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActionOriginFromXboxOrigin_Parms, Origin), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 901980414
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetActionOriginFromXboxOrigin", Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::OrionSteamInput_eventGetActionOriginFromXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::OrionSteamInput_eventGetActionOriginFromXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetActionOriginFromXboxOrigin)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(EOrionSteamXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_Handle,EOrionSteamXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetActionOriginFromXboxOrigin ********************

// ********** Begin Class UOrionSteamInput Function GetActionSetHandle *****************************
struct Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics
{
	struct OrionSteamInput_eventGetActionSetHandle_Parms
	{
		FString ActionSetName;
		FInputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\x09 *\n\x09 * @param\x09""ActionSetName\x09The string identifier of an action set defined in the game's VDF file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\n@param       ActionSetName   The string identifier of an action set defined in the game's VDF file." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetActionSetHandle", Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::OrionSteamInput_eventGetActionSetHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::OrionSteamInput_eventGetActionSetHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetActionSetHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_ActionSetName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetActionSetHandle *******************************

// ********** Begin Class UOrionSteamInput Function GetActiveActionSetLayers ***********************
struct Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics
{
	struct OrionSteamInput_eventGetActiveActionSetLayers_Parms
	{
		FInputHandle Handle;
		TArray<FInputActionSetHandle> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Fill an array with all of the currently active action set layers for a specified controller Handle.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09 * @param\x09""Data\x09\x09This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller Handle.\n\n@param       Handle          The Handle of the controller you want to deactivate all action set layers for.\n@param       Data            This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActiveActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActiveActionSetLayers_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetActiveActionSetLayers", Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::OrionSteamInput_eventGetActiveActionSetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::OrionSteamInput_eventGetActiveActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetActiveActionSetLayers)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_TARRAY_REF(FInputActionSetHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveActionSetLayers(Z_Param_Handle,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetActiveActionSetLayers *************************

// ********** Begin Class UOrionSteamInput Function GetAnalogActionData ****************************
struct Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics
{
	struct OrionSteamInput_eventGetAnalogActionData_Parms
	{
		FInputHandle Handle;
		FInputAnalogActionHandle AnalogActionHandle;
		FInputAnalogActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current state of the supplied analog game action.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09 * @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current state of the supplied analog game action.\n\n@param       Handle                                  The Handle of the controller you want to query.\n@param       AnalogActionHandle              The Handle of the analog action you want to query." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionData_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 264666639
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionData, METADATA_PARAMS(0, nullptr) }; // 4205309177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetAnalogActionData", Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::OrionSteamInput_eventGetAnalogActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::OrionSteamInput_eventGetAnalogActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetAnalogActionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAnalogActionData*)Z_Param__Result=P_THIS->GetAnalogActionData(Z_Param_Handle,Z_Param_AnalogActionHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetAnalogActionData ******************************

// ********** Begin Class UOrionSteamInput Function GetAnalogActionHandle **************************
struct Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics
{
	struct OrionSteamInput_eventGetAnalogActionHandle_Parms
	{
		FString PszActionName;
		FInputAnalogActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Handle of the specified Analog action.\n\x09 *\n\x09 * @param\x09PszActionName\x09\x09The string identifier of the analog action defined in the game's VDF file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Handle of the specified Analog action.\n\n@param       PszActionName           The string identifier of the analog action defined in the game's VDF file." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionHandle_Parms, PszActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 264666639
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::NewProp_PszActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetAnalogActionHandle", Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::OrionSteamInput_eventGetAnalogActionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::OrionSteamInput_eventGetAnalogActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetAnalogActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_PszActionName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetAnalogActionHandle ****************************

// ********** Begin Class UOrionSteamInput Function GetAnalogActionOrigins *************************
struct Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics
{
	struct OrionSteamInput_eventGetAnalogActionOrigins_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
		FInputAnalogActionHandle AnalogActionHandle;
		TArray<int32> OriginsOut;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09 * @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09 * @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09 * @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param       Handle                                  The Handle of the controller you want to query.\n@param       ActionSetHandle                 The Handle of the action set you want to query.\n@param       AnalogActionHandle              The Handle of the analog action you want to query.\n@param       OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 264666639
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetAnalogActionOrigins", Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::OrionSteamInput_eventGetAnalogActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::OrionSteamInput_eventGetAnalogActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetAnalogActionOrigins)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetAnalogActionOrigins ***************************

// ********** Begin Class UOrionSteamInput Function GetConnectedControllers ************************
struct Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics
{
	struct OrionSteamInput_eventGetConnectedControllers_Parms
	{
		TArray<FInputHandle> OutHandles;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enumerates currently connected controllers by filling OutHandles with controller handles.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates currently connected controllers by filling OutHandles with controller handles." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHandles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner = { "OutHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::NewProp_OutHandles = { "OutHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetConnectedControllers_Parms, OutHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetConnectedControllers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::NewProp_OutHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetConnectedControllers", Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::OrionSteamInput_eventGetConnectedControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::OrionSteamInput_eventGetConnectedControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetConnectedControllers)
{
	P_GET_TARRAY_REF(FInputHandle,Z_Param_Out_OutHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConnectedControllers(Z_Param_Out_OutHandles);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetConnectedControllers **************************

// ********** Begin Class UOrionSteamInput Function GetControllerForGamepadIndex *******************
struct Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics
{
	struct OrionSteamInput_eventGetControllerForGamepadIndex_Parms
	{
		int32 Index;
		FInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\x09 *\n\x09 * @param\x09Index\x09The index of the emulated gamepad you want to get a controller Handle for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\n@param       Index   The index of the emulated gamepad you want to get a controller Handle for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetControllerForGamepadIndex", Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::OrionSteamInput_eventGetControllerForGamepadIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::OrionSteamInput_eventGetControllerForGamepadIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetControllerForGamepadIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetControllerForGamepadIndex *********************

// ********** Begin Class UOrionSteamInput Function GetCurrentActionSet ****************************
struct Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics
{
	struct OrionSteamInput_eventGetCurrentActionSet_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the currently active action set for the specified controller.\n\x09 *\n\x09 * @param\x09Handle\x09The Handle of the controller you want to query.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the currently active action set for the specified controller.\n\n@param       Handle  The Handle of the controller you want to query." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetCurrentActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetCurrentActionSet", Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::OrionSteamInput_eventGetCurrentActionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::OrionSteamInput_eventGetCurrentActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetCurrentActionSet)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetCurrentActionSet ******************************

// ********** Begin Class UOrionSteamInput Function GetDeviceBindingRevision ***********************
struct Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics
{
	struct OrionSteamInput_eventGetDeviceBindingRevision_Parms
	{
		FInputHandle Handle;
		int32 Major;
		int32 Minor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The Handle of the controller to query.\n\x09 * @param\x09Major\x09\x09Pointer to int that Major binding revision will be populated into\n\x09 * @param\x09Minor\x09\x09Pointer to int that Minor binding revision will be populated into\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\n@param       Handle          The Handle of the controller to query.\n@param       Major           Pointer to int that Major binding revision will be populated into\n@param       Minor           Pointer to int that Minor binding revision will be populated into" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDeviceBindingRevision_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetDeviceBindingRevision", Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::OrionSteamInput_eventGetDeviceBindingRevision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::OrionSteamInput_eventGetDeviceBindingRevision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetDeviceBindingRevision)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDeviceBindingRevision(Z_Param_Handle,Z_Param_Out_Major,Z_Param_Out_Minor);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetDeviceBindingRevision *************************

// ********** Begin Class UOrionSteamInput Function GetDigitalActionData ***************************
struct Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics
{
	struct OrionSteamInput_eventGetDigitalActionData_Parms
	{
		FInputHandle Handle;
		FInputDigitalActionHandle DigitalActionHandle;
		FInputDigitalActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current state of the supplied digital game action.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09 * @param\x09""DigitalActionHandle\x09\x09The Handle of the digital action you want to query.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current state of the supplied digital game action.\n\n@param       Handle                                  The Handle of the controller you want to query.\n@param       DigitalActionHandle             The Handle of the digital action you want to query." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 827094566
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionData, METADATA_PARAMS(0, nullptr) }; // 1273547694
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetDigitalActionData", Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::OrionSteamInput_eventGetDigitalActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::OrionSteamInput_eventGetDigitalActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetDigitalActionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDigitalActionData*)Z_Param__Result=P_THIS->GetDigitalActionData(Z_Param_Handle,Z_Param_DigitalActionHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetDigitalActionData *****************************

// ********** Begin Class UOrionSteamInput Function GetDigitalActionHandle *************************
struct Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics
{
	struct OrionSteamInput_eventGetDigitalActionHandle_Parms
	{
		FString PszActionName;
		FInputDigitalActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Handle of the specified digital action.\n\x09 *\n\x09 * @param\x09PszActionName\x09The string identifier of the digital action defined in the game's VDF file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Handle of the specified digital action.\n\n@param       PszActionName   The string identifier of the digital action defined in the game's VDF file." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionHandle_Parms, PszActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 827094566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::NewProp_PszActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetDigitalActionHandle", Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::OrionSteamInput_eventGetDigitalActionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::OrionSteamInput_eventGetDigitalActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetDigitalActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_PszActionName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetDigitalActionHandle ***************************

// ********** Begin Class UOrionSteamInput Function GetDigitalActionOrigins ************************
struct Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics
{
	struct OrionSteamInput_eventGetDigitalActionOrigins_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
		FInputDigitalActionHandle DigitalActionHandle;
		TArray<int32> OriginsOut;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09 * @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09 * @param\x09""DigitalActionHandle\x09\x09The Handle of the digital aciton you want to query.\n\x09 * @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param       Handle                                  The Handle of the controller you want to query.\n@param       ActionSetHandle                 The Handle of the action set you want to query.\n@param       DigitalActionHandle             The Handle of the digital aciton you want to query.\n@param       OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 1743506528
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 827094566
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetDigitalActionOrigins", Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::OrionSteamInput_eventGetDigitalActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::OrionSteamInput_eventGetDigitalActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetDigitalActionOrigins)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetDigitalActionOrigins **************************

// ********** Begin Class UOrionSteamInput Function GetGamepadIndexForController *******************
struct Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics
{
	struct OrionSteamInput_eventGetGamepadIndexForController_Parms
	{
		FInputHandle Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The Handle of the controller you want to get a gamepad index for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\n@param       Handle          The Handle of the controller you want to get a gamepad index for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGamepadIndexForController_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetGamepadIndexForController", Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::OrionSteamInput_eventGetGamepadIndexForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::OrionSteamInput_eventGetGamepadIndexForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetGamepadIndexForController)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetGamepadIndexForController *********************

// ********** Begin Class UOrionSteamInput Function GetGlyphForActionOrigin_Legacy *****************
struct Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics
{
	struct OrionSteamInput_eventGetGlyphForActionOrigin_Legacy_Parms
	{
		int32 Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a local path to art for on-screen glyph for a particular Origin.\n\x09 *\n\x09 * @param\x09Origin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a local path to art for on-screen glyph for a particular Origin.\n\n@param       Origin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphForActionOrigin_Legacy_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphForActionOrigin_Legacy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetGlyphForActionOrigin_Legacy", Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::OrionSteamInput_eventGetGlyphForActionOrigin_Legacy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::OrionSteamInput_eventGetGlyphForActionOrigin_Legacy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetGlyphForActionOrigin_Legacy)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphForActionOrigin_Legacy(Z_Param_Origin);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetGlyphForActionOrigin_Legacy *******************

// ********** Begin Class UOrionSteamInput Function GetGlyphForXboxOrigin **************************
struct Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics
{
	struct OrionSteamInput_eventGetGlyphForXboxOrigin_Parms
	{
		EOrionSteamXboxOrigin Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09 *\n\x09 * @param\x09Origin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param       Origin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphForXboxOrigin_Parms, Origin), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 901980414
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetGlyphForXboxOrigin", Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::OrionSteamInput_eventGetGlyphForXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::OrionSteamInput_eventGetGlyphForXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetGlyphForXboxOrigin)
{
	P_GET_ENUM(EOrionSteamXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphForXboxOrigin(EOrionSteamXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetGlyphForXboxOrigin ****************************

// ********** Begin Class UOrionSteamInput Function GetGlyphPNGForActionOrigin *********************
struct Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics
{
	struct OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms
	{
		int32 Origin;
		EOrionSteamInputGlyphSize Size;
		int32 Flags;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a local path to a PNG file for the provided origin's glyph.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a local path to a PNG file for the provided origin's glyph." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms, Size), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize, METADATA_PARAMS(0, nullptr) }; // 2837893346
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms, Flags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Size_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetGlyphPNGForActionOrigin", Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::OrionSteamInput_eventGetGlyphPNGForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetGlyphPNGForActionOrigin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Origin);
	P_GET_ENUM(EOrionSteamInputGlyphSize,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphPNGForActionOrigin(Z_Param_Origin,EOrionSteamInputGlyphSize(Z_Param_Size),Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetGlyphPNGForActionOrigin ***********************

// ********** Begin Class UOrionSteamInput Function GetGlyphSVGForActionOrigin *********************
struct Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics
{
	struct OrionSteamInput_eventGetGlyphSVGForActionOrigin_Parms
	{
		int32 Origin;
		int32 Flags;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Get a local path to a SVG file for the provided origin's glyph.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a local path to a SVG file for the provided origin's glyph." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphSVGForActionOrigin_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphSVGForActionOrigin_Parms, Flags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetGlyphSVGForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetGlyphSVGForActionOrigin", Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::OrionSteamInput_eventGetGlyphSVGForActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::OrionSteamInput_eventGetGlyphSVGForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetGlyphSVGForActionOrigin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Origin);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphSVGForActionOrigin(Z_Param_Origin,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetGlyphSVGForActionOrigin ***********************

// ********** Begin Class UOrionSteamInput Function GetInputActionOriginAsInteger ******************
struct Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics
{
	struct OrionSteamInput_eventGetInputActionOriginAsInteger_Parms
	{
		FString Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputActionOriginAsInteger_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputActionOriginAsInteger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetInputActionOriginAsInteger", Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::OrionSteamInput_eventGetInputActionOriginAsInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::OrionSteamInput_eventGetInputActionOriginAsInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetInputActionOriginAsInteger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInputActionOriginAsInteger(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetInputActionOriginAsInteger ********************

// ********** Begin Class UOrionSteamInput Function GetInputActionOriginAsString *******************
struct Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics
{
	struct OrionSteamInput_eventGetInputActionOriginAsString_Parms
	{
		int32 Id;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputActionOriginAsString_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputActionOriginAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetInputActionOriginAsString", Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::OrionSteamInput_eventGetInputActionOriginAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::OrionSteamInput_eventGetInputActionOriginAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetInputActionOriginAsString)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetInputActionOriginAsString(Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetInputActionOriginAsString *********************

// ********** Begin Class UOrionSteamInput Function GetInputActionOrigins **************************
struct Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics
{
	struct OrionSteamInput_eventGetInputActionOrigins_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputActionOrigins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetInputActionOrigins", Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::OrionSteamInput_eventGetInputActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::OrionSteamInput_eventGetInputActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetInputActionOrigins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputActionOrigins();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetInputActionOrigins ****************************

// ********** Begin Class UOrionSteamInput Function GetInputTypeForHandle **************************
struct Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics
{
	struct OrionSteamInput_eventGetInputTypeForHandle_Parms
	{
		FInputHandle Handle;
		EOrionSteamInputType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\x09 *\n\x09 * @param\x09Handle\x09The Handle of the controller whose input type (device model) you want to query\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\n@param       Handle  The Handle of the controller whose input type (device model) you want to query" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputTypeForHandle_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType, METADATA_PARAMS(0, nullptr) }; // 3380170689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetInputTypeForHandle", Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::OrionSteamInput_eventGetInputTypeForHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::OrionSteamInput_eventGetInputTypeForHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetInputTypeForHandle)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOrionSteamInputType*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetInputTypeForHandle ****************************

// ********** Begin Class UOrionSteamInput Function GetMotionData **********************************
struct Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics
{
	struct OrionSteamInput_eventGetMotionData_Parms
	{
		FInputHandle Handle;
		FInputMotionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns raw motion data for the specified controller.\n\x09 *\n\x09 * @param\x09Handle\x09The Handle of the controller you want to get motion data for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns raw motion data for the specified controller.\n\n@param       Handle  The Handle of the controller you want to get motion data for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetMotionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMotionData, METADATA_PARAMS(0, nullptr) }; // 3248264950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetMotionData", Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::OrionSteamInput_eventGetMotionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::OrionSteamInput_eventGetMotionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetMotionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetMotionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetMotionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetMotionData ************************************

// ********** Begin Class UOrionSteamInput Function GetRemotePlaySessionID *************************
struct Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics
{
	struct OrionSteamInput_eventGetRemotePlaySessionID_Parms
	{
		FInputHandle Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09 *\n\x09 * @param\x09Handle The Handle of the controller to query.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\n@param       Handle The Handle of the controller to query." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetRemotePlaySessionID_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetRemotePlaySessionID", Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::OrionSteamInput_eventGetRemotePlaySessionID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::OrionSteamInput_eventGetRemotePlaySessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetRemotePlaySessionID)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetRemotePlaySessionID ***************************

// ********** Begin Class UOrionSteamInput Function GetSessionInputConfigurationSettings ***********
struct Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics
{
	struct OrionSteamInput_eventGetSessionInputConfigurationSettings_Parms
	{
		TArray<EOrionSteamInputConfigurationEnableType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a bitmask of the Steam Input Configuration types opted in for the current session. Returns ESteamInputConfigurationEnableType values.?\n\x09 * Note: user can override the settings from the Steamworks Partner site so the returned values may not exactly match your default configuration\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a bitmask of the Steam Input Configuration types opted in for the current session. Returns ESteamInputConfigurationEnableType values.?\nNote: user can override the settings from the Steamworks Partner site so the returned values may not exactly match your default configuration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType, METADATA_PARAMS(0, nullptr) }; // 1549694114
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetSessionInputConfigurationSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1549694114
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetSessionInputConfigurationSettings", Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::OrionSteamInput_eventGetSessionInputConfigurationSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::OrionSteamInput_eventGetSessionInputConfigurationSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetSessionInputConfigurationSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EOrionSteamInputConfigurationEnableType>*)Z_Param__Result=UOrionSteamInput::GetSessionInputConfigurationSettings();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetSessionInputConfigurationSettings *************

// ********** Begin Class UOrionSteamInput Function GetSteamInput **********************************
struct Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics
{
	struct OrionSteamInput_eventGetSteamInput_Parms
	{
		UOrionSteamInput* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetSteamInput_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamInput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetSteamInput", Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::OrionSteamInput_eventGetSteamInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::OrionSteamInput_eventGetSteamInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetSteamInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetSteamInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetSteamInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamInput**)Z_Param__Result=UOrionSteamInput::GetSteamInput();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetSteamInput ************************************

// ********** Begin Class UOrionSteamInput Function GetStringForActionOrigin ***********************
struct Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics
{
	struct OrionSteamInput_eventGetStringForActionOrigin_Parms
	{
		int32 Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a localized string (from Steam's language setting) for the specified Origin.\n\x09 *\n\x09 * @param\x09Origin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified Origin.\n\n@param       Origin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForActionOrigin_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetStringForActionOrigin", Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::OrionSteamInput_eventGetStringForActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::OrionSteamInput_eventGetStringForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetStringForActionOrigin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(Z_Param_Origin);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetStringForActionOrigin *************************

// ********** Begin Class UOrionSteamInput Function GetStringForAnalogActionName *******************
struct Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics
{
	struct OrionSteamInput_eventGetStringForAnalogActionName_Parms
	{
		FInputAnalogActionHandle ActionHandle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::NewProp_ActionHandle = { "ActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForAnalogActionName_Parms, ActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 264666639
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForAnalogActionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::NewProp_ActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetStringForAnalogActionName", Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::OrionSteamInput_eventGetStringForAnalogActionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::OrionSteamInput_eventGetStringForAnalogActionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetStringForAnalogActionName)
{
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_ActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamInput::GetStringForAnalogActionName(Z_Param_ActionHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetStringForAnalogActionName *********************

// ********** Begin Class UOrionSteamInput Function GetStringForDigitalActionName ******************
struct Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics
{
	struct OrionSteamInput_eventGetStringForDigitalActionName_Parms
	{
		FInputDigitalActionHandle ActionHandle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::NewProp_ActionHandle = { "ActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForDigitalActionName_Parms, ActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 827094566
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForDigitalActionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::NewProp_ActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetStringForDigitalActionName", Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::OrionSteamInput_eventGetStringForDigitalActionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::OrionSteamInput_eventGetStringForDigitalActionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetStringForDigitalActionName)
{
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_ActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamInput::GetStringForDigitalActionName(Z_Param_ActionHandle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetStringForDigitalActionName ********************

// ********** Begin Class UOrionSteamInput Function GetStringForXboxOrigin *************************
struct Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics
{
	struct OrionSteamInput_eventGetStringForXboxOrigin_Parms
	{
		EOrionSteamXboxOrigin Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09 *\n\x09 * @param\x09Origin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param       Origin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForXboxOrigin_Parms, Origin), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 901980414
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventGetStringForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "GetStringForXboxOrigin", Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::OrionSteamInput_eventGetStringForXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::OrionSteamInput_eventGetStringForXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execGetStringForXboxOrigin)
{
	P_GET_ENUM(EOrionSteamXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringForXboxOrigin(EOrionSteamXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function GetStringForXboxOrigin ***************************

// ********** Begin Class UOrionSteamInput Function Init *******************************************
struct Z_Construct_UFunction_UOrionSteamInput_Init_Statics
{
	struct OrionSteamInput_eventInit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Init and Shutdown must be called when starting/ending use of this interface\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamInput_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventInit_Parms), &Z_Construct_UFunction_UOrionSteamInput_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "Init", Z_Construct_UFunction_UOrionSteamInput_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_Init_Statics::OrionSteamInput_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_Init_Statics::OrionSteamInput_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function Init *********************************************

// ********** Begin Class UOrionSteamInput Function Legacy_TriggerHapticPulse **********************
struct Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics
{
	struct OrionSteamInput_eventLegacy_TriggerHapticPulse_Parms
	{
		FInputHandle Handle;
		EOrionSteamControllerPad TargetPad;
		float DurationMicroSec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Triggers a (low-level) haptic pulse on supported controllers.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09 * @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09 * @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers a (low-level) haptic pulse on supported controllers.\n\n@param       Handle                          The Handle of the controller to affect.\n@param       TargetPad                       Which haptic touch pad to affect.\n@param       DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerHapticPulse_Parms, TargetPad), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad, METADATA_PARAMS(0, nullptr) }; // 2796586706
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerHapticPulse_Parms, DurationMicroSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::NewProp_DurationMicroSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "Legacy_TriggerHapticPulse", Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::OrionSteamInput_eventLegacy_TriggerHapticPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::OrionSteamInput_eventLegacy_TriggerHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execLegacy_TriggerHapticPulse)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(EOrionSteamControllerPad,Z_Param_TargetPad);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationMicroSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Legacy_TriggerHapticPulse(Z_Param_Handle,EOrionSteamControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function Legacy_TriggerHapticPulse ************************

// ********** Begin Class UOrionSteamInput Function Legacy_TriggerRepeatedHapticPulse **************
struct Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics
{
	struct OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms
	{
		FInputHandle Handle;
		EOrionSteamControllerPad TargetPad;
		float DurationMicroSec;
		float OffMicroSec;
		int32 Repeat;
		uint8 Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Triggers a repeated haptic pulse on supported controllers.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09 * @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09 * @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second).\n\x09 * @param\x09OffMicroSec\x09\x09\x09""Duration of the pause between pulses, in microseconds.\n\x09 * @param\x09Repeat\x09\x09\x09\x09Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n\x09 * @param\x09""Flags\x09\x09\x09\x09""Currently unused and reserved for future use.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers a repeated haptic pulse on supported controllers.\n\n@param       Handle                          The Handle of the controller to affect.\n@param       TargetPad                       Which haptic touch pad to affect.\n@param       DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second).\n@param       OffMicroSec                     Duration of the pause between pulses, in microseconds.\n@param       Repeat                          Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n@param       Flags                           Currently unused and reserved for future use." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffMicroSec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Repeat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, TargetPad), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad, METADATA_PARAMS(0, nullptr) }; // 2796586706
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, DurationMicroSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec = { "OffMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, OffMicroSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, Repeat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, Flags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "Legacy_TriggerRepeatedHapticPulse", Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::OrionSteamInput_eventLegacy_TriggerRepeatedHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execLegacy_TriggerRepeatedHapticPulse)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(EOrionSteamControllerPad,Z_Param_TargetPad);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationMicroSec);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffMicroSec);
	P_GET_PROPERTY(FIntProperty,Z_Param_Repeat);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Legacy_TriggerRepeatedHapticPulse(Z_Param_Handle,EOrionSteamControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec,Z_Param_OffMicroSec,Z_Param_Repeat,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function Legacy_TriggerRepeatedHapticPulse ****************

// ********** Begin Class UOrionSteamInput Function SetDualSenseTriggerEffect **********************
struct Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics
{
	struct OrionSteamInput_eventSetDualSenseTriggerEffect_Parms
	{
		FInputHandle InputHandle;
		FScePadTriggerEffectCommand R2;
		FScePadTriggerEffectCommand L2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the trigger effect for a DualSense controller\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the trigger effect for a DualSense controller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_R2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_L2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetDualSenseTriggerEffect_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::NewProp_R2 = { "R2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetDualSenseTriggerEffect_Parms, R2), Z_Construct_UScriptStruct_FScePadTriggerEffectCommand, METADATA_PARAMS(0, nullptr) }; // 1167765407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::NewProp_L2 = { "L2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetDualSenseTriggerEffect_Parms, L2), Z_Construct_UScriptStruct_FScePadTriggerEffectCommand, METADATA_PARAMS(0, nullptr) }; // 1167765407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::NewProp_R2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::NewProp_L2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "SetDualSenseTriggerEffect", Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::OrionSteamInput_eventSetDualSenseTriggerEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::OrionSteamInput_eventSetDualSenseTriggerEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execSetDualSenseTriggerEffect)
{
	P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FScePadTriggerEffectCommand,Z_Param_R2);
	P_GET_STRUCT(FScePadTriggerEffectCommand,Z_Param_L2);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamInput::SetDualSenseTriggerEffect(Z_Param_InputHandle,Z_Param_R2,Z_Param_L2);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function SetDualSenseTriggerEffect ************************

// ********** Begin Class UOrionSteamInput Function SetInputActionManifestFilePath *****************
struct Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics
{
	struct OrionSteamInput_eventSetInputActionManifestFilePath_Parms
	{
		FString InputActionManifestAbsolutePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the absolute path to the Input Action Manifest file containing the in-game actions\n\x09 * and file paths to the official configurations. Used in games that bundle Steam Input\n\x09 * configurations inside of the game depot instead of using the Steam Workshop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the absolute path to the Input Action Manifest file containing the in-game actions\nand file paths to the official configurations. Used in games that bundle Steam Input\nconfigurations inside of the game depot instead of using the Steam Workshop" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputActionManifestAbsolutePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::NewProp_InputActionManifestAbsolutePath = { "InputActionManifestAbsolutePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetInputActionManifestFilePath_Parms, InputActionManifestAbsolutePath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventSetInputActionManifestFilePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventSetInputActionManifestFilePath_Parms), &Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::NewProp_InputActionManifestAbsolutePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "SetInputActionManifestFilePath", Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::OrionSteamInput_eventSetInputActionManifestFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::OrionSteamInput_eventSetInputActionManifestFilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execSetInputActionManifestFilePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputActionManifestAbsolutePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInputActionManifestFilePath(Z_Param_InputActionManifestAbsolutePath);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function SetInputActionManifestFilePath *******************

// ********** Begin Class UOrionSteamInput Function SetLEDColor ************************************
struct Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics
{
	struct OrionSteamInput_eventSetLEDColor_Parms
	{
		FInputHandle Handle;
		uint8 ColorR;
		uint8 ColorG;
		uint8 ColorB;
		EOrionSteamInputLEDFlag Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the controller LED color on supported controllers.\n\x09 *\n\x09 * @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09 * @param\x09""ColorR\x09\x09The red component of the color to set (0-255).\n\x09 * @param\x09""ColorG\x09\x09The green component of the color to set (0-255).\n\x09 * @param\x09""ColorB\x09\x09The blue component of the color to set (0-255).\n\x09 * @param\x09""Flags\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the controller LED color on supported controllers.\n\n@param       Handle          The Handle of the controller to affect.\n@param       ColorR          The red component of the color to set (0-255).\n@param       ColorG          The green component of the color to set (0-255).\n@param       ColorB          The blue component of the color to set (0-255).\n@param       Flags" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorR;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorG;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetLEDColor_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_ColorR = { "ColorR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetLEDColor_Parms, ColorR), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_ColorG = { "ColorG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetLEDColor_Parms, ColorG), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetLEDColor_Parms, ColorB), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventSetLEDColor_Parms, Flags), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag, METADATA_PARAMS(0, nullptr) }; // 3171955057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_ColorR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_ColorG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_ColorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "SetLEDColor", Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::OrionSteamInput_eventSetLEDColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::OrionSteamInput_eventSetLEDColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_SetLEDColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_SetLEDColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execSetLEDColor)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorR);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorG);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorB);
	P_GET_ENUM(EOrionSteamInputLEDFlag,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLEDColor(Z_Param_Handle,Z_Param_ColorR,Z_Param_ColorG,Z_Param_ColorB,EOrionSteamInputLEDFlag(Z_Param_Flags));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function SetLEDColor **************************************

// ********** Begin Class UOrionSteamInput Function ShowBindingPanel *******************************
struct Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics
{
	struct OrionSteamInput_eventShowBindingPanel_Parms
	{
		FInputHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Invokes the Steam overlay and brings up the binding screen.\n\x09 *\n\x09 * @param\x09Handle\x09The Handle of the controller you want to bring up the binding screen for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen.\n\n@param       Handle  The Handle of the controller you want to bring up the binding screen for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventShowBindingPanel_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
void Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventShowBindingPanel_Parms), &Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "ShowBindingPanel", Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::OrionSteamInput_eventShowBindingPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::OrionSteamInput_eventShowBindingPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execShowBindingPanel)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function ShowBindingPanel *********************************

// ********** Begin Class UOrionSteamInput Function Shutdown ***************************************
struct Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics
{
	struct OrionSteamInput_eventShutdown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Init and Shutdown must be called when starting/ending use of this interface\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Init and Shutdown must be called when starting/ending use of this interface" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamInput_eventShutdown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamInput_eventShutdown_Parms), &Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "Shutdown", Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::OrionSteamInput_eventShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::OrionSteamInput_eventShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_Shutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_Shutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shutdown();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function Shutdown *****************************************

// ********** Begin Class UOrionSteamInput Function StopAnalogActionMomentum ***********************
struct Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics
{
	struct OrionSteamInput_eventStopAnalogActionMomentum_Parms
	{
		FInputHandle Handle;
		FInputAnalogActionHandle EAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\x09 *\n\x09 * @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09 * @param\x09""EAction\x09\x09The analog action to stop momentum for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\n@param       Handle          The Handle of the controller to affect.\n@param       EAction         The analog action to stop momentum for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventStopAnalogActionMomentum_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::NewProp_EAction = { "EAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventStopAnalogActionMomentum_Parms, EAction), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 264666639
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::NewProp_EAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "StopAnalogActionMomentum", Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::OrionSteamInput_eventStopAnalogActionMomentum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::OrionSteamInput_eventStopAnalogActionMomentum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execStopAnalogActionMomentum)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_EAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAnalogActionMomentum(Z_Param_Handle,Z_Param_EAction);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function StopAnalogActionMomentum *************************

// ********** Begin Class UOrionSteamInput Function TranslateActionOrigin **************************
struct Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics
{
	struct OrionSteamInput_eventTranslateActionOrigin_Parms
	{
		EOrionSteamInputType DestinationInputType;
		int32 SourceOrigin;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\x09 *\n\x09 * When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\n\x09 * ex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\x09 *\n\x09 * @param\x09""DestinationInputType\n\x09 * @param\x09SourceOrigin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\nWhen a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\nex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\n@param       DestinationInputType\n@param       SourceOrigin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationInputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType = { "DestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventTranslateActionOrigin_Parms, DestinationInputType), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType, METADATA_PARAMS(0, nullptr) }; // 3380170689
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin = { "SourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventTranslateActionOrigin_Parms, SourceOrigin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventTranslateActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "TranslateActionOrigin", Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::OrionSteamInput_eventTranslateActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::OrionSteamInput_eventTranslateActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execTranslateActionOrigin)
{
	P_GET_ENUM(EOrionSteamInputType,Z_Param_DestinationInputType);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TranslateActionOrigin(EOrionSteamInputType(Z_Param_DestinationInputType),Z_Param_SourceOrigin);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function TranslateActionOrigin ****************************

// ********** Begin Class UOrionSteamInput Function TriggerVibration *******************************
struct Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics
{
	struct OrionSteamInput_eventTriggerVibration_Parms
	{
		FInputHandle Handle;
		float LeftSpeed;
		float RightSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Trigger a vibration event on supported controllers.\n\x09 *\n\x09 * @param\x09Handle\x09\x09\x09The Handle of the controller to affect.\n\x09 * @param\x09LeftSpeed\x09\x09The intensity value for the left rumble motor.\n\x09 * @param\x09RightSpeed\x09\x09The intensity value of the right rumble motor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger a vibration event on supported controllers.\n\n@param       Handle                  The Handle of the controller to affect.\n@param       LeftSpeed               The intensity value for the left rumble motor.\n@param       RightSpeed              The intensity value of the right rumble motor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventTriggerVibration_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 2981625445
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventTriggerVibration_Parms, LeftSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamInput_eventTriggerVibration_Parms, RightSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::NewProp_LeftSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::NewProp_RightSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamInput, nullptr, "TriggerVibration", Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::OrionSteamInput_eventTriggerVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::OrionSteamInput_eventTriggerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamInput_TriggerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamInput_TriggerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamInput::execTriggerVibration)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LeftSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerVibration(Z_Param_Handle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamInput Function TriggerVibration *********************************

// ********** Begin Class UOrionSteamInput *********************************************************
void UOrionSteamInput::StaticRegisterNativesUOrionSteamInput()
{
	UClass* Class = UOrionSteamInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateActionSet", &UOrionSteamInput::execActivateActionSet },
		{ "ActivateActionSetLayer", &UOrionSteamInput::execActivateActionSetLayer },
		{ "BNewDataAvailable", &UOrionSteamInput::execBNewDataAvailable },
		{ "BWaitForData", &UOrionSteamInput::execBWaitForData },
		{ "DeactivateActionSetLayer", &UOrionSteamInput::execDeactivateActionSetLayer },
		{ "DeactivateAllActionSetLayers", &UOrionSteamInput::execDeactivateAllActionSetLayers },
		{ "GetActionOriginFromXboxOrigin", &UOrionSteamInput::execGetActionOriginFromXboxOrigin },
		{ "GetActionSetHandle", &UOrionSteamInput::execGetActionSetHandle },
		{ "GetActiveActionSetLayers", &UOrionSteamInput::execGetActiveActionSetLayers },
		{ "GetAnalogActionData", &UOrionSteamInput::execGetAnalogActionData },
		{ "GetAnalogActionHandle", &UOrionSteamInput::execGetAnalogActionHandle },
		{ "GetAnalogActionOrigins", &UOrionSteamInput::execGetAnalogActionOrigins },
		{ "GetConnectedControllers", &UOrionSteamInput::execGetConnectedControllers },
		{ "GetControllerForGamepadIndex", &UOrionSteamInput::execGetControllerForGamepadIndex },
		{ "GetCurrentActionSet", &UOrionSteamInput::execGetCurrentActionSet },
		{ "GetDeviceBindingRevision", &UOrionSteamInput::execGetDeviceBindingRevision },
		{ "GetDigitalActionData", &UOrionSteamInput::execGetDigitalActionData },
		{ "GetDigitalActionHandle", &UOrionSteamInput::execGetDigitalActionHandle },
		{ "GetDigitalActionOrigins", &UOrionSteamInput::execGetDigitalActionOrigins },
		{ "GetGamepadIndexForController", &UOrionSteamInput::execGetGamepadIndexForController },
		{ "GetGlyphForActionOrigin_Legacy", &UOrionSteamInput::execGetGlyphForActionOrigin_Legacy },
		{ "GetGlyphForXboxOrigin", &UOrionSteamInput::execGetGlyphForXboxOrigin },
		{ "GetGlyphPNGForActionOrigin", &UOrionSteamInput::execGetGlyphPNGForActionOrigin },
		{ "GetGlyphSVGForActionOrigin", &UOrionSteamInput::execGetGlyphSVGForActionOrigin },
		{ "GetInputActionOriginAsInteger", &UOrionSteamInput::execGetInputActionOriginAsInteger },
		{ "GetInputActionOriginAsString", &UOrionSteamInput::execGetInputActionOriginAsString },
		{ "GetInputActionOrigins", &UOrionSteamInput::execGetInputActionOrigins },
		{ "GetInputTypeForHandle", &UOrionSteamInput::execGetInputTypeForHandle },
		{ "GetMotionData", &UOrionSteamInput::execGetMotionData },
		{ "GetRemotePlaySessionID", &UOrionSteamInput::execGetRemotePlaySessionID },
		{ "GetSessionInputConfigurationSettings", &UOrionSteamInput::execGetSessionInputConfigurationSettings },
		{ "GetSteamInput", &UOrionSteamInput::execGetSteamInput },
		{ "GetStringForActionOrigin", &UOrionSteamInput::execGetStringForActionOrigin },
		{ "GetStringForAnalogActionName", &UOrionSteamInput::execGetStringForAnalogActionName },
		{ "GetStringForDigitalActionName", &UOrionSteamInput::execGetStringForDigitalActionName },
		{ "GetStringForXboxOrigin", &UOrionSteamInput::execGetStringForXboxOrigin },
		{ "Init", &UOrionSteamInput::execInit },
		{ "Legacy_TriggerHapticPulse", &UOrionSteamInput::execLegacy_TriggerHapticPulse },
		{ "Legacy_TriggerRepeatedHapticPulse", &UOrionSteamInput::execLegacy_TriggerRepeatedHapticPulse },
		{ "SetDualSenseTriggerEffect", &UOrionSteamInput::execSetDualSenseTriggerEffect },
		{ "SetInputActionManifestFilePath", &UOrionSteamInput::execSetInputActionManifestFilePath },
		{ "SetLEDColor", &UOrionSteamInput::execSetLEDColor },
		{ "ShowBindingPanel", &UOrionSteamInput::execShowBindingPanel },
		{ "Shutdown", &UOrionSteamInput::execShutdown },
		{ "StopAnalogActionMomentum", &UOrionSteamInput::execStopAnalogActionMomentum },
		{ "TranslateActionOrigin", &UOrionSteamInput::execTranslateActionOrigin },
		{ "TriggerVibration", &UOrionSteamInput::execTriggerVibration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamInput;
UClass* UOrionSteamInput::GetPrivateStaticClass()
{
	using TClass = UOrionSteamInput;
	if (!Z_Registration_Info_UClass_UOrionSteamInput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamInput"),
			Z_Registration_Info_UClass_UOrionSteamInput.InnerSingleton,
			StaticRegisterNativesUOrionSteamInput,
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
	return Z_Registration_Info_UClass_UOrionSteamInput.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamInput_NoRegister()
{
	return UOrionSteamInput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInput/SteamInput.h" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionOrigin_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputActionOrigin_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputActionOrigin_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamInput_ActivateActionSet, "ActivateActionSet" }, // 4088846073
		{ &Z_Construct_UFunction_UOrionSteamInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 2569685762
		{ &Z_Construct_UFunction_UOrionSteamInput_BNewDataAvailable, "BNewDataAvailable" }, // 1881779706
		{ &Z_Construct_UFunction_UOrionSteamInput_BWaitForData, "BWaitForData" }, // 2033596356
		{ &Z_Construct_UFunction_UOrionSteamInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 759466200
		{ &Z_Construct_UFunction_UOrionSteamInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 233960843
		{ &Z_Construct_UFunction_UOrionSteamInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 2748024622
		{ &Z_Construct_UFunction_UOrionSteamInput_GetActionSetHandle, "GetActionSetHandle" }, // 1557101598
		{ &Z_Construct_UFunction_UOrionSteamInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 1030449147
		{ &Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionData, "GetAnalogActionData" }, // 2231886017
		{ &Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 3933246080
		{ &Z_Construct_UFunction_UOrionSteamInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 3339421207
		{ &Z_Construct_UFunction_UOrionSteamInput_GetConnectedControllers, "GetConnectedControllers" }, // 1590212802
		{ &Z_Construct_UFunction_UOrionSteamInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 3722847901
		{ &Z_Construct_UFunction_UOrionSteamInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 318574154
		{ &Z_Construct_UFunction_UOrionSteamInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 2368777761
		{ &Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionData, "GetDigitalActionData" }, // 3450736472
		{ &Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 628313837
		{ &Z_Construct_UFunction_UOrionSteamInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 1879710097
		{ &Z_Construct_UFunction_UOrionSteamInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 13613609
		{ &Z_Construct_UFunction_UOrionSteamInput_GetGlyphForActionOrigin_Legacy, "GetGlyphForActionOrigin_Legacy" }, // 2109105780
		{ &Z_Construct_UFunction_UOrionSteamInput_GetGlyphForXboxOrigin, "GetGlyphForXboxOrigin" }, // 1652002097
		{ &Z_Construct_UFunction_UOrionSteamInput_GetGlyphPNGForActionOrigin, "GetGlyphPNGForActionOrigin" }, // 3827722521
		{ &Z_Construct_UFunction_UOrionSteamInput_GetGlyphSVGForActionOrigin, "GetGlyphSVGForActionOrigin" }, // 1557025237
		{ &Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsInteger, "GetInputActionOriginAsInteger" }, // 890865568
		{ &Z_Construct_UFunction_UOrionSteamInput_GetInputActionOriginAsString, "GetInputActionOriginAsString" }, // 1424222537
		{ &Z_Construct_UFunction_UOrionSteamInput_GetInputActionOrigins, "GetInputActionOrigins" }, // 3045365610
		{ &Z_Construct_UFunction_UOrionSteamInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 2997652687
		{ &Z_Construct_UFunction_UOrionSteamInput_GetMotionData, "GetMotionData" }, // 4148189080
		{ &Z_Construct_UFunction_UOrionSteamInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 3394500037
		{ &Z_Construct_UFunction_UOrionSteamInput_GetSessionInputConfigurationSettings, "GetSessionInputConfigurationSettings" }, // 453477477
		{ &Z_Construct_UFunction_UOrionSteamInput_GetSteamInput, "GetSteamInput" }, // 1108229292
		{ &Z_Construct_UFunction_UOrionSteamInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 828267848
		{ &Z_Construct_UFunction_UOrionSteamInput_GetStringForAnalogActionName, "GetStringForAnalogActionName" }, // 324624925
		{ &Z_Construct_UFunction_UOrionSteamInput_GetStringForDigitalActionName, "GetStringForDigitalActionName" }, // 623596486
		{ &Z_Construct_UFunction_UOrionSteamInput_GetStringForXboxOrigin, "GetStringForXboxOrigin" }, // 154276166
		{ &Z_Construct_UFunction_UOrionSteamInput_Init, "Init" }, // 2715034645
		{ &Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerHapticPulse, "Legacy_TriggerHapticPulse" }, // 2552441694
		{ &Z_Construct_UFunction_UOrionSteamInput_Legacy_TriggerRepeatedHapticPulse, "Legacy_TriggerRepeatedHapticPulse" }, // 3823900307
		{ &Z_Construct_UFunction_UOrionSteamInput_SetDualSenseTriggerEffect, "SetDualSenseTriggerEffect" }, // 530309042
		{ &Z_Construct_UFunction_UOrionSteamInput_SetInputActionManifestFilePath, "SetInputActionManifestFilePath" }, // 925998203
		{ &Z_Construct_UFunction_UOrionSteamInput_SetLEDColor, "SetLEDColor" }, // 3705260847
		{ &Z_Construct_UFunction_UOrionSteamInput_ShowBindingPanel, "ShowBindingPanel" }, // 3811517344
		{ &Z_Construct_UFunction_UOrionSteamInput_Shutdown, "Shutdown" }, // 2652527617
		{ &Z_Construct_UFunction_UOrionSteamInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 4273373426
		{ &Z_Construct_UFunction_UOrionSteamInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 2252137044
		{ &Z_Construct_UFunction_UOrionSteamInput_TriggerVibration, "TriggerVibration" }, // 1902466395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOrionSteamInput_Statics::NewProp_InputActionOrigin_ValueProp = { "InputActionOrigin", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOrionSteamInput_Statics::NewProp_InputActionOrigin_Key_KeyProp = { "InputActionOrigin_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOrionSteamInput_Statics::NewProp_InputActionOrigin = { "InputActionOrigin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamInput, InputActionOrigin), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionOrigin_MetaData), NewProp_InputActionOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInput_Statics::NewProp_InputActionOrigin_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInput_Statics::NewProp_InputActionOrigin_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamInput_Statics::NewProp_InputActionOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamInput_Statics::ClassParams = {
	&UOrionSteamInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamInput()
{
	if (!Z_Registration_Info_UClass_UOrionSteamInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamInput.OuterSingleton, Z_Construct_UClass_UOrionSteamInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamInput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamInput);
// ********** End Class UOrionSteamInput ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamInput, UOrionSteamInput::StaticClass, TEXT("UOrionSteamInput"), &Z_Registration_Info_UClass_UOrionSteamInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamInput), 1047107715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h__Script_OrionSteamSDKAPI_3412338785(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
