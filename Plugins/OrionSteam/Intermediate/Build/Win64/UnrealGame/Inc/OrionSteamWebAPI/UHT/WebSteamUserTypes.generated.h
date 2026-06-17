// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/WebSteamUserTypes.h"

#ifdef ORIONSTEAMWEBAPI_WebSteamUserTypes_generated_h
#error "WebSteamUserTypes.generated.h already included, missing '#pragma once' in WebSteamUserTypes.h"
#endif
#define ORIONSTEAMWEBAPI_WebSteamUserTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamUser_WebSteamUserTypes_h

// ********** Begin Enum EVanityUrlType ************************************************************
#define FOREACH_ENUM_EVANITYURLTYPE(op) \
	op(EVanityUrlType::Individual) \
	op(EVanityUrlType::Group) \
	op(EVanityUrlType::OfficialGameGroup) 

enum class EVanityUrlType : uint8;
template<> struct TIsUEnumClass<EVanityUrlType> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMWEBAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<EVanityUrlType>();
// ********** End Enum EVanityUrlType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
