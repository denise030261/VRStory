// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_2_Human_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_2_Human_C::NativeConstruct()
{
	Super::NativeConstruct();
	Food_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_humanfood);
	Book_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_book);
	Ball_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_ball);
	Stuff_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_stuff);
	Plant_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_plant);
	Man_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_human_man);
	Woman_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Human_C::Create_Select_3_3_human_woman);
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_humanfood()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_humanfood;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("food");
	}
	//목적어 설정
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_book()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_book;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("book");
	}
	//목적어 설정
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_ball()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_ball;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("ball");
	}
	//목적어 설정
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_stuff()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_stuff;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("stuff");
	}
	//목적어 설정
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_plant()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_plant;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("plant");
	}
	//목적어 설정
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_human_man()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("man");
	}
	//목적어 설정
}

void USelectWidget_3_2_Human_C::Create_Select_3_3_human_woman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_human;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("woman");
	}
	//목적어 설정
}
