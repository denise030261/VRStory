// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_4_3_Withhuman_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_4_3_Withhuman_C::NativeConstruct()
{
	Super::NativeConstruct();
	Story_button->OnClicked.AddDynamic(this,&USelectWidget_4_3_Withhuman_C::Create_Select_4_4_story);
}

void USelectWidget_4_3_Withhuman_C::Create_Select_4_4_story()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class4_3_withhuman;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class4_4_story;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetComplement2("story");
	}
	//보어2 설정
}
