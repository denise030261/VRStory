// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Car_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Car_C::NativeConstruct()
{
	Super::NativeConstruct();
	Moves_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Car_C::Spawn_car_moves);
}

void USelectWidget_2_2_Car_C::Spawn_car_moves()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_car;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("moves");
	}
	//동사 설정
	
	//'차가 움직이다' 생성 
}
