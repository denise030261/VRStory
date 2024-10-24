// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_4_4_Stuff_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_4_4_Stuff_C::NativeConstruct()
{
	Super::NativeConstruct();
	Give_button->OnClicked.AddDynamic(this,&USelectWidget_4_4_Stuff_C::Spawn_human_human_stuff_give);
}

void USelectWidget_4_4_Stuff_C::Spawn_human_human_stuff_give()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_4_stuff;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("give");
	}
	//동사 설정
	
	//'~가 ~에게 물건을 주다' 생성 (주어, 보어1 에 따라서 가변으로)
}
