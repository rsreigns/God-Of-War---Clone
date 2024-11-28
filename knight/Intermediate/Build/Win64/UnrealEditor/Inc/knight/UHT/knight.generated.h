// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "knight.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KNIGHT_knight_generated_h
#error "knight.generated.h already included, missing '#pragma once' in knight.h"
#endif
#define KNIGHT_knight_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_knight_h


#define FOREACH_ENUM_EABILITYINPUTID(op) \
	op(EAbilityInputID::None) \
	op(EAbilityInputID::Confirm) \
	op(EAbilityInputID::Cancel) \
	op(EAbilityInputID::Punch) 

enum class EAbilityInputID : uint8;
template<> struct TIsUEnumClass<EAbilityInputID> { enum { Value = true }; };
template<> KNIGHT_API UEnum* StaticEnum<EAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
