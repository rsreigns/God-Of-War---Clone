// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/Components/UI/PawnUIComponent.h"
#include "HeroPawnUIComponent.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipppedWeaponChanged, TSoftObjectPtr<UTexture2D>, SoftWeaponIcon);
/**
 * 
 */
UCLASS()
class KNIGHT_API UHeroPawnUIComponent : public UPawnUIComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnPercentChangedDelegate OnCurrentRageChanged;

	UPROPERTY(BlueprintCallable,BlueprintAssignable)
	FOnEquipppedWeaponChanged OnEquippedWeaponChanged;

};
