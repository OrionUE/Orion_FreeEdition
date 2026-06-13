// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#include "GameSettingValueEditable.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingValueEditable)

#define LOCTEXT_NAMESPACE "GameSetting"

//////////////////////////////////////////////////////////////////////////
// UGameSettingValueEditable
//////////////////////////////////////////////////////////////////////////

void UGameSettingValueEditable::Startup()
{
	// Should I also do something with Setter?
	check(Getter);
	Getter->Startup(LocalPlayer, FSimpleDelegate::CreateUObject(this, &ThisClass::OnDataSourcesReady));
}

void UGameSettingValueEditable::StoreInitial()
{
	InitialValue = GetValueAsString();
}

void UGameSettingValueEditable::ResetToDefault()
{
	SetValueFromString(DefaultValue, EGameSettingChangeReason::ResetToDefault);
}

void UGameSettingValueEditable::RestoreToInitial()
{
	SetValueFromString(InitialValue, EGameSettingChangeReason::RestoreToInitial);
}

void UGameSettingValueEditable::SetDynamicGetter(const TSharedRef<FGameSettingDataSource>& InGetter)
{
	Getter = InGetter;
}

void UGameSettingValueEditable::SetDynamicSetter(const TSharedRef<FGameSettingDataSource>& InSetter)
{
	Setter = InSetter;
}

void UGameSettingValueEditable::SetDefaultValueFromString(FString InStringValue)
{
	DefaultValue = InStringValue;
}

FString UGameSettingValueEditable::GetValueAsString() const
{
	return Getter->GetValueAsString(LocalPlayer);
}

void UGameSettingValueEditable::SetValueFromString(FString InStringValue)
{
	if (!GetValueAsString().Equals(InStringValue))
		SetValueFromString(InStringValue, EGameSettingChangeReason::Change);
}

void UGameSettingValueEditable::SetValueFromString(FString InStringValue, EGameSettingChangeReason Reason)
{
	check(Setter);
	Setter->SetValue(LocalPlayer, InStringValue);

	NotifySettingChanged(Reason);
}

void UGameSettingValueEditable::OnInitialized()
{
#if !UE_BUILD_SHIPPING
	ensureAlways(Getter);
	ensureAlwaysMsgf(Getter->Resolve(LocalPlayer), TEXT("%s: %s did not resolve, are all functions and properties valid, and are they UFunctions/UProperties? Does the getter function have no parameters?"), *GetDevName().ToString(), *Getter->ToString());
	ensureAlways(Setter);
	ensureAlwaysMsgf(Setter->Resolve(LocalPlayer), TEXT("%s: %s did not resolve, are all functions and properties valid, and are they UFunctions/UProperties? Does the setting function have exactly one parameter?"), *GetDevName().ToString(), *Setter->ToString());
#endif

	Super::OnInitialized();
}

void UGameSettingValueEditable::OnDataSourcesReady()
{
	StartupComplete();
}

#undef LOCTEXT_NAMESPACE
