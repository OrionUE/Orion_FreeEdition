// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "LoadingProcessInterface.generated.h"

/** Interface for things that might cause loading to happen which requires a loading screen to be displayed */
UINTERFACE(BlueprintType)
class COMMONLOADINGSCREEN_API ULoadingProcessInterface : public UInterface
{
	GENERATED_BODY()
};

class COMMONLOADINGSCREEN_API ILoadingProcessInterface
{
	GENERATED_BODY()

public:
	// Checks to see if this object implements the interface, and if so asks whether we should
	// be currently showing a loading screen
	static bool ShouldShowLoadingScreen(const UObject* TestObject, FString& OutReason);

	virtual bool ShouldShowLoadingScreen(FString& OutReason) const
	{
		return false;
	}
};

/** 加载界面进度接口 */
UINTERFACE(BlueprintType)
class COMMONLOADINGSCREEN_API ULoadingPercentInterface : public UInterface
{
	GENERATED_BODY()
};

class COMMONLOADINGSCREEN_API ILoadingPercentInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void OnLoadingPercentChanged(float InPercent);
};

/** 关卡流式加载接口 */
UINTERFACE()
class COMMONLOADINGSCREEN_API ULevelLoadingProcessInterface : public UInterface
{
	GENERATED_BODY()
};

class COMMONLOADINGSCREEN_API ILevelLoadingProcessInterface
{
	GENERATED_BODY()

public:
	virtual float GetLoadingProgress() const = 0;

	virtual bool IsLevelShown() const = 0;

	virtual bool IsLoadingLevelPackageFinished() const = 0;
};
