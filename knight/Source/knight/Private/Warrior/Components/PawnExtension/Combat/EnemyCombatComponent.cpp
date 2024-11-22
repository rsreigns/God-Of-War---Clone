// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/Components/PawnExtension/Combat/EnemyCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WarriorGameplayTags.h"
void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}
	OverlappedActors.AddUnique(HitActor);
	// Check if blocking 
	bool bIsValidBlock = false;
	const bool bIsPlayerBlocking = false;
	const bool bIsMyAttackBlockable = false;
	if (bIsPlayerBlocking && !bIsMyAttackBlockable)
	{
		// check if block is valid
	}
	FGameplayEventData EventData;
	EventData.Instigator = GetOwningPawn();
	EventData.Target = HitActor;
	if (bIsValidBlock)
	{
		// Player blocked successfully
	}
	else
	{
		//Apply damage
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor
		(GetOwningPawn(), WarriorGameplayTags::Shared_Event_MeleeHit,EventData);
	}
}
