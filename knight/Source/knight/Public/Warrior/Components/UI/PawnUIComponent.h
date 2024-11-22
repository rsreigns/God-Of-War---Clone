// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/PawnExtensionComponentBase.h"
#include "PawnUIComponent.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPercentChangedDelegate, float, NewPercent);
/**
 * 
 */
UCLASS()
class KNIGHT_API UPawnUIComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnPercentChangedDelegate OnCurrentHealthChanged;
};