// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/WarriorTypes/WarriorStructTypes.h"
#include "Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"

bool FWarriorHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
