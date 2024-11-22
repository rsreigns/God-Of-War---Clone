// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/Widgets/WarriorWidgetBase.h"
#include "Warrior/Interfaces/PawnUIInterface.h"
#include "Warrior/Components/UI/HeroPawnUIComponent.h"
#include "Warrior/Components/UI/EnemyPawnUIComponent.h"

void UWarriorWidgetBase::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (IPawnUIInterface* OwningPawnUIInterface = Cast<IPawnUIInterface>(GetOwningPlayerPawn()))
	{
		if (UHeroPawnUIComponent* HeroUIComponent = OwningPawnUIInterface->GetHeroPawnUIComponent())
		{
			BP_OnOwningHeroUIComponentInitialized(HeroUIComponent);
		}
	}
}



void UWarriorWidgetBase::InitEnemyCreatedWidget(AActor* OwningEnemyActor)
{
	if (IPawnUIInterface* OwningPawnUIInterface = Cast<IPawnUIInterface>(OwningEnemyActor))
	{
		UEnemyPawnUIComponent* EnemyUIComponent = OwningPawnUIInterface->GetEnemyPawnUIComponent();
		checkf(EnemyUIComponent, TEXT("Failed to extract Enemy UI Component in Widget Base for %s"),
			*OwningEnemyActor->GetActorNameOrLabel());
		BP_OnOwningEnemyUIComponentInitialized(EnemyUIComponent);
	}
}

