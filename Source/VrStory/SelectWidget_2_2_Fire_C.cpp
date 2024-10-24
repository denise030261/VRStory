// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_2_2_Fire_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_2_2_Fire_C::NativeConstruct()
{
	Super::NativeConstruct();
	BreaksOut_button->OnClicked.AddDynamic(this,&USelectWidget_2_2_Fire_C::Spawn_fire_breakout);
}

void USelectWidget_2_2_Fire_C::Spawn_fire_breakout()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class2_2_fire;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("breakout");
	}
	//동사 설정
	
	//'불이 나다' 생성 
}
