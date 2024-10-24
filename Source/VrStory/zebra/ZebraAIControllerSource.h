// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ZebraAIControllerSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API AZebraAIControllerSource : public AAIController
{
	GENERATED_BODY()
public:
	AZebraAIControllerSource();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
	UPROPERTY()
	class UBehaviorTree* BehaviorTree;

	UPROPERTY()
	class UBlackboardData* BlackboardData;
};
