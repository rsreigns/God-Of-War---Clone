// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/WarriorTypes/WarriorEnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KNIGHT_WarriorEnumTypes_generated_h
#error "WarriorEnumTypes.generated.h already included, missing '#pragma once' in WarriorEnumTypes.h"
#endif
#define KNIGHT_WarriorEnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorTypes_WarriorEnumTypes_h


#define FOREACH_ENUM_EWARRIORCONFIRMTYPE(op) \
	op(EWarriorConfirmType::Yes) \
	op(EWarriorConfirmType::No) 

enum class EWarriorConfirmType : uint8;
template<> struct TIsUEnumClass<EWarriorConfirmType> { enum { Value = true }; };
template<> KNIGHT_API UEnum* StaticEnum<EWarriorConfirmType>();

#define FOREACH_ENUM_EWARRIORVALIDTYPE(op) \
	op(EWarriorValidType::Valid) \
	op(EWarriorValidType::Invalid) 

enum class EWarriorValidType : uint8;
template<> struct TIsUEnumClass<EWarriorValidType> { enum { Value = true }; };
template<> KNIGHT_API UEnum* StaticEnum<EWarriorValidType>();

#define FOREACH_ENUM_EWARRIORSUCCESSTYPE(op) \
	op(EWarriorSuccessType::Successful) \
	op(EWarriorSuccessType::Failed) 

enum class EWarriorSuccessType : uint8;
template<> struct TIsUEnumClass<EWarriorSuccessType> { enum { Value = true }; };
template<> KNIGHT_API UEnum* StaticEnum<EWarriorSuccessType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
