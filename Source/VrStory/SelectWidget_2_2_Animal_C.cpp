// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Animal_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Animal_C::NativeConstruct()
{
	Super::NativeConstruct();

	Run_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Animal_C::Spawn_Animal_Run);
	Jump_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Animal_C::Spawn_Animal_Jump);
	Sit_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Animal_C::Spawn_Animal_Sit);
	Rest_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Animal_C::Spawn_Animal_Rest);
	Dead_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Animal_C::Spawn_Animal_Dead);
}

void USelectWidget_2_2_Animal_C::Spawn_Animal_Run()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("run");
	}
	//동사 설정
	
	//'~ 달리다' 생성 (주어에 따라서 가변으로)
}

void USelectWidget_2_2_Animal_C::Spawn_Animal_Jump()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("jump");
	}
	//동사 설정
	
	//'~ 점프하다' 생성 (주어에 따라서 가변으로)
}

void USelectWidget_2_2_Animal_C::Spawn_Animal_Sit()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("sit");
	}
	//동사 설정
	
	//'~ 앉다' 생성 (주어에 따라서 가변으로)
}

void USelectWidget_2_2_Animal_C::Spawn_Animal_Rest()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("rest");
	}
	//동사 설정
	
	//'~ 쉬다' 생성 (주어에 따라서 가변으로)
}

void USelectWidget_2_2_Animal_C::Spawn_Animal_Dead()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("dead");
	}
	//동사 설정
	
	//'~ 죽다' 생성 (주어에 따라서 가변으로)
}

