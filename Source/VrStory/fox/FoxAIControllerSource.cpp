// Fill out your copyright notice in the Description page of Project Settings.


#include "FoxAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AFoxAIControllerSource::AFoxAIControllerSource()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/fox/BT_Fox.BT_Fox'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/fox/BD_Fox.BD_Fox'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void AFoxAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void AFoxAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
