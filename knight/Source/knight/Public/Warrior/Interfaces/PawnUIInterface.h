// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PawnUIInterface.generated.h"

class UPawnUIComponent;
class UHeroPawnUIComponent;
class UEnemyPawnUIComponent;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPawnUIInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class KNIGHT_API IPawnUIInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual UPawnUIComponent* GetPawnUIComponent() const = 0;
	virtual UHeroPawnUIComponent* GetHeroPawnUIComponent() const;
	virtual UEnemyPawnUIComponent* GetEnemyPawnUIComponent() const;
};
