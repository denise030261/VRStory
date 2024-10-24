// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Crow_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Crow_C::NativeConstruct()
{
	Super::NativeConstruct();
	Fly_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Crow_C::Spawn_crow_fly);
	Dead_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Crow_C::Spawn_crow_dead);
}

void USelectWidget_2_2_Crow_C::Spawn_crow_fly()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_crow;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("fly");
	}
	//동사 설정
	
	//'까마귀가 날다' 생성 
}

void USelectWidget_2_2_Crow_C::Spawn_crow_dead()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_crow;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("dead");
	}
	//동사 설정
	
	//'까마귀가 죽다' 생성 
}
