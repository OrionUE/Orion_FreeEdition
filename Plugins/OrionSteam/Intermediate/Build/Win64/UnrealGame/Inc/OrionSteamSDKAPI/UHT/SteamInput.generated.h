// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInput/SteamInput.h"

#ifdef ORIONSTEAMSDKAPI_SteamInput_generated_h
#error "SteamInput.generated.h already included, missing '#pragma once' in SteamInput.h"
#endif
#define ORIONSTEAMSDKAPI_SteamInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOrionSteamInput;
enum class EOrionSteamControllerPad : uint8;
enum class EOrionSteamInputConfigurationEnableType : uint8;
enum class EOrionSteamInputGlyphSize : uint8;
enum class EOrionSteamInputLEDFlag : uint8;
enum class EOrionSteamInputType : uint8;
enum class EOrionSteamXboxOrigin : uint8;
struct FInputActionSetHandle;
struct FInputAnalogActionData;
struct FInputAnalogActionHandle;
struct FInputDigitalActionData;
struct FInputDigitalActionHandle;
struct FInputHandle;
struct FInputMotionData;
struct FScePadTriggerEffectCommand;

// ********** Begin Class UOrionSteamInput *********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputActionOriginAsString); \
	DECLARE_FUNCTION(execGetInputActionOriginAsInteger); \
	DECLARE_FUNCTION(execGetInputActionOrigins); \
	DECLARE_FUNCTION(execSetDualSenseTriggerEffect); \
	DECLARE_FUNCTION(execGetSessionInputConfigurationSettings); \
	DECLARE_FUNCTION(execGetStringForAnalogActionName); \
	DECLARE_FUNCTION(execGetStringForDigitalActionName); \
	DECLARE_FUNCTION(execBWaitForData); \
	DECLARE_FUNCTION(execBNewDataAvailable); \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execLegacy_TriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execLegacy_TriggerHapticPulse); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execTriggerVibration); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin_Legacy); \
	DECLARE_FUNCTION(execGetGlyphSVGForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphPNGForActionOrigin); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execGetActionSetHandle); \
	DECLARE_FUNCTION(execGetConnectedControllers); \
	DECLARE_FUNCTION(execSetInputActionManifestFilePath); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetSteamInput);


struct Z_Construct_UClass_UOrionSteamInput_Statics;
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamInput(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOrionSteamInput_Statics; \
	friend ORIONSTEAMSDKAPI_API UClass* ::Z_Construct_UClass_UOrionSteamInput(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOrionSteamInput, UOrionSteamInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamInput) \
	DECLARE_SERIALIZER(UOrionSteamInput)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamInput(UOrionSteamInput&&) = delete; \
	UOrionSteamInput(const UOrionSteamInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSteamInput)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_13_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamInput;

// ********** End Class UOrionSteamInput ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_SteamInput_SteamInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
