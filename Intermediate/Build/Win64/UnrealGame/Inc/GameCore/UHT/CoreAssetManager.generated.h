// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/CoreAssetManager.h"

#ifdef GAMECORE_CoreAssetManager_generated_h
#error "CoreAssetManager.generated.h already included, missing '#pragma once' in CoreAssetManager.h"
#endif
#define GAMECORE_CoreAssetManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreAssetManager ********************************************************
struct Z_Construct_UClass_UCoreAssetManager_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreAssetManager(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h_39_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreAssetManager_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreAssetManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreAssetManager, UAssetManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAssetManager) \
	DECLARE_SERIALIZER(UCoreAssetManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAssetManager(UCoreAssetManager&&) = delete; \
	UCoreAssetManager(const UCoreAssetManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreAssetManager) \
	NO_API virtual ~UCoreAssetManager();


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h_36_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h_39_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAssetManager;

// ********** End Class UCoreAssetManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
