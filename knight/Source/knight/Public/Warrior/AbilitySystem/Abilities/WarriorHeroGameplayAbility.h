// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "WarriorHeroGameplayAbility.generated.h"
class AHeroCharacter;
class AHeroController;
class AHeroCombatComponent;
UCLASS()
class KNIGHT_API UWarriorHeroGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Warrior | Ability")
	AHeroCharacter* GetHeroActorFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior | Ability")
	AHeroController* GetHeroControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior | Ability")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior | Ability")
	FGameplayEffectSpecHandle MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, float WeaponBaseDamage,
		FGameplayTag InCurrentAttackTypeTag, int32 InCurrentComboCount);

private:
	TWeakObjectPtr<AHeroCharacter> CachedWarriorHeroCharacter;
	TWeakObjectPtr<AHeroController> CachedWarriorHeroController;
	TWeakObjectPtr<UHeroCombatComponent> CachedWarriorHeroCombatComponent;
	
};
