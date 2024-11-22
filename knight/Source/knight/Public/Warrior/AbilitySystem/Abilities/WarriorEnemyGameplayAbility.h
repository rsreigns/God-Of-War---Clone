// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "WarriorEnemyGameplayAbility.generated.h"
class AWarriorEnemyCharacter;
class UEnemyCombatComponent;
/**
 * 
 */
UCLASS()
class KNIGHT_API UWarriorEnemyGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure,BlueprintCallable)
	AWarriorEnemyCharacter* GetEnemyCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, BlueprintCallable)
	UEnemyCombatComponent* GetEnemyCombatComponentFromActorInfo();

	UFUNCTION(BlueprintPure, BlueprintCallable)
	FGameplayEffectSpecHandle MakeEnemyDamageEffectSpecHandle
	(TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& FInDamageScalableFloat);

protected:
	TWeakObjectPtr< AWarriorEnemyCharacter> CachedEnemyCharacter;
};
