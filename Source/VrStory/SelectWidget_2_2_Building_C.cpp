// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Building_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Building_C::NativeConstruct()
{
	Super::NativeConstruct();
	shakes_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Building_C::Spawn_building_shakes);
}

void USelectWidget_2_2_Building_C::Spawn_building_shakes()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_building;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("shakes");
	}
	//동사 설정
	
	//'건물(방)이 흔들리다' 생성 
}
