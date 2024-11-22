// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/WarriorCharacter.h"
#include "WarriorEnemyCharacter.generated.h"
class  UEnemyCombatComponent;
class UEnemyPawnUIComponent;
class UWidgetComponent;
/**
 * 
 */
UCLASS()
class KNIGHT_API AWarriorEnemyCharacter : public AWarriorCharacter
{
	GENERATED_BODY()
public:
	AWarriorEnemyCharacter();

	//~ Begin IPawnCombat Interface.
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End IPawnCombat Interface.

	//~ Begin IPawnUI Interface.
	virtual UPawnUIComponent* GetPawnUIComponent() const override;
	virtual UEnemyPawnUIComponent* GetEnemyPawnUIComponent() const override;
	//~ End IPawnUi Interface.

protected: 
	virtual void BeginPlay() override;
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(BlueprintReadOnly,Category="CombatComponent")
	UEnemyCombatComponent* EnemyCombatComponent;

	UPROPERTY(BlueprintReadOnly, Category = "EnemyPawnUIComponent")
	UEnemyPawnUIComponent* EnemyPawnUIComponent;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "HealthWidgetComponent")
	UWidgetComponent* HealthWidgetComponent;

	UFUNCTION()
	void InitEnemyStartupData();

public:
	FORCEINLINE  UEnemyCombatComponent* GetEnemyCombatComponent() const { return  EnemyCombatComponent; }

	
};
