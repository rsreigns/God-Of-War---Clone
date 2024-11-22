// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName,PropertyName) \
        GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName,PropertyName) \
        GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
        GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
        GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
    UMyAttributeSet();

    /*virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;*/
 
    UPROPERTY(BlueprintReadOnly , ReplicatedUsing = OnRep_Health , Category = "Attributes")
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UMyAttributeSet, Health);

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Attributes")
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UMyAttributeSet, MaxHealth);

    UFUNCTION()
    virtual void OnRep_Health(const FGameplayAttributeData& OldValue);
    UFUNCTION()
    virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);

    virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
    virtual void PreAttributeChange(const  FGameplayAttribute& Attribute , float& NewValue) override;
    void AdjustAttributeForMaxChange(const FGameplayAttributeData& AffectedAttribute,
        const FGameplayAttributeData& MaxAttribute , float NewMaxValue , 
        const FGameplayAttribute& AffectedAttributeProperty) const;
};
