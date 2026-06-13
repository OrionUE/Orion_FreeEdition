/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionTeamInfoBase.h"

#include "OrionTeamPublicInfo.generated.h"

class UOrionTeamDisplayAsset;

UCLASS(Abstract)
class ORIONGAME_API AOrionTeamPublicInfo : public AOrionTeamInfoBase
{
	GENERATED_BODY()

	friend UOrionTeamCreationComponent;

public:
	AOrionTeamPublicInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOrionTeamDisplayAsset* GetTeamDisplayAsset() const { return TeamDisplayAsset; }

private:
	void SetTeamDisplayAsset(UOrionTeamDisplayAsset* NewDisplayAsset);

protected:
	UPROPERTY(ReplicatedUsing=OnRep_TeamDisplayAsset)
	TObjectPtr<UOrionTeamDisplayAsset> TeamDisplayAsset;

	UFUNCTION()
	void OnRep_TeamDisplayAsset();
};
