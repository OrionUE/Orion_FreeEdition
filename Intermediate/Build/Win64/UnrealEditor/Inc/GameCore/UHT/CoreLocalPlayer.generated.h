// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CoreLocalPlayer.h"

#ifdef GAMECORE_CoreLocalPlayer_generated_h
#error "CoreLocalPlayer.generated.h already included, missing '#pragma once' in CoreLocalPlayer.h"
#endif
#define GAMECORE_CoreLocalPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreLocalPlayer *********************************************************
struct Z_Construct_UClass_UCoreLocalPlayer_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreLocalPlayer(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreLocalPlayer_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreLocalPlayer(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreLocalPlayer) \
	DECLARE_SERIALIZER(UCoreLocalPlayer)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreLocalPlayer(UCoreLocalPlayer&&) = delete; \
	UCoreLocalPlayer(const UCoreLocalPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreLocalPlayer) \
	NO_API virtual ~UCoreLocalPlayer();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h_22_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreLocalPlayer;

// ********** End Class UCoreLocalPlayer ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
