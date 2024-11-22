// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/Interfaces/PawnUIInterface.h"

// Add default functionality here for any IPawnUIInterface functions that are not pure virtual.

UHeroPawnUIComponent* IPawnUIInterface::GetHeroPawnUIComponent() const
{
	return nullptr;
}

UEnemyPawnUIComponent* IPawnUIInterface::GetEnemyPawnUIComponent() const
{
	return nullptr;
}
