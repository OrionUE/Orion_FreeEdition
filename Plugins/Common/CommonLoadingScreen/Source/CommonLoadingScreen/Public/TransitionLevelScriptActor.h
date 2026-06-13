// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#pragma once

#include "LoadingProcessInterface.h"
#include "Engine/LevelScriptActor.h"

#include "TransitionLevelScriptActor.generated.h"

struct FStreamableHandle;

UCLASS()
class ATransitionLevelScriptActor : public ALevelScriptActor, public ILevelLoadingProcessInterface
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual float GetLoadingProgress() const override;
	virtual bool IsLevelShown() const override;
	virtual bool IsLoadingLevelPackageFinished() const override;

public:
	UFUNCTION(BlueprintCallable)
	void BeginLoadLevel();

protected:
	void PreloadLevelPackage();

	void OnLevelPackageLoaded();

	UFUNCTION(BlueprintNativeEvent)
	void OnLevelShown();

protected:
	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> LoadLevel;

	UPROPERTY(BlueprintReadWrite)
	bool bLevelShown = false;

	bool bLoadingLevelPackageFinished = false;

	TSharedPtr<FStreamableHandle> LevelStreamableHandle;
};
