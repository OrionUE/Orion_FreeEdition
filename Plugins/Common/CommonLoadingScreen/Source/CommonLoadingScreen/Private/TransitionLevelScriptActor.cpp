// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#include "TransitionLevelScriptActor.h"

#include "Engine/AssetManager.h"
#include "Engine/LevelStreamingDynamic.h"

void ATransitionLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();
}

float ATransitionLevelScriptActor::GetLoadingProgress() const
{
	if (!LevelStreamableHandle.IsValid())
	{
		return -1.f;
	}

	return LevelStreamableHandle->GetProgress();
}

bool ATransitionLevelScriptActor::IsLevelShown() const
{
	return bLevelShown;
}

bool ATransitionLevelScriptActor::IsLoadingLevelPackageFinished() const
{
	return bLoadingLevelPackageFinished;
}

void ATransitionLevelScriptActor::BeginLoadLevel()
{
	if (!bLoadingLevelPackageFinished)
	{
		PreloadLevelPackage();
	}
}

void ATransitionLevelScriptActor::PreloadLevelPackage()
{
	if (LoadLevel.IsNull())
	{
		return;
	}

	// TODO: 使用FStreamableManager和LoadPackageAsync()函数均无法获得正确的加载进度
	FStreamableManager& LevelStreamable = UAssetManager::GetStreamableManager();
	LevelStreamableHandle = LevelStreamable.RequestAsyncLoad(
		LoadLevel.ToSoftObjectPath(),
		FStreamableDelegate::CreateUObject(this, &ThisClass::OnLevelPackageLoaded),
		FStreamableManager::AsyncLoadHighPriority
	);
}

void ATransitionLevelScriptActor::OnLevelPackageLoaded()
{
	bLoadingLevelPackageFinished = true;

	bool bLoadLevelSuccess = false;
	ULevelStreamingDynamic* LoadLevelStreaming = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(GetWorld(), LoadLevel, FTransform(), bLoadLevelSuccess);
	LoadLevelStreaming->OnLevelShown.AddDynamic(this, &ThisClass::OnLevelShown);
}

void ATransitionLevelScriptActor::OnLevelShown_Implementation()
{
}
