// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreGameState.h"

#ifdef GAMECORE_CoreGameState_generated_h
#error "CoreGameState.generated.h already included, missing '#pragma once' in CoreGameState.h"
#endif
#define GAMECORE_CoreGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCoreAbilitySystemComponent;

// ********** Begin Class ACoreGameState ***********************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RecorderPlayerState); \
	DECLARE_FUNCTION(execGetCoreAbilitySystemComponent);


GAMECORE_API UClass* Z_Construct_UClass_ACoreGameState_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoreGameState(); \
	friend struct Z_Construct_UClass_ACoreGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_ACoreGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoreGameState, AModularGameStateBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACoreGameState_NoRegister) \
	DECLARE_SERIALIZER(ACoreGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ACoreGameState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerFPS=NETFIELD_REP_START, \
		RecorderPlayerState, \
		NETFIELD_REP_END=RecorderPlayerState	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreGameState(ACoreGameState&&) = delete; \
	ACoreGameState(const ACoreGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreGameState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreGameState) \
	NO_API virtual ~ACoreGameState();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_25_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreGameState;

// ********** End Class ACoreGameState *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
