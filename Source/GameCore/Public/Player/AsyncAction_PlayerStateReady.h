/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Kismet/BlueprintAsyncActionBase.h"

#include "AsyncAction_PlayerStateReady.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateReadyAsyncDelegate, APlayerState*, PlayerState);

UCLASS()
class UAsyncAction_PlayerStateReady : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true"))
	static UAsyncAction_PlayerStateReady* WaitForPlayerStateReady(UObject* WorldContextObject, APlayerController* PlayerController);

	virtual void Activate() override;

public:
	UPROPERTY(BlueprintAssignable)
	FPlayerStateReadyAsyncDelegate OnReady;

private:
	TWeakObjectPtr<APlayerController> TargetPlayerController;
	TWeakObjectPtr<UWorld> WorldPtr;

	FTimerHandle TimerHandle;
};
