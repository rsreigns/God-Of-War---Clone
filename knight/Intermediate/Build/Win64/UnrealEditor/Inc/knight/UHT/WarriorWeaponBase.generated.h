// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/Items/Weapons/WarriorWeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef KNIGHT_WarriorWeaponBase_generated_h
#error "WarriorWeaponBase.generated.h already included, missing '#pragma once' in WarriorWeaponBase.h"
#endif
#define KNIGHT_WarriorWeaponBase_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnWeaponBoxEndOverlap); \
	DECLARE_FUNCTION(execOnWeaponBoxBeginOverlap);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorWeaponBase(); \
	friend struct Z_Construct_UClass_AWarriorWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWarriorWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(AWarriorWeaponBase)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorWeaponBase(AWarriorWeaponBase&&); \
	AWarriorWeaponBase(const AWarriorWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorWeaponBase) \
	NO_API virtual ~AWarriorWeaponBase();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_13_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class AWarriorWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
