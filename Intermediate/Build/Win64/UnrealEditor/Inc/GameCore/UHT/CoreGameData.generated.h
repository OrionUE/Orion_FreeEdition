// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/CoreGameData.h"

#ifdef GAMECORE_CoreGameData_generated_h
#error "CoreGameData.generated.h already included, missing '#pragma once' in CoreGameData.h"
#endif
#define GAMECORE_CoreGameData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreGameData ************************************************************
struct Z_Construct_UClass_UCoreGameData_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameData(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreGameData_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreGameData(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreGameData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreGameData) \
	DECLARE_SERIALIZER(UCoreGameData)


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreGameData(UCoreGameData&&) = delete; \
	UCoreGameData(const UCoreGameData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGameData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGameData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreGameData) \
	NO_API virtual ~UCoreGameData();


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h_17_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h_20_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreGameData;

// ********** End Class UCoreGameData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
