// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior/AbilitySystem/GEExecCalc/GEExecCalc_DamageTaken.h"
#include "Warrior/AbilitySystem/WarriorAttributeSet.h"
#include "WarriorGameplayTags.h"

struct FWarriorDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(AttackPower);
	DECLARE_ATTRIBUTE_CAPTUREDEF(DefensePower);
	DECLARE_ATTRIBUTE_CAPTUREDEF(DamageTaken);
	FWarriorDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, AttackPower, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, DefensePower, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWarriorAttributeSet, DamageTaken, Target, false);
	}
};
static const FWarriorDamageCapture& GetWarriorDamageCapture()
{
	static FWarriorDamageCapture WarriorDamageCapture;
	return	WarriorDamageCapture;
}

UGEExecCalc_DamageTaken::UGEExecCalc_DamageTaken()
{
	/**                                       Slow Version                                                **/
	//FProperty* AttackPowerProperty = FindFieldChecked < FProperty(UWarriorAttributeSet::StaticClass(),
	//	GET_MEMBER_NAME_CHECKED(UWarriorAttributeSet,AttackPower));

	//FGameplayEffectAttributeCaptureDefinition AttackPowerCaptureDefinition(
	//	AttackPowerProperty,
	//	EGameplayEffectAttributeCaptureSource::Source,
	//	false
	//);
	//RelevantAttributesToCapture.Add(AttackPowerCaptureDefinition);

	RelevantAttributesToCapture.Add(GetWarriorDamageCapture().AttackPowerDef);
	RelevantAttributesToCapture.Add(GetWarriorDamageCapture().DefensePowerDef);
	RelevantAttributesToCapture.Add(GetWarriorDamageCapture().DamageTakenDef);
}

void UGEExecCalc_DamageTaken::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	FGameplayEffectSpec EffectSpec = ExecutionParams.GetOwningSpec();
	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = EffectSpec.CapturedSourceTags.GetAggregatedTags();
	EvaluateParameters.TargetTags = EffectSpec.CapturedTargetTags.GetAggregatedTags();

	float SourceAttackPower = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude
    	(GetWarriorDamageCapture().AttackPowerDef, 
		EvaluateParameters,
		SourceAttackPower);
	float BaseDamage = 0.f;
	int32 UsedLightAttackCombo = 0;
	int32 UsedHeavyAttackCombo = 0;
	for (const TPair<FGameplayTag, float>& TagMagnitude : EffectSpec.SetByCallerTagMagnitudes)
	{
		if (TagMagnitude.Key.MatchesTagExact(WarriorGameplayTags::Shared_SetByCaller_BaseDamage))
		{
			BaseDamage = TagMagnitude.Value;
		}
		if (TagMagnitude.Key.MatchesTagExact(WarriorGameplayTags::Player_SetByCaller_AttackType_Light))
		{
			UsedLightAttackCombo = TagMagnitude.Value;
		}
		if (TagMagnitude.Key.MatchesTagExact(WarriorGameplayTags::Player_SetByCaller_AttackType_Heavy))
		{
			UsedHeavyAttackCombo = TagMagnitude.Value;
		}
	}

	float TargetDefensePower = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude
	(GetWarriorDamageCapture().DefensePowerDef,
		EvaluateParameters,
		TargetDefensePower);

	if (UsedLightAttackCombo != 0)
	{
		const float DamageIncreasePercentLight = (UsedLightAttackCombo - 1) * 0.05f + 1.f;
		BaseDamage *= DamageIncreasePercentLight;
	}
	if (UsedHeavyAttackCombo != 0)
	{
		const float DamageIncreasePercentHeavy = UsedHeavyAttackCombo * 0.15f + 1.f;
		BaseDamage *= DamageIncreasePercentHeavy;
	}
	const float FinalDamageDone = BaseDamage * SourceAttackPower / TargetDefensePower;

	if (FinalDamageDone > 0)
	{
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData
		(GetWarriorDamageCapture().DamageTakenProperty,
			EGameplayModOp::Override,
			FinalDamageDone));
	}
}

