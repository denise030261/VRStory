// Fill out your copyright notice in the Description page of Project Settings.


#include "WolfAnimSource.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
void UWolfAnimSource::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn=TryGetPawnOwner();
	if(IsValid(Pawn))
	{
		Speed=Pawn->GetVelocity().Size();
	}
}
