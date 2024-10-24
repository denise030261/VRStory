// Fill out your copyright notice in the Description page of Project Settings.


#include "ZebraSource.h"
#include "ZebraAIControllerSource.h"
// Sets default values
AZebraSource::AZebraSource()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass=AZebraAIControllerSource::StaticClass();
	AutoPossessAI=EAutoPossessAI::PlacedInWorldOrSpawned;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("SkeletalMesh'/Game/CapstoneAnim/Anim_Mesh/Zebra/SK_Zebra.SK_Zebra'"));
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
void AZebraSource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZebraSource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AZebraSource::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

