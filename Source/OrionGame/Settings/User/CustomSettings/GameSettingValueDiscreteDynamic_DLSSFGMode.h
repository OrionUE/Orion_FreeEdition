/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscreteDynamic.h"

#include "GameSettingValueDiscreteDynamic_DLSSFGMode.generated.h"

enum class EStreamlineDLSSGMode : uint8;

UCLASS()
class UGameSettingValueDiscreteDynamic_DLSSFGMode : public UGameSettingValueDiscreteDynamic_Enum
{
	GENERATED_BODY()

public:
	virtual ~UGameSettingValueDiscreteDynamic_DLSSFGMode() = default;

	/** UGameSettingValueDiscrete */
	virtual void SetDiscreteOptionByIndex(int32 Index) override;

protected:
	virtual void OnInitialized() override;
	virtual void OnApply() override;

protected:
	void SetDLSSFGModeEnum();

	FText GameDLSSFGModeEnumToText(EStreamlineDLSSGMode DLSSFGMode) const;

private:
	static const TMap<EStreamlineDLSSGMode, FText>& GetDLSSFGModeToTextMap();
};
