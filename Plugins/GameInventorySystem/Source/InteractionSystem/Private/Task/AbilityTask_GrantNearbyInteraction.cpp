/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Task/AbilityTask_GrantNearbyInteraction.h"

#include "AbilitySystemComponent.h"
#include "InteractableTargetInterface.h"
#include "InteractionOption.h"
#include "InteractionQuery.h"
#include "InteractionStatics.h"
#include "Engine/OverlapResult.h"

#if !UE_BUILD_SHIPPING
static int32 ShowGrantNearbyInteractionDebug = 0;
static FAutoConsoleVariableRef CVarShowGrantNearbyInteractionDebug(
	TEXT("GIS.ShowGrantNearbyInteractionDebug"),
	ShowGrantNearbyInteractionDebug,
	TEXT("Show Grant Nearby Interaction Debug (0 = Hidden, 1 = Show)"),
	ECVF_Default);
#endif

UAbilityTask_GrantNearbyInteraction* UAbilityTask_GrantNearbyInteraction::GrantAbilitiesForNearbyInteraction(
	UGameplayAbility* OwningAbility,
	float InteractionScanRange,
	float InteractionScanRate,
	FCollisionProfileName InTraceProfile,
	const FOnInteractableActorsChanged& InOnInteractableActorsChanged,
	bool bShowDebug)
{
	UAbilityTask_GrantNearbyInteraction* Obj = NewAbilityTask<UAbilityTask_GrantNearbyInteraction>(OwningAbility);
	Obj->InteractionScanRange = InteractionScanRange;
	Obj->InteractionScanRate = InteractionScanRate;
	Obj->TraceProfile = InTraceProfile;
	Obj->bShowDebug = bShowDebug;
	Obj->OnInteractableActorsChanged = InOnInteractableActorsChanged;
	return Obj;
}

void UAbilityTask_GrantNearbyInteraction::Activate()
{
	SetWaitingOnAvatar();

	const UWorld* World = GetWorld();
	World->GetTimerManager().SetTimer(QueryTimerHandle, this, &ThisClass::QueryInteractable, InteractionScanRate, true);
}

void UAbilityTask_GrantNearbyInteraction::OnDestroy(bool AbilityEnded)
{
	if (const UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(QueryTimerHandle);
	}

	Super::OnDestroy(AbilityEnded);
}

void UAbilityTask_GrantNearbyInteraction::QueryInteractable()
{
	UWorld* World = GetWorld();
	AActor* ActorOwner = GetAvatarActor();

	if (World && ActorOwner)
	{
		FCollisionQueryParams Params(SCENE_QUERY_STAT(UAbilityTask_GrantNearbyInteraction), false);

		TArray<FOverlapResult> OverlapResults;
		World->OverlapMultiByProfile(OUT OverlapResults, ActorOwner->GetActorLocation(), FQuat::Identity, TraceProfile.Name, FCollisionShape::MakeSphere(InteractionScanRange), Params);

		if (OverlapResults.Num() > 0)
		{
			TArray<TScriptInterface<IInteractableTarget>> InteractableTargets;
			UInteractionStatics::AppendInteractableTargetsFromOverlapResults(OverlapResults, OUT InteractableTargets);
			TArray<AActor*> InteractableActor;
			UInteractionStatics::AppendInteractableTargetsFromOverlapResults(OverlapResults, OUT InteractableActor);
			OnInteractableActorsChanged.Broadcast(InteractableActor);
			FInteractionQuery InteractionQuery;
			InteractionQuery.RequestingAvatar = ActorOwner;
			InteractionQuery.RequestingController = Cast<AController>(ActorOwner->GetOwner());

			TArray<FInteractionOption> Options;
			for (const auto& InteractiveTarget : InteractableTargets)
			{
				FInteractionOptionBuilder InteractionBuilder(InteractiveTarget, Options);
				InteractiveTarget->GatherInteractionOptions(InteractionQuery, InteractionBuilder);
			}

			// Check if any of the options need to grant the ability to the user before they can be used.
			for (const auto& Option : Options)
			{
				if (Option.InteractionAbilityToGrant)
				{
					// Grant the ability to the GAS, otherwise it won't be able to do whatever the interaction is.
					FObjectKey ObjectKey(Option.InteractionAbilityToGrant);
					if (!InteractionAbilityCache.Find(ObjectKey))
					{
						FGameplayAbilitySpec Spec(Option.InteractionAbilityToGrant, 1, INDEX_NONE, this);
						FGameplayAbilitySpecHandle Handle = AbilitySystemComponent->GiveAbility(Spec);
						InteractionAbilityCache.Add(ObjectKey, Handle);
					}
				}
			}
		}

#if ENABLE_DRAW_DEBUG && !UE_BUILD_SHIPPING
		if (bShowDebug && ShowGrantNearbyInteractionDebug == 1)
		{
			FColor DebugColor = OverlapResults.Num() > 0 ? FColor::Green : FColor::Blue;
			DrawDebugSphere(World, ActorOwner->GetActorLocation(), InteractionScanRange, 16, DebugColor, false, InteractionScanRate);
		}
#endif
	}
}
