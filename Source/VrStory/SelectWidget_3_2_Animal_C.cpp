// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectWidget_3_2_Animal_C.h"
#include "MyGameModeBase.h"
#include "SentenceManager.h"
#include "Components/Button.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

void USelectWidget_3_2_Animal_C::NativeConstruct()
{
	Super::NativeConstruct();
	Food_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_animalfood);
	Crocodile_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_crocodile);
	Crow_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_crow);
	Deer_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_deer);
	Elephant_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_elephant);
	Fox_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_fox);
	Hippo_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_hippo);
	Lion_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_lion);
	Pig_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_pig);
	Rhino_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_rhino);
	Wolf_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_wolf);
	Zebra_button->OnClicked.AddDynamic(this,&USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_zebra);
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_animalfood()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_animalfood;
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

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_crocodile()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("crocodile");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_crow()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("crow");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_deer()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("deer");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_elephant()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("elephant");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_fox()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("fox");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_hippo()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("hippo");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_lion()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("lion");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_pig()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("pig");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_rhino()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("rhino");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_wolf()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("wolf");
	}
	//목적어 설정
}

void USelectWidget_3_2_Animal_C::Create_Select_3_3_otheranimal_zebra()
{
	USentenceManager* ManagerObject=Cast<USentenceManager>(USentenceManager::StaticClass()->GetDefaultObject());
	TSubclassOf<AActor> OriginalUIClass=ManagerObject->UI_Class3_2_animal;
	TSubclassOf<AActor> NewUIClass=ManagerObject->UI_Class3_3_otheranimal;
	AActor* OriginalUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),OriginalUIClass);
	FTransform SpawnTransform=OriginalUI_Actor->GetActorTransform();
	AActor* UIActor=GetWorld()->SpawnActor<AActor>(NewUIClass,SpawnTransform);
	UIActor->SetActorScale3D((FVector(0.1f)));
	OriginalUI_Actor->Destroy();

	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetObject("zebra");
	}
	//목적어 설정
}


