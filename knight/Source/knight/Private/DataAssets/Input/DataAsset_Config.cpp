// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/Input/DataAsset_Config.h"

UInputAction* UDataAsset_Config::FindNativeInputActionByTag(const FGameplayTag& InInputTag) const
{
	for (const FWarriorInputActionConfig& InputActionConfig : NativeInputActions)
	{
		if (InputActionConfig.InputTag == InInputTag && InputActionConfig.InputAction)
		{
			return InputActionConfig.InputAction;
		}
	}
	return nullptr;
}

