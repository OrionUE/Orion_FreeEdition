/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/ControllerComponent.h"

#include "IndicatorManagerComponent.generated.h"

class UIndicatorDescriptor;

/**
 * UIndicatorManagerComponent
 *
 * 交互选择器管理组件
 * 在GameFeature中AddComponent，添加此组件到Controller
 */
UCLASS(BlueprintType, Blueprintable)
class GAMEUI_API UIndicatorManagerComponent : public UControllerComponent
{
	GENERATED_BODY()

public:
	UIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer);

	static UIndicatorManagerComponent* GetComponent(const AController* Controller);

	UFUNCTION(BlueprintCallable, Category="Indicator")
	void AddIndicator(UIndicatorDescriptor* IndicatorDescriptor);

	UFUNCTION(BlueprintCallable, Category="Indicator")
	void RemoveIndicator(UIndicatorDescriptor* IndicatorDescriptor);

	void UpdateNearestInteractableTarget(UIndicatorDescriptor* IndicatorDescriptor);

	const TArray<UIndicatorDescriptor*>& GetIndicators() const { return Indicators; }

public:
	DECLARE_MULTICAST_DELEGATE_OneParam(FIndicatorEvent, UIndicatorDescriptor* Descriptor)
	FIndicatorEvent OnIndicatorAdded;
	FIndicatorEvent OnIndicatorRemoved;

private:
	UPROPERTY()
	TArray<TObjectPtr<UIndicatorDescriptor>> Indicators;

	// 当前距离最近的可交互物品
	UPROPERTY()
	TObjectPtr<UIndicatorDescriptor> CurrentNearestTarget;
};
