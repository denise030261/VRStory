// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_4_2_Human_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_4_2_Human_C::NativeConstruct()
{
	Super::NativeConstruct();
	ToMan_button->OnClicked.AddDynamic(this,&USelectWidget_4_2_Human_C::Create_Select_4_2_toman);
	ToWoman_button->OnClicked.AddDynamic(this,&USelectWidget_4_2_Human_C::Create_Select_4_2_towoman);
	WithMan_button->OnClicked.AddDynamic(this,&USelectWidget_4_2_Human_C::Create_Select_4_2_withman);
	WithWoman_button->OnClicked.AddDynamic(this,&USelectWidget_4_2_Human_C::Create_Select_4_2_withwoman);
}

void USelectWidget_4_2_Human_C::Create_Select_4_2_toman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_3_tohuman;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetComplement1("toman");
	}
	//보어1 설정
}

void USelectWidget_4_2_Human_C::Create_Select_4_2_towoman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_3_tohuman;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetComplement1("towoman");
	}
	//보어1 설정
}

void USelectWidget_4_2_Human_C::Create_Select_4_2_withman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_3_withhuman;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetComplement1("withman");
	}
	//보어1 설정
}

void USelectWidget_4_2_Human_C::Create_Select_4_2_withwoman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_2_human;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_3_withhuman;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetComplement1("withwoman");
	}
	//보어1 설정
}
