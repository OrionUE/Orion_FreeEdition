/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UserSettings/EnhancedInputUserSettings.h"
#include "InputSystemPlayerMappableKeyProfile.generated.h"

class UCommonInputBaseControllerData;

enum class ECommonInputType : uint8;

UCLASS(Config=Input)
class COMMONINPUTSYSTEM_API UInputSystemPlayerMappableKeyProfile : public UEnhancedPlayerMappableKeyProfile
{
	GENERATED_BODY()

protected:
	//~ Begin UEnhancedPlayerMappableKeyProfile interface
	virtual void EquipProfile() override;
	virtual void UnEquipProfile() override;
	//~ End UEnhancedPlayerMappableKeyProfile interface

protected:
	void InitializeControllerData() const;

public:
	bool TryGetInputBrush(FSlateBrush& OutBrush, FKey Key, ECommonInputType InputType, const FName GamepadName) const;

protected:
	UPROPERTY(config, EditAnywhere, Meta=(TitleProperty="InputType"))
	TArray<TSoftClassPtr<UCommonInputBaseControllerData>> KeySettingControllerData;

	UPROPERTY(Transient)
	mutable TArray<TSubclassOf<UCommonInputBaseControllerData>> KeySettingControllerDataClasses;
};
