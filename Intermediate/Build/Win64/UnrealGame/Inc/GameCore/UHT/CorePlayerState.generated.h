// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CorePlayerState.h"

#ifdef GAMECORE_CorePlayerState_generated_h
#error "CorePlayerState.generated.h already included, missing '#pragma once' in CorePlayerState.h"
#endif
#define GAMECORE_CorePlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreAbilitySystemComponent;

// ********** Begin Class ACorePlayerState *********************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execGetCoreAbilitySystemComponent);


struct Z_Construct_UClass_ACorePlayerState_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerState(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACorePlayerState_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACorePlayerState(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACorePlayerState, AModularPlayerState, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACorePlayerState) \
	DECLARE_SERIALIZER(ACorePlayerState) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<ACorePlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		ReplicatedViewRotation, \
		NETFIELD_REP_END=ReplicatedViewRotation	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACorePlayerState(ACorePlayerState&&) = delete; \
	ACorePlayerState(const ACorePlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACorePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACorePlayerState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACorePlayerState) \
	NO_API virtual ~ACorePlayerState();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_25_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACorePlayerState;

// ********** End Class ACorePlayerState ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
