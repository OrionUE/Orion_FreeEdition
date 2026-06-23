/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "EnhancedPlayerInput.h"
#include "UObject/WeakObjectPtrTemplates.h"

#include "InputSystemPlayerInput.generated.h"

class UInputSystemUserSettings;

/**
 * InputSystemPlayerInput
 * 
 * Custom player input class. This extends the functionality of Enhanced Input to also include
 * some input latency tracking on key press.
 *
 * Extend this class if you have any special logic which you may want to run relating to when keys are pressed
 * or when input is flushed.
 */
UCLASS(Config=Input, Transient)
class UInputSystemPlayerInput : public UEnhancedPlayerInput
{
	GENERATED_BODY()

public:
	UInputSystemPlayerInput();
	virtual ~UInputSystemPlayerInput() override;

protected:
	virtual void BeginDestroy() override;

	//~ Begin UEnhancedPlayerInput Interface
	virtual bool InputKey(const FInputKeyEventArgs& Params) override;
	//~ End of UEnhancedPlayerInput interface

	void ProcessInputEventForLatencyMarker(const FInputKeyEventArgs& Params);
	void BindToLatencyMarkerSettingChange();
	void UnbindLatencyMarkerSettingChangeListener();
	void HandleLatencyMarkerSettingChanged();
	UInputSystemUserSettings* GetInputSystemUserSettings() const;

	TWeakObjectPtr<UInputSystemUserSettings> BoundLatencyUserSettings;
	bool bShouldTriggerLatencyFlash = false;
};
