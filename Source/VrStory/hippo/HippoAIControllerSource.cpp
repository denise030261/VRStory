// Fill out your copyright notice in the Description page of Project Settings.


#include "HippoAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
AHippoAIControllerSource::AHippoAIControllerSource()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/hippo/BT_Hippo.BT_Hippo'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/hippo/BD_Hippo.BD_Hippo'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void AHippoAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void AHippoAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
