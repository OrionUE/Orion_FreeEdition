/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamRemotePlayTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

//-----------------------------------------------------------------------------
// Purpose: Key modifier in ERemotePlayInput_t
//-----------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ESteamRemotePlayKeyModifier : uint8
{
	k_ERemotePlayKeyModifierNone = 0,
	k_ERemotePlayKeyModifierLeftShift,
	k_ERemotePlayKeyModifierRightShift,
	k_ERemotePlayKeyModifierLeftControl,
	k_ERemotePlayKeyModifierRightControl,
	k_ERemotePlayKeyModifierLeftAlt,
	k_ERemotePlayKeyModifierRightAlt,
	k_ERemotePlayKeyModifierLeftGUI,
	k_ERemotePlayKeyModifierRightGUI,
	k_ERemotePlayKeyModifierNumLock,
	k_ERemotePlayKeyModifierCapsLock,
	k_ERemotePlayKeyModifierMask,
};

//-----------------------------------------------------------------------------
// Purpose: Key scancode in ERemotePlayInput_t
//
// This is a USB scancode value as defined for the Keyboard/Keypad Page (0x07)
// This enumeration isn't a complete list, just the most commonly used keys.
//-----------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ESteamRemotePlayScancode : uint8
{
	k_ERemotePlayScancodeUnknown = 0,
	k_ERemotePlayScancodeA = 4,
	k_ERemotePlayScancodeB = 5,
	k_ERemotePlayScancodeC = 6,
	k_ERemotePlayScancodeD = 7,
	k_ERemotePlayScancodeE = 8,
	k_ERemotePlayScancodeF = 9,
	k_ERemotePlayScancodeG = 10,
	k_ERemotePlayScancodeH = 11,
	k_ERemotePlayScancodeI = 12,
	k_ERemotePlayScancodeJ = 13,
	k_ERemotePlayScancodeK = 14,
	k_ERemotePlayScancodeL = 15,
	k_ERemotePlayScancodeM = 16,
	k_ERemotePlayScancodeN = 17,
	k_ERemotePlayScancodeO = 18,
	k_ERemotePlayScancodeP = 19,
	k_ERemotePlayScancodeQ = 20,
	k_ERemotePlayScancodeR = 21,
	k_ERemotePlayScancodeS = 22,
	k_ERemotePlayScancodeT = 23,
	k_ERemotePlayScancodeU = 24,
	k_ERemotePlayScancodeV = 25,
	k_ERemotePlayScancodeW = 26,
	k_ERemotePlayScancodeX = 27,
	k_ERemotePlayScancodeY = 28,
	k_ERemotePlayScancodeZ = 29,
	k_ERemotePlayScancode1 = 30,
	k_ERemotePlayScancode2 = 31,
	k_ERemotePlayScancode3 = 32,
	k_ERemotePlayScancode4 = 33,
	k_ERemotePlayScancode5 = 34,
	k_ERemotePlayScancode6 = 35,
	k_ERemotePlayScancode7 = 36,
	k_ERemotePlayScancode8 = 37,
	k_ERemotePlayScancode9 = 38,
	k_ERemotePlayScancode0 = 39,
	k_ERemotePlayScancodeReturn = 40,
	k_ERemotePlayScancodeEscape = 41,
	k_ERemotePlayScancodeBackspace = 42,
	k_ERemotePlayScancodeTab = 43,
	k_ERemotePlayScancodeSpace = 44,
	k_ERemotePlayScancodeMinus = 45,
	k_ERemotePlayScancodeEquals = 46,
	k_ERemotePlayScancodeLeftBracket = 47,
	k_ERemotePlayScancodeRightBracket = 48,
	k_ERemotePlayScancodeBackslash = 49,
	k_ERemotePlayScancodeSemicolon = 51,
	k_ERemotePlayScancodeApostrophe = 52,
	k_ERemotePlayScancodeGrave = 53,
	k_ERemotePlayScancodeComma = 54,
	k_ERemotePlayScancodePeriod = 55,
	k_ERemotePlayScancodeSlash = 56,
	k_ERemotePlayScancodeCapsLock = 57,
	k_ERemotePlayScancodeF1 = 58,
	k_ERemotePlayScancodeF2 = 59,
	k_ERemotePlayScancodeF3 = 60,
	k_ERemotePlayScancodeF4 = 61,
	k_ERemotePlayScancodeF5 = 62,
	k_ERemotePlayScancodeF6 = 63,
	k_ERemotePlayScancodeF7 = 64,
	k_ERemotePlayScancodeF8 = 65,
	k_ERemotePlayScancodeF9 = 66,
	k_ERemotePlayScancodeF10 = 67,
	k_ERemotePlayScancodeF11 = 68,
	k_ERemotePlayScancodeF12 = 69,
	k_ERemotePlayScancodeInsert = 73,
	k_ERemotePlayScancodeHome = 74,
	k_ERemotePlayScancodePageUp = 75,
	k_ERemotePlayScancodeDelete = 76,
	k_ERemotePlayScancodeEnd = 77,
	k_ERemotePlayScancodePageDown = 78,
	k_ERemotePlayScancodeRight = 79,
	k_ERemotePlayScancodeLeft = 80,
	k_ERemotePlayScancodeDown = 81,
	k_ERemotePlayScancodeUp = 82,
	k_ERemotePlayScancodeLeftControl = 224,
	k_ERemotePlayScancodeLeftShift = 225,
	k_ERemotePlayScancodeLeftAlt = 226,
	k_ERemotePlayScancodeLeftGUI = 227,
	// windows, command (apple), meta
	k_ERemotePlayScancodeRightControl = 228,
	k_ERemotePlayScancodeRightShift = 229,
	k_ERemotePlayScancodeRightALT = 230,
	k_ERemotePlayScancodeRightGUI = 231,
	// windows, command (apple), meta
};

//-----------------------------------------------------------------------------
// Purpose: Mouse wheel direction in ERemotePlayInput_t
//-----------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ESteamRemotePlayMouseWheelDirection : uint8
{
	NOT_SET = 0,
	k_ERemotePlayMouseWheelUp = 1,
	k_ERemotePlayMouseWheelDown = 2,
	k_ERemotePlayMouseWheelLeft = 3,
	k_ERemotePlayMouseWheelRight = 4,
};

//-----------------------------------------------------------------------------
// Purpose: Mouse buttons in ERemotePlayInput_t
//-----------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ESteamRemotePlayMouseButton : uint8
{
	NOT_SET = 0,
	k_ERemotePlayMouseButtonLeft = 0x0001,
	k_ERemotePlayMouseButtonRight = 0x0002,
	k_ERemotePlayMouseButtonMiddle = 0x0010,
	k_ERemotePlayMouseButtonX1 = 0x0020,
	k_ERemotePlayMouseButtonX2 = 0x0040,
};

//-----------------------------------------------------------------------------
// Purpose: The type of input in ERemotePlayInput_t
//-----------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ESteamRemotePlayInputType : uint8
{
	k_ERemotePlayInputUnknown = 0,
	k_ERemotePlayInputMouseMotion,
	k_ERemotePlayInputMouseButtonDown,
	k_ERemotePlayInputMouseButtonUp,
	k_ERemotePlayInputMouseWheel,
	k_ERemotePlayInputKeyDown,
	k_ERemotePlayInputKeyUp
};

UENUM(BlueprintType)
enum class EOrionSteamDeviceFormFactor : uint8
{
	Unknown = 0,
	Phone,
	Tablet,
	Computer,
	TV,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

// Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp
USTRUCT(BlueprintType)
struct FRemotePlayInputKey
{
	GENERATED_BODY()

public:
	FRemotePlayInputKey()
		: Scancode(0), Modifiers(0), Keycode(0)
	{
	}

#if WITH_ORIONSTEAM
	FRemotePlayInputKey(const RemotePlayInputKey_t& Data)
		: Scancode(Data.m_eScancode), Modifiers(Data.m_unModifiers), Keycode(Data.m_unKeycode)
	{
	}
	operator RemotePlayInputKey_t() const
	{
		RemotePlayInputKey_t Data;
		Data.m_eScancode = Scancode;
		Data.m_unModifiers = Modifiers;
		Data.m_unKeycode = Keycode;
		return Data;
	}
#endif
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 Scancode; // Keyboard scancode, common values are defined in ERemotePlayScancode
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 Modifiers; // Mask of ERemotePlayKeyModifier active for this key event
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 Keycode; // UCS-4 character generated by the keypress, or 0 if it wasn't a character key, e.g. Delete or Left Arrow
};

// Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel
USTRUCT(BlueprintType)
struct FRemotePlayInputMouseWheel
{
	GENERATED_BODY()

public:
	FRemotePlayInputMouseWheel()
		: Direction(ESteamRemotePlayMouseWheelDirection::k_ERemotePlayMouseWheelUp), Amount(0)
	{
	}

#if WITH_ORIONSTEAM
	FRemotePlayInputMouseWheel(const RemotePlayInputMouseWheel_t& Data)
		: Direction(static_cast<ESteamRemotePlayMouseWheelDirection>(Data.m_eDirection)), Amount(Data.m_flAmount)
	{
	}
	operator RemotePlayInputMouseWheel_t() const
	{
		RemotePlayInputMouseWheel_t Data;
		Data.m_eDirection = static_cast<ERemotePlayMouseWheelDirection>(Direction);
		Data.m_flAmount = Amount;
		return Data;
	}
#endif
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	ESteamRemotePlayMouseWheelDirection Direction;
	// 1.0f is a single click of the wheel, 120 units on Windows
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	float Amount;
};

// Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion
USTRUCT(BlueprintType)
struct FRemotePlayInputMouseMotion
{
	GENERATED_BODY()

public:
	FRemotePlayInputMouseMotion()
		: bAbsolute(false), NormalizedX(0), NormalizedY(0), DeltaX(0), DeltaY(0)
	{
	}

#if WITH_ORIONSTEAM
	FRemotePlayInputMouseMotion(const RemotePlayInputMouseMotion_t& Data)
		: bAbsolute(Data.m_bAbsolute), NormalizedX(Data.m_flNormalizedX), NormalizedY(Data.m_flNormalizedY), DeltaX(Data.m_nDeltaX), DeltaY(Data.m_nDeltaY)
	{
	}

	operator RemotePlayInputMouseMotion_t() const
	{
		RemotePlayInputMouseMotion_t Data;
		Data.m_bAbsolute = bAbsolute;
		Data.m_flNormalizedX = NormalizedX;
		Data.m_flNormalizedY = NormalizedY;
		Data.m_nDeltaX = DeltaX;
		Data.m_nDeltaY = DeltaY;
		return Data;
	}
#endif
	// True if this is absolute mouse motion and m_flNormalizedX and m_flNormalizedY are valid
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	bool bAbsolute;
	// The absolute X position of the mouse, normalized to the display, if m_bAbsolute is true
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	float NormalizedX;
	// The absolute Y position of the mouse, normalized to the display, if m_bAbsolute is true
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	float NormalizedY;
	// Relative mouse motion in the X direction
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 DeltaX;
	// Relative mouse motion in the Y direction
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 DeltaY;
};

USTRUCT(BlueprintType)
struct FSteamRemotePlaySessionConnected
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 SessionID;

public:
	FSteamRemotePlaySessionConnected()
		: SessionID(0)
	{
	}

#if WITH_ORIONSTEAM
	FSteamRemotePlaySessionConnected(const SteamRemotePlaySessionConnected_t& Data)
		: SessionID(Data.m_unSessionID)
	{
	}
#endif

public:
	operator uint32() const
	{
		return SessionID;
	}
	operator int32() const
	{
		return SessionID;
	}
	operator uint32()
	{
		return SessionID;
	}
	operator int32()
	{
		return SessionID;
	}
};

USTRUCT(BlueprintType)
struct FSteamRemotePlaySessionDisconnected
{
	GENERATED_BODY()

public:
	FSteamRemotePlaySessionDisconnected()
		: SessionID(0)
	{
	}

#if WITH_ORIONSTEAM
	FSteamRemotePlaySessionDisconnected(const SteamRemotePlaySessionDisconnected_t& Data)
		: SessionID(Data.m_unSessionID)
	{
	}
#endif

public:
	operator uint32() const
	{
		return SessionID;
	}
	operator int32() const
	{
		return SessionID;
	}
	operator uint32()
	{
		return SessionID;
	}
	operator int32()
	{
		return SessionID;
	}

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 SessionID;
};

// Steam Remote Play session ID
USTRUCT(BlueprintType)
struct FRemotePlaySessionID
{
	GENERATED_BODY()
public:
	FRemotePlaySessionID()
		: Value(0)
	{
	}
#if WITH_ORIONSTEAM
	FRemotePlaySessionID(const RemotePlaySessionID_t& Data)
		: Value(Data)
	{
	}
	operator RemotePlaySessionID_t() const
	{
		const RemotePlaySessionID_t Data = Value;
		return Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 Value;
};

USTRUCT(BlueprintType)
struct FRemotePlayInput
{
	GENERATED_BODY()

public:
	FRemotePlayInput()
		: Type(ESteamRemotePlayInputType::k_ERemotePlayInputUnknown), MouseButton(ESteamRemotePlayMouseButton::k_ERemotePlayMouseButtonLeft)
	{
	}

#if WITH_ORIONSTEAM
	FRemotePlayInput(const RemotePlayInput_t& Data)
		: SessionID(Data.m_unSessionID), Type(static_cast<ESteamRemotePlayInputType>(Data.m_eType))
	{
		switch (Type)
		{
		case ESteamRemotePlayInputType::k_ERemotePlayInputUnknown:

			break;
		case ESteamRemotePlayInputType::k_ERemotePlayInputMouseMotion:
			MouseMotion = Data.m_MouseMotion;
			break;
		case ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonDown:
			MouseButton = static_cast<ESteamRemotePlayMouseButton>(Data.m_eMouseButton);
			break;
		case ESteamRemotePlayInputType::k_ERemotePlayInputMouseButtonUp:
			MouseButton = static_cast<ESteamRemotePlayMouseButton>(Data.m_eMouseButton);
			break;
		case ESteamRemotePlayInputType::k_ERemotePlayInputMouseWheel:
			MouseWheel = Data.m_MouseWheel;
			break;
		case ESteamRemotePlayInputType::k_ERemotePlayInputKeyDown:
			Key = Data.m_Key;
			break;
		case ESteamRemotePlayInputType::k_ERemotePlayInputKeyUp:
			Key = Data.m_Key;
			break;
		}
	}
#endif
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	FRemotePlaySessionID SessionID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	ESteamRemotePlayInputType Type;
	// Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	FRemotePlayInputMouseMotion MouseMotion;
	// Mouse button event data, valid when m_eType is k_ERemotePlayInputMouseButtonDown or k_ERemotePlayInputMouseButtonUp
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	ESteamRemotePlayMouseButton MouseButton;
	// Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	FRemotePlayInputMouseWheel MouseWheel;
	// Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	FRemotePlayInputKey Key;
};

// Steam Remote Play mouse cursor ID
USTRUCT(BlueprintType)
struct FRemotePlayCursorID
{
	GENERATED_BODY()
public:
	FRemotePlayCursorID()
		: Value(0)
	{
	}
#if WITH_ORIONSTEAM
	FRemotePlayCursorID(const RemotePlayCursorID_t& Data)
		: Value(Data)
	{
	}
	operator RemotePlayCursorID_t() const
	{
		const RemotePlayCursorID_t Data = Value;
		return Data;
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="RemotePlay")
	int32 Value;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionConnected, const FSteamRemotePlaySessionConnected&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionDisconnected, const FSteamRemotePlaySessionDisconnected&, Data);
