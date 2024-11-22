// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAssets/Input/DataAsset_Config.h"
#include "Warrior/WarriorTypes/WarriorStructTypes.h"
#include "DataAsset_HeroStartUpData.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHT_API UDataAsset_HeroStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()
private: 
	UPROPERTY(EditDefaultsOnly, Category = "StartUp Data",meta = (TitleProperty = "InputTag"))
	TArray<FWarriorHeroAbilitySet> HeroStartUpAbilitySet;

	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* ASCToGive, int32 ApplyLevel = 1) override;
};
