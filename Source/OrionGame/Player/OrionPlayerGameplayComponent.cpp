/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionPlayerGameplayComponent.h"

#include "OrionPlayerInfoComponent.h"
#include "Player/CorePlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPlayerGameplayComponent)

UOrionPlayerGameplayComponent::UOrionPlayerGameplayComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bPlayerInitializationCompleted = false;
}

void UOrionPlayerGameplayComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = GetController<ACorePlayerController>();

	SetPlayerInfoComponent();
}

void UOrionPlayerGameplayComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	OnPlayerLogout();
}

bool UOrionPlayerGameplayComponent::ShouldShowLoadingScreen(FString& OutReason) const
{
	OutReason = TEXT("Initializing player");
	return !bPlayerInitializationCompleted;
}

void UOrionPlayerGameplayComponent::OnPlayerInitialized()
{
	K2_OnPlayerInitialized();
}

void UOrionPlayerGameplayComponent::OnPlayerLogout()
{
	K2_OnPlayerLogout();
}

void UOrionPlayerGameplayComponent::SetPlayerInitializationCompleted()
{
	bPlayerInitializationCompleted = true;
}

void UOrionPlayerGameplayComponent::SetPlayerInfoComponent()
{
	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UOrionPlayerGameplayComponent_SetPlayerInfoComponent);

		PlayerInfoComponent = PlayerController->FindComponentByClass<UOrionPlayerInfoComponent>();

		if (PlayerInfoComponent)
		{
			PlayerInfoComponent->CallOrRegister_OnPlayerInfoInitialized(FOnPlayerInfoComponentInitialized::FDelegate::CreateUObject(this, &ThisClass::OnPlayerInitialized));
			return false;
		}

		return true;
	}));
}
