// Fill out your copyright notice in the Description page of Project Settings.


#include "CrowAnimSource.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
void UCrowAnimSource::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn=TryGetPawnOwner();
	if(IsValid(Pawn))
	{
		Speed=Pawn->GetVelocity().Size();
	}
}
