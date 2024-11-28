// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarriorHeroWeapon;
struct FGameplayTag;
#ifdef KNIGHT_HeroCombatComponent_generated_h
#error "HeroCombatComponent.generated.h already included, missing '#pragma once' in HeroCombatComponent.h"
#endif
#define KNIGHT_HeroCombatComponent_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroCurrentWeaponDamageAtLevel); \
	DECLARE_FUNCTION(execGetHeroCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetHeroCarriedWeaponByTag);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroCombatComponent(); \
	friend struct Z_Construct_UClass_UHeroCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UHeroCombatComponent, UPawnCombatComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(UHeroCombatComponent)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroCombatComponent(UHeroCombatComponent&&); \
	UHeroCombatComponent(const UHeroCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroCombatComponent) \
	NO_API virtual ~UHeroCombatComponent();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_12_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UHeroCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
