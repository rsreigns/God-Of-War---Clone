// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"
class AWarriorWeaponBase;
UENUM()
enum class EWarriorCollisionType:uint8
{
	CurrentEquippedWeapon,
	LeftHand,
	RightHand
};
/**
 * 
 */
UCLASS()
class KNIGHT_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable,Category="Warrior | Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister,
		AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category = "Warrior | Combat")
	AWarriorWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet)const;

	UFUNCTION(BlueprintCallable, Category = "Warrior | Combat")
	AWarriorWeaponBase* GetCharacterCurrentEquippedWeapon() const;

	UPROPERTY(BlueprintReadWrite,Category = "Warrior | Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "Warrior | Combat")
	void ToggleWeaponCollision(bool bShouldEnableCollision, 
		EWarriorCollisionType CollisionType = EWarriorCollisionType::CurrentEquippedWeapon);

	virtual void OnHitTargetActor(AActor* HitActor);
	virtual void OnWeaponPulledFromActor(AActor* InteractedActor);

	TArray<AActor*> OverlappedActors;

private :
	TMap < FGameplayTag, AWarriorWeaponBase*> CharacterCarriedWeaponMap;
};
