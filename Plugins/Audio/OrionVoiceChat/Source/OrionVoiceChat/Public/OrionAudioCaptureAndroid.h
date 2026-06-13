/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/Texture2D.h"
#include "OrionMicrophoneSpeakComponent.h"

#if PLATFORM_ANDROID
#include <Android/AndroidApplication.h>
#include <Android/AndroidJNI.h>
#endif

#include "OrionVoiceChat.h"
#include "OrionAudioCaptureAndroid.generated.h"

UCLASS()
class ORIONVOICECHAT_API UOrionAudioCaptureAndroid : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(Category="OrionVoiceChat")
	static bool StartAndroidMicrophone(UOrionMicrophoneSpeakComponent* callbackComp, int SampleRateToUse);

	UFUNCTION(Category="OrionVoiceChat")
	static void StopAndroidMicrophone(UOrionMicrophoneSpeakComponent* callbackComp);

	UFUNCTION(Category="OrionVoiceChat")
	static void AskAndroidPermission();

	UFUNCTION(Category="OrionVoiceChat")
	static bool HasAndroidPermission();
};
