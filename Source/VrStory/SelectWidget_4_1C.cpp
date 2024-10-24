// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_4_1C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_4_1C::NativeConstruct()
{
	Super::NativeConstruct();
	Man_button->OnClicked.AddDynamic(this,&USelectWidget_4_1C::Create_Select_4_2_man);
	Woman_button->OnClicked.AddDynamic(this,&USelectWidget_4_1C::Create_Select_4_2_woman);
}

void USelectWidget_4_1C::Create_Select_4_2_man()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_2_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("man");
	}
	//주어설정
}

void USelectWidget_4_1C::Create_Select_4_2_woman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_2_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("woman");
	}
	//주어설정
}
