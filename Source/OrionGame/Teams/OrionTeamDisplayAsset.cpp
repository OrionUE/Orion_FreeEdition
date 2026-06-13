/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionTeamDisplayAsset.h"

#include "OrionTeamSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionTeamDisplayAsset)

#if WITH_EDITOR
void UOrionTeamDisplayAsset::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	for (UOrionTeamSubsystem* TeamSubsystem : TObjectRange<UOrionTeamSubsystem>())
	{
		TeamSubsystem->NotifyTeamDisplayAssetModified(this);
	}
}
#endif
