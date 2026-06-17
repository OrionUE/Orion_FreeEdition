// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/GameSettingInput.h"

#ifdef GAMECORE_GameSettingInput_generated_h
#error "GameSettingInput.generated.h already included, missing '#pragma once' in GameSettingInput.h"
#endif
#define GAMECORE_GameSettingInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameSettingInput ********************************************************
struct Z_Construct_UClass_UGameSettingInput_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UGameSettingInput(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h_26_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGameSettingInput_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UGameSettingInput(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGameSettingInput, UGameSettingValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UGameSettingInput) \
	DECLARE_SERIALIZER(UGameSettingInput)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameSettingInput(UGameSettingInput&&) = delete; \
	UGameSettingInput(const UGameSettingInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSettingInput) \
	NO_API virtual ~UGameSettingInput();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h_23_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameSettingInput;

// ********** End Class UGameSettingInput **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h

// ********** Begin Enum EGameSettingKeyboardSlot **************************************************
#define FOREACH_ENUM_EGAMESETTINGKEYBOARDSLOT(op) \
	op(EGameSettingKeyboardSlot::MouseAndKeyboardFirst) \
	op(EGameSettingKeyboardSlot::MouseAndKeyboardSecond) \
	op(EGameSettingKeyboardSlot::GamepadFirst) 

enum class EGameSettingKeyboardSlot : uint8;
template<> struct TIsUEnumClass<EGameSettingKeyboardSlot> { enum { Value = true }; };
template<> UE_NODEBUG GAMECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameSettingKeyboardSlot>();
// ********** End Enum EGameSettingKeyboardSlot ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
