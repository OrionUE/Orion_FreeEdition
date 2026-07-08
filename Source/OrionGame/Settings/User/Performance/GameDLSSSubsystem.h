/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystems/GameInstanceSubsystem.h"

#include "GameDLSSSubsystem.generated.h"

enum class UDLSSMode : uint8;
enum class UNISMode : uint8;
enum class EGameDLSSMode : uint8;
enum class EGameDLSSUpscaleMode : uint8;
enum class EStreamlineDLSSGMode : uint8;

USTRUCT(BlueprintType)
struct FGameDLSSSupportMessage
{
	GENERATED_BODY()

public:
	FGameDLSSSupportMessage();

	UPROPERTY(BlueprintReadOnly)
	FText SupportMessageText;

	UPROPERTY(BlueprintReadOnly)
	bool bShowMessage;

	UPROPERTY(BlueprintReadOnly)
	bool bSupport;
};

UCLASS()
class UGameDLSSSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	void InitDLSS();

	UFUNCTION(BlueprintCallable)
	void EnableDLSSUpscale(bool bEnabled);

	UFUNCTION(BlueprintCallable)
	void EnableDLSSRayReconstruction(bool bEnabled);

	UFUNCTION(BlueprintCallable)
	void RefreshDLSSUpscaleState();

	UFUNCTION(BlueprintCallable)
	void SetDLSSMode(EGameDLSSMode InDLSSMode);

	UFUNCTION(BlueprintCallable)
	bool IsDLSSUpscaleEnable();

	UFUNCTION(BlueprintCallable)
	void EnableDLSSFG(bool bEnabled);

	UFUNCTION(BlueprintCallable)
	void SetDLSSFGMode(EStreamlineDLSSGMode InDLSSFGMode);

	FORCEINLINE const TArray<UDLSSMode>& GetSupportedDLSSSRModes() const { return SupportedDLSSSRModes; }
	FORCEINLINE const TArray<UNISMode>& GetSupportedNISModes() const { return SupportedNISModes; }
	FORCEINLINE const TArray<EStreamlineDLSSGMode>& GetSupportedDLSSFGModes() const { return SupportedDLSSFGModes; }

	static UDLSSMode GameDLSSUpscaleModeToDLSSSRMode(EGameDLSSMode InDLSSSRMode);
	static EGameDLSSMode DLSSSRModeToGameDLSSUpscaleMode(UDLSSMode InDLSSSRMode);
	static UNISMode GameDLSSUpscaleModeToDLSSNISMode(EGameDLSSMode InDLSSNISMode);
	static EGameDLSSMode DLSSNISModeToGameDLSSUpscaleMode(UNISMode InDLSSNISMode);

protected:
	void SetupDLSSUpscaleMessage();
	void SetupDLSSRayReconstructionMessage();
	void SetupDefaultDLSSSRMode();
	void SetupDLSSFGMessage();
	void SetupDefaultDLSSFGMode();
	void SetupDefaultReflexMode();

	void SetUpscaleBuiltIn();
	void SetUpscaleDLSS(EGameDLSSMode InDLSSMode);
	void SetUpscaleNIS(EGameDLSSMode InDLSSMode);

	void SetDLSSSRMode(UDLSSMode DLSSMode, FVector2D ScreenResolution = FVector2D::ZeroVector);

	void SetScreenPercentage(float Percentage);
	void SetScreenPercentageToUserSetting();

	void SetAntiAliasingMethodUserSetting();
	void SetAntiAliasingMethodTSR();
	void SetAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod);

public:
	FORCEINLINE EGameDLSSUpscaleMode GetSupportedDLSSUpscaleMode() const { return SupportedDLSSUpscaleMode; }

protected:
	UPROPERTY(BlueprintReadOnly)
	EGameDLSSUpscaleMode SupportedDLSSUpscaleMode;

	TArray<UDLSSMode> SupportedDLSSSRModes;
	TArray<UNISMode> SupportedNISModes;
	TArray<EStreamlineDLSSGMode> SupportedDLSSFGModes;

public:
	UPROPERTY(BlueprintReadOnly)
	FGameDLSSSupportMessage DLSSUpscaleMessage;

	UPROPERTY(BlueprintReadOnly)
	FGameDLSSSupportMessage DLSSRRMessage;

	UPROPERTY(BlueprintReadOnly)
	FGameDLSSSupportMessage DLSSFGMessage;

private:
	bool bInit = false;
};
