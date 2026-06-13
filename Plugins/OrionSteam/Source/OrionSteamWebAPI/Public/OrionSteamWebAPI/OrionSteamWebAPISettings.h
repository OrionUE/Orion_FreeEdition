/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DeveloperSettings.h"
#include "OrionSteamWebAPI/SteamWebTypes.h"
#include "OrionSteamWebAPISettings.generated.h"

UCLASS(config = Engine, defaultconfig, meta=(DisplayName="OrionSteamWebAPI Plugin"))
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPISettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UOrionSteamWebAPISettings();

public:
	/*
	 * If an async task takes longer than this (in seconds) it will be cancelled
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings", meta=(UIMin="5.0", UIMax="60.0"))
	float AsyncTaskTimeout;

	/**
	 * Disabled subsystems wont be created, OrionSteamWebAPI subsystem cannot be disabled
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings", meta=(Bitmask, BitmaskEnum="/Script/OrionSteamWebAPI.ESubsystemWeb"))
	int32 DisabledSubsystems;

	/**
	 * Enable / Disable debugging for the plugin
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings")
	bool bDebugging;

	/**
	 * If enabled, HTTP requests will not be sent, useful if wanting to debug request strings (enable debugging to get string output)
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings")
	bool bDevMode;

	/*
	 * Steamworks Web API publisher authentication key.
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings")
	FString Key;

	/*
	 * Your AppID
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings")
	int32 AppID;

	/*
	 * Development steam ID to use for testing purposes
	 */
	UPROPERTY(config, EditAnywhere, Category="Settings")
	FString DevSteamID;

	/**
	 * If enabled, we will use the Sandbox interface ISteamMicroTxnSandbox
	 * This interface is identical to the regular ISteamMicroTxn interface, but no actual transactions will occur.
	 */
	UPROPERTY(config, EditAnywhere, Category="MicroTxn")
	bool bSandboxMode;

private:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FName GetCategoryName() const override;
	void SaveToIni();
#endif
};

FORCEINLINE bool OrionSteamWebAPIDebugging()
{
	return GetDefault<UOrionSteamWebAPISettings>()->bDebugging;
}

FORCEINLINE bool OrionSteamWebAPIDevMode()
{
	return GetDefault<UOrionSteamWebAPISettings>()->bDevMode;
}

FORCEINLINE bool OrionSteamWebAPIMicroTxnSandboxMode()
{
	return GetDefault<UOrionSteamWebAPISettings>()->bSandboxMode;
}
