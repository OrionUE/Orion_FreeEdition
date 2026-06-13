/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameUIManagerSubsystemBase.h"

#include "GameUIManagerSubsystem.generated.h"

class UDevelopmentHUDLayout;

/**
 * UGameUIManagerSubsystem
 * 
 * UI管理子系统
 *
 * @note
 * 需要在DefaultGame配置中，[/Script/GameUI.GameUIManagerSubsystem]指定DefaultUIPolicy类
 */
UCLASS(config=Game)
class UGameUIManagerSubsystem : public UGameUIManagerSubsystemBase
{
	GENERATED_BODY()

public:
	UGameUIManagerSubsystem();

public:
#if !UE_BUILD_SHIPPING
	void CreateHUDLayout(APlayerController* OwingPlayer);
	void AddDevelopmentHUDToViewport(APlayerController* OwingPlayer) const;
	void RemoveDevelopmentHUDToViewport() const;
#endif

protected:
	UPROPERTY(Config)
	TSoftClassPtr<UDevelopmentHUDLayout> DevelopmentHUDSoftClass;

	UPROPERTY(Config)
	int32 DevelopmentHUDZOrder = 10001;

	UPROPERTY(Config)
	bool ShouldShowDevelopmentHUDInPackage = true;

	UPROPERTY(Config)
	bool ShouldShowScreenMessagesInPackage = true;

	UPROPERTY()
	TObjectPtr<UDevelopmentHUDLayout> DevelopmentHUD;
};
