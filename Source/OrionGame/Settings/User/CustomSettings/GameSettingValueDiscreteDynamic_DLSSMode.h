/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscreteDynamic.h"

#include "GameSettingValueDiscreteDynamic_DLSSMode.generated.h"

enum class EGameDLSSMode : uint8;

UCLASS()
class UGameSettingValueDiscreteDynamic_DLSSMode : public UGameSettingValueDiscreteDynamic_Enum
{
	GENERATED_BODY()

public:
	virtual ~UGameSettingValueDiscreteDynamic_DLSSMode() = default;

	/** UGameSettingValueDiscrete */
	virtual void SetDiscreteOptionByIndex(int32 Index) override;

protected:
	virtual void OnInitialized() override;
	virtual void OnApply() override;

protected:
	void SetDLSSModeEnum();

	FText GameDLSSModeEnumToText(EGameDLSSMode DLSSMode) const;

private:
	static const TMap<EGameDLSSMode, FText>& GetDLSSModeToTextMap();
};
