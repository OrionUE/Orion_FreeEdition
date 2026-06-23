/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Common/UI_ActionIconVisibility.h"

#include "CommonInputBaseTypes.h"
#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "Input/CommonUIInputTypes.h"
#include "InputAction.h"
#include "Styling/SlateBrush.h"

namespace
{
	bool IsKeyboardMouseInput(const UCommonInputSubsystem* CommonInputSubsystem)
	{
		return CommonInputSubsystem && CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::MouseAndKeyboard;
	}

	bool CanResolveIconForKey(const UCommonInputSubsystem* CommonInputSubsystem, const FKey& Key)
	{
		if (!IsKeyboardMouseInput(CommonInputSubsystem) || !CommonUI::IsKeyValidForInputType(Key, CommonInputSubsystem->GetCurrentInputType()))
		{
			return false;
		}

		FSlateBrush SlateBrush;
		return UCommonInputPlatformSettings::Get()->TryGetInputBrush(
			SlateBrush,
			Key,
			CommonInputSubsystem->GetCurrentInputType(),
			CommonInputSubsystem->GetCurrentGamepadName())
			&& SlateBrush.DrawAs != ESlateBrushDrawType::NoDrawType;
	}
}

namespace GameUI::ActionIcon
{
	bool ShouldHideKeyboardMouseIcon(const UCommonInputSubsystem* CommonInputSubsystem, const FDataTableRowHandle& InputAction)
	{
		if (!IsKeyboardMouseInput(CommonInputSubsystem))
		{
			return false;
		}

		if (InputAction.IsNull())
		{
			return true;
		}

		const FCommonInputActionDataBase* InputActionData = CommonUI::GetInputActionData(InputAction);
		if (!InputActionData)
		{
			return true;
		}

		const FCommonInputTypeInfo& InputTypeInfo = InputActionData->GetCurrentInputTypeInfo(CommonInputSubsystem);
		return !CanResolveIconForKey(CommonInputSubsystem, InputTypeInfo.GetKey());
	}

	bool ShouldHideKeyboardMouseIcon(const UCommonInputSubsystem* CommonInputSubsystem, const TArray<FDataTableRowHandle>& InputActions)
	{
		if (!IsKeyboardMouseInput(CommonInputSubsystem) || InputActions.IsEmpty())
		{
			return false;
		}

		for (const FDataTableRowHandle& InputAction : InputActions)
		{
			if (!ShouldHideKeyboardMouseIcon(CommonInputSubsystem, InputAction))
			{
				return false;
			}
		}

		return true;
	}

	bool ShouldHideKeyboardMouseIcon(const UCommonInputSubsystem* CommonInputSubsystem, const UInputAction* InputAction, const ULocalPlayer* LocalPlayer)
	{
		if (!IsKeyboardMouseInput(CommonInputSubsystem) || !InputAction)
		{
			return false;
		}

		const ULocalPlayer* ActionLocalPlayer = LocalPlayer ? LocalPlayer : CommonInputSubsystem->GetLocalPlayer();
		if (!ActionLocalPlayer)
		{
			return true;
		}

		const UEnhancedInputLocalPlayerSubsystem* EnhancedInputSubsystem = ActionLocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
		if (!EnhancedInputSubsystem)
		{
			return true;
		}

		const TArray<FKey> BoundKeys = EnhancedInputSubsystem->QueryKeysMappedToAction(InputAction);
		for (const FKey& BoundKey : BoundKeys)
		{
			if (CanResolveIconForKey(CommonInputSubsystem, BoundKey))
			{
				return false;
			}
		}

		return true;
	}
}
