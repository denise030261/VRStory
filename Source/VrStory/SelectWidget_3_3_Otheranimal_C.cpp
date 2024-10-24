// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_3_Otheranimal_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_3_Otheranimal_C::NativeConstruct()
{
	Super::NativeConstruct();
	Fight_button->OnClicked.AddDynamic(this,&USelectWidget_3_3_Otheranimal_C::Spawn_animal_animal_fight);
}

void USelectWidget_3_3_Otheranimal_C::Spawn_animal_animal_fight()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("fight");
	}
	//동사 설정
	
	//'~가 ~와 싸운다' 생성 (주어,목적어에 따라서 가변으로)
}
