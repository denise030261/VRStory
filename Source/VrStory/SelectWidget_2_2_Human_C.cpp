// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Human_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Human_C::NativeConstruct()
{
	Super::NativeConstruct();
	Jump_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Human_C::Spawn_human_jump);
	Hi_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Human_C::Spawn_human_hi);
	Sit_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Human_C::Spawn_human_sit);
}

void USelectWidget_2_2_Human_C::Spawn_human_jump()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("jump");
	}
	//동사 설정

	//GameMode->ManSpawn();
	//'(남자/여자)가 점프한다' 생성 
}

void USelectWidget_2_2_Human_C::Spawn_human_hi()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("hi");
	}
	//동사 설정
	
	//'(남자/여자)가 인사한다' 생성 
}

void USelectWidget_2_2_Human_C::Spawn_human_sit()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("sit");
	}
	//동사 설정
	
	//'(남자/여자)가 앉는다' 생성 
}
