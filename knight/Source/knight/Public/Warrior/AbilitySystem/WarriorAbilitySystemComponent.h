// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "Warrior/WarriorTypes/WarriorStructTypes.h"
#include "WarriorAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHT_API UWarriorAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);
	
	UFUNCTION(BlueprintCallable,Category = "Warrior | Ability", meta = (ApplyLevel="1"))
	void GrantHeroWeaponAbilities(const TArray<FWarriorHeroAbilitySet>& InDefaultWeaponAbilities,
		TArray< FGameplayAbilitySpecHandle>& OutAbilitySpecHandle,int32 ApplyLevel);

	UFUNCTION(BlueprintCallable, Category = "Warrior | Ability")
	void RemoveGrantedHeroWeaponAbilities(UPARAM(ref)TArray< FGameplayAbilitySpecHandle>& InSpecHandleToRemove);

	UFUNCTION(BlueprintCallable, Category = "Warrior | Ability")
	bool TryActivateAbilityByTag(FGameplayTag AbilityTagToActivate);
};
