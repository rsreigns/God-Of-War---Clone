// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/Items/Weapons/WarriorHeroWeapon.h"
#include "GameplayAbilitySpecHandle.h"

void AWarriorHeroWeapon::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandle)
{
	GrantedAbilitySpecHandle = InSpecHandle;
}

TArray<FGameplayAbilitySpecHandle> AWarriorHeroWeapon::GetGrantedAbilitySpecHandles() const
{
	return GrantedAbilitySpecHandle;
}
