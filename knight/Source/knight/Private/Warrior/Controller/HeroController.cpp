// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/Controller/HeroController.h"

AHeroController::AHeroController()
{
    HeroTeamID = FGenericTeamId(0);
}

FGenericTeamId AHeroController::GetGenericTeamId() const
{
    return HeroTeamID;
}
