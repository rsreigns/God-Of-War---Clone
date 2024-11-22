// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RotateToFaceTarget.generated.h"


struct FRotateToFaceTargetTaskMemory  // To load instance last update value
{
	TWeakObjectPtr<APawn> OwningPawn;
	TWeakObjectPtr<AActor> TargetActor;
	bool IsValid() const
	{
		return OwningPawn.IsValid() && TargetActor.IsValid();
	}
	void Reset()
	{
		OwningPawn.Reset();
		TargetActor.Reset();
	}
};
/**
 * 
 */
UCLASS()
class KNIGHT_API UBTTask_RotateToFaceTarget : public UBTTaskNode
{
	GENERATED_BODY()
	// Start BTNode Interface
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override ;
	virtual uint16 GetInstanceMemorySize() const override;
	virtual FString GetStaticDescription() const override;
	// End BTNode Interface 
	
	
	//Start BTTaskNode Interaface
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	//End BTTaskNode Interface
	UBTTask_RotateToFaceTarget();
	UPROPERTY(EditAnywhere, Category= "FaceTarget")
	float AnglePrecision;

	UPROPERTY(EditAnywhere, Category = "FaceTarget")
	float RotationInterpSpeed;

	UPROPERTY(EditAnywhere, Category = "FaceTarget")
	FBlackboardKeySelector InTargetToFaceKey;

	
};
