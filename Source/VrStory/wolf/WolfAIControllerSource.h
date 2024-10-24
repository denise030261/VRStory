// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WolfAIControllerSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API AWolfAIControllerSource : public AAIController
{
	GENERATED_BODY()
public:
	AWolfAIControllerSource();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
	UPROPERTY()
	class UBehaviorTree* BehaviorTree;

	UPROPERTY()
	class UBlackboardData* BlackboardData;
};
