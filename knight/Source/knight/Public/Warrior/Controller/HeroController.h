// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "HeroController.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHT_API AHeroController : public APlayerController , public IGenericTeamAgentInterface
{
	GENERATED_BODY()
public:
	AHeroController();
	//~ Begin IGenericTeamAgent Interface.
	virtual FGenericTeamId GetGenericTeamId() const override;
	//~ End IGenericTeamAgent Interface.
private:
	FGenericTeamId HeroTeamID;
};
