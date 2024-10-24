// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPatrolPos.h"

#include "MyGameInstance.h"
#include "Man/ManAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UBTTask_FindPatrolPos::UBTTask_FindPatrolPos()
{
	NodeName=TEXT("FindPatrolPos");
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result= Super::ExecuteTask(OwnerComp, NodeMemory);

	auto CurrentPawn=OwnerComp.GetAIOwner()->GetPawn();
	if(CurrentPawn==nullptr)
	{UE_LOG(LogTemp, Warning, TEXT("------------------위치안구해짐-------------------"));return EBTNodeResult::Failed;}

	UNavigationSystemV1* NavSystem=UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if(NavSystem==nullptr)
	{UE_LOG(LogTemp, Warning, TEXT("------------------위치안구해짐-------------------"));return EBTNodeResult::Failed;}
	
	FNavLocation RandomLocation;
	if(Cast<UMyGameInstance>(GetWorld()->GetGameInstance())->MapName=="house")
	{
		UE_LOG(LogTemp, Warning, TEXT("------------------산맵맞음-------------------"));
		if(NavSystem->GetRandomPointInNavigableRadius(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(),150.f,RandomLocation))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName(TEXT("PatrolPos")),RandomLocation.Location);
			return EBTNodeResult::Succeeded;
		}
	}

		if(NavSystem->GetRandomPointInNavigableRadius(OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(),600.f,RandomLocation))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName(TEXT("PatrolPos")),RandomLocation.Location);
			return EBTNodeResult::Succeeded;
		}
	UE_LOG(LogTemp, Warning, TEXT("------------------위치안구해짐-------------------"));
	return EBTNodeResult::Failed;
}
