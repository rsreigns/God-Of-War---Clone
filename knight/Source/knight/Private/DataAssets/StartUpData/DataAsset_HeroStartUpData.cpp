// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "Warrior/AbilitySystem/WarriorAbilitySystemComponent.h"



void UDataAsset_HeroStartUpData::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel)
{
    Super::GiveToAbilitySystemComponent( ASCToGive, ApplyLevel);

    for (const FWarriorHeroAbilitySet& AbilitySet : HeroStartUpAbilitySet)
    {
        if (!AbilitySet.IsValid()) continue;
        FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
        AbilitySpec.SourceObject = ASCToGive->GetAvatarActor();
        AbilitySpec.Level = ApplyLevel;
        AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
        ASCToGive->GiveAbility(AbilitySpec);
    }
}
