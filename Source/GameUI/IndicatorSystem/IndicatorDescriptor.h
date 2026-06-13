/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "IndicatorDescriptor.generated.h"

class IInteractableTarget;
class UIndicatorManagerComponent;

UCLASS(BlueprintType)
class GAMEUI_API UIndicatorDescriptor : public UObject
{
	GENERATED_BODY()

public:
	UIndicatorDescriptor() { }

public:
	UFUNCTION(BlueprintCallable)
	UObject* GetDataObject() const { return DataObject; }
	UFUNCTION(BlueprintCallable)
	void SetDataObject(UObject* InDataObject) { DataObject = InDataObject; }

	UFUNCTION(BlueprintCallable)
	TScriptInterface<IInteractableTarget> GetDataInteractableTarget() const { return DataInteractableTarget; }
	UFUNCTION(BlueprintCallable)
	void SetDataInteractableTarget(TScriptInterface<IInteractableTarget> InInteractableTarget) { DataInteractableTarget = InInteractableTarget; }

	UFUNCTION(BlueprintCallable)
	USceneComponent* GetSceneComponent() const { return Component; }
	UFUNCTION(BlueprintCallable)
	void SetSceneComponent(USceneComponent* InComponent) { Component = InComponent; }

	UFUNCTION(BlueprintCallable)
	TSoftClassPtr<UUserWidget> GetIndicatorClass() const { return IndicatorWidgetClass; }
	UFUNCTION(BlueprintCallable)
	void SetIndicatorClass(TSoftClassPtr<UUserWidget> InIndicatorWidgetClass) { IndicatorWidgetClass = InIndicatorWidgetClass; }

public:
	UIndicatorManagerComponent* GetIndicatorManagerComponent() const { return ManagerPtr.Get(); }
	void SetIndicatorManagerComponent(UIndicatorManagerComponent* InManager);

private:
	UPROPERTY()
	TObjectPtr<UObject> DataObject;

	UPROPERTY()
	TObjectPtr<USceneComponent> Component;

	UPROPERTY()
	TSoftClassPtr<UUserWidget> IndicatorWidgetClass;

	UPROPERTY()
	TWeakObjectPtr<UIndicatorManagerComponent> ManagerPtr;

	UPROPERTY()
	TScriptInterface<IInteractableTarget> DataInteractableTarget;
};
