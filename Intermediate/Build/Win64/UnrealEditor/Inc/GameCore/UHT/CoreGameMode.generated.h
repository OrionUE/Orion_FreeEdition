// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/CoreGameMode.h"

#ifdef GAMECORE_CoreGameMode_generated_h
#error "CoreGameMode.generated.h already included, missing '#pragma once' in CoreGameMode.h"
#endif
#define GAMECORE_CoreGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UCommonUserInfo;
class UCorePawnData;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;

// ********** Begin Class ACoreGameMode ************************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUserInitializedForDedicatedServer); \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame); \
	DECLARE_FUNCTION(execGetPawnDataForController);


struct Z_Construct_UClass_ACoreGameMode_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameMode(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACoreGameMode_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACoreGameMode(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACoreGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACoreGameMode) \
	DECLARE_SERIALIZER(ACoreGameMode)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreGameMode(ACoreGameMode&&) = delete; \
	ACoreGameMode(const ACoreGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreGameMode) \
	NO_API virtual ~ACoreGameMode();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_32_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreGameMode;

// ********** End Class ACoreGameMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
