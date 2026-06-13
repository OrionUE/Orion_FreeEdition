/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonInputModifiers.h"

#include "OrionInputModifiers.generated.h"

class UOrionAimSensitivityData;

/** 
 *  Scales input based on a double property in the SharedUserSettings
 */
UCLASS(NotBlueprintable)
class ORIONGAME_API UOrionSettingBasedScalar : public UInputModifier
{
	GENERATED_BODY()

public:
	/** Name of the property that will be used to clamp the X Axis of this value */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Settings")
	FName XAxisScalarSettingName = NAME_None;

	/** Name of the property that will be used to clamp the Y Axis of this value */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Settings")
	FName YAxisScalarSettingName = NAME_None;

	/** Name of the property that will be used to clamp the Z Axis of this value */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Settings")
	FName ZAxisScalarSettingName = NAME_None;
	
	/** Set the maximum value of this setting on each axis */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Settings")
	FVector MaxValueClamp = FVector(10.0, 10.0, 10.0);
	
	/** Set the minimum value of this setting on each axis */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Settings")
	FVector MinValueClamp = FVector::ZeroVector;

protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;

	/** FProperty Cache that will be populated with any found FProperty's on the settings class so that we don't need to look them up each frame */
	TArray<const FProperty*> PropertyCache;
};

UCLASS(NotBlueprintable)
class ORIONGAME_API UOrionInputModifierDeadZone : public UCommonInputModifierDeadZone
{
	GENERATED_BODY()

protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;
};

/**
 * The type of targeting sensitivity that should be considered
 */
UENUM()
enum class EOrionTargetingType : uint8
{
	/** Sensitivity to be applied why normally looking around */
	Normal = 0,

	/** The sensitivity that should be applied while Aiming Down Sights */
	ADS = 1,
};

/**
 * Applies a scalar modifier based on the current gamepad settings in the SharedUserSettings
 */
UCLASS(NotBlueprintable)
class ORIONGAME_API UOrionInputModifierGamepadSensitivity : public UInputModifier
{
	GENERATED_BODY()
public:
	
	/** The type of targeting to use for this Sensitivity */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category=Settings, Config)
	EOrionTargetingType TargetingType = EOrionTargetingType::Normal;

	/** Asset that gives us access to the float scalar value being used for sensitivity */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AssetBundles="Client, Server"))
	TObjectPtr<const UOrionAimSensitivityData> SensitivityLevelTable;

protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;
};

/**
 * Applies an inversion of axis values based on a setting in the SharedUserSettings
 */
UCLASS(NotBlueprintable)
class ORIONGAME_API UOrionInputModifierAimInversion : public UInputModifier
{
	GENERATED_BODY()
	
protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;	
};
