// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "UObject/Object.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMetaHumanGenerator, Log, All);

#include "MetaHumanGenerator.generated.h"

class UMetaHumanCharacter;

class FMetaHumanGeneratorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UCLASS()
class METAHUMANGENERATOR_API UMetaHumanGeneratorSubsystemWrapper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MetaHumanGenerator")
	static void ResetNeckToBody(UMetaHumanCharacter* InCharacter);
};
