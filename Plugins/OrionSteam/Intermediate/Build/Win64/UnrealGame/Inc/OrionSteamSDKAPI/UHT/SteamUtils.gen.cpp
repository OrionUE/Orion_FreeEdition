// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUtils/SteamUtils.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamUtils() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInterface();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtils();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtils_NoRegister();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIPv6ConnectivityProtocol();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIPv6ConnectivityState();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFloatingGamepadTextInputMode();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGamepadTextInputLineMode();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGamepadTextInputMode();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamNotificationPosition();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTextFilteringContext();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUniverse();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAppResumingFromSuspend__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCheckFileSignature__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFloatingGamepadTextInputDismissed__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGamepadTextInputDismissed__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCountry__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLowBatteryPower__DelegateSignature();
ORIONSTEAMSDKAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamShutdown__DelegateSignature();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamUtils Function BOverlayNeedsPresent ***************************
struct Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics
{
	struct OrionSteamUtils_eventBOverlayNeedsPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Overlay needs a present. Only required if using event driven render updates.\n\x09 *\n\x09 * Typically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API,\n\x09 * or OGL SwapBuffers API every frame as is the case in most games.\n\x09 * However, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your\n\x09 * Present/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a\n\x09 * notification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it\n\x09 * currently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make\n\x09 * sure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Overlay needs a present. Only required if using event driven render updates.\n\nTypically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API,\nor OGL SwapBuffers API every frame as is the case in most games.\nHowever, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your\nPresent/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a\nnotification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it\ncurrently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make\nsure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "BOverlayNeedsPresent", Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::OrionSteamUtils_eventBOverlayNeedsPresent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::OrionSteamUtils_eventBOverlayNeedsPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execBOverlayNeedsPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::BOverlayNeedsPresent();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function BOverlayNeedsPresent *****************************

// ********** Begin Class UOrionSteamUtils Function DismissFloatingGamepadTextInput ****************
struct Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics
{
	struct OrionSteamUtils_eventDismissFloatingGamepadTextInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dismisses the floating keyboard.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dismisses the floating keyboard." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventDismissFloatingGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventDismissFloatingGamepadTextInput_Parms), &Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "DismissFloatingGamepadTextInput", Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::OrionSteamUtils_eventDismissFloatingGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::OrionSteamUtils_eventDismissFloatingGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execDismissFloatingGamepadTextInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::DismissFloatingGamepadTextInput();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function DismissFloatingGamepadTextInput ******************

// ********** Begin Class UOrionSteamUtils Function DismissGamepadTextInput ************************
struct Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics
{
	struct OrionSteamUtils_eventDismissGamepadTextInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dismisses the full-screen text input dialog.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dismisses the full-screen text input dialog." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventDismissGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventDismissGamepadTextInput_Parms), &Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "DismissGamepadTextInput", Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::OrionSteamUtils_eventDismissGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::OrionSteamUtils_eventDismissGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execDismissGamepadTextInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::DismissGamepadTextInput();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function DismissGamepadTextInput **************************

// ********** Begin Class UOrionSteamUtils Function FilterText *************************************
struct Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics
{
	struct OrionSteamUtils_eventFilterText_Parms
	{
		ESteamTextFilteringContext Context;
		FSteamID SourceSteamID;
		FString InputMessage;
		FString OutFilteredText;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 *  Filters the provided input message and places the filtered result into pchOutFilteredText, using legally required filtering and additional filtering based on the context and user settings\n\x09 *  eContext is the type of content in the input string sourceSteamID is the Steam ID that is the source of the input string (e.g. the player with the name, or who said the chat text)\n\x09 *  pchInputText is the input string that should be filtered, which can be ASCII or UTF-8\n\x09 *  pchOutFilteredText is where the output will be placed, even if no filtering is performed\n\x09 *  Returns the number of characters (not bytes) filtered\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*  Filters the provided input message and places the filtered result into pchOutFilteredText, using legally required filtering and additional filtering based on the context and user settings\n*  eContext is the type of content in the input string sourceSteamID is the Steam ID that is the source of the input string (e.g. the player with the name, or who said the chat text)\n*  pchInputText is the input string that should be filtered, which can be ASCII or UTF-8\n*  pchOutFilteredText is where the output will be placed, even if no filtering is performed\n*  Returns the number of characters (not bytes) filtered" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilteredText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventFilterText_Parms, Context), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamTextFilteringContext, METADATA_PARAMS(0, nullptr) }; // 89679404
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_SourceSteamID = { "SourceSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventFilterText_Parms, SourceSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3241029009
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_InputMessage = { "InputMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventFilterText_Parms, InputMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_OutFilteredText = { "OutFilteredText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventFilterText_Parms, OutFilteredText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventFilterText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_SourceSteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_InputMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_OutFilteredText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "FilterText", Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::OrionSteamUtils_eventFilterText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::OrionSteamUtils_eventFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_FilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_FilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execFilterText)
{
	P_GET_ENUM(ESteamTextFilteringContext,Z_Param_Context);
	P_GET_STRUCT(FSteamID,Z_Param_SourceSteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputMessage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFilteredText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::FilterText(ESteamTextFilteringContext(Z_Param_Context),Z_Param_SourceSteamID,Z_Param_InputMessage,Z_Param_Out_OutFilteredText);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function FilterText ***************************************

// ********** Begin Class UOrionSteamUtils Function GetAppID ***************************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics
{
	struct OrionSteamUtils_eventGetAppID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the App ID of the current process.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the App ID of the current process." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetAppID", Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::OrionSteamUtils_eventGetAppID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::OrionSteamUtils_eventGetAppID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetAppID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetAppID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetAppID();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetAppID *****************************************

// ********** Begin Class UOrionSteamUtils Function GetAppID_Pure **********************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics
{
	struct OrionSteamUtils_eventGetAppID_Pure_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils|Pure" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the App ID of the current process.\n\x09 */" },
#endif
		{ "DisplayName", "Get App ID (Pure)" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the App ID of the current process." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetAppID_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetAppID_Pure", Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::OrionSteamUtils_eventGetAppID_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::OrionSteamUtils_eventGetAppID_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetAppID_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetAppID_Pure();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetAppID_Pure ************************************

// ********** Begin Class UOrionSteamUtils Function GetConnectedUniverse ***************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics
{
	struct OrionSteamUtils_eventGetConnectedUniverse_Parms
	{
		ESteamUniverse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the universe that the current client is connecting to. (Valve use only.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the universe that the current client is connecting to. (Valve use only.)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamUniverse, METADATA_PARAMS(0, nullptr) }; // 3469273851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetConnectedUniverse", Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::OrionSteamUtils_eventGetConnectedUniverse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::OrionSteamUtils_eventGetConnectedUniverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetConnectedUniverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamUniverse*)Z_Param__Result=UOrionSteamUtils::GetConnectedUniverse();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetConnectedUniverse *****************************

// ********** Begin Class UOrionSteamUtils Function GetCurrentBatteryPower *************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics
{
	struct OrionSteamUtils_eventGetCurrentBatteryPower_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current amount of battery power on the computer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current amount of battery power on the computer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetCurrentBatteryPower", Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::OrionSteamUtils_eventGetCurrentBatteryPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::OrionSteamUtils_eventGetCurrentBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetCurrentBatteryPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetCurrentBatteryPower();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetCurrentBatteryPower ***************************

// ********** Begin Class UOrionSteamUtils Function GetEnteredGamepadTextInput *********************
struct Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics
{
	struct OrionSteamUtils_eventGetEnteredGamepadTextInput_Parms
	{
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the gamepad text input from the Big Picture overlay.\n\x09 *\n\x09 * This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09 *\n\x09 * @param\x09Text\x09\x09""A preallocated buffer to copy the text input string into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\n@param       Text            A preallocated buffer to copy the text input string into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetEnteredGamepadTextInput_Parms, Text), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetEnteredGamepadTextInput", Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::OrionSteamUtils_eventGetEnteredGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::OrionSteamUtils_eventGetEnteredGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetEnteredGamepadTextInput)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::GetEnteredGamepadTextInput(Z_Param_Out_Text);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetEnteredGamepadTextInput ***********************

// ********** Begin Class UOrionSteamUtils Function GetEnteredGamepadTextLength ********************
struct Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics
{
	struct OrionSteamUtils_eventGetEnteredGamepadTextLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the length of the gamepad text input from the Big Picture overlay.\n\x09 *\n\x09 * This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the length of the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetEnteredGamepadTextLength", Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::OrionSteamUtils_eventGetEnteredGamepadTextLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::OrionSteamUtils_eventGetEnteredGamepadTextLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetEnteredGamepadTextLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetEnteredGamepadTextLength();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetEnteredGamepadTextLength **********************

// ********** Begin Class UOrionSteamUtils Function GetImageRGBA ***********************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics
{
	struct OrionSteamUtils_eventGetImageRGBA_Parms
	{
		int32 iImage;
		TArray<uint8> OutBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the image bytes from an image handle.\n\x09 *\n\x09 * Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\x09 *\n\x09 * @param\x09iImage\x09\x09The handle to the image that will be obtained.\n\x09 * @param\x09OutBuffer\x09\x09The buffer that will be filled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the image bytes from an image handle.\n\nPrior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\n@param       iImage          The handle to the image that will be obtained.\n@param       OutBuffer               The buffer that will be filled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_iImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetImageRGBA_Parms, iImage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetImageRGBA_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_iImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetImageRGBA", Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::OrionSteamUtils_eventGetImageRGBA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::OrionSteamUtils_eventGetImageRGBA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetImageRGBA)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::GetImageRGBA(Z_Param_iImage,Z_Param_Out_OutBuffer);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetImageRGBA *************************************

// ********** Begin Class UOrionSteamUtils Function GetImageSize ***********************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics
{
	struct OrionSteamUtils_eventGetImageSize_Parms
	{
		int32 iImage;
		int32 Width;
		int32 Height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the size of a Steam image handle.\n\x09 *\n\x09 * This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\x09 *\n\x09 * @param\x09iImage\x09\x09The image handle to get the size for.\n\x09 * @param\x09Width\x09\x09Returns the width of the image.\n\x09 * @param\x09Height\x09\x09Returns the height of the image.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the size of a Steam image handle.\n\nThis must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\n@param       iImage          The image handle to get the size for.\n@param       Width           Returns the width of the image.\n@param       Height          Returns the height of the image." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_iImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetImageSize_Parms, iImage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetImageSize_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetImageSize_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventGetImageSize_Parms), &Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_iImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetImageSize", Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::OrionSteamUtils_eventGetImageSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::OrionSteamUtils_eventGetImageSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetImageSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetImageSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetImageSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::GetImageSize(Z_Param_iImage,Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetImageSize *************************************

// ********** Begin Class UOrionSteamUtils Function GetIPCCallCount ********************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics
{
	struct OrionSteamUtils_eventGetIPCCallCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the number of IPC calls made since the last time this function was called.\n\x09 *\n\x09 * Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\n\x09 * Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of IPC calls made since the last time this function was called.\n\nUsed for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\nEvery IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetIPCCallCount", Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::OrionSteamUtils_eventGetIPCCallCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::OrionSteamUtils_eventGetIPCCallCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetIPCCallCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetIPCCallCount();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetIPCCallCount **********************************

// ********** Begin Class UOrionSteamUtils Function GetIPCountry ***********************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics
{
	struct OrionSteamUtils_eventGetIPCountry_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\x09 *\n\x09 * This is looked up via an IP-to-location database.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\nThis is looked up via an IP-to-location database." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetIPCountry", Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::OrionSteamUtils_eventGetIPCountry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::OrionSteamUtils_eventGetIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetIPCountry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtils::GetIPCountry();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetIPCountry *************************************

// ********** Begin Class UOrionSteamUtils Function GetIPv6ConnectivityState ***********************
struct Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics
{
	struct OrionSteamUtils_eventGetIPv6ConnectivityState_Parms
	{
		EOrionSteamIPv6ConnectivityProtocol Protocol;
		EOrionSteamIPv6ConnectivityState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return what we believe your current ipv6 connectivity to \"the internet\" is on the specified protocol.\n\x09 * This does NOT tell you if the Steam client is currently connected to Steam via ipv6.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return what we believe your current ipv6 connectivity to \"the internet\" is on the specified protocol.\nThis does NOT tell you if the Steam client is currently connected to Steam via ipv6." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Protocol_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetIPv6ConnectivityState_Parms, Protocol), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIPv6ConnectivityProtocol, METADATA_PARAMS(0, nullptr) }; // 4023027753
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetIPv6ConnectivityState_Parms, ReturnValue), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamIPv6ConnectivityState, METADATA_PARAMS(0, nullptr) }; // 124020014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetIPv6ConnectivityState", Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::OrionSteamUtils_eventGetIPv6ConnectivityState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::OrionSteamUtils_eventGetIPv6ConnectivityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetIPv6ConnectivityState)
{
	P_GET_ENUM(EOrionSteamIPv6ConnectivityProtocol,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOrionSteamIPv6ConnectivityState*)Z_Param__Result=UOrionSteamUtils::GetIPv6ConnectivityState(EOrionSteamIPv6ConnectivityProtocol(Z_Param_Protocol));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetIPv6ConnectivityState *************************

// ********** Begin Class UOrionSteamUtils Function GetSecondsSinceAppActive ***********************
struct Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics
{
	struct OrionSteamUtils_eventGetSecondsSinceAppActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the number of seconds since the application was active.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of seconds since the application was active." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetSecondsSinceAppActive", Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::OrionSteamUtils_eventGetSecondsSinceAppActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::OrionSteamUtils_eventGetSecondsSinceAppActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetSecondsSinceAppActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetSecondsSinceAppActive();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetSecondsSinceAppActive *************************

// ********** Begin Class UOrionSteamUtils Function GetSecondsSinceComputerActive ******************
struct Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics
{
	struct OrionSteamUtils_eventGetSecondsSinceComputerActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the number of seconds since the user last moved the mouse.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of seconds since the user last moved the mouse." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetSecondsSinceComputerActive", Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::OrionSteamUtils_eventGetSecondsSinceComputerActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::OrionSteamUtils_eventGetSecondsSinceComputerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetSecondsSinceComputerActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetSecondsSinceComputerActive();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetSecondsSinceComputerActive ********************

// ********** Begin Class UOrionSteamUtils Function GetServerRealTime ******************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics
{
	struct OrionSteamUtils_eventGetServerRealTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetServerRealTime", Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::OrionSteamUtils_eventGetServerRealTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::OrionSteamUtils_eventGetServerRealTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetServerRealTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOrionSteamUtils::GetServerRealTime();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetServerRealTime ********************************

// ********** Begin Class UOrionSteamUtils Function GetSteamUILanguage *****************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics
{
	struct OrionSteamUtils_eventGetSteamUILanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the language the steam client is running in.\n\x09 *\n\x09 * You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\x09 * For a full list of languages see Supported Languages.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the language the steam client is running in.\n\nYou probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\nFor a full list of languages see Supported Languages." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetSteamUILanguage", Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::OrionSteamUtils_eventGetSteamUILanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::OrionSteamUtils_eventGetSteamUILanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetSteamUILanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamUtils::GetSteamUILanguage();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetSteamUILanguage *******************************

// ********** Begin Class UOrionSteamUtils Function GetSteamUtils **********************************
struct Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics
{
	struct OrionSteamUtils_eventGetSteamUtils_Parms
	{
		UOrionSteamUtils* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventGetSteamUtils_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamUtils_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "GetSteamUtils", Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::OrionSteamUtils_eventGetSteamUtils_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::OrionSteamUtils_eventGetSteamUtils_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execGetSteamUtils)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamUtils**)Z_Param__Result=UOrionSteamUtils::GetSteamUtils();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function GetSteamUtils ************************************

// ********** Begin Class UOrionSteamUtils Function InitFilterText *********************************
struct Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics
{
	struct OrionSteamUtils_eventInitFilterText_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes text filtering.\n\x09 *\n\x09 * Returns false if filtering is unavailable for the language the user is currently running in.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes text filtering.\n\nReturns false if filtering is unavailable for the language the user is currently running in." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventInitFilterText_Parms), &Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "InitFilterText", Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::OrionSteamUtils_eventInitFilterText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::OrionSteamUtils_eventInitFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_InitFilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_InitFilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execInitFilterText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::InitFilterText();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function InitFilterText ***********************************

// ********** Begin Class UOrionSteamUtils Function IsOverlayEnabled *******************************
struct Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics
{
	struct OrionSteamUtils_eventIsOverlayEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Steam Overlay is running & the user can access it.\n\x09 *\n\x09 * The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Steam Overlay is running & the user can access it.\n\nThe overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "IsOverlayEnabled", Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::OrionSteamUtils_eventIsOverlayEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::OrionSteamUtils_eventIsOverlayEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execIsOverlayEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::IsOverlayEnabled();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function IsOverlayEnabled *********************************

// ********** Begin Class UOrionSteamUtils Function IsSteamChinaLauncher ***************************
struct Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics
{
	struct OrionSteamUtils_eventIsSteamChinaLauncher_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "IsSteamChinaLauncher", Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::OrionSteamUtils_eventIsSteamChinaLauncher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::OrionSteamUtils_eventIsSteamChinaLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execIsSteamChinaLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::IsSteamChinaLauncher();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function IsSteamChinaLauncher *****************************

// ********** Begin Class UOrionSteamUtils Function IsSteamInBigPictureMode ************************
struct Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics
{
	struct OrionSteamUtils_eventIsSteamInBigPictureMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\x09 *\n\x09 * Games must be launched through the Steam client to enable the Big Picture overlay.\n\x09 * During development, a game can be added as a non-steam game to the developers library to test this feature.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\nGames must be launched through the Steam client to enable the Big Picture overlay.\nDuring development, a game can be added as a non-steam game to the developers library to test this feature." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "IsSteamInBigPictureMode", Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::OrionSteamUtils_eventIsSteamInBigPictureMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::OrionSteamUtils_eventIsSteamInBigPictureMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execIsSteamInBigPictureMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::IsSteamInBigPictureMode();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function IsSteamInBigPictureMode **************************

// ********** Begin Class UOrionSteamUtils Function IsSteamRunningInVR *****************************
struct Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics
{
	struct OrionSteamUtils_eventIsSteamRunningInVR_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if Steam is running in VR mode.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Steam is running in VR mode." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "IsSteamRunningInVR", Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::OrionSteamUtils_eventIsSteamRunningInVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::OrionSteamUtils_eventIsSteamRunningInVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execIsSteamRunningInVR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::IsSteamRunningInVR();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function IsSteamRunningInVR *******************************

// ********** Begin Class UOrionSteamUtils Function IsSteamRunningOnSteamDeck **********************
struct Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics
{
	struct OrionSteamUtils_eventIsSteamRunningOnSteamDeck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Returns true if currently running on the Steam Deck device\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Returns true if currently running on the Steam Deck device" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventIsSteamRunningOnSteamDeck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventIsSteamRunningOnSteamDeck_Parms), &Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "IsSteamRunningOnSteamDeck", Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::OrionSteamUtils_eventIsSteamRunningOnSteamDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::OrionSteamUtils_eventIsSteamRunningOnSteamDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execIsSteamRunningOnSteamDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSteamRunningOnSteamDeck();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function IsSteamRunningOnSteamDeck ************************

// ********** Begin Class UOrionSteamUtils Function IsVRHeadsetStreamingEnabled ********************
struct Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics
{
	struct OrionSteamUtils_eventIsVRHeadsetStreamingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the HMD view will be streamed via Steam Remote Play.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the HMD view will be streamed via Steam Remote Play." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "IsVRHeadsetStreamingEnabled", Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::OrionSteamUtils_eventIsVRHeadsetStreamingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::OrionSteamUtils_eventIsVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execIsVRHeadsetStreamingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::IsVRHeadsetStreamingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function IsVRHeadsetStreamingEnabled **********************

// ********** Begin Class UOrionSteamUtils Function SetGameLauncherMode ****************************
struct Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics
{
	struct OrionSteamUtils_eventSetGameLauncherMode_Parms
	{
		bool bLauncherMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * In game launchers that don't have controller support you can call this to have Steam Input translate the controller input into mouse/kb to navigate the launcher\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In game launchers that don't have controller support you can call this to have Steam Input translate the controller input into mouse/kb to navigate the launcher" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bLauncherMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLauncherMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit(void* Obj)
{
	((OrionSteamUtils_eventSetGameLauncherMode_Parms*)Obj)->bLauncherMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode = { "bLauncherMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventSetGameLauncherMode_Parms), &Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "SetGameLauncherMode", Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::OrionSteamUtils_eventSetGameLauncherMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::OrionSteamUtils_eventSetGameLauncherMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execSetGameLauncherMode)
{
	P_GET_UBOOL(Z_Param_bLauncherMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtils::SetGameLauncherMode(Z_Param_bLauncherMode);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function SetGameLauncherMode ******************************

// ********** Begin Class UOrionSteamUtils Function SetOverlayNotificationInset ********************
struct Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics
{
	struct OrionSteamUtils_eventSetOverlayNotificationInset_Parms
	{
		int32 HorizontalInset;
		int32 VerticalInset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\x09 *\n\x09 * A value of (0, 0) resets the position into the corner.\n\x09 * This position is per-game and is reset each launch.\n\x09 *\n\x09 * @param\x09HorizontalInset\x09\x09The horizontal (left-right) distance in pixels from the corner.\n\x09 * @param\x09VerticalInset\x09\x09The vertical (up-down) distance in pixels from the corner.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\nA value of (0, 0) resets the position into the corner.\nThis position is per-game and is reset each launch.\n\n@param       HorizontalInset         The horizontal (left-right) distance in pixels from the corner.\n@param       VerticalInset           The vertical (up-down) distance in pixels from the corner." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "SetOverlayNotificationInset", Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::OrionSteamUtils_eventSetOverlayNotificationInset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::OrionSteamUtils_eventSetOverlayNotificationInset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execSetOverlayNotificationInset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HorizontalInset);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticalInset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtils::SetOverlayNotificationInset(Z_Param_HorizontalInset,Z_Param_VerticalInset);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function SetOverlayNotificationInset **********************

// ********** Begin Class UOrionSteamUtils Function SetOverlayNotificationPosition *****************
struct Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics
{
	struct OrionSteamUtils_eventSetOverlayNotificationPosition_Parms
	{
		ESteamNotificationPosition NotificationPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets which corner the Steam overlay notification popup should display itself in.\n\x09 *\n\x09 * You can also set the distance from the specified corner by using SetOverlayNotificationInset.\n\x09 * This position is per-game and is reset each launch.\n\x09 *\n\x09 * @param\x09NotificationPosition\x09position\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets which corner the Steam overlay notification popup should display itself in.\n\nYou can also set the distance from the specified corner by using SetOverlayNotificationInset.\nThis position is per-game and is reset each launch.\n\n@param       NotificationPosition    position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamNotificationPosition, METADATA_PARAMS(0, nullptr) }; // 1716037339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "SetOverlayNotificationPosition", Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::OrionSteamUtils_eventSetOverlayNotificationPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::OrionSteamUtils_eventSetOverlayNotificationPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execSetOverlayNotificationPosition)
{
	P_GET_ENUM(ESteamNotificationPosition,Z_Param_NotificationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtils::SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_NotificationPosition));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function SetOverlayNotificationPosition *******************

// ********** Begin Class UOrionSteamUtils Function SetVRHeadsetStreamingEnabled *******************
struct Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics
{
	struct OrionSteamUtils_eventSetVRHeadsetStreamingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set whether the HMD content will be streamed via Steam Remote Play.\n\x09 *\n\x09 * If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\n\x09 * This is useful for games that have asymmetric multiplayer gameplay.\n\x09 *\n\x09 * @param\x09""bEnabled\x09Turns VR HMD Streaming on (true) or off (false).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the HMD content will be streamed via Steam Remote Play.\n\nIf this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\nThis is useful for games that have asymmetric multiplayer gameplay.\n\n@param       bEnabled        Turns VR HMD Streaming on (true) or off (false)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((OrionSteamUtils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "SetVRHeadsetStreamingEnabled", Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::OrionSteamUtils_eventSetVRHeadsetStreamingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::OrionSteamUtils_eventSetVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execSetVRHeadsetStreamingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtils::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function SetVRHeadsetStreamingEnabled *********************

// ********** Begin Class UOrionSteamUtils Function ShowFloatingGamepadTextInput *******************
struct Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics
{
	struct OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms
	{
		ESteamFloatingGamepadTextInputMode KeyboardMode;
		int32 TextFieldXPosition;
		int32 TextFieldYPosition;
		int32 TextFieldWidth;
		int32 TextFieldHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Opens a floating keyboard over the game content and sends OS keyboard keys directly to the game.\n\x09 * The text field position is specified in pixels relative the origin of the game window and is used to position the floating keyboard in a way that doesn't cover the text field\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens a floating keyboard over the game content and sends OS keyboard keys directly to the game.\nThe text field position is specified in pixels relative the origin of the game window and is used to position the floating keyboard in a way that doesn't cover the text field" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyboardMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyboardMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldYPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode = { "KeyboardMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms, KeyboardMode), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamFloatingGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 299463690
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition = { "TextFieldXPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldXPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition = { "TextFieldYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldYPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth = { "TextFieldWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight = { "TextFieldHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms), &Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "ShowFloatingGamepadTextInput", Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::OrionSteamUtils_eventShowFloatingGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execShowFloatingGamepadTextInput)
{
	P_GET_ENUM(ESteamFloatingGamepadTextInputMode,Z_Param_KeyboardMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldXPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldYPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::ShowFloatingGamepadTextInput(ESteamFloatingGamepadTextInputMode(Z_Param_KeyboardMode),Z_Param_TextFieldXPosition,Z_Param_TextFieldYPosition,Z_Param_TextFieldWidth,Z_Param_TextFieldHeight);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function ShowFloatingGamepadTextInput *********************

// ********** Begin Class UOrionSteamUtils Function ShowGamepadTextInput ***************************
struct Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics
{
	struct OrionSteamUtils_eventShowGamepadTextInput_Parms
	{
		ESteamGamepadTextInputMode InputMode;
		ESteamGamepadTextInputLineMode LineInputMode;
		FString Description;
		int32 CharMax;
		FString ExistingText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Activates the Big Picture text input dialog which only supports gamepad input.\n\x09 *\n\x09 * @param\x09InputMode\x09\x09\x09Selects the input mode to use, either Normal or Password (hidden text)\n\x09 * @param\x09LineInputMode\x09\x09""Controls whether to use single or multi line input.\n\x09 * @param\x09""Description\x09\x09\x09Sets the description that should inform the user what the input dialog is for.\n\x09 * @param\x09""CharMax\x09\x09\x09\x09The maximum number of characters that the user can input.\n\x09 * @param\x09""ExistingText\x09\x09Sets the preexisting text which the user can edit.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the Big Picture text input dialog which only supports gamepad input.\n\n@param       InputMode                       Selects the input mode to use, either Normal or Password (hidden text)\n@param       LineInputMode           Controls whether to use single or multi line input.\n@param       Description                     Sets the description that should inform the user what the input dialog is for.\n@param       CharMax                         The maximum number of characters that the user can input.\n@param       ExistingText            Sets the preexisting text which the user can edit." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineInputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineInputMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharMax;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExistingText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 273900421
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_OrionSteamSDKAPI_ESteamGamepadTextInputLineMode, METADATA_PARAMS(0, nullptr) }; // 1142716534
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamUtils_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OrionSteamUtils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamUtils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_CharMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "ShowGamepadTextInput", Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::OrionSteamUtils_eventShowGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::OrionSteamUtils_eventShowGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execShowGamepadTextInput)
{
	P_GET_ENUM(ESteamGamepadTextInputMode,Z_Param_InputMode);
	P_GET_ENUM(ESteamGamepadTextInputLineMode,Z_Param_LineInputMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOrionSteamUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode(Z_Param_InputMode),ESteamGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_CharMax,Z_Param_ExistingText);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function ShowGamepadTextInput *****************************

// ********** Begin Class UOrionSteamUtils Function StartVRDashboard *******************************
struct Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Asks Steam to create and render the OpenVR dashboard.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asks Steam to create and render the OpenVR dashboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamUtils, nullptr, "StartVRDashboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamUtils::execStartVRDashboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamUtils::StartVRDashboard();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamUtils Function StartVRDashboard *********************************

// ********** Begin Class UOrionSteamUtils *********************************************************
void UOrionSteamUtils::StaticRegisterNativesUOrionSteamUtils()
{
	UClass* Class = UOrionSteamUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BOverlayNeedsPresent", &UOrionSteamUtils::execBOverlayNeedsPresent },
		{ "DismissFloatingGamepadTextInput", &UOrionSteamUtils::execDismissFloatingGamepadTextInput },
		{ "DismissGamepadTextInput", &UOrionSteamUtils::execDismissGamepadTextInput },
		{ "FilterText", &UOrionSteamUtils::execFilterText },
		{ "GetAppID", &UOrionSteamUtils::execGetAppID },
		{ "GetAppID_Pure", &UOrionSteamUtils::execGetAppID_Pure },
		{ "GetConnectedUniverse", &UOrionSteamUtils::execGetConnectedUniverse },
		{ "GetCurrentBatteryPower", &UOrionSteamUtils::execGetCurrentBatteryPower },
		{ "GetEnteredGamepadTextInput", &UOrionSteamUtils::execGetEnteredGamepadTextInput },
		{ "GetEnteredGamepadTextLength", &UOrionSteamUtils::execGetEnteredGamepadTextLength },
		{ "GetImageRGBA", &UOrionSteamUtils::execGetImageRGBA },
		{ "GetImageSize", &UOrionSteamUtils::execGetImageSize },
		{ "GetIPCCallCount", &UOrionSteamUtils::execGetIPCCallCount },
		{ "GetIPCountry", &UOrionSteamUtils::execGetIPCountry },
		{ "GetIPv6ConnectivityState", &UOrionSteamUtils::execGetIPv6ConnectivityState },
		{ "GetSecondsSinceAppActive", &UOrionSteamUtils::execGetSecondsSinceAppActive },
		{ "GetSecondsSinceComputerActive", &UOrionSteamUtils::execGetSecondsSinceComputerActive },
		{ "GetServerRealTime", &UOrionSteamUtils::execGetServerRealTime },
		{ "GetSteamUILanguage", &UOrionSteamUtils::execGetSteamUILanguage },
		{ "GetSteamUtils", &UOrionSteamUtils::execGetSteamUtils },
		{ "InitFilterText", &UOrionSteamUtils::execInitFilterText },
		{ "IsOverlayEnabled", &UOrionSteamUtils::execIsOverlayEnabled },
		{ "IsSteamChinaLauncher", &UOrionSteamUtils::execIsSteamChinaLauncher },
		{ "IsSteamInBigPictureMode", &UOrionSteamUtils::execIsSteamInBigPictureMode },
		{ "IsSteamRunningInVR", &UOrionSteamUtils::execIsSteamRunningInVR },
		{ "IsSteamRunningOnSteamDeck", &UOrionSteamUtils::execIsSteamRunningOnSteamDeck },
		{ "IsVRHeadsetStreamingEnabled", &UOrionSteamUtils::execIsVRHeadsetStreamingEnabled },
		{ "SetGameLauncherMode", &UOrionSteamUtils::execSetGameLauncherMode },
		{ "SetOverlayNotificationInset", &UOrionSteamUtils::execSetOverlayNotificationInset },
		{ "SetOverlayNotificationPosition", &UOrionSteamUtils::execSetOverlayNotificationPosition },
		{ "SetVRHeadsetStreamingEnabled", &UOrionSteamUtils::execSetVRHeadsetStreamingEnabled },
		{ "ShowFloatingGamepadTextInput", &UOrionSteamUtils::execShowFloatingGamepadTextInput },
		{ "ShowGamepadTextInput", &UOrionSteamUtils::execShowGamepadTextInput },
		{ "StartVRDashboard", &UOrionSteamUtils::execStartVRDashboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamUtils;
UClass* UOrionSteamUtils::GetPrivateStaticClass()
{
	using TClass = UOrionSteamUtils;
	if (!Z_Registration_Info_UClass_UOrionSteamUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamUtils"),
			Z_Registration_Info_UClass_UOrionSteamUtils.InnerSingleton,
			StaticRegisterNativesUOrionSteamUtils,
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
	return Z_Registration_Info_UClass_UOrionSteamUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamUtils_NoRegister()
{
	return UOrionSteamUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUtils/SteamUtils.h" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadTextInputDismissed_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPCountry_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowBatteryPower_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamShutdown_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppResumingFromSuspend_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingGamepadTextInputDismissed_MetaData[] = {
		{ "Category", "OrionSteam|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckFileSignature;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamepadTextInputDismissed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCountry;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LowBatteryPower;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamShutdown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AppResumingFromSuspend;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FloatingGamepadTextInputDismissed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 3121819643
		{ &Z_Construct_UFunction_UOrionSteamUtils_DismissFloatingGamepadTextInput, "DismissFloatingGamepadTextInput" }, // 1477330703
		{ &Z_Construct_UFunction_UOrionSteamUtils_DismissGamepadTextInput, "DismissGamepadTextInput" }, // 184728100
		{ &Z_Construct_UFunction_UOrionSteamUtils_FilterText, "FilterText" }, // 907644671
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetAppID, "GetAppID" }, // 622166616
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetAppID_Pure, "GetAppID_Pure" }, // 62369733
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 3870475060
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 555624694
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 4093748547
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 3476269927
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetImageRGBA, "GetImageRGBA" }, // 2700005532
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetImageSize, "GetImageSize" }, // 3610216445
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetIPCCallCount, "GetIPCCallCount" }, // 644351802
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetIPCountry, "GetIPCountry" }, // 2918816228
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetIPv6ConnectivityState, "GetIPv6ConnectivityState" }, // 2588187283
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 2842699840
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 3281293935
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetServerRealTime, "GetServerRealTime" }, // 2214367871
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 1505673998
		{ &Z_Construct_UFunction_UOrionSteamUtils_GetSteamUtils, "GetSteamUtils" }, // 2841114825
		{ &Z_Construct_UFunction_UOrionSteamUtils_InitFilterText, "InitFilterText" }, // 1741184148
		{ &Z_Construct_UFunction_UOrionSteamUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 679457911
		{ &Z_Construct_UFunction_UOrionSteamUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 4090225806
		{ &Z_Construct_UFunction_UOrionSteamUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 960314356
		{ &Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 671726336
		{ &Z_Construct_UFunction_UOrionSteamUtils_IsSteamRunningOnSteamDeck, "IsSteamRunningOnSteamDeck" }, // 1894154529
		{ &Z_Construct_UFunction_UOrionSteamUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 1021674253
		{ &Z_Construct_UFunction_UOrionSteamUtils_SetGameLauncherMode, "SetGameLauncherMode" }, // 2352304422
		{ &Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 1079082965
		{ &Z_Construct_UFunction_UOrionSteamUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 963838578
		{ &Z_Construct_UFunction_UOrionSteamUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 2174555375
		{ &Z_Construct_UFunction_UOrionSteamUtils_ShowFloatingGamepadTextInput, "ShowFloatingGamepadTextInput" }, // 4013797853
		{ &Z_Construct_UFunction_UOrionSteamUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 3331706485
		{ &Z_Construct_UFunction_UOrionSteamUtils_StartVRDashboard, "StartVRDashboard" }, // 1907374664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, CheckFileSignature), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnCheckFileSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFileSignature_MetaData), NewProp_CheckFileSignature_MetaData) }; // 646600418
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_GamepadTextInputDismissed = { "GamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, GamepadTextInputDismissed), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadTextInputDismissed_MetaData), NewProp_GamepadTextInputDismissed_MetaData) }; // 2010008708
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_IPCountry = { "IPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, IPCountry), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnIPCountry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPCountry_MetaData), NewProp_IPCountry_MetaData) }; // 735630187
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_LowBatteryPower = { "LowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, LowBatteryPower), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowBatteryPower_MetaData), NewProp_LowBatteryPower_MetaData) }; // 643608747
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_SteamShutdown = { "SteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, SteamShutdown), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamShutdown_MetaData), NewProp_SteamShutdown_MetaData) }; // 3059944188
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_AppResumingFromSuspend = { "AppResumingFromSuspend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, AppResumingFromSuspend), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnAppResumingFromSuspend__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppResumingFromSuspend_MetaData), NewProp_AppResumingFromSuspend_MetaData) }; // 1328470434
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_FloatingGamepadTextInputDismissed = { "FloatingGamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamUtils, FloatingGamepadTextInputDismissed), Z_Construct_UDelegateFunction_OrionSteamSDKAPI_OnFloatingGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingGamepadTextInputDismissed_MetaData), NewProp_FloatingGamepadTextInputDismissed_MetaData) }; // 2032273834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamUtils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_CheckFileSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_GamepadTextInputDismissed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_IPCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_LowBatteryPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_SteamShutdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_AppResumingFromSuspend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamUtils_Statics::NewProp_FloatingGamepadTextInputDismissed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUtils_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamUtils_Statics::ClassParams = {
	&UOrionSteamUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrionSteamUtils_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUtils_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamUtils()
{
	if (!Z_Registration_Info_UClass_UOrionSteamUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamUtils.OuterSingleton, Z_Construct_UClass_UOrionSteamUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamUtils.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamUtils);
// ********** End Class UOrionSteamUtils ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamUtils, UOrionSteamUtils::StaticClass, TEXT("UOrionSteamUtils"), &Z_Registration_Info_UClass_UOrionSteamUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamUtils), 2682501743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h__Script_OrionSteamSDKAPI_3815813051(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamUtils_SteamUtils_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
