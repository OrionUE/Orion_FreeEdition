// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInput/SteamInputTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSteamInputTypes() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin();
ORIONSTEAMSDKAPI_API UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommand();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam();
ORIONSTEAMSDKAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOrionSteamInputGlyphSize *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize;
static UEnum* EOrionSteamInputGlyphSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamInputGlyphSize"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamInputGlyphSize>()
{
	return EOrionSteamInputGlyphSize_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "k_ESteamInputGlyphSize_Count.Comment", "// 256x256 pixels\n" },
		{ "k_ESteamInputGlyphSize_Count.Name", "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Count" },
		{ "k_ESteamInputGlyphSize_Count.ToolTip", "256x256 pixels" },
		{ "k_ESteamInputGlyphSize_Large.Comment", "// 128x128 pixels\n" },
		{ "k_ESteamInputGlyphSize_Large.Name", "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Large" },
		{ "k_ESteamInputGlyphSize_Large.ToolTip", "128x128 pixels" },
		{ "k_ESteamInputGlyphSize_Medium.Comment", "// 32x32 pixels\n" },
		{ "k_ESteamInputGlyphSize_Medium.Name", "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Medium" },
		{ "k_ESteamInputGlyphSize_Medium.ToolTip", "32x32 pixels" },
		{ "k_ESteamInputGlyphSize_Small.Name", "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Small" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Small", (int64)EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Small },
		{ "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Medium", (int64)EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Medium },
		{ "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Large", (int64)EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Large },
		{ "EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Count", (int64)EOrionSteamInputGlyphSize::k_ESteamInputGlyphSize_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamInputGlyphSize",
	"EOrionSteamInputGlyphSize",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputGlyphSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize.InnerSingleton;
}
// ********** End Enum EOrionSteamInputGlyphSize ***************************************************

// ********** Begin Enum EOrionSteamInputSource ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamInputSource;
static UEnum* EOrionSteamInputSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamInputSource"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputSource.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamInputSource>()
{
	return EOrionSteamInputSource_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABXY.Name", "EOrionSteamInputSource::ABXY" },
		{ "BlueprintType", "true" },
		{ "CenterTrackpad.Name", "EOrionSteamInputSource::CenterTrackpad" },
		{ "Count.Name", "EOrionSteamInputSource::Count" },
		{ "DPad.Name", "EOrionSteamInputSource::DPad" },
		{ "Gyro.Name", "EOrionSteamInputSource::Gyro" },
		{ "Joystick.Name", "EOrionSteamInputSource::Joystick" },
		{ "Key.Name", "EOrionSteamInputSource::Key" },
		{ "LeftBumper.Name", "EOrionSteamInputSource::LeftBumper" },
		{ "LeftGyro.Name", "EOrionSteamInputSource::LeftGyro" },
		{ "LeftTrackpad.Name", "EOrionSteamInputSource::LeftTrackpad" },
		{ "LeftTrigger.Name", "EOrionSteamInputSource::LeftTrigger" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Mouse.Name", "EOrionSteamInputSource::Mouse" },
		{ "None.Name", "EOrionSteamInputSource::None" },
		{ "RightBumper.Name", "EOrionSteamInputSource::RightBumper" },
		{ "RightJoystick.Name", "EOrionSteamInputSource::RightJoystick" },
		{ "RightTrackpad.Name", "EOrionSteamInputSource::RightTrackpad" },
		{ "RightTrigger.Name", "EOrionSteamInputSource::RightTrigger" },
		{ "Switch.Name", "EOrionSteamInputSource::Switch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamInputSource::None", (int64)EOrionSteamInputSource::None },
		{ "EOrionSteamInputSource::LeftTrackpad", (int64)EOrionSteamInputSource::LeftTrackpad },
		{ "EOrionSteamInputSource::RightTrackpad", (int64)EOrionSteamInputSource::RightTrackpad },
		{ "EOrionSteamInputSource::Joystick", (int64)EOrionSteamInputSource::Joystick },
		{ "EOrionSteamInputSource::ABXY", (int64)EOrionSteamInputSource::ABXY },
		{ "EOrionSteamInputSource::Switch", (int64)EOrionSteamInputSource::Switch },
		{ "EOrionSteamInputSource::LeftTrigger", (int64)EOrionSteamInputSource::LeftTrigger },
		{ "EOrionSteamInputSource::RightTrigger", (int64)EOrionSteamInputSource::RightTrigger },
		{ "EOrionSteamInputSource::LeftBumper", (int64)EOrionSteamInputSource::LeftBumper },
		{ "EOrionSteamInputSource::RightBumper", (int64)EOrionSteamInputSource::RightBumper },
		{ "EOrionSteamInputSource::Gyro", (int64)EOrionSteamInputSource::Gyro },
		{ "EOrionSteamInputSource::CenterTrackpad", (int64)EOrionSteamInputSource::CenterTrackpad },
		{ "EOrionSteamInputSource::RightJoystick", (int64)EOrionSteamInputSource::RightJoystick },
		{ "EOrionSteamInputSource::DPad", (int64)EOrionSteamInputSource::DPad },
		{ "EOrionSteamInputSource::Key", (int64)EOrionSteamInputSource::Key },
		{ "EOrionSteamInputSource::Mouse", (int64)EOrionSteamInputSource::Mouse },
		{ "EOrionSteamInputSource::LeftGyro", (int64)EOrionSteamInputSource::LeftGyro },
		{ "EOrionSteamInputSource::Count", (int64)EOrionSteamInputSource::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamInputSource",
	"EOrionSteamInputSource",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamInputSource.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputSource.InnerSingleton;
}
// ********** End Enum EOrionSteamInputSource ******************************************************

// ********** Begin Enum EOrionSteamInputSourceMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamInputSourceMode;
static UEnum* EOrionSteamInputSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamInputSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamInputSourceMode"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputSourceMode.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamInputSourceMode>()
{
	return EOrionSteamInputSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteMouse.Name", "EOrionSteamInputSourceMode::AbsoluteMouse" },
		{ "BlueprintType", "true" },
		{ "Buttons.Name", "EOrionSteamInputSourceMode::Buttons" },
		{ "Dpad.Name", "EOrionSteamInputSourceMode::Dpad" },
		{ "FourButtons.Name", "EOrionSteamInputSourceMode::FourButtons" },
		{ "JoystickCamera.Name", "EOrionSteamInputSourceMode::JoystickCamera" },
		{ "JoystickMouse.Name", "EOrionSteamInputSourceMode::JoystickMouse" },
		{ "JoystickMove.Name", "EOrionSteamInputSourceMode::JoystickMove" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "MouseJoystick.Name", "EOrionSteamInputSourceMode::MouseJoystick" },
		{ "MouseRegion.Name", "EOrionSteamInputSourceMode::MouseRegion" },
		{ "None.Name", "EOrionSteamInputSourceMode::None" },
		{ "RadialMenu.Name", "EOrionSteamInputSourceMode::RadialMenu" },
		{ "RelativeMouse.Name", "EOrionSteamInputSourceMode::RelativeMouse" },
		{ "ScrollWheel.Name", "EOrionSteamInputSourceMode::ScrollWheel" },
		{ "SingleButton.Name", "EOrionSteamInputSourceMode::SingleButton" },
		{ "Switches.Name", "EOrionSteamInputSourceMode::Switches" },
		{ "TouchMenu.Name", "EOrionSteamInputSourceMode::TouchMenu" },
		{ "Trigger.Name", "EOrionSteamInputSourceMode::Trigger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamInputSourceMode::None", (int64)EOrionSteamInputSourceMode::None },
		{ "EOrionSteamInputSourceMode::Dpad", (int64)EOrionSteamInputSourceMode::Dpad },
		{ "EOrionSteamInputSourceMode::Buttons", (int64)EOrionSteamInputSourceMode::Buttons },
		{ "EOrionSteamInputSourceMode::FourButtons", (int64)EOrionSteamInputSourceMode::FourButtons },
		{ "EOrionSteamInputSourceMode::AbsoluteMouse", (int64)EOrionSteamInputSourceMode::AbsoluteMouse },
		{ "EOrionSteamInputSourceMode::RelativeMouse", (int64)EOrionSteamInputSourceMode::RelativeMouse },
		{ "EOrionSteamInputSourceMode::JoystickMove", (int64)EOrionSteamInputSourceMode::JoystickMove },
		{ "EOrionSteamInputSourceMode::JoystickMouse", (int64)EOrionSteamInputSourceMode::JoystickMouse },
		{ "EOrionSteamInputSourceMode::JoystickCamera", (int64)EOrionSteamInputSourceMode::JoystickCamera },
		{ "EOrionSteamInputSourceMode::ScrollWheel", (int64)EOrionSteamInputSourceMode::ScrollWheel },
		{ "EOrionSteamInputSourceMode::Trigger", (int64)EOrionSteamInputSourceMode::Trigger },
		{ "EOrionSteamInputSourceMode::TouchMenu", (int64)EOrionSteamInputSourceMode::TouchMenu },
		{ "EOrionSteamInputSourceMode::MouseJoystick", (int64)EOrionSteamInputSourceMode::MouseJoystick },
		{ "EOrionSteamInputSourceMode::MouseRegion", (int64)EOrionSteamInputSourceMode::MouseRegion },
		{ "EOrionSteamInputSourceMode::RadialMenu", (int64)EOrionSteamInputSourceMode::RadialMenu },
		{ "EOrionSteamInputSourceMode::SingleButton", (int64)EOrionSteamInputSourceMode::SingleButton },
		{ "EOrionSteamInputSourceMode::Switches", (int64)EOrionSteamInputSourceMode::Switches },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamInputSourceMode",
	"EOrionSteamInputSourceMode",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamInputSourceMode.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputSourceMode.InnerSingleton;
}
// ********** End Enum EOrionSteamInputSourceMode **************************************************

// ********** Begin Enum EOrionSteamXboxOrigin *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamXboxOrigin;
static UEnum* EOrionSteamXboxOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamXboxOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamXboxOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamXboxOrigin"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamXboxOrigin.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamXboxOrigin>()
{
	return EOrionSteamXboxOrigin_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.Name", "EOrionSteamXboxOrigin::A" },
		{ "B.Name", "EOrionSteamXboxOrigin::B" },
		{ "BlueprintType", "true" },
		{ "Count.Name", "EOrionSteamXboxOrigin::Count" },
		{ "DPad_East.Name", "EOrionSteamXboxOrigin::DPad_East" },
		{ "DPad_North.Name", "EOrionSteamXboxOrigin::DPad_North" },
		{ "DPad_South.Name", "EOrionSteamXboxOrigin::DPad_South" },
		{ "DPad_West.Name", "EOrionSteamXboxOrigin::DPad_West" },
		{ "LeftBumper.Name", "EOrionSteamXboxOrigin::LeftBumper" },
		{ "LeftStick_Click.Name", "EOrionSteamXboxOrigin::LeftStick_Click" },
		{ "LeftStick_DPadEast.Name", "EOrionSteamXboxOrigin::LeftStick_DPadEast" },
		{ "LeftStick_DPadNorth.Name", "EOrionSteamXboxOrigin::LeftStick_DPadNorth" },
		{ "LeftStick_DPadSouth.Name", "EOrionSteamXboxOrigin::LeftStick_DPadSouth" },
		{ "LeftStick_DPadWest.Name", "EOrionSteamXboxOrigin::LeftStick_DPadWest" },
		{ "LeftStick_Move.Name", "EOrionSteamXboxOrigin::LeftStick_Move" },
		{ "LeftTrigger_Click.Name", "EOrionSteamXboxOrigin::LeftTrigger_Click" },
		{ "LeftTrigger_Pull.Name", "EOrionSteamXboxOrigin::LeftTrigger_Pull" },
		{ "Menu.Name", "EOrionSteamXboxOrigin::Menu" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RightBumper.Name", "EOrionSteamXboxOrigin::RightBumper" },
		{ "RightStick_Click.Name", "EOrionSteamXboxOrigin::RightStick_Click" },
		{ "RightStick_DPadEast.Name", "EOrionSteamXboxOrigin::RightStick_DPadEast" },
		{ "RightStick_DPadNorth.Name", "EOrionSteamXboxOrigin::RightStick_DPadNorth" },
		{ "RightStick_DPadSouth.Name", "EOrionSteamXboxOrigin::RightStick_DPadSouth" },
		{ "RightStick_DPadWest.Name", "EOrionSteamXboxOrigin::RightStick_DPadWest" },
		{ "RightStick_Move.Name", "EOrionSteamXboxOrigin::RightStick_Move" },
		{ "RightTrigger_Click.Name", "EOrionSteamXboxOrigin::RightTrigger_Click" },
		{ "RightTrigger_Pull.Name", "EOrionSteamXboxOrigin::RightTrigger_Pull" },
		{ "View.Name", "EOrionSteamXboxOrigin::View" },
		{ "X.Name", "EOrionSteamXboxOrigin::X" },
		{ "Y.Name", "EOrionSteamXboxOrigin::Y" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamXboxOrigin::A", (int64)EOrionSteamXboxOrigin::A },
		{ "EOrionSteamXboxOrigin::B", (int64)EOrionSteamXboxOrigin::B },
		{ "EOrionSteamXboxOrigin::X", (int64)EOrionSteamXboxOrigin::X },
		{ "EOrionSteamXboxOrigin::Y", (int64)EOrionSteamXboxOrigin::Y },
		{ "EOrionSteamXboxOrigin::LeftBumper", (int64)EOrionSteamXboxOrigin::LeftBumper },
		{ "EOrionSteamXboxOrigin::RightBumper", (int64)EOrionSteamXboxOrigin::RightBumper },
		{ "EOrionSteamXboxOrigin::Menu", (int64)EOrionSteamXboxOrigin::Menu },
		{ "EOrionSteamXboxOrigin::View", (int64)EOrionSteamXboxOrigin::View },
		{ "EOrionSteamXboxOrigin::LeftTrigger_Pull", (int64)EOrionSteamXboxOrigin::LeftTrigger_Pull },
		{ "EOrionSteamXboxOrigin::LeftTrigger_Click", (int64)EOrionSteamXboxOrigin::LeftTrigger_Click },
		{ "EOrionSteamXboxOrigin::RightTrigger_Pull", (int64)EOrionSteamXboxOrigin::RightTrigger_Pull },
		{ "EOrionSteamXboxOrigin::RightTrigger_Click", (int64)EOrionSteamXboxOrigin::RightTrigger_Click },
		{ "EOrionSteamXboxOrigin::LeftStick_Move", (int64)EOrionSteamXboxOrigin::LeftStick_Move },
		{ "EOrionSteamXboxOrigin::LeftStick_Click", (int64)EOrionSteamXboxOrigin::LeftStick_Click },
		{ "EOrionSteamXboxOrigin::LeftStick_DPadNorth", (int64)EOrionSteamXboxOrigin::LeftStick_DPadNorth },
		{ "EOrionSteamXboxOrigin::LeftStick_DPadSouth", (int64)EOrionSteamXboxOrigin::LeftStick_DPadSouth },
		{ "EOrionSteamXboxOrigin::LeftStick_DPadWest", (int64)EOrionSteamXboxOrigin::LeftStick_DPadWest },
		{ "EOrionSteamXboxOrigin::LeftStick_DPadEast", (int64)EOrionSteamXboxOrigin::LeftStick_DPadEast },
		{ "EOrionSteamXboxOrigin::RightStick_Move", (int64)EOrionSteamXboxOrigin::RightStick_Move },
		{ "EOrionSteamXboxOrigin::RightStick_Click", (int64)EOrionSteamXboxOrigin::RightStick_Click },
		{ "EOrionSteamXboxOrigin::RightStick_DPadNorth", (int64)EOrionSteamXboxOrigin::RightStick_DPadNorth },
		{ "EOrionSteamXboxOrigin::RightStick_DPadSouth", (int64)EOrionSteamXboxOrigin::RightStick_DPadSouth },
		{ "EOrionSteamXboxOrigin::RightStick_DPadWest", (int64)EOrionSteamXboxOrigin::RightStick_DPadWest },
		{ "EOrionSteamXboxOrigin::RightStick_DPadEast", (int64)EOrionSteamXboxOrigin::RightStick_DPadEast },
		{ "EOrionSteamXboxOrigin::DPad_North", (int64)EOrionSteamXboxOrigin::DPad_North },
		{ "EOrionSteamXboxOrigin::DPad_South", (int64)EOrionSteamXboxOrigin::DPad_South },
		{ "EOrionSteamXboxOrigin::DPad_West", (int64)EOrionSteamXboxOrigin::DPad_West },
		{ "EOrionSteamXboxOrigin::DPad_East", (int64)EOrionSteamXboxOrigin::DPad_East },
		{ "EOrionSteamXboxOrigin::Count", (int64)EOrionSteamXboxOrigin::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamXboxOrigin",
	"EOrionSteamXboxOrigin",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamXboxOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamXboxOrigin.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamXboxOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamXboxOrigin.InnerSingleton;
}
// ********** End Enum EOrionSteamXboxOrigin *******************************************************

// ********** Begin Enum EOrionSteamControllerPad **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamControllerPad;
static UEnum* EOrionSteamControllerPad_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamControllerPad.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamControllerPad.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamControllerPad"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamControllerPad.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamControllerPad>()
{
	return EOrionSteamControllerPad_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EOrionSteamControllerPad::Left" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Right.Name", "EOrionSteamControllerPad::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamControllerPad::Left", (int64)EOrionSteamControllerPad::Left },
		{ "EOrionSteamControllerPad::Right", (int64)EOrionSteamControllerPad::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamControllerPad",
	"EOrionSteamControllerPad",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamControllerPad.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamControllerPad.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamControllerPad_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamControllerPad.InnerSingleton;
}
// ********** End Enum EOrionSteamControllerPad ****************************************************

// ********** Begin Enum EOrionSteamInputType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamInputType;
static UEnum* EOrionSteamInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamInputType"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputType.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamInputType>()
{
	return EOrionSteamInputType_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AndroidController.Comment", "// Unused\n" },
		{ "AndroidController.Name", "EOrionSteamInputType::AndroidController" },
		{ "AndroidController.ToolTip", "Unused" },
		{ "AppleMFiController.Name", "EOrionSteamInputType::AppleMFiController" },
		{ "BlueprintType", "true" },
		{ "Count.Comment", "// Added in SDK 153\n" },
		{ "Count.Name", "EOrionSteamInputType::Count" },
		{ "Count.ToolTip", "Added in SDK 153" },
		{ "GenericGamepad.Name", "EOrionSteamInputType::GenericGamepad" },
		{ "MaximumPossibleValue.Name", "EOrionSteamInputType::MaximumPossibleValue" },
		{ "MobileTouch.Name", "EOrionSteamInputType::MobileTouch" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "PS3Controller.Comment", "// Steam Link App On-screen Virtual Controller\n" },
		{ "PS3Controller.Name", "EOrionSteamInputType::PS3Controller" },
		{ "PS3Controller.ToolTip", "Steam Link App On-screen Virtual Controller" },
		{ "PS4Controller.Comment", "// DirectInput controllers\n" },
		{ "PS4Controller.Name", "EOrionSteamInputType::PS4Controller" },
		{ "PS4Controller.ToolTip", "DirectInput controllers" },
		{ "PS5Controller.Comment", "// Currently uses PS4 Origins\n" },
		{ "PS5Controller.Name", "EOrionSteamInputType::PS5Controller" },
		{ "PS5Controller.ToolTip", "Currently uses PS4 Origins" },
		{ "SteamController.Name", "EOrionSteamInputType::SteamController" },
		{ "SteamDeckController.Comment", "// Added in SDK 151\n" },
		{ "SteamDeckController.Name", "EOrionSteamInputType::SteamDeckController" },
		{ "SteamDeckController.ToolTip", "Added in SDK 151" },
		{ "SwitchJoyConPair.Comment", "// Unused\n" },
		{ "SwitchJoyConPair.Name", "EOrionSteamInputType::SwitchJoyConPair" },
		{ "SwitchJoyConPair.ToolTip", "Unused" },
		{ "SwitchJoyConSingle.Comment", "// Unused\n" },
		{ "SwitchJoyConSingle.Name", "EOrionSteamInputType::SwitchJoyConSingle" },
		{ "SwitchJoyConSingle.ToolTip", "Unused" },
		{ "SwitchProController.Comment", "// Unused\n" },
		{ "SwitchProController.Name", "EOrionSteamInputType::SwitchProController" },
		{ "SwitchProController.ToolTip", "Unused" },
		{ "Unknown.Name", "EOrionSteamInputType::Unknown" },
		{ "XBox360Controller.Name", "EOrionSteamInputType::XBox360Controller" },
		{ "XBoxOneController.Name", "EOrionSteamInputType::XBoxOneController" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamInputType::Unknown", (int64)EOrionSteamInputType::Unknown },
		{ "EOrionSteamInputType::SteamController", (int64)EOrionSteamInputType::SteamController },
		{ "EOrionSteamInputType::XBox360Controller", (int64)EOrionSteamInputType::XBox360Controller },
		{ "EOrionSteamInputType::XBoxOneController", (int64)EOrionSteamInputType::XBoxOneController },
		{ "EOrionSteamInputType::GenericGamepad", (int64)EOrionSteamInputType::GenericGamepad },
		{ "EOrionSteamInputType::PS4Controller", (int64)EOrionSteamInputType::PS4Controller },
		{ "EOrionSteamInputType::AppleMFiController", (int64)EOrionSteamInputType::AppleMFiController },
		{ "EOrionSteamInputType::AndroidController", (int64)EOrionSteamInputType::AndroidController },
		{ "EOrionSteamInputType::SwitchJoyConPair", (int64)EOrionSteamInputType::SwitchJoyConPair },
		{ "EOrionSteamInputType::SwitchJoyConSingle", (int64)EOrionSteamInputType::SwitchJoyConSingle },
		{ "EOrionSteamInputType::SwitchProController", (int64)EOrionSteamInputType::SwitchProController },
		{ "EOrionSteamInputType::MobileTouch", (int64)EOrionSteamInputType::MobileTouch },
		{ "EOrionSteamInputType::PS3Controller", (int64)EOrionSteamInputType::PS3Controller },
		{ "EOrionSteamInputType::PS5Controller", (int64)EOrionSteamInputType::PS5Controller },
		{ "EOrionSteamInputType::SteamDeckController", (int64)EOrionSteamInputType::SteamDeckController },
		{ "EOrionSteamInputType::Count", (int64)EOrionSteamInputType::Count },
		{ "EOrionSteamInputType::MaximumPossibleValue", (int64)EOrionSteamInputType::MaximumPossibleValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamInputType",
	"EOrionSteamInputType",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamInputType.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputType.InnerSingleton;
}
// ********** End Enum EOrionSteamInputType ********************************************************

// ********** Begin Enum EOrionSteamInputLEDFlag ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag;
static UEnum* EOrionSteamInputLEDFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamInputLEDFlag"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamInputLEDFlag>()
{
	return EOrionSteamInputLEDFlag_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RestoreUserDefault.Name", "EOrionSteamInputLEDFlag::RestoreUserDefault" },
		{ "SetColor.Name", "EOrionSteamInputLEDFlag::SetColor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamInputLEDFlag::SetColor", (int64)EOrionSteamInputLEDFlag::SetColor },
		{ "EOrionSteamInputLEDFlag::RestoreUserDefault", (int64)EOrionSteamInputLEDFlag::RestoreUserDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamInputLEDFlag",
	"EOrionSteamInputLEDFlag",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputLEDFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag.InnerSingleton;
}
// ********** End Enum EOrionSteamInputLEDFlag *****************************************************

// ********** Begin Enum EOrionSteamInputConfigurationEnableType ***********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType;
static UEnum* EOrionSteamInputConfigurationEnableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EOrionSteamInputConfigurationEnableType"));
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamInputConfigurationEnableType>()
{
	return EOrionSteamInputConfigurationEnableType_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Individual values are used by the GetSessionInputConfigurationSettings bitmask\n" },
#endif
		{ "ESteamInputConfigurationEnableType_Generic.Name", "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Generic" },
		{ "ESteamInputConfigurationEnableType_None.Name", "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_None" },
		{ "ESteamInputConfigurationEnableType_Playstation.Name", "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Playstation" },
		{ "ESteamInputConfigurationEnableType_Switch.Name", "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Switch" },
		{ "ESteamInputConfigurationEnableType_Xbox.Name", "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Xbox" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual values are used by the GetSessionInputConfigurationSettings bitmask" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_None", (int64)EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_None },
		{ "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Playstation", (int64)EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Playstation },
		{ "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Xbox", (int64)EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Xbox },
		{ "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Generic", (int64)EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Generic },
		{ "EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Switch", (int64)EOrionSteamInputConfigurationEnableType::ESteamInputConfigurationEnableType_Switch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EOrionSteamInputConfigurationEnableType",
	"EOrionSteamInputConfigurationEnableType",
	Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType()
{
	if (!Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputConfigurationEnableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType.InnerSingleton;
}
// ********** End Enum EOrionSteamInputConfigurationEnableType *************************************

// ********** Begin Enum EScePadTriggerEffectMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScePadTriggerEffectMode;
static UEnum* EScePadTriggerEffectMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScePadTriggerEffectMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScePadTriggerEffectMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("EScePadTriggerEffectMode"));
	}
	return Z_Registration_Info_UEnum_EScePadTriggerEffectMode.OuterSingleton;
}
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EScePadTriggerEffectMode>()
{
	return EScePadTriggerEffectMode_StaticEnum();
}
struct Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_OFF.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION" },
		{ "SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON.Name", "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK },
		{ "EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION", (int64)EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	"EScePadTriggerEffectMode",
	"EScePadTriggerEffectMode",
	Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode()
{
	if (!Z_Registration_Info_UEnum_EScePadTriggerEffectMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScePadTriggerEffectMode.InnerSingleton, Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScePadTriggerEffectMode.InnerSingleton;
}
// ********** End Enum EScePadTriggerEffectMode ****************************************************

// ********** Begin ScriptStruct FScePadTriggerEffectOffParam **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam;
class UScriptStruct* FScePadTriggerEffectOffParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectOffParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to off mode.\n *         Off Mode: Stop trigger effect.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to off mode.\n        Off Mode: Stop trigger effect." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectOffParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectOffParam",
	nullptr,
	0,
	sizeof(FScePadTriggerEffectOffParam),
	alignof(FScePadTriggerEffectOffParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectOffParam ****************************************

// ********** Begin ScriptStruct FScePadTriggerEffectFeedbackParam *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam;
class UScriptStruct* FScePadTriggerEffectFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to Feedback mode.\n *         Feedback Mode: The motor arm pushes back trigger.\n *                        Trigger obtains stiffness at specified position.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Feedback mode.\n        Feedback Mode: The motor arm pushes back trigger.\n                       Trigger obtains stiffness at specified position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the strength of target trigger start changing(0~9). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the strength of target trigger start changing(0~9)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength that the motor arm pushes back target trigger(0~8 (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength that the motor arm pushes back target trigger(0~8 (0: Same as Off mode))." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectFeedbackParam, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectFeedbackParam, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectFeedbackParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectFeedbackParam),
	alignof(FScePadTriggerEffectFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectFeedbackParam ***********************************

// ********** Begin ScriptStruct FScePadTriggerEffectWeaponParam ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam;
class UScriptStruct* FScePadTriggerEffectWeaponParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectWeaponParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to Weapon mode.\n *         Weapon Mode: Emulate weapon like gun trigger.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Weapon mode.\n        Weapon Mode: Emulate weapon like gun trigger." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the stiffness of trigger start changing(2~7). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the stiffness of trigger start changing(2~7)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the stiffness of trigger finish changing(startPosition+1~8). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the stiffness of trigger finish changing(startPosition+1~8)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength of gun trigger(0~8 (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength of gun trigger(0~8 (0: Same as Off mode))." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectWeaponParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectWeaponParam, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectWeaponParam, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectWeaponParam, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectWeaponParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectWeaponParam),
	alignof(FScePadTriggerEffectWeaponParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectWeaponParam *************************************

// ********** Begin ScriptStruct FScePadTriggerEffectVibrationParam ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam;
class UScriptStruct* FScePadTriggerEffectVibrationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectVibrationParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to Vibration mode.\n *         Vibration Mode: Vibrates motor arm around specified position.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Vibration mode.\n        Vibration Mode: Vibrates motor arm around specified position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the motor arm start vibrating(0~9). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the motor arm start vibrating(0~9)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration amplitude(0~8 (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration amplitude(0~8 (0: Same as Off mode))." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration frequency(0~255[Hz] (0: Same as Off mode)). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration frequency(0~255[Hz] (0: Same as Off mode))." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectVibrationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectVibrationParam, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectVibrationParam, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectVibrationParam, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectVibrationParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectVibrationParam),
	alignof(FScePadTriggerEffectVibrationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectVibrationParam **********************************

// ********** Begin ScriptStruct FScePadTriggerEffectMultiplePositionFeedbackParam *****************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam;
class UScriptStruct* FScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectMultiplePositionFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to ScePadTriggerEffectMultiplePositionFeedbackParam mode.\n *         Multi Position Feedback Mode: The motor arm pushes back trigger.\n *                                       Trigger obtains specified stiffness at each control point.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to ScePadTriggerEffectMultiplePositionFeedbackParam mode.\n        Multi Position Feedback Mode: The motor arm pushes back trigger.\n                                      Trigger obtains specified stiffness at each control point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength that the motor arm pushes back target trigger at position(0~8 (0: Same as Off mode)).\n\x09 *  strength[0] means strength of motor arm at position0.\n\x09 *  strength[1] means strength of motor arm at position1.\n\x09 * */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength that the motor arm pushes back target trigger at position(0~8 (0: Same as Off mode)).\n        *  strength[0] means strength of motor arm at position0.\n        *  strength[1] means strength of motor arm at position1." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectMultiplePositionFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength_Inner = { "Strength", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectMultiplePositionFeedbackParam, Strength), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectMultiplePositionFeedbackParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectMultiplePositionFeedbackParam),
	alignof(FScePadTriggerEffectMultiplePositionFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectMultiplePositionFeedbackParam *******************

// ********** Begin ScriptStruct FScePadTriggerEffectSlopeFeedbackParam ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam;
class UScriptStruct* FScePadTriggerEffectSlopeFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectSlopeFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to Feedback3 mode.\n *         Slope Feedback Mode: The motor arm pushes back trigger between two spedified control points.\n *                              Stiffness of the trigger is changing depending on the set place.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Feedback3 mode.\n        Slope Feedback Mode: The motor arm pushes back trigger between two spedified control points.\n                             Stiffness of the trigger is changing depending on the set place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the strength of target trigger start changing(0~endPosition). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the strength of target trigger start changing(0~endPosition)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E position where the strength of target trigger finish changing(startPosition+1~9). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E position where the strength of target trigger finish changing(startPosition+1~9)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStrength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength when trigger's position is startPosition(1~8) */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength when trigger's position is startPosition(1~8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrength_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E strength when trigger's position is endPosition(1~8) */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E strength when trigger's position is endPosition(1~8)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectSlopeFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartStrength = { "StartStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, StartStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStrength_MetaData), NewProp_StartStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectSlopeFeedbackParam, EndStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrength_MetaData), NewProp_EndStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectSlopeFeedbackParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectSlopeFeedbackParam),
	alignof(FScePadTriggerEffectSlopeFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectSlopeFeedbackParam ******************************

// ********** Begin ScriptStruct FScePadTriggerEffectMultiplePositionVibrationParam ****************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam;
class UScriptStruct* FScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectMultiplePositionVibrationParam"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *E\n *  @brief parameter for setting the trigger effect to Vibration2 mode.\n *         Multi Position Vibration Mode: Vibrates motor arm around specified control point.\n *                                        Trigger vibrates specified amplitude at each control point.\n **/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E\n @brief parameter for setting the trigger effect to Vibration2 mode.\n        Multi Position Vibration Mode: Vibrates motor arm around specified control point.\n                                       Trigger vibrates specified amplitude at each control point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration frequency(0~255 (0: Same as Off mode)) */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration frequency(0~255 (0: Same as Off mode))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*E vibration amplitude at position(0~8 (0: Same as Off mode)).\n\x09 *  amplitude[0] means amplitude of vibration at position0.\n\x09 *  amplitude[1] means amplitude of vibration at position1.\n\x09 *  ...\n\x09 * */" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E vibration amplitude at position(0~8 (0: Same as Off mode)).\n        *  amplitude[0] means amplitude of vibration at position0.\n        *  amplitude[1] means amplitude of vibration at position1.\n        *  ..." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amplitude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectMultiplePositionVibrationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectMultiplePositionVibrationParam, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude_Inner = { "Amplitude", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectMultiplePositionVibrationParam, Amplitude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectMultiplePositionVibrationParam",
	Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers),
	sizeof(FScePadTriggerEffectMultiplePositionVibrationParam),
	alignof(FScePadTriggerEffectMultiplePositionVibrationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectMultiplePositionVibrationParam ******************

// ********** Begin ScriptStruct FScePadTriggerEffectCommandData ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData;
class UScriptStruct* FScePadTriggerEffectCommandData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectCommandData"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplePositionFeedbackParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlopeFeedbackParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplePositionVibrationParam_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VibrationParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiplePositionFeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeFeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiplePositionVibrationParam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectCommandData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_OffParam = { "OffParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, OffParam), Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffParam_MetaData), NewProp_OffParam_MetaData) }; // 2088354480
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_FeedbackParam = { "FeedbackParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, FeedbackParam), Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackParam_MetaData), NewProp_FeedbackParam_MetaData) }; // 3945756570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_WeaponParam = { "WeaponParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, WeaponParam), Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponParam_MetaData), NewProp_WeaponParam_MetaData) }; // 1264066581
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_VibrationParam = { "VibrationParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, VibrationParam), Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationParam_MetaData), NewProp_VibrationParam_MetaData) }; // 1017401746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionFeedbackParam = { "MultiplePositionFeedbackParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, MultiplePositionFeedbackParam), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplePositionFeedbackParam_MetaData), NewProp_MultiplePositionFeedbackParam_MetaData) }; // 3180795764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_SlopeFeedbackParam = { "SlopeFeedbackParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, SlopeFeedbackParam), Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlopeFeedbackParam_MetaData), NewProp_SlopeFeedbackParam_MetaData) }; // 1317850954
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionVibrationParam = { "MultiplePositionVibrationParam", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommandData, MultiplePositionVibrationParam), Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplePositionVibrationParam_MetaData), NewProp_MultiplePositionVibrationParam_MetaData) }; // 2552345276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_OffParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_FeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_WeaponParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_VibrationParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionFeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_SlopeFeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionVibrationParam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectCommandData",
	Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::PropPointers),
	sizeof(FScePadTriggerEffectCommandData),
	alignof(FScePadTriggerEffectCommandData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectCommandData *************************************

// ********** Begin ScriptStruct FScePadTriggerEffectCommand ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand;
class UScriptStruct* FScePadTriggerEffectCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("ScePadTriggerEffectCommand"));
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandData_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScePadTriggerEffectCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommand, Mode), Z_Construct_UEnum_OrionSteamSDKAPI_EScePadTriggerEffectMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3230587711
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_CommandData = { "CommandData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScePadTriggerEffectCommand, CommandData), Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandData_MetaData), NewProp_CommandData_MetaData) }; // 356709763
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewProp_CommandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"ScePadTriggerEffectCommand",
	Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::PropPointers),
	sizeof(FScePadTriggerEffectCommand),
	alignof(FScePadTriggerEffectCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommand()
{
	if (!Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand.InnerSingleton, Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand.InnerSingleton;
}
// ********** End ScriptStruct FScePadTriggerEffectCommand *****************************************

// ********** Begin ScriptStruct FInputAnalogActionData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputAnalogActionData;
class UScriptStruct* FInputAnalogActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputAnalogActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionData, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputAnalogActionData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputAnalogActionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, Mode), Z_Construct_UEnum_OrionSteamSDKAPI_EOrionSteamInputSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3498999889
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
void Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInputAnalogActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputAnalogActionData), &Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputAnalogActionData",
	Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers),
	sizeof(FInputAnalogActionData),
	alignof(FInputAnalogActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputAnalogActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputAnalogActionData.InnerSingleton;
}
// ********** End ScriptStruct FInputAnalogActionData **********************************************

// ********** Begin ScriptStruct FInputDigitalActionData *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputDigitalActionData;
class UScriptStruct* FInputDigitalActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputDigitalActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionData, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputDigitalActionData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputDigitalActionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
{
	((FInputDigitalActionData*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bState_MetaData), NewProp_bState_MetaData) };
void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInputDigitalActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputDigitalActionData",
	Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers),
	sizeof(FInputDigitalActionData),
	alignof(FInputDigitalActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputDigitalActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputDigitalActionData.InnerSingleton;
}
// ********** End ScriptStruct FInputDigitalActionData *********************************************

// ********** Begin ScriptStruct FInputMotionData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputMotionData;
class UScriptStruct* FInputMotionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputMotionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputMotionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMotionData, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputMotionData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputMotionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputMotionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatW_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatW;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMotionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX = { "RotQuatX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatX_MetaData), NewProp_RotQuatX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY = { "RotQuatY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatY_MetaData), NewProp_RotQuatY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ = { "RotQuatZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatZ_MetaData), NewProp_RotQuatZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW = { "RotQuatW", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatW_MetaData), NewProp_RotQuatW_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX = { "PosAccelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelX_MetaData), NewProp_PosAccelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY = { "PosAccelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelY_MetaData), NewProp_PosAccelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ = { "PosAccelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelZ_MetaData), NewProp_PosAccelZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX = { "RotVelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelX_MetaData), NewProp_RotVelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY = { "RotVelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelY_MetaData), NewProp_RotVelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ = { "RotVelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelZ_MetaData), NewProp_RotVelZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMotionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputMotionData",
	Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers),
	sizeof(FInputMotionData),
	alignof(FInputMotionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputMotionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputMotionData.InnerSingleton, Z_Construct_UScriptStruct_FInputMotionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputMotionData.InnerSingleton;
}
// ********** End ScriptStruct FInputMotionData ****************************************************

// ********** Begin ScriptStruct FInputHandle ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputHandle;
class UScriptStruct* FInputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHandle, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputHandle",
	nullptr,
	0,
	sizeof(FInputHandle),
	alignof(FInputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputHandle.InnerSingleton;
}
// ********** End ScriptStruct FInputHandle ********************************************************

// ********** Begin ScriptStruct FInputActionSetHandle *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputActionSetHandle;
class UScriptStruct* FInputActionSetHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputActionSetHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputActionSetHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSetHandle, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputActionSetHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputActionSetHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSetHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputActionSetHandle",
	nullptr,
	0,
	sizeof(FInputActionSetHandle),
	alignof(FInputActionSetHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputActionSetHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputActionSetHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputActionSetHandle.InnerSingleton;
}
// ********** End ScriptStruct FInputActionSetHandle ***********************************************

// ********** Begin ScriptStruct FInputDigitalActionHandle *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle;
class UScriptStruct* FInputDigitalActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionHandle, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputDigitalActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputDigitalActionHandle",
	nullptr,
	0,
	sizeof(FInputDigitalActionHandle),
	alignof(FInputDigitalActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.InnerSingleton;
}
// ********** End ScriptStruct FInputDigitalActionHandle *******************************************

// ********** Begin ScriptStruct FInputAnalogActionHandle ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle;
class UScriptStruct* FInputAnalogActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionHandle, (UObject*)Z_Construct_UPackage__Script_OrionSteamSDKAPI(), TEXT("InputAnalogActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
	nullptr,
	&NewStructOps,
	"InputAnalogActionHandle",
	nullptr,
	0,
	sizeof(FInputAnalogActionHandle),
	alignof(FInputAnalogActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.InnerSingleton;
}
// ********** End ScriptStruct FInputAnalogActionHandle ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInputTypes_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrionSteamInputGlyphSize_StaticEnum, TEXT("EOrionSteamInputGlyphSize"), &Z_Registration_Info_UEnum_EOrionSteamInputGlyphSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2837893346U) },
		{ EOrionSteamInputSource_StaticEnum, TEXT("EOrionSteamInputSource"), &Z_Registration_Info_UEnum_EOrionSteamInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1964387212U) },
		{ EOrionSteamInputSourceMode_StaticEnum, TEXT("EOrionSteamInputSourceMode"), &Z_Registration_Info_UEnum_EOrionSteamInputSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3498999889U) },
		{ EOrionSteamXboxOrigin_StaticEnum, TEXT("EOrionSteamXboxOrigin"), &Z_Registration_Info_UEnum_EOrionSteamXboxOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 901980414U) },
		{ EOrionSteamControllerPad_StaticEnum, TEXT("EOrionSteamControllerPad"), &Z_Registration_Info_UEnum_EOrionSteamControllerPad, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2796586706U) },
		{ EOrionSteamInputType_StaticEnum, TEXT("EOrionSteamInputType"), &Z_Registration_Info_UEnum_EOrionSteamInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3380170689U) },
		{ EOrionSteamInputLEDFlag_StaticEnum, TEXT("EOrionSteamInputLEDFlag"), &Z_Registration_Info_UEnum_EOrionSteamInputLEDFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3171955057U) },
		{ EOrionSteamInputConfigurationEnableType_StaticEnum, TEXT("EOrionSteamInputConfigurationEnableType"), &Z_Registration_Info_UEnum_EOrionSteamInputConfigurationEnableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1549694114U) },
		{ EScePadTriggerEffectMode_StaticEnum, TEXT("EScePadTriggerEffectMode"), &Z_Registration_Info_UEnum_EScePadTriggerEffectMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3230587711U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScePadTriggerEffectOffParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectOffParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectOffParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectOffParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectOffParam), 2088354480U) },
		{ FScePadTriggerEffectFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectFeedbackParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectFeedbackParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectFeedbackParam), 3945756570U) },
		{ FScePadTriggerEffectWeaponParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectWeaponParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectWeaponParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectWeaponParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectWeaponParam), 1264066581U) },
		{ FScePadTriggerEffectVibrationParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectVibrationParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectVibrationParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectVibrationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectVibrationParam), 1017401746U) },
		{ FScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectMultiplePositionFeedbackParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectMultiplePositionFeedbackParam), 3180795764U) },
		{ FScePadTriggerEffectSlopeFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectSlopeFeedbackParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectSlopeFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectSlopeFeedbackParam), 1317850954U) },
		{ FScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewStructOps, TEXT("ScePadTriggerEffectMultiplePositionVibrationParam"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectMultiplePositionVibrationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectMultiplePositionVibrationParam), 2552345276U) },
		{ FScePadTriggerEffectCommandData::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectCommandData_Statics::NewStructOps, TEXT("ScePadTriggerEffectCommandData"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommandData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectCommandData), 356709763U) },
		{ FScePadTriggerEffectCommand::StaticStruct, Z_Construct_UScriptStruct_FScePadTriggerEffectCommand_Statics::NewStructOps, TEXT("ScePadTriggerEffectCommand"), &Z_Registration_Info_UScriptStruct_FScePadTriggerEffectCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScePadTriggerEffectCommand), 1167765407U) },
		{ FInputAnalogActionData::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps, TEXT("InputAnalogActionData"), &Z_Registration_Info_UScriptStruct_FInputAnalogActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionData), 4205309177U) },
		{ FInputDigitalActionData::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps, TEXT("InputDigitalActionData"), &Z_Registration_Info_UScriptStruct_FInputDigitalActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionData), 1273547694U) },
		{ FInputMotionData::StaticStruct, Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps, TEXT("InputMotionData"), &Z_Registration_Info_UScriptStruct_FInputMotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMotionData), 3248264950U) },
		{ FInputHandle::StaticStruct, Z_Construct_UScriptStruct_FInputHandle_Statics::NewStructOps, TEXT("InputHandle"), &Z_Registration_Info_UScriptStruct_FInputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputHandle), 2981625445U) },
		{ FInputActionSetHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps, TEXT("InputActionSetHandle"), &Z_Registration_Info_UScriptStruct_FInputActionSetHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionSetHandle), 1743506528U) },
		{ FInputDigitalActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps, TEXT("InputDigitalActionHandle"), &Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionHandle), 827094566U) },
		{ FInputAnalogActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::NewStructOps, TEXT("InputAnalogActionHandle"), &Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionHandle), 264666639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInputTypes_h__Script_OrionSteamSDKAPI_2746914801(TEXT("/Script/OrionSteamSDKAPI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInputTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInputTypes_h__Script_OrionSteamSDKAPI_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInputTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInputTypes_h__Script_OrionSteamSDKAPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
