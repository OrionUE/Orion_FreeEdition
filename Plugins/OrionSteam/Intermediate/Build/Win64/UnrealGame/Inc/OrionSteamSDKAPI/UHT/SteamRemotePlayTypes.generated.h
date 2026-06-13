// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlayTypes.h"

#ifdef ORIONSTEAMSDKAPI_SteamRemotePlayTypes_generated_h
#error "SteamRemotePlayTypes.generated.h already included, missing '#pragma once' in SteamRemotePlayTypes.h"
#endif
#define ORIONSTEAMSDKAPI_SteamRemotePlayTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSteamRemotePlaySessionConnected;
struct FSteamRemotePlaySessionDisconnected;

// ********** Begin ScriptStruct FRemotePlayInputKey ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInputKey_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemotePlayInputKey;
// ********** End ScriptStruct FRemotePlayInputKey *************************************************

// ********** Begin ScriptStruct FRemotePlayInputMouseWheel ****************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_227_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInputMouseWheel_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemotePlayInputMouseWheel;
// ********** End ScriptStruct FRemotePlayInputMouseWheel ******************************************

// ********** Begin ScriptStruct FRemotePlayInputMouseMotion ***************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInputMouseMotion_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemotePlayInputMouseMotion;
// ********** End ScriptStruct FRemotePlayInputMouseMotion *****************************************

// ********** Begin ScriptStruct FSteamRemotePlaySessionConnected **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_304_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamRemotePlaySessionConnected;
// ********** End ScriptStruct FSteamRemotePlaySessionConnected ************************************

// ********** Begin ScriptStruct FSteamRemotePlaySessionDisconnected *******************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_345_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FSteamRemotePlaySessionDisconnected;
// ********** End ScriptStruct FSteamRemotePlaySessionDisconnected *********************************

// ********** Begin ScriptStruct FRemotePlaySessionID **********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_387_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlaySessionID_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemotePlaySessionID;
// ********** End ScriptStruct FRemotePlaySessionID ************************************************

// ********** Begin ScriptStruct FRemotePlayInput **************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_412_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayInput_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemotePlayInput;
// ********** End ScriptStruct FRemotePlayInput ****************************************************

// ********** Begin ScriptStruct FRemotePlayCursorID ***********************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_472_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemotePlayCursorID_Statics; \
	ORIONSTEAMSDKAPI_API static class UScriptStruct* StaticStruct();


struct FRemotePlayCursorID;
// ********** End ScriptStruct FRemotePlayCursorID *************************************************

// ********** Begin Delegate FOnSteamRemotePlaySessionConnected ************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_498_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data);


// ********** End Delegate FOnSteamRemotePlaySessionConnected **************************************

// ********** Begin Delegate FOnSteamRemotePlaySessionDisconnected *********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h_499_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data);


// ********** End Delegate FOnSteamRemotePlaySessionDisconnected ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamRemotePlay_SteamRemotePlayTypes_h

// ********** Begin Enum ESteamRemotePlayKeyModifier ***********************************************
#define FOREACH_ENUM_ESTEAMREMOTEPLAYKEYMODIFIER(op) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNone) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftShift) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightShift) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftControl) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightControl) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftAlt) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightAlt) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierLeftGUI) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierRightGUI) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierNumLock) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierCapsLock) \
	op(ESteamRemotePlayKeyModifier::k_ERemotePlayKeyModifierMask) 

enum class ESteamRemotePlayKeyModifier : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayKeyModifier> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamRemotePlayKeyModifier>();
// ********** End Enum ESteamRemotePlayKeyModifier *************************************************

// ********** Begin Enum ESteamRemotePlayScancode **************************************************
#define FOREACH_ENUM_ESTEAMREMOTEPLAYSCANCODE(op) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeUnknown) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeA) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeB) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeC) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeD) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeE) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeG) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeH) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeI) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeJ) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeK) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeL) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeM) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeN) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeO) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeP) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeQ) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeR) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeS) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeT) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeU) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeV) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeW) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeX) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeY) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeZ) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode1) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode2) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode3) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode4) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode5) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode6) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode7) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode8) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode9) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancode0) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeReturn) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeEscape) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeBackspace) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeTab) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeSpace) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeMinus) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeEquals) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftBracket) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightBracket) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeBackslash) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeSemicolon) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeApostrophe) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeGrave) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeComma) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodePeriod) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeSlash) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeCapsLock) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF1) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF2) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF3) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF4) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF5) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF6) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF7) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF8) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF9) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF10) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF11) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeF12) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeInsert) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeHome) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodePageUp) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeDelete) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeEnd) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodePageDown) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRight) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeft) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeDown) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeUp) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftControl) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftShift) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftAlt) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeLeftGUI) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightControl) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightShift) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightALT) \
	op(ESteamRemotePlayScancode::k_ERemotePlayScancodeRightGUI) 

enum class ESteamRemotePlayScancode : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayScancode> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamRemotePlayScancode>();
// ********** End Enum ESteamRemotePlayScancode ****************************************************

// ********** Begin Enum ESteamRemotePlayMouseWheelDirection ***************************************
#define FOREACH_ENUM_ESTEAMREMOTEPLAYMOUSEWHEELDIRECTION(op) \
	op(ESteamRemotePlayMouseWheelDirection::NOT_SET) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelUp) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelDown) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelLeft) \
	op(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelRight) 

enum class ESteamRemotePlayMouseWheelDirection : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayMouseWheelDirection> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamRemotePlayMouseWheelDirection>();
// ********** End Enum ESteamRemotePlayMouseWheelDirection *****************************************

// ********** Begin Enum ESteamRemotePlayMouseButton ***********************************************
#define FOREACH_ENUM_ESTEAMREMOTEPLAYMOUSEBUTTON(op) \
	op(ESteamRemotePlayMouseButton::NOT_SET) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonLeft) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonRight) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonMiddle) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX1) \
	op(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonX2) 

enum class ESteamRemotePlayMouseButton : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayMouseButton> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamRemotePlayMouseButton>();
// ********** End Enum ESteamRemotePlayMouseButton *************************************************

// ********** Begin Enum ESteamRemotePlayInputType *************************************************
#define FOREACH_ENUM_ESTEAMREMOTEPLAYINPUTTYPE(op) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputUnknown) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseMotion) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonDown) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonUp) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputMouseWheel) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputKeyDown) \
	op(ESteamRemotePlayInputType::k_ERemotePlayInputKeyUp) 

enum class ESteamRemotePlayInputType : uint8;
template<> struct TIsUEnumClass<ESteamRemotePlayInputType> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<ESteamRemotePlayInputType>();
// ********** End Enum ESteamRemotePlayInputType ***************************************************

// ********** Begin Enum EOrionSteamDeviceFormFactor ***********************************************
#define FOREACH_ENUM_EORIONSTEAMDEVICEFORMFACTOR(op) \
	op(EOrionSteamDeviceFormFactor::Unknown) \
	op(EOrionSteamDeviceFormFactor::Phone) \
	op(EOrionSteamDeviceFormFactor::Tablet) \
	op(EOrionSteamDeviceFormFactor::Computer) \
	op(EOrionSteamDeviceFormFactor::TV) 

enum class EOrionSteamDeviceFormFactor : uint8;
template<> struct TIsUEnumClass<EOrionSteamDeviceFormFactor> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamDeviceFormFactor>();
// ********** End Enum EOrionSteamDeviceFormFactor *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
