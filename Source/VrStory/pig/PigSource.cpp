// Fill out your copyright notice in the Description page of Project Settings.


#include "PigSource.h"
#include "PigAIControllerSource.h"
// Sets default values
APigSource::APigSource()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AIControllerClass=APigAIControllerSource::StaticClass();
	AutoPossessAI=EAutoPossessAI::PlacedInWorldOrSpawned;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("SkeletalMesh'/Game/CapstoneAnim/Anim_Mesh/Pig/SK_Pig.SK_Pig'"));
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
void APigSource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APigSource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APigSource::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

