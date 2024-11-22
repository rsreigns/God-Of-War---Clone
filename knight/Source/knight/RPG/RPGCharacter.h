// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "RPGAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "RPGCharacter.generated.h"


UCLASS()
class KNIGHT_API ARPGCharacter : public ACharacter , public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARPGCharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UFUNCTION(BlueprintImplementableEvent,Category="Health")
	void OnHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Abilities",meta= (AllowPrivateAccess="true"),Replicated)
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"),Replicated)
	URPGAttributeSet* AttributeSet;

	void initializeAttributes();



private:
	void handleHealthChange(const FOnAttributeChangeData& Data);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


};
