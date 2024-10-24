// Fill out your copyright notice in the Description page of Project Settings.


#include "WordNumChoice_Widget.h"
#include "UMG/Public/Components/Button.h"
#include "MyGameModeBase.h"
#include "ToolBuilderUtil.h"
#include "Kismet/GameplayStatics.h"
#include "SentenceManager.h"

void UWordNumChoice_Widget::NativeConstruct()
{
	Super::NativeConstruct();

	TwoWords->OnClicked.AddDynamic(this,&UWordNumChoice_Widget::Create_TwoWords);
	ThreeWords->OnClicked.AddDynamic(this, &UWordNumChoice_Widget::Create_ThreeWords);
	FourWords->OnClicked.AddDynamic(this, &UWordNumChoice_Widget::Create_FourWords);
}

void UWordNumChoice_Widget::Create_TwoWords()
{

	UE_LOG(LogTemp, Warning, TEXT("two word click success"));
	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		UE_LOG(LogTemp, Warning, TEXT("Gamemode loading success"));
		GameMode->SetWordNum(2); //2단어로 이루어진 HUD띄워줌
	}
	/**********************허드 생성**********************/

	
	 USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	 //TSubclassOf<USentenceManager> ManagerClass=USentenceManager::StaticClass();
	 TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Word_Select;
	 TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class2_1;
	 AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	 FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	 AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	 UIActor->SetActorScale3D((FVector(0.1f)));
	 OriginalUI_Actor->Destroy();
	//주어 ui생성 + 맵선택ui 파괴
	
}

void UWordNumChoice_Widget::Create_ThreeWords()
{
	UE_LOG(LogTemp, Warning, TEXT("three word click success"));
	AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		UE_LOG(LogTemp, Warning, TEXT("Gamemode loading success"));
		GameMode->SetWordNum(3); //3단어로 이루어진 HUD띄워줌
	}
	/**********************허드 생성**********************/

	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	//TSubclassOf<USentenceManager> ManagerClass=USentenceManager::StaticClass();
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Word_Select;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_1;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();
	//주어 ui생성 + 맵선택ui 파괴
}

void UWordNumChoice_Widget::Create_FourWords()
{
	UE_LOG(LogTemp, Warning, TEXT("four word click success"));
	AMyGameModeBase* GameMode = Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		UE_LOG(LogTemp, Warning, TEXT("Gamemode loading success"));
		GameMode->SetWordNum(4); //4단어로 이루어진 HUD띄워줌
	}

	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	//TSubclassOf<USentenceManager> ManagerClass=USentenceManager::StaticClass();
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Word_Select;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_1;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();
	//주어 ui생성 + 맵선택ui 파괴
}
