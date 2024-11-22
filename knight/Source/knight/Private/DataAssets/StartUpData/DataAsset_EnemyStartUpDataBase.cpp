// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/StartUpData/DataAsset_EnemyStartUpDataBase.h"
#include "Warrior/AbilitySystem/Abilities/WarriorEnemyGameplayAbility.h"
#include "Warrior/AbilitySystem/WarriorAbilitySystemComponent.h"
void UDataAsset_EnemyStartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(ASCToGive, ApplyLevel);
	if (!EnemyCombatAbilities.IsEmpty())
	{

		for (const TSubclassOf<UWarriorEnemyGameplayAbility>& Ability : EnemyCombatAbilities)
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

}
