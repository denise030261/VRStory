// Fill out your copyright notice in the Description page of Project Settings.


#include "PigAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

APigAIControllerSource::APigAIControllerSource()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/pig/BT_Pig.BT_Pig'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/pig/BD_Pig.BD_Pig'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void APigAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void APigAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
