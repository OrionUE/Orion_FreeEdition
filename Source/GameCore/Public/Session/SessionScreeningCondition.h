/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SessionScreeningCondition.generated.h"

class UCommonSession_SearchResult;

UCLASS(Abstract, Blueprintable)
class USessionScreeningCondition : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(DisplayName="FilterSearchResults"))
	void K2_FilterSearchResults(UPARAM(ref) TArray<UCommonSession_SearchResult*>& InOutSearchResults);

	virtual void FilterSearchResults(TArray<UCommonSession_SearchResult*>& InOutSearchResults);

	UFUNCTION(BlueprintNativeEvent)
	bool CheckCondition(UCommonSession_SearchResult* InSearchResult) const;
};

UCLASS()
class UScreeningConditionComposite : public USessionScreeningCondition
{
	GENERATED_BODY()

public:
	virtual bool CheckCondition_Implementation(UCommonSession_SearchResult* InSearchResult) const override;

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<USessionScreeningCondition>> Conditions;

	// false -> AND, true -> OR
	UPROPERTY(EditDefaultsOnly)
	bool bUserOr = false;
};
