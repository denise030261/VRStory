// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <mfapi.h>

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ManAnimSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UManAnimSource : public UAnimInstance
{
	GENERATED_BODY()

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Pawn, Meta=(AllowPrivateAccess=true))
	float Speed;
	
};
