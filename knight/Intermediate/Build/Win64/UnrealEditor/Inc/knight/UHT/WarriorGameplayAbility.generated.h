// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPawnCombatComponent;
class UWarriorAbilitySystemComponent;
class UWarriorHeroGameplayAbility;
enum class EWarriorSuccessType : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
#ifdef KNIGHT_WarriorGameplayAbility_generated_h
#error "WarriorGameplayAbility.generated.h already included, missing '#pragma once' in WarriorGameplayAbility.h"
#endif
#define KNIGHT_WarriorGameplayAbility_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_ApplyEffectSpecHandleToTarget); \
	DECLARE_FUNCTION(execGetWarriorAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetWarriorGameplayAbilityFromActorInfo); \
	DECLARE_FUNCTION(execGetPawnCombatComponentFromActorInfo);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorGameplayAbility(); \
	friend struct Z_Construct_UClass_UWarriorGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UWarriorGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(UWarriorGameplayAbility)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorGameplayAbility(UWarriorGameplayAbility&&); \
	UWarriorGameplayAbility(const UWarriorGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorGameplayAbility) \
	NO_API virtual ~UWarriorGameplayAbility();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_20_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UWarriorGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h


#define FOREACH_ENUM_EWARRIORABILITYACTIVATIONPOLICY(op) \
	op(EWarriorAbilityActivationPolicy::OnTriggered) \
	op(EWarriorAbilityActivationPolicy::OnGiven) 

enum class EWarriorAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EWarriorAbilityActivationPolicy> { enum { Value = true }; };
template<> KNIGHT_API UEnum* StaticEnum<EWarriorAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
