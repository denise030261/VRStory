// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WomanAIControllerSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API AWomanAIControllerSource : public AAIController
{
	GENERATED_BODY()
public:
	AWomanAIControllerSource();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
	UPROPERTY()
	class UBehaviorTree* BehaviorTree;

	UPROPERTY()
	class UBlackboardData* BlackboardData;
};
