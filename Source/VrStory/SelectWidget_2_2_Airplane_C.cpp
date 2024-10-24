// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Airplane_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Airplane_C::NativeConstruct()
{
	Super::NativeConstruct();
	Fly_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Airplane_C::Spawn_Airplane);
}

void USelectWidget_2_2_Airplane_C::Spawn_Airplane()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_airplane;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("fly");
	}
	//동사 설정
	
	//'비행기가 날다' 생성
}
