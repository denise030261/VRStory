// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_3_Animalfood_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_3_Animalfood_C::NativeConstruct()
{
	Super::NativeConstruct();
	Eat_button->OnClicked.AddDynamic(this,&USelectWidget_3_3_Animalfood_C::Spawn_animal_food_eat);
}

void USelectWidget_3_3_Animalfood_C::Spawn_animal_food_eat()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_3_animalfood;
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
