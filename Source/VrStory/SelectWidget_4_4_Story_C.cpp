// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_4_4_Story_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_4_4_Story_C::NativeConstruct()
{
	Super::NativeConstruct();
	Do_button->OnClicked.AddDynamic(this,&USelectWidget_4_4_Story_C::Spawn_human_human_story_do);
}

void USelectWidget_4_4_Story_C::Spawn_human_human_story_do()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_4_story;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("do");
	}
	//동사 설정
	
	//'~가 ~와 이야기를 하다' 생성 (주어, 보어1 에 따라서 가변으로)
}
