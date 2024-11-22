// Fill out your copyright notice in the Description page of Project Settings.


//#include "RPG/RPGCharacter.h"
#include "RPGCharacter.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPGAttributeSet.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ARPGCharacter::ARPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<URPGAttributeSet>(TEXT("AttributeSet"));

}
UAbilitySystemComponent* ARPGCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void ARPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	initializeAttributes();

	if (AbilitySystemComponent && AttributeSet)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentHealthAttribute()).AddUObject(this, &ARPGCharacter::handleHealthChange);
	}
}
void ARPGCharacter::initializeAttributes()
{
	if (AbilitySystemComponent && AttributeSet)
	{
		AttributeSet->SetCurrentHealth(100.0f);
		AttributeSet->SetMaxHealth(100.0f);
	}
}
void ARPGCharacter::handleHealthChange(const FOnAttributeChangeData& Data)
{
	float NewHealth = Data.NewValue;
	float OldHealth = Data.OldValue;
	float DeltaValue = NewHealth - OldHealth;
	OnHealthChanged(DeltaValue, FGameplayTagContainer());
}

void ARPGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ARPGCharacter, AbilitySystemComponent);
	DOREPLIFETIME(ARPGCharacter, AttributeSet);
}

