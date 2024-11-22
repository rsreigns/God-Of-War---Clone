// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "Warrior/AbilitySystem/WarriorAbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel)
{
	check(ASCToGive);
	GrantAbilities(GivenAbilities, ASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, ASCToGive, ApplyLevel);
	if (!StartupGameplayEffects.IsEmpty())
	{
		for (TSubclassOf<UGameplayEffect>& GameplayEffectClass : StartupGameplayEffects)
		{
			if (!GameplayEffectClass) continue;
			UGameplayEffect* Effect = GameplayEffectClass->GetDefaultObject<UGameplayEffect>();
			ASCToGive->ApplyGameplayEffectToSelf(Effect, ApplyLevel, ASCToGive->MakeEffectContext());
		}
	}
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray<TSubclassOf<UWarriorGameplayAbility>>& InAbilitiesToGrant,
	UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGrant.IsEmpty())
	{
		return;
	}
	for (const TSubclassOf<UWarriorGameplayAbility>& Ability : InAbilitiesToGrant)
	{
		if (!Ability)
		{
			continue;
		}

		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = ASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;

		ASCToGive->GiveAbility(AbilitySpec);
	}

}
