/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonInputActionDomain.h"

#include "GameUIInputActionDomainTable.generated.h"

class UInputAction;

UCLASS(BlueprintType)
class UGameUIInputActionDomainTable : public UCommonInputActionDomainTable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="Properties", meta=(RowType="/Script/CommonUI.CommonInputActionDataBase"))
	FDataTableRowHandle SecondBackAction;

	UPROPERTY(EditDefaultsOnly, Category="Properties", meta=(EditCondition="CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled", EditConditionHides))
	TObjectPtr<UInputAction> EnhancedInputSecondBackAction;
};
