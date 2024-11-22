// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "Warrior/AnimInstances/Hero/WarriorHeroAnimInstance.h"

UWarriorHeroAnimInstance* UWarriorHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
    return Cast< UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
