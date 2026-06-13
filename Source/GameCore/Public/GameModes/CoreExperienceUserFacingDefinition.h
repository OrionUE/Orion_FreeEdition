/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"

#include "CoreExperienceUserFacingDefinition.generated.h"

class USaveGame;
class UCommonSession_HostSessionRequest;

/**
 * Description of settings used to start a new session
 */
UCLASS(Abstract)
class GAMECORE_API UCoreExperienceUserFacingDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** The specific map to load */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Experience", meta=(AllowedTypes="Map"))
	FPrimaryAssetId MapID;

	/** The gameplay experience to load */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Experience", meta=(AllowedTypes="CoreExperienceDefinition"))
	FPrimaryAssetId ExperienceID;

	/** Extra arguments passed as URL options to the game */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Experience")
	TMap<FString, FString> ExtraArgs;
	
	/** If true, this is a default experience that should be used for quick play and given priority in the UI */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Experience")
	bool bIsDefaultExperience = false;

	/** The loading screen widget to show when loading into (or back out of) a given experience */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LoadingScreen")
	TSoftClassPtr<UUserWidget> LoadingScreenWidget;

public:
	/** Create a request object that is used to actually start a session with these settings */
	UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
	virtual UCommonSession_HostSessionRequest* CreateHostingRequest(const UObject* WorldContextObject) const;
};
