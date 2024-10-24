// Fill out your copyright notice in the Description page of Project Settings.


#include "RhinoAIControllerSource.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
ARhinoAIControllerSource::ARhinoAIControllerSource()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("BehaviorTree'/Game/CapstoneAnim/blueprint/rhino/BT_Rhino.BT_Rhino'"));
	if(BT.Succeeded())
	{
		BehaviorTree=BT.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BD(TEXT("BlackboardData'/Game/CapstoneAnim/blueprint/rhino/BD_Rhino.BD_Rhino'"));
	if(BD.Succeeded())
	{
		BlackboardData=BD.Object;
	}
}

void ARhinoAIControllerSource::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if(UseBlackboard(BlackboardData,Blackboard))
	{
		if(RunBehaviorTree(BehaviorTree))
		{
			
		}
	}
}

void ARhinoAIControllerSource::OnUnPossess()
{
	Super::OnUnPossess();
}
