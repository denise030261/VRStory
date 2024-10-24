// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ElephantAnimSource.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UElephantAnimSource : public UAnimInstance
{
	GENERATED_BODY()
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Pawn, Meta=(AllowPrivateAccess=true))
	float Speed;
	
};
