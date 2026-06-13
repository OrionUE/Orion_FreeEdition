/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingRegistry.h"

#include "OrionGameWorldSettingRegistry.generated.h"

class UCoreLocalPlayer;

#define GET_LEVELMETA_SETTINGS_FUNCTION_PATH(FunctionOrPropertyName)						\
	MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>({								\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionLocalPlayer, GetCurrentLevelMeta),				\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionArchiveLevelMeta, FunctionOrPropertyName)		\
	}))

#define GET_WORLDOPTION_SETTINGS_FUNCTION_PATH(FunctionOrPropertyName)						\
	MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>({								\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionLocalPlayer, GetCurrentWorldOptionSettings),	\
		GET_FUNCTION_NAME_STRING_CHECKED(UOrionSettingsWorldOption, FunctionOrPropertyName)	\
	}))

UCLASS()
class ORIONGAME_API UOrionGameWorldSettingRegistry : public UGameSettingRegistry
{
	GENERATED_BODY()

public:
	UOrionGameWorldSettingRegistry();

	static UOrionGameWorldSettingRegistry* Get(UCoreLocalPlayer* InLocalPlayer);

	virtual void SaveChanges() override;

	void RefreshSettings(ULocalPlayer* InLocalPlayer);

protected:
	virtual void OnInitialize(ULocalPlayer* InLocalPlayer) override;
	virtual bool IsFinishedInitializing() const override;
	
protected:
	UGameSettingCollection* InitializeGameWorldSetting(UCoreLocalPlayer* InLocalPlayer);

protected:
	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GameWorldSetting;
};
