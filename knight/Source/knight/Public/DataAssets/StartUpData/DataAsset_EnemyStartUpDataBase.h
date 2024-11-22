// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAsset_EnemyStartUpDataBase.generated.h"
class UWarriorEnemyGameplayAbility;
/**
 * 
 */
UCLASS()
class KNIGHT_API UDataAsset_EnemyStartUpDataBase : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()
	

private:
	UPROPERTY(EditDefaultsOnly,Category="StartUp Data")
	TArray<TSubclassOf<UWarriorEnemyGameplayAbility>> EnemyCombatAbilities;

public:
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel = 1) override;
};
