// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"
class UWarriorGameplayAbility;
class UWarriorAbilitySystemComponent;
class UGameplayEffect;
/**
 * 
 */
UCLASS()
class KNIGHT_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel=1 );
protected:

	UPROPERTY(EditDefaultsOnly, Category = "StartUp Data")
	TArray <TSubclassOf<UWarriorGameplayAbility>> GivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUp Data")
	TArray <TSubclassOf<UWarriorGameplayAbility>> ReactiveAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUp Data")
	TArray<TSubclassOf<UGameplayEffect>> StartupGameplayEffects;


	void GrantAbilities(const TArray <TSubclassOf<UWarriorGameplayAbility>>& InAbilitiesToGrant,
		UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel);
	
};
