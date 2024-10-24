// Fill out your copyright notice in the Description page of Project Settings.


#include "ManAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AManAIControllerSource::AManAIControllerSource()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/man/BT_Man.BT_Man'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/man/BD_Man.BD_Man'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void AManAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
	
}

void AManAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}

