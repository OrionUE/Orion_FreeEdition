// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionAudioCaptureAndroid.h"

#ifdef ORIONVOICECHAT_OrionAudioCaptureAndroid_generated_h
#error "OrionAudioCaptureAndroid.generated.h already included, missing '#pragma once' in OrionAudioCaptureAndroid.h"
#endif
#define ORIONVOICECHAT_OrionAudioCaptureAndroid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOrionMicrophoneSpeakComponent;

// ********** Begin Class UOrionAudioCaptureAndroid ************************************************
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasAndroidPermission); \
	DECLARE_FUNCTION(execAskAndroidPermission); \
	DECLARE_FUNCTION(execStopAndroidMicrophone); \
	DECLARE_FUNCTION(execStartAndroidMicrophone);


ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionAudioCaptureAndroid_NoRegister();

#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionAudioCaptureAndroid(); \
	friend struct Z_Construct_UClass_UOrionAudioCaptureAndroid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONVOICECHAT_API UClass* Z_Construct_UClass_UOrionAudioCaptureAndroid_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionAudioCaptureAndroid, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionVoiceChat"), Z_Construct_UClass_UOrionAudioCaptureAndroid_NoRegister) \
	DECLARE_SERIALIZER(UOrionAudioCaptureAndroid)


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionAudioCaptureAndroid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionAudioCaptureAndroid(UOrionAudioCaptureAndroid&&) = delete; \
	UOrionAudioCaptureAndroid(const UOrionAudioCaptureAndroid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionAudioCaptureAndroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionAudioCaptureAndroid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionAudioCaptureAndroid) \
	NO_API virtual ~UOrionAudioCaptureAndroid();


#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_20_PROLOG
#define FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionAudioCaptureAndroid;

// ********** End Class UOrionAudioCaptureAndroid **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_Audio_OrionVoiceChat_Source_OrionVoiceChat_Public_OrionAudioCaptureAndroid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
