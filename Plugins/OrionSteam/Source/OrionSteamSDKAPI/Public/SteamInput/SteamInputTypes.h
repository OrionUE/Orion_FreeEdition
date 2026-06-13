/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamInputTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class EOrionSteamInputGlyphSize : uint8
{
	k_ESteamInputGlyphSize_Small = 0, // 32x32 pixels
	k_ESteamInputGlyphSize_Medium,	  // 128x128 pixels
	k_ESteamInputGlyphSize_Large,	  // 256x256 pixels
	k_ESteamInputGlyphSize_Count,
};

UENUM(BlueprintType)
enum class EOrionSteamInputSource : uint8
{
	None = 0,
	LeftTrackpad,
	RightTrackpad,
	Joystick,
	ABXY,
	Switch,
	LeftTrigger,
	RightTrigger,
	LeftBumper,
	RightBumper,
	Gyro,
	CenterTrackpad,
	RightJoystick,
	DPad,
	Key,
	Mouse,
	LeftGyro,
	Count
};

UENUM(BlueprintType)
enum class EOrionSteamInputSourceMode : uint8
{
	None = 0,
	Dpad,
	Buttons,
	FourButtons,
	AbsoluteMouse,
	RelativeMouse,
	JoystickMove,
	JoystickMouse,
	JoystickCamera,
	ScrollWheel,
	Trigger,
	TouchMenu,
	MouseJoystick,
	MouseRegion,
	RadialMenu,
	SingleButton,
	Switches
};

UENUM(BlueprintType)
enum class EOrionSteamXboxOrigin : uint8
{
	A = 0,
	B,
	X,
	Y,
	LeftBumper,
	RightBumper,
	Menu,
	View,
	LeftTrigger_Pull,
	LeftTrigger_Click,
	RightTrigger_Pull,
	RightTrigger_Click,
	LeftStick_Move,
	LeftStick_Click,
	LeftStick_DPadNorth,
	LeftStick_DPadSouth,
	LeftStick_DPadWest,
	LeftStick_DPadEast,
	RightStick_Move,
	RightStick_Click,
	RightStick_DPadNorth,
	RightStick_DPadSouth,
	RightStick_DPadWest,
	RightStick_DPadEast,
	DPad_North,
	DPad_South,
	DPad_West,
	DPad_East,
	Count,
};

UENUM(BlueprintType)
enum class EOrionSteamControllerPad : uint8
{
	Left = 0,
	Right
};

UENUM(BlueprintType)
enum class EOrionSteamInputType : uint8
{
	Unknown = 0,
	SteamController,
	XBox360Controller,
	XBoxOneController,
	GenericGamepad, // DirectInput controllers
	PS4Controller,
	AppleMFiController, // Unused
	AndroidController,	// Unused
	SwitchJoyConPair,	// Unused
	SwitchJoyConSingle, // Unused
	SwitchProController,
	MobileTouch,		 // Steam Link App On-screen Virtual Controller
	PS3Controller,		 // Currently uses PS4 Origins
	PS5Controller,		 // Added in SDK 151
	SteamDeckController, // Added in SDK 153
	Count,
	MaximumPossibleValue = 255,
};

UENUM(BlueprintType, meta=(Bitflags))
enum class EOrionSteamInputLEDFlag : uint8
{
	SetColor = 0,
	RestoreUserDefault
};

// Individual values are used by the GetSessionInputConfigurationSettings bitmask
UENUM(BlueprintType, meta=(Bitflags))
enum class EOrionSteamInputConfigurationEnableType : uint8
{
	ESteamInputConfigurationEnableType_None = 0x0000,
	ESteamInputConfigurationEnableType_Playstation = 0x0001,
	ESteamInputConfigurationEnableType_Xbox = 0x0002,
	ESteamInputConfigurationEnableType_Generic = 0x0004,
	ESteamInputConfigurationEnableType_Switch = 0x0008,
};

UENUM(BlueprintType)
enum class EScePadTriggerEffectMode : uint8
{
	SCE_PAD_TRIGGER_EFFECT_MODE_OFF,
	SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK,
	SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON,
	SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION,
	SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK,
	SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK,
	SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 *E
 *  @brief parameter for setting the trigger effect to off mode.
 *         Off Mode: Stop trigger effect.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectOffParam
{
	GENERATED_BODY()
};

/**
 *E
 *  @brief parameter for setting the trigger effect to Feedback mode.
 *         Feedback Mode: The motor arm pushes back trigger.
 *                        Trigger obtains stiffness at specified position.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectFeedbackParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectFeedbackParam()
		: Position(0), Strength(0)
	{
	}

public:
	/*E position where the strength of target trigger start changing(0~9). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Position;
	/*E strength that the motor arm pushes back target trigger(0~8 (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Strength;
};

/**
 *E
 *  @brief parameter for setting the trigger effect to Weapon mode.
 *         Weapon Mode: Emulate weapon like gun trigger.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectWeaponParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectWeaponParam()
		: StartPosition(0), EndPosition(0), Strength(0)
	{
	}

public:
	/*E position where the stiffness of trigger start changing(2~7). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 StartPosition;
	/*E position where the stiffness of trigger finish changing(startPosition+1~8). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 EndPosition;
	/*E strength of gun trigger(0~8 (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Strength;
};

/**
 *E
 *  @brief parameter for setting the trigger effect to Vibration mode.
 *         Vibration Mode: Vibrates motor arm around specified position.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectVibrationParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectVibrationParam()
		: Position(0), Amplitude(0), Frequency(0)
	{
	}

public:
	/*E position where the motor arm start vibrating(0~9). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Position;
	/*E vibration amplitude(0~8 (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Amplitude;
	/*E vibration frequency(0~255[Hz] (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Frequency;
};

/**
 *E
 *  @brief parameter for setting the trigger effect to ScePadTriggerEffectMultiplePositionFeedbackParam mode.
 *         Multi Position Feedback Mode: The motor arm pushes back trigger.
 *                                       Trigger obtains specified stiffness at each control point.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectMultiplePositionFeedbackParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectMultiplePositionFeedbackParam()
	{
		Strength.AddDefaulted(10);
	}

public:
	/*E strength that the motor arm pushes back target trigger at position(0~8 (0: Same as Off mode)).
	 *  strength[0] means strength of motor arm at position0.
	 *  strength[1] means strength of motor arm at position1.
	 * */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	TArray<int32> Strength;
};

/**
 *E
 *  @brief parameter for setting the trigger effect to Feedback3 mode.
 *         Slope Feedback Mode: The motor arm pushes back trigger between two spedified control points.
 *                              Stiffness of the trigger is changing depending on the set place.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectSlopeFeedbackParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectSlopeFeedbackParam()
		: StartPosition(0), EndPosition(0), StartStrength(0), EndStrength(0)
	{
	}

public:
	/*E position where the strength of target trigger start changing(0~endPosition). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 StartPosition;
	/*E position where the strength of target trigger finish changing(startPosition+1~9). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 EndPosition;
	/*E strength when trigger's position is startPosition(1~8) */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 StartStrength;
	/*E strength when trigger's position is endPosition(1~8) */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 EndStrength;
};

/**
 *E
 *  @brief parameter for setting the trigger effect to Vibration2 mode.
 *         Multi Position Vibration Mode: Vibrates motor arm around specified control point.
 *                                        Trigger vibrates specified amplitude at each control point.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectMultiplePositionVibrationParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectMultiplePositionVibrationParam()
		: Frequency(0)
	{
		Amplitude.AddDefaulted(8);
	}

public:
	/*E vibration frequency(0~255 (0: Same as Off mode)) */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	int32 Frequency;
	/*E vibration amplitude at position(0~8 (0: Same as Off mode)).
	 *  amplitude[0] means amplitude of vibration at position0.
	 *  amplitude[1] means amplitude of vibration at position1.
	 *  ...
	 * */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	TArray<int32> Amplitude;
};

USTRUCT(BlueprintType)
struct FScePadTriggerEffectCommandData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectOffParam OffParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectFeedbackParam FeedbackParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectWeaponParam WeaponParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectVibrationParam VibrationParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectMultiplePositionFeedbackParam MultiplePositionFeedbackParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectSlopeFeedbackParam SlopeFeedbackParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectMultiplePositionVibrationParam MultiplePositionVibrationParam;
};

USTRUCT(BlueprintType)
struct FScePadTriggerEffectCommand
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectCommand()
		: Mode(EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF)
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	EScePadTriggerEffectMode Mode;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	FScePadTriggerEffectCommandData CommandData;
};

USTRUCT(BlueprintType)
struct FInputAnalogActionData
{
	GENERATED_BODY()
public:
	FInputAnalogActionData()
		: Mode(EOrionSteamInputSourceMode::None), X(0), Y(0), bActive(false)
	{
	}

#if WITH_ORIONSTEAM
	FInputAnalogActionData(const InputAnalogActionData_t& Data)
		: Mode(static_cast<EOrionSteamInputSourceMode>(Data.eMode)), X(Data.x), Y(Data.y), bActive(Data.bActive)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	EOrionSteamInputSourceMode Mode;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float X;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float Y;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	bool bActive;
};

USTRUCT(BlueprintType)
struct FInputDigitalActionData
{
	GENERATED_BODY()
public:
	FInputDigitalActionData()
		: bState(false), bActive(false)
	{
	}

#if WITH_ORIONSTEAM
	FInputDigitalActionData(const InputDigitalActionData_t& Data)
		: bState(Data.bState), bActive(Data.bActive)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	bool bState;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	bool bActive;
};

USTRUCT(BlueprintType)
struct FInputMotionData
{
	GENERATED_BODY()
public:
	FInputMotionData()
		: RotQuatX(0), RotQuatY(0), RotQuatZ(0), RotQuatW(0), PosAccelX(0), PosAccelY(0), PosAccelZ(0), RotVelX(0), RotVelY(0), RotVelZ(0)
	{
	}

#if WITH_ORIONSTEAM
	FInputMotionData(const InputMotionData_t& Data)
		: RotQuatX(Data.rotQuatX), RotQuatY(Data.rotQuatY), RotQuatZ(Data.rotQuatZ), RotQuatW(Data.rotQuatW), PosAccelX(Data.posAccelX), PosAccelY(Data.posAccelY), PosAccelZ(Data.posAccelZ), RotVelX(Data.rotVelX), RotVelY(Data.rotVelY), RotVelZ(Data.rotVelZ)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotQuatX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotQuatY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotQuatZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotQuatW;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float PosAccelX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float PosAccelY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float PosAccelZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotVelX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotVelY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Input")
	float RotVelZ;
};

USTRUCT(BlueprintType)
struct ORIONSTEAMSDKAPI_API FInputHandle
{
	GENERATED_BODY()
public:
	FInputHandle()
		: m_Value(0)
	{
	}

	FInputHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const
	{
		return m_Value;
	}
	operator uint64() const
	{
		return m_Value;
	}
	operator uint64()
	{
		return m_Value;
	}

private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct ORIONSTEAMSDKAPI_API FInputActionSetHandle
{
	GENERATED_BODY()
public:
	FInputActionSetHandle()
		: m_Value(0)
	{
	}

	FInputActionSetHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const
	{
		return m_Value;
	}
	operator uint64() const
	{
		return m_Value;
	}
	operator uint64()
	{
		return m_Value;
	}

private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct ORIONSTEAMSDKAPI_API FInputDigitalActionHandle
{
	GENERATED_BODY()
public:
	FInputDigitalActionHandle()
		: m_Value(0)
	{
	}

	FInputDigitalActionHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const
	{
		return m_Value;
	}
	operator uint64() const
	{
		return m_Value;
	}
	operator uint64()
	{
		return m_Value;
	}

private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct ORIONSTEAMSDKAPI_API FInputAnalogActionHandle
{
	GENERATED_BODY()
public:
	FInputAnalogActionHandle()
		: m_Value(0)
	{
	}

	FInputAnalogActionHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const
	{
		return m_Value;
	}
	operator uint64() const
	{
		return m_Value;
	}
	operator uint64()
	{
		return m_Value;
	}

private:
	uint64 m_Value;
};
