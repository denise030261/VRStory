// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_1C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_1C::NativeConstruct()
{
	Super::NativeConstruct();
	Man_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_man);
	Woman_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_woman);
	Crocodile_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_crocodile);
	Crow_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_crow);
	Deer_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_deer);
	Elephant_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_elephant);
	Fox_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_fox);
	Hippo_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_hippo);
	Lion_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_lion);
	Pig_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_pig);
	Rhino_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_rhino);
	Wolf_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_wolf);
	Zebra_button->OnClicked.AddDynamic(this,&USelectWidget_3_1C::Create_Select_3_2_zebra);
}

void USelectWidget_3_1C::Create_Select_3_2_man()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_human;
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

void USelectWidget_3_1C::Create_Select_3_2_woman()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_human;
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

void USelectWidget_3_1C::Create_Select_3_2_crocodile()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("crocodile");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_crow()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("crow");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_deer()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("deer");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_elephant()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("elephant");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_fox()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("fox");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_hippo()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("hippo");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_lion()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("lion");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_pig()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("pig");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_rhino()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("rhino");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_wolf()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("wolf");
	}
	//주어설정
}

void USelectWidget_3_1C::Create_Select_3_2_zebra()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_1;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_2_animal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetSubject("zebra");
	}
	//주어설정
}
