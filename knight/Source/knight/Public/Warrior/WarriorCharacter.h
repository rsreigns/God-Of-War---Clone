// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Warrior/Interfaces/PawnCombatInterface.h"
#include "Warrior/Interfaces/PawnUIInterface.h"
#include "WarriorCharacter.generated.h"

class UDataAsset_StartUpDataBase;
class UWarriorAbilitySystemComponent;
class UWarriorAttributeSet;
class UPawnUIComponent;
class UMotionWarpingComponent;

UCLASS()
class KNIGHT_API AWarriorCharacter : public ACharacter , public IAbilitySystemInterface, public IPawnCombatInterface, public IPawnUIInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWarriorCharacter();
	//~ Begin IAbilitySystem Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const  override;
	//~ End IAbilitySystem Interface
	//~ Begin IPawnCombat Interface.
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End IPawnCombat Interface.
	//~ Begin IPawnUI Interface.
	virtual UPawnUIComponent* GetPawnUIComponent() const override;
	//~ End IPawnUi Interface.
protected:
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UWarriorAbilitySystemComponent* WarriorAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UMotionWarpingComponent* MotionWarpingComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UWarriorAttributeSet* WarriorAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AbilitySystem")
	TSoftObjectPtr< UDataAsset_StartUpDataBase> CharacterStartupData;

public:	
	FORCEINLINE UWarriorAbilitySystemComponent* GetWarriorAbilitySystemComponent() const { return WarriorAbilitySystemComponent; }
	FORCEINLINE UWarriorAttributeSet* GetWarriorAttributeSet() const { return WarriorAttributeSet; }
};
