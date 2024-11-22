// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/AnimInstances/WarriorBaseAnimInstance.h"
#include "Warrior/WarriorFunctionLibrary.h"

bool UWarriorBaseAnimInstance::DoesOwnerHaveTag(FGameplayTag TagToCheck) const
{
    if (APawn* OwningPawn = Cast<APawn>(TryGetPawnOwner()))
    {
        return UWarriorFunctionLibrary::NativeDoesActorHaveTag(OwningPawn, TagToCheck);
    }
    return false;
}
