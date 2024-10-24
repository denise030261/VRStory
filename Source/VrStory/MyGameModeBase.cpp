// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "K2Node_SpawnActorFromClass.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "man/ManSource.h"
#include "Tasks/GameplayTask_SpawnActor.h"
#include "MyGameInstance.h"
#include "Blueprint/UserWidget.h"

AMyGameModeBase::AMyGameModeBase()
	:Super()
{
	word_num = 0;


	static ConstructorHelpers::FClassFinder<APawn> Main_Pawn(TEXT("Blueprint'/Game/VRTemplate/Blueprints/VRPawn_ForMenu.VRPawn_ForMenu_C'"));
	if (Main_Pawn.Succeeded())
	{
		Main_Pawn_Class = Main_Pawn.Class;
	}
	
	static ConstructorHelpers::FClassFinder<APawn> Hud2_Pawn(TEXT("Blueprint'/Game/VRTemplate/Blueprints/VRPawn_For_Two.VRPawn_For_Two_C'"));
	if (Hud2_Pawn.Succeeded())
	{
		Hud2_Pawn_Class = Hud2_Pawn.Class;
	}

	static ConstructorHelpers::FClassFinder<APawn> Hud3_Pawn(TEXT("Blueprint'/Game/VRTemplate/Blueprints/VRPawn_For_Three.VRPawn_For_Three_C'"));
	if (Hud3_Pawn.Succeeded())
	{
		Hud3_Pawn_Class = Hud3_Pawn.Class;
	}

	static ConstructorHelpers::FClassFinder<APawn> Hud4_Pawn(TEXT("Blueprint'/Game/VRTemplate/Blueprints/VRPawn_For_Four.VRPawn_For_Four_C'"));
	if (Hud4_Pawn.Succeeded())
	{
		Hud4_Pawn_Class = Hud4_Pawn.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> MenuT(TEXT("Blueprint'/Game/VRTemplate/Blueprints/Menu.Menu_C'"));
	if (MenuT.Succeeded())
	{
		Menu = MenuT.Class;
	}
	
}

int AMyGameModeBase::SetWordNum(int n)
{
	Current_Pawn_Class= UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	controller=UGameplayStatics::GetPlayerController(GetWorld(),0);
	Cast<UMyGameInstance>(GetGameInstance())->word_num=n;
	if (n == 2) //2단어 hud를 보여줌
	{
		word_num = 2;
		FVector SpawnVector;
		FRotator SpawnRotator;
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPlayerViewPoint(SpawnVector,SpawnRotator); //현재 플레이어의 위치,회전값 얻기
		controller->UnPossess();//현재 빙의중인 폰 해제
		const FActorSpawnParameters SpawnInfo;
		APawn * NewPawn= GetWorld()->SpawnActor<APawn>(Hud2_Pawn_Class,SpawnVector,SpawnRotator,SpawnInfo); // hud가 있는 새 pawn 스폰(현재 플레이어 위치에)
		controller->Possess(NewPawn); //HUD가 있는 폰으로 변경
		
		if(controller->GetPawn()) //폰을 성공적으로 변경했다면
		{
			UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn OK-------------------"));
			AActor* OldActor=Current_Pawn_Class;
			if(GetWorld()->DestroyActor(OldActor))//변경 전 폰을 게임에서 없앰
			{
				UE_LOG(LogTemp, Warning, TEXT("------------------Destroy Access OK-------------------"));
				Current_Pawn_Class=UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
			}
		}
		else //폰 변경 실패
		{
			UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn EROOR-------------------"));
		}
	}
	else if (n == 3) //3단어 hud를 보여줌
	{
		word_num = 3;

		FVector SpawnVector;
		FRotator SpawnRotator;
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPlayerViewPoint(SpawnVector,SpawnRotator); //현재 플레이어의 위치,회전값 얻기
		controller->UnPossess();//현재 빙의중인 폰 해제
		const FActorSpawnParameters SpawnInfo;
		APawn * NewPawn= GetWorld()->SpawnActor<APawn>(Hud3_Pawn_Class,SpawnVector,SpawnRotator,SpawnInfo); // hud가 있는 새 pawn 스폰(현재 플레이어 위치에)
		controller->Possess(NewPawn); //HUD가 있는 폰으로 변경
		
		if(controller->GetPawn()) //폰을 성공적으로 변경했다면
			{
			UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn OK-------------------"));
			AActor* OldActor=Current_Pawn_Class;
			if(GetWorld()->DestroyActor(OldActor))//변경 전 폰을 게임에서 없앰
				{
				UE_LOG(LogTemp, Warning, TEXT("------------------Destroy Access OK-------------------"));
				Current_Pawn_Class=UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
				}
			}
		else //폰 변경 실패
			{
			UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn EROOR-------------------"));
			}
	}
	else if (n == 4) //4단어 hud를 보여줌
	{
		word_num = 4;

		FVector SpawnVector;
		FRotator SpawnRotator;
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPlayerViewPoint(SpawnVector,SpawnRotator); //현재 플레이어의 위치,회전값 얻기
		controller->UnPossess();//현재 빙의중인 폰 해제
		const FActorSpawnParameters SpawnInfo;
		APawn * NewPawn= GetWorld()->SpawnActor<APawn>(Hud4_Pawn_Class,SpawnVector,SpawnRotator,SpawnInfo); // hud가 있는 새 pawn 스폰(현재 플레이어 위치에)
		controller->Possess(NewPawn); //HUD가 있는 폰으로 변경
		
		if(controller->GetPawn()) //폰을 성공적으로 변경했다면
			{
			UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn OK-------------------"));
			AActor* OldActor=Current_Pawn_Class;
			if(GetWorld()->DestroyActor(OldActor))//변경 전 폰을 게임에서 없앰
				{
				UE_LOG(LogTemp, Warning, TEXT("------------------Destroy Access OK-------------------"));
				Current_Pawn_Class=UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
				}
			}
		else //폰 변경 실패
			{
			UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn EROOR-------------------"));
			}
	}
	else
	{
		word_num = 0;
		return -1;
	}
	return n;
}

int AMyGameModeBase::GetWordNum()
{
	return word_num;
}

FString AMyGameModeBase::SetMapName(FString str)
{
	MapName=str;
	Cast<UMyGameInstance>(GetGameInstance())->MapName=str;
	UE_LOG(LogTemp, Warning, TEXT("현재 맵이름: %s"),*MapName);
	return MapName;
}

FString AMyGameModeBase::GetMapName()
{
	return MapName;
}

FString AMyGameModeBase::SetSubject(FString str)
{
	Subject=str;
	Cast<UMyGameInstance>(GetGameInstance())->Subject=str;
	UE_LOG(LogTemp, Warning, TEXT("현재 주어는: %s"),*Subject);
	return Subject;
}

FString AMyGameModeBase::GetSubject()
{
	return Subject;
}

FString AMyGameModeBase::SetVerb(FString str)
{
	Verb=str;
	Cast<UMyGameInstance>(GetGameInstance())->Verb=str;
	UE_LOG(LogTemp, Warning, TEXT("현재 동사는: %s"),*Verb);
	return Verb;
}

FString AMyGameModeBase::GetVerb()
{
	return Verb;
}

FString AMyGameModeBase::SetObject(FString str)
{
	Object=str;
	Cast<UMyGameInstance>(GetGameInstance())->Object=str;
	UE_LOG(LogTemp, Warning, TEXT("현재 목적어는: %s"),*Object);
	return Object;
}

FString AMyGameModeBase::GetObject()
{
	return Object;
}

FString AMyGameModeBase::SetComplement1(FString str)
{
	Complement1=str;
	Cast<UMyGameInstance>(GetGameInstance())->Complement1=str;
	UE_LOG(LogTemp, Warning, TEXT("현재 보어1은: %s"),*Complement1);
	return Complement1;
}

FString AMyGameModeBase::GetComplement1()
{
	return Complement1;
}

FString AMyGameModeBase::SetComplement2(FString str)
{
	Complement2=str;
	Cast<UMyGameInstance>(GetGameInstance())->Complement2=str;
	UE_LOG(LogTemp, Warning, TEXT("현재 보어2는: %s"),*Complement2);
	return Complement2;
}

FString AMyGameModeBase::GetComplement2()
{
	return Complement2;
}

void AMyGameModeBase::ChangePlayerPawnToMenu()
{
	FVector SpawnVector;
	FRotator SpawnRotator;
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPlayerViewPoint(SpawnVector,SpawnRotator); //현재 플레이어의 위치,회전값 얻기
	//SpawnVector=SpawnVector-FVector(0,0,200);
	AActor* OldActor=controller->GetPawn();
	controller->UnPossess();//현재 빙의중인 폰 해제
	GetWorld()->DestroyActor(OldActor);
	const FActorSpawnParameters SpawnInfo;
	APawn * NewPawn= GetWorld()->SpawnActor<APawn>(Main_Pawn_Class,SpawnVector,SpawnRotator,SpawnInfo); //  새 pawn 스폰(현재 플레이어 위치에)
	controller->Possess(NewPawn); //HUD가 있는 폰으로 변경
		
	if(controller->GetPawn()) //폰을 성공적으로 변경했다면
		{
			UE_LOG(LogTemp, Warning, TEXT("------------------새 문장만들기를 위한 폰 변경 OK-------------------"));
			//if(GetWorld()->DestroyActor(OldActor))//변경 전 폰을 게임에서 없앰
			//{
			UE_LOG(LogTemp, Warning, TEXT("------------------Destroy Access OK-------------------"));
			Current_Pawn_Class=UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
			//}
			AActor* MenuUI_Actor=UGameplayStatics::GetActorOfClass(GetWorld(),Menu);
			MenuUI_Actor->Destroy();
		}
	else //폰 변경 실패
		{
		UE_LOG(LogTemp, Warning, TEXT("------------------Changing Pawn EROOR-------------------"));
		}
}






