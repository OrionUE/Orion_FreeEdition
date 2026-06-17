// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h"

#ifdef ORIONSTEAMWEBAPI_WebLobbyMatchmakingServiceTypes_generated_h
#error "WebLobbyMatchmakingServiceTypes.generated.h already included, missing '#pragma once' in WebLobbyMatchmakingServiceTypes.h"
#endif
#define ORIONSTEAMWEBAPI_WebLobbyMatchmakingServiceTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h

// ********** Begin Enum EOrionSteamWebAPILobbyType ************************************************
#define FOREACH_ENUM_EORIONSTEAMWEBAPILOBBYTYPE(op) \
	op(EOrionSteamWebAPILobbyType::Private) \
	op(EOrionSteamWebAPILobbyType::FriendsOnly) \
	op(EOrionSteamWebAPILobbyType::TypePublic) \
	op(EOrionSteamWebAPILobbyType::TypeInvisible) 

enum class EOrionSteamWebAPILobbyType : uint8;
template<> struct TIsUEnumClass<EOrionSteamWebAPILobbyType> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMWEBAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrionSteamWebAPILobbyType>();
// ********** End Enum EOrionSteamWebAPILobbyType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
