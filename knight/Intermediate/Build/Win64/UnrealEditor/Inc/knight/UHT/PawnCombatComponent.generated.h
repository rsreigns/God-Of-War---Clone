// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/Components/PawnExtension/PawnCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarriorWeaponBase;
enum class EWarriorCollisionType : uint8;
struct FGameplayTag;
#ifdef KNIGHT_PawnCombatComponent_generated_h
#error "PawnCombatComponent.generated.h already included, missing '#pragma once' in PawnCombatComponent.h"
#endif
#define KNIGHT_PawnCombatComponent_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleWeaponCollision); \
	DECLARE_FUNCTION(execGetCharacterCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetCharacterCarriedWeaponByTag); \
	DECLARE_FUNCTION(execRegisterSpawnedWeapon);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnCombatComponent(); \
	friend struct Z_Construct_UClass_UPawnCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnCombatComponent, UPawnExtensionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(UPawnCombatComponent)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnCombatComponent(UPawnCombatComponent&&); \
	UPawnCombatComponent(const UPawnCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatComponent) \
	NO_API virtual ~UPawnCombatComponent();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_20_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UPawnCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_PawnCombatComponent_h


#define FOREACH_ENUM_EWARRIORCOLLISIONTYPE(op) \
	op(EWarriorCollisionType::CurrentEquippedWeapon) \
	op(EWarriorCollisionType::LeftHand) \
	op(EWarriorCollisionType::RightHand) 

enum class EWarriorCollisionType : uint8;
template<> struct TIsUEnumClass<EWarriorCollisionType> { enum { Value = true }; };
template<> KNIGHT_API UEnum* StaticEnum<EWarriorCollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
