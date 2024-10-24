// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_3_Humanfood_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_3_Humanfood_C::NativeConstruct()
{
	Super::NativeConstruct();
	Eat_button->OnClicked.AddDynamic(this,&USelectWidget_3_3_Humanfood_C::Spawn_human_food_eat);
	Make_button->OnClicked.AddDynamic(this,&USelectWidget_3_3_Humanfood_C::Spawn_animal_food_make);
}

void USelectWidget_3_3_Humanfood_C::Spawn_human_food_eat()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_3_humanfood;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("eat");
	}
	//동사 설정
	
	//'~ 음식을 먹는다' 생성 (주어에 따라서 가변으로)
}

void USelectWidget_3_3_Humanfood_C::Spawn_animal_food_make()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_3_humanfood;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("make");
	}
	//동사 설정
	
	//'~ 음식을 만든다' 생성 (주어에 따라서 가변으로)
}
