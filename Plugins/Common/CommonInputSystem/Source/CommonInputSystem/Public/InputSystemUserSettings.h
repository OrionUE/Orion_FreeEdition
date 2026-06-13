// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#pragma once

#include "UserSettings/EnhancedInputUserSettings.h"
#include "InputSystemUserSettings.generated.h"

USTRUCT(BlueprintType)
struct COMMONINPUTSYSTEM_API FPlayerKeyMappingExtension final
{
	GENERATED_BODY()

public:
	FPlayerKeyMappingExtension();
	FPlayerKeyMappingExtension(const FName& InGamepadKeyName, bool InEnabledInKeySetting, UObject* InMetadata);

public:
	FName GetGamepadKeyName() const;

	bool IsEnabledInKeySetting() const;

	const UObject* GetMetadata() const;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enhanced Input|User Settings")
	FName GamepadKeyName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enhanced Input|User Settings")
	bool bEnabledInKeySetting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enhanced Input|User Settings")
	TObjectPtr<UObject> Metadata;
};

/**
 * Custom settings class for any input related settings for this project
 *
 * 需要在项目DefaultInput.ini文件中添加以下配置
 * [/Script/EnhancedInput.EnhancedInputDeveloperSettings]
 * bEnableUserSettings=True
 * UserSettingsClass=/Script/CommonInputSystem.InputSystemUserSettings
 *
 * Todo: 该设置默认保存路径为SaveGames文件夹下，修改源码更改保存路径为SaveGames/[用户ID]文件夹，使云端能够同步
 */
UCLASS()
class COMMONINPUTSYSTEM_API UInputSystemUserSettings : public UEnhancedInputUserSettings
{
	GENERATED_BODY()

public:
	virtual void ApplySettings() override;

protected:
	virtual bool RegisterKeyMappingsToProfile(UEnhancedPlayerMappableKeyProfile& Profile, const UInputMappingContext* IMC) override;

public:
	const TMap<FName, FPlayerKeyMappingExtension>& GetKeyMappingExtensions() const;

protected:
	UPROPERTY(Transient)
	TMap<FName, FPlayerKeyMappingExtension> KeyMappingExtensions;
};
