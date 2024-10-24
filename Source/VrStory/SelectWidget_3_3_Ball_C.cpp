// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_3_Ball_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_3_Ball_C::NativeConstruct()
{
	Super::NativeConstruct();
	Kick_button->OnClicked.AddDynamic(this,&USelectWidget_3_3_Ball_C::Spawn_human_ball_kick);
}

void USelectWidget_3_3_Ball_C::Spawn_human_ball_kick()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_3_ball;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("kick");
	}
	//동사 설정
	
	//'~ 공을 찬다' 생성 (주어에 따라서 가변으로)
}
