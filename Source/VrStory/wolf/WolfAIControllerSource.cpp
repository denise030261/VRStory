// Fill out your copyright notice in the Description page of Project Settings.


#include "WolfAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AWolfAIControllerSource::AWolfAIControllerSource()
{
    static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/wolf/BT_Wolf.BT_Wolf'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/wolf/BD_Wolf.BD_Wolf'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void AWolfAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void AWolfAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
