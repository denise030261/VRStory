// Fill out your copyright notice in the Description page of Project Settings.


#include "WomanAnimSource.h"
#include "GameFramework/Character.h"
void UWomanAnimSource::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn=TryGetPawnOwner();
	if(IsValid(Pawn))
	{
		Speed=Pawn->GetVelocity().Size();
	}
}
