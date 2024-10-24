// Fill out your copyright notice in the Description page of Project Settings.


#include "ZebraAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AZebraAIControllerSource::AZebraAIControllerSource()
{
	
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/zebra/BT_Zebra.BT_Zebra'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/zebra/BD_Zebra.BD_Zebra'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void AZebraAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void AZebraAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
