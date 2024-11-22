// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "knight/knight.h"
#include "MyGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UMyGameplayAbility();

	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Abilities")
	EAbilityInputID AbilityInputID{ EAbilityInputID::None };

};
