// Fill out your copyright notice in the Description page of Project Settings.


#include "ManBTTaskSource.h"
#include "ManAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

UManBTTaskSource::UManBTTaskSource()
{
	NodeName=TEXT("FindPatrolPos");
}

EBTNodeResult::Type UManBTTaskSource::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result= Super::ExecuteTask(OwnerComp, NodeMemory);

	auto CurrentPawn=OwnerComp.GetAIOwner()->GetPawn();
	if(CurrentPawn==nullptr)
		return EBTNodeResult::Failed;

	UNavigationSystemV1* NavSystem=UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if(NavSystem==nullptr)
		return EBTNodeResult::Failed;
	
	FNavLocation RandomLocation;
	if(NavSystem->GetRandomPointInNavigableRadius(FVector::ZeroVector,500.f,RandomLocation))
	{
		 OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName(TEXT("PatrolPos")),RandomLocation.Location);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
