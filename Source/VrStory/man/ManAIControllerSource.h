// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ManAIControllerSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API AManAIControllerSource : public AAIController
{
	GENERATED_BODY()
public:
	AManAIControllerSource();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
	UPROPERTY()
	class UBehaviorTree* BehaviorTree;

	UPROPERTY()
	class UBlackboardData* BlackboardData;
};
