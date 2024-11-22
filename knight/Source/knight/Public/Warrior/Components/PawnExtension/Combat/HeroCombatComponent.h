// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/Components/PawnExtension/PawnCombatComponent.h"
#include "HeroCombatComponent.generated.h"
class AWarriorHeroWeapon;
/**
 * 
 */
UCLASS()
class KNIGHT_API UHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Warrior | Combat")
	AWarriorHeroWeapon* GetHeroCarriedWeaponByTag(FGameplayTag InGameplayTag) const;

	UFUNCTION(BlueprintCallable, Category = "Warrior | Combat")
	AWarriorHeroWeapon* GetHeroCurrentEquippedWeapon() const;

	UFUNCTION(BlueprintCallable, Category = "Warrior | Combat")
	float GetHeroCurrentWeaponDamageAtLevel(float InLevel) const;

	virtual void OnHitTargetActor(AActor* HitActor) override;
	virtual void OnWeaponPulledFromActor(AActor* InteractedActor) override;
};
