// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior/WarriorCharacter.h"
#include "WarriorDebugHelper.h"
#include "GameplayTagContainer.h"
#include "HeroCharacter.generated.h"
class USpringArmComponent;
class UCameraComponent;
class UDataAsset_Config;
struct FInputActionValue;
class UHeroCombatComponent;
class UHeroPawnUIComponent;
/**
 * 
 */
UCLASS()
class KNIGHT_API AHeroCharacter : public AWarriorCharacter
{
	GENERATED_BODY()
public:
	AHeroCharacter();
	//~ Begin IPawnCombat Interface.
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End IPawnCombat Interface.
	//~ Begin IPawnUI Interface.
	virtual UPawnUIComponent* GetPawnUIComponent() const override;
	virtual UHeroPawnUIComponent* GetHeroPawnUIComponent() const override;
	//~ End IPawnUi Interface.

protected: 
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;
private:
#pragma region Components 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent * FollowCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UHeroCombatComponent* HeroCombatComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UHeroPawnUIComponent* HeroPawnUIComponent;



#pragma endregion


#pragma region Inputs

		UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData", meta = (AllowPrivateAccess = "true"))
		UDataAsset_Config* InputConfigDataAsset;

		void Input_Move(const FInputActionValue& InputActionValue);
		void Input_Look(const FInputActionValue& InputActionValue);
		void Input_AbilityInputPressed(FGameplayTag InInputTag);
		void Input_AbilityInputReleased(FGameplayTag InInputTag);

#pragma endregion
public:
	FORCEINLINE UHeroCombatComponent* GetHeroCombatComponent() const { return HeroCombatComponent;}


};

