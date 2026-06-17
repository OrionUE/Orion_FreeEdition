// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AsyncAction_PlayerStateReady.h"

#ifdef GAMECORE_AsyncAction_PlayerStateReady_generated_h
#error "AsyncAction_PlayerStateReady.generated.h already included, missing '#pragma once' in AsyncAction_PlayerStateReady.h"
#endif
#define GAMECORE_AsyncAction_PlayerStateReady_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
class UAsyncAction_PlayerStateReady;
class UObject;

// ********** Begin Class UAsyncAction_PlayerStateReady ********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitForPlayerStateReady);


struct Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_PlayerStateReady(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAsyncAction_PlayerStateReady_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UAsyncAction_PlayerStateReady(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAsyncAction_PlayerStateReady, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UAsyncAction_PlayerStateReady) \
	DECLARE_SERIALIZER(UAsyncAction_PlayerStateReady)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PlayerStateReady(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_PlayerStateReady(UAsyncAction_PlayerStateReady&&) = delete; \
	UAsyncAction_PlayerStateReady(const UAsyncAction_PlayerStateReady&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PlayerStateReady); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PlayerStateReady); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PlayerStateReady) \
	NO_API virtual ~UAsyncAction_PlayerStateReady();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_14_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_PlayerStateReady;

// ********** End Class UAsyncAction_PlayerStateReady **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Player_AsyncAction_PlayerStateReady_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
