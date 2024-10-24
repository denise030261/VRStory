// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ManBTTaskSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UManBTTaskSource : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UManBTTaskSource();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
