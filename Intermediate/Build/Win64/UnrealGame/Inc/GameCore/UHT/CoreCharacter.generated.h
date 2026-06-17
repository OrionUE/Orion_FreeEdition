// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CoreCharacter.h"

#ifdef GAMECORE_CoreCharacter_generated_h
#error "CoreCharacter.generated.h already included, missing '#pragma once' in CoreCharacter.h"
#endif
#define GAMECORE_CoreCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreCharacter ***********************************************************
struct Z_Construct_UClass_ACoreCharacter_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACoreCharacter(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACoreCharacter_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACoreCharacter(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACoreCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACoreCharacter) \
	DECLARE_SERIALIZER(ACoreCharacter) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<ACoreCharacter*>(this); }


#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreCharacter(ACoreCharacter&&) = delete; \
	ACoreCharacter(const ACoreCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreCharacter) \
	NO_API virtual ~ACoreCharacter();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h_27_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h_30_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreCharacter;

// ********** End Class ACoreCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
