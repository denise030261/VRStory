// Fill out your copyright notice in the Description page of Project Settings.


#include "MapSelect.h"
#include "UMG/Public/Components/Button.h"
#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void UMapSelect::NativeConstruct()
{
	Super::NativeConstruct();
	Button_Land->OnClicked.AddDynamic(this,&UMapSelect::SetMapNameLand);
	Button_Mountain->OnClicked.AddDynamic(this, &UMapSelect::SetMapNameMountain);
	Button_City->OnClicked.AddDynamic(this, &UMapSelect::SetMapNameCity);
	Button_House->OnClicked.AddDynamic(this, &UMapSelect::SetMapNameHouse);
}

void UMapSelect::SetMapNameLand()
{
	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetMapName("Land");
	}
}

void UMapSelect::SetMapNameMountain()
{
	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetMapName("Mountain");
	}
}

void UMapSelect::SetMapNameCity()
{
	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetMapName("City");
	}
}

void UMapSelect::SetMapNameHouse()
{
	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GameMode)
	{
		GameMode->SetMapName("House");
	}
}
