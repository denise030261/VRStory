// Fill out your copyright notice in the Description page of Project Settings.


#include "LionSource.h"
#include "LionAIControllerSource.h"

// Sets default values
ALionSource::ALionSource()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AIControllerClass=ALionAIControllerSource::StaticClass();
	AutoPossessAI=EAutoPossessAI::PlacedInWorldOrSpawned;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("SkeletalMesh'/Game/CapstoneAnim/Anim_Mesh/Lion/SK_Lion_LOD0.SK_Lion_LOD0'"));
	if (SM.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM.Object);
	}
	//스켈레탈메시 적용

	GetMesh()->SetRelativeLocationAndRotation(
		FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));
	//캐릭터 지면위로 옮기고, 정면방향 조정
}

// Called when the game starts or when spawned
void ALionSource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALionSource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALionSource::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

