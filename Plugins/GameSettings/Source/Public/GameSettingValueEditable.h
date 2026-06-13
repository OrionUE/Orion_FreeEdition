// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#pragma once

#include "GameSettingValue.h"
#include "DataSource/GameSettingDataSource.h"

#include "GameSettingValueEditable.generated.h"

//////////////////////////////////////////////////////////////////////////
// UGameSettingValueEditable
//////////////////////////////////////////////////////////////////////////

UCLASS()
class GAMESETTINGS_API UGameSettingValueEditable : public UGameSettingValue
{
	GENERATED_BODY()

public:
	UGameSettingValueEditable() { }

	/** UGameSettingValue */
	virtual void Startup() override;
	virtual void StoreInitial() override;
	virtual void ResetToDefault() override;
	virtual void RestoreToInitial() override;

	/** UGameSettingValueDiscreteDynamic */
	void SetDynamicGetter(const TSharedRef<FGameSettingDataSource>& InGetter);
	void SetDynamicSetter(const TSharedRef<FGameSettingDataSource>& InSetter);
	
	void SetDefaultValueFromString(FString InStringValue);
	FString GetValueAsString() const;
	void SetValueFromString(FString InStringValue);
	
protected:
	void SetValueFromString(FString InStringValue, EGameSettingChangeReason Reason);

	virtual void OnInitialized() override;
	
	void OnDataSourcesReady();

protected:
	TSharedPtr<FGameSettingDataSource> Getter;
	TSharedPtr<FGameSettingDataSource> Setter;
	
	FString DefaultValue;
	FString InitialValue;
};

//////////////////////////////////////////////////////////////////////////
// UGameSettingValueEditable_String
//////////////////////////////////////////////////////////////////////////

UCLASS()
class GAMESETTINGS_API UGameSettingValueEditable_String : public UGameSettingValueEditable
{
	GENERATED_BODY()

public:
	UGameSettingValueEditable_String() { }

	void SetDefaultValue(const FString& InValue) { SetDefaultValueFromString(InValue); }
	FString GetValue() const { return GetValueAsString(); }
	void SetValue(const FString& InValue) { SetValueFromString(InValue); }
};
