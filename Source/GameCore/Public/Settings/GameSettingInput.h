/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValue.h"
#include "InputSystemPlayerMappableKeyProfile.h"

#include "GameSettingInput.generated.h"

struct FPlayerKeyMappingExtension;

UENUM()
enum class EGameSettingKeyboardSlot : uint8 
{
	MouseAndKeyboardFirst = 0,
	MouseAndKeyboardSecond,
	GamepadFirst,
};

UCLASS()
class GAMECORE_API UGameSettingInput : public UGameSettingValue
{
	GENERATED_BODY()

public:
	UGameSettingInput();

	virtual void StoreInitial() override;
	virtual void ResetToDefault() override;
	virtual void RestoreToInitial() override;

protected:
	virtual void OnInitialized() override;

public:
	void InitializeInputData(
		const UEnhancedPlayerMappableKeyProfile* InKeyProfile,
		const FKeyMappingRow* InMouseAndKeyboardMappingData,
		const FKeyMappingRow* InGamepadMappingData,
		const FPlayerKeyMappingExtension* InMouseAndKeyboardMappingExtension,
		const FPlayerKeyMappingExtension* InGamepadMappingExtension);

	bool ChangeBinding(const EGameSettingKeyboardSlot InSlot, const FKey& NewKey);

	FText GetKeyTextFromSlot(const EGameSettingKeyboardSlot InSlot) const;
	void GetKeyBrushFromSlot(FSlateBrush& OutBrush, const EGameSettingKeyboardSlot InSlot) const;

	void GetAllMappedActionsFromKey(const EGameSettingKeyboardSlot InSlot, const FKey& Key, TArray<FName>& OutActionNames) const;

	FText GetSettingDisplayName() const;
	FText GetSettingDisplayCategory() const;

	const FPlayerKeyMappingExtension* GetMouseAndKeyboardMappingExtension() const;
	const FPlayerKeyMappingExtension* GetGamepadMappingExtension() const;

	/** Returns true if mappings on this setting have been customized */
	bool IsMappingCustomized() const;

	TSet<FPlayerKeyMapping> GetKeyMappings() const;
	UEnhancedPlayerMappableKeyProfile* FindMappableKeyProfile() const;
	UEnhancedInputUserSettings* GetUserSettings() const;

protected:
	/** The name of this action's mappings */
	FName MouseAndKeyboardActionMappingName;
	FName GamepadActionMappingName;

	/** The query options to filter down keys on this setting for */
	FPlayerMappableKeyQueryOptions MouseAndKeyboardQueryOptions;
	FPlayerMappableKeyQueryOptions GamepadQueryOptions;

	/** Store the initial key mappings that are set on this for each slot */
	TMap<EPlayerMappableKeySlot, FKey> MouseAndKeyboardInitialKeyMappings;
	TMap<EPlayerMappableKeySlot, FKey> GamepadInitialKeyMappings;

	const FPlayerKeyMappingExtension* MouseAndKeyboardMappingExtension;
	const FPlayerKeyMappingExtension* GamepadMappingExtension;

	/** The profile identifier that this key setting is from */
	FString ProfileIdentifier;
};
