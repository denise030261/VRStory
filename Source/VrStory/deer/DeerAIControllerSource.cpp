// Fill out your copyright notice in the Description page of Project Settings.


#include "DeerAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

ADeerAIControllerSource::ADeerAIControllerSource()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/deer/BT_Deer.BT_Deer'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/deer/BD_Deer.BD_Deer'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void ADeerAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void ADeerAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
