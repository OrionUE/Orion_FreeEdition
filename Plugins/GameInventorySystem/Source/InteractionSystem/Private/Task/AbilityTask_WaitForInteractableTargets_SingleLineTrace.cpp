/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Task/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h"

#include "InteractionStatics.h"

#if !UE_BUILD_SHIPPING
static int32 ShowInteractionSingleLineTraceDebug = 0;
static FAutoConsoleVariableRef CVarShowInteractionSingleLineTraceDebug(
	TEXT("GIS.ShowInteractionSingleLineTraceDebug"),
	ShowInteractionSingleLineTraceDebug,
	TEXT("Show Interaction Single Line Trace Debug (0 = Hidden, 1 = Show)"),
	ECVF_Default);
#endif

UAbilityTask_WaitForInteractableTargets_SingleLineTrace* UAbilityTask_WaitForInteractableTargets_SingleLineTrace::WaitForInteractableTargets_SingleLineTrace(
	UGameplayAbility* OwningAbility,
	const FInteractionQuery& InteractionQuery,
	FCollisionProfileName TraceProfile,
	const FGameplayAbilityTargetingLocationInfo& StartLocation,
	float InteractionSingleLineScanRange,
	float InteractionSingleLineScanRate,
	bool bShowDebug)
{
	UAbilityTask_WaitForInteractableTargets_SingleLineTrace* Obj = NewAbilityTask<UAbilityTask_WaitForInteractableTargets_SingleLineTrace>(OwningAbility);
	Obj->InteractionSingleLineScanRange = InteractionSingleLineScanRange;
	Obj->InteractionSingleLineScanRate = InteractionSingleLineScanRate;
	Obj->StartLocation = StartLocation;
	Obj->InteractionQuery = InteractionQuery;
	Obj->TraceProfile = TraceProfile;
	Obj->bShowDebug = bShowDebug;

	return Obj;
}

void UAbilityTask_WaitForInteractableTargets_SingleLineTrace::Activate()
{
	SetWaitingOnAvatar();

	const UWorld* World = GetWorld();
	World->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::PerformTrace, InteractionSingleLineScanRate, true);
}

void UAbilityTask_WaitForInteractableTargets_SingleLineTrace::OnDestroy(bool AbilityEnded)
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(TimerHandle);
	}

	Super::OnDestroy(AbilityEnded);
}

void UAbilityTask_WaitForInteractableTargets_SingleLineTrace::PerformTrace()
{
	AActor* AvatarActor = GetAvatarActor();
	if (!AvatarActor)
	{
		return;
	}

	const UWorld* World = GetWorld();

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(AvatarActor);

	const bool bTraceComplex = false;
	FCollisionQueryParams Params(SCENE_QUERY_STAT(UAbilityTask_WaitForInteractableTargets_SingleLineTrace), bTraceComplex);
	Params.AddIgnoredActors(ActorsToIgnore);

	FVector TraceStart = StartLocation.GetTargetingTransform().GetLocation();
	FVector TraceEnd;
	AimWithPlayerController(AvatarActor, Params, TraceStart, InteractionSingleLineScanRange, OUT TraceEnd);

	FHitResult OutHitResult;
	LineTrace(OutHitResult, World, TraceStart, TraceEnd, TraceProfile.Name, Params);

	TArray<TScriptInterface<IInteractableTarget>> InteractableTargets;
	UInteractionStatics::AppendInteractableTargetsFromHitResult(OutHitResult, InteractableTargets);

	UpdateInteractableOptions(InteractionQuery, InteractableTargets);

#if ENABLE_DRAW_DEBUG && !UE_BUILD_SHIPPING
	if (bShowDebug && ShowInteractionSingleLineTraceDebug == 1)
	{
		FColor DebugColor = OutHitResult.bBlockingHit ? FColor::Green : FColor::Blue;
		if (OutHitResult.bBlockingHit)
		{
			DrawDebugLine(World, TraceStart, OutHitResult.Location, DebugColor, false, InteractionSingleLineScanRate);
			DrawDebugSphere(World, OutHitResult.Location, 5, 16, DebugColor, false, InteractionSingleLineScanRate);
		}
		else
		{
			DrawDebugLine(World, TraceStart, TraceEnd, DebugColor, false, InteractionSingleLineScanRate);
		}
	}
#endif
}
