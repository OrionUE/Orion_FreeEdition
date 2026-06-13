/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingRegistry.h"

#include "OrionGameSettingRegistry.generated.h"

class UCoreLocalPlayer;

#define GET_SHARED_SETTINGS_FUNCTION_PATH(FunctionOrPropertyName)							\
	MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>({								\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionLocalPlayer, GetSharedSettings),				\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionSettingsShared, FunctionOrPropertyName)			\
	}))

#define GET_LOCAL_SETTINGS_FUNCTION_PATH(FunctionOrPropertyName)							\
	MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>({								\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionLocalPlayer, GetLocalSettings),					\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionSettingsLocal, FunctionOrPropertyName)			\
	}))

UCLASS()
class ORIONGAME_API UOrionGameSettingRegistry : public UGameSettingRegistry
{
	GENERATED_BODY()

public:
	UOrionGameSettingRegistry();
	
	static UOrionGameSettingRegistry* Get(UCoreLocalPlayer* InLocalPlayer);

	virtual void SaveChanges() override;

protected:
	virtual void OnInitialize(ULocalPlayer* InLocalPlayer) override;
	virtual bool IsFinishedInitializing() const override;

protected:
	UGameSettingCollection* InitializeGameSettings(UCoreLocalPlayer* InLocalPlayer);
	
	UGameSettingCollection* InitializeVideoSettings(UCoreLocalPlayer* InLocalPlayer);
	void InitializeVideoSettings_FrameRates(UGameSettingCollection* Screen, UCoreLocalPlayer* InLocalPlayer);
	void AddPerformanceStatPage(UGameSettingCollection* Screen, UCoreLocalPlayer* InLocalPlayer);

	UGameSettingCollection* InitializeAudioSettings(UCoreLocalPlayer* InLocalPlayer);

	UGameSettingCollection* InitializeMouseAndKeyboardSettings(UCoreLocalPlayer* InLocalPlayer);
	
	UGameSettingCollection* InitializeGamepadSettings(UCoreLocalPlayer* InLocalPlayer);

protected:
	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GameSetting;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> VideoSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> AudioSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> MouseAndKeyboardSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GamepadSettings;
};
