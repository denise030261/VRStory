// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_3_Stuff_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_3_Stuff_C::NativeConstruct()
{
	Super::NativeConstruct();
	Grab_button->OnClicked.AddDynamic(this,&USelectWidget_3_3_Stuff_C::Spawn_human_stuff_grab);
}

void USelectWidget_3_3_Stuff_C::Spawn_human_stuff_grab()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_3_stuff;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetVerb("grab");
	}
	//동사 설정
	
	//'~ 물건을 잡다' 생성 (주어에 따라서 가변으로)
}
