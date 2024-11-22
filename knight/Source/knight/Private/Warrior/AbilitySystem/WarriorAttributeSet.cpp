// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/AbilitySystem/WarriorAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "Warrior/WarriorFunctionLibrary.h"
#include "WarriorGameplayTags.h"
#include "Warrior/Interfaces/PawnUIInterface.h"
#include "Warrior/Components/UI/PawnUIComponent.h"
#include "Warrior/Components/UI/HeroPawnUIComponent.h"
#include "Warrior/Components/UI/EnemyPawnUIComponent.h"

UWarriorAttributeSet::UWarriorAttributeSet()
{
	InitAttackPower(1.f);
	InitCurrentHealth(1.f);
	InitCurrentRage(1.f);
	InitDefensePower(1.f);
	InitMaxHealth(1.f);
	InitMaxRage(1.f);
}

void UWarriorAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (!CachedPawnUIInterface.IsValid())
	{
		CachedPawnUIInterface = Cast<IPawnUIInterface>(Data.Target.GetAvatarActor());
	}
	UPawnUIComponent* PawnUIComponent = CachedPawnUIInterface->GetPawnUIComponent();
	checkf(PawnUIComponent, TEXT("Couldn't extract Pawn UI Component from %s"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel())

	if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
	{
		const float NewCurrentHealth = FMath::Clamp(GetCurrentHealth(), 0.f, GetMaxHealth()); 
		SetCurrentHealth(NewCurrentHealth);
		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth()/GetMaxHealth());
	}
	if (Data.EvaluatedData.Attribute == GetCurrentRageAttribute())
	{
		const float NewCurrentRage = FMath::Clamp(GetCurrentRage(), 0.f, GetMaxRage());
		SetCurrentRage(NewCurrentRage);

		if (UHeroPawnUIComponent* HeroPawnUIComponent = CachedPawnUIInterface->GetHeroPawnUIComponent())
		{
			HeroPawnUIComponent->OnCurrentRageChanged.Broadcast(GetCurrentRage() / GetMaxRage());
		}
	}
	if (Data.EvaluatedData.Attribute == GetDamageTakenAttribute())
	{
		const float OldHealth = GetCurrentHealth();
		const float DamageDone= GetDamageTaken();
		const float NewCurrentHealth = FMath::Clamp(OldHealth-DamageDone, 0.f, GetMaxHealth());
		SetCurrentHealth(NewCurrentHealth);

		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());

		if (GetCurrentHealth() == 0.f)
		{
			UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(), WarriorGameplayTags::Shared_Status_Dead);
		}
	}
}
