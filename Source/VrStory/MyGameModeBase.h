// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	public:
		AMyGameModeBase();
	public:
		UPROPERTY(BlueprintReadWrite)
		int word_num = 0; //선택된 문장형식의 단어 갯수. 0은 아무것도 아닌상태
	
		UPROPERTY(BlueprintReadWrite)
		FString MapName; //Land, Mountain, City, House

		UPROPERTY(BlueprintReadWrite)
		FString Subject; //주어(빨강)

		UPROPERTY(BlueprintReadWrite)
		FString Verb; //동사(파랑)
	
		UPROPERTY(BlueprintReadWrite)
		FString Object; //목적어(초록)

		UPROPERTY(BlueprintReadWrite)
		FString Complement1; //보어1(핑크)

		UPROPERTY(BlueprintReadWrite)
		FString Complement2; //보어2(주황)
	public:
		int SetWordNum(int n); //선택된 단어갯수를 저장하고, 해당하는 HUD를 화면에 띄워줌.(폰을 교체하는 방식으로 이루어짐) 
		int GetWordNum();
		FString SetMapName(FString str);
		FString GetMapName();
		FString SetSubject(FString str);
		FString GetSubject();
		FString SetVerb(FString str);
		FString GetVerb();
		FString SetObject(FString str);
		FString GetObject();
		FString SetComplement1(FString str);
		FString GetComplement1();
		FString SetComplement2(FString str);
		FString GetComplement2();
	
	
		void RemoveHud(); //HUD를 지워줌과 동시에 필요한 초기화를 진행.

		UFUNCTION(BlueprintCallable,Category="ChangePlayerPawnToMenu") //카테고리 안적어주면 블루프린트에서 call 못함
		void ChangePlayerPawnToMenu(); //왼쪽 컨트롤러 메뉴에서 사용되는 플레이어폰 변경용

		//UFUNCTION(BlueprintCallable,Category="ChangePlayerPawnToMenu") //카테고리 안적어주면 블루프린트에서 call 못함
		//void DestroyMenu(); //왼쪽 컨트롤러 메뉴에서 사용되는 플레이어폰 변경용
	
		UPROPERTY()
		TSubclassOf<APawn> Main_Pawn_Class;
	
		UPROPERTY()
		TSubclassOf<APawn> Hud2_Pawn_Class;

		UPROPERTY()
		TSubclassOf<APawn> Hud3_Pawn_Class;

		UPROPERTY()
		TSubclassOf<APawn> Hud4_Pawn_Class;

		UPROPERTY()
		APawn* Current_Pawn_Class; //항상 지금 빙의하고있는 폰을 reference 하고있음 (destroy등 하려면 UGameplayStatics::GetAllActorsOfClass사용)

		UPROPERTY()
		TSubclassOf<AActor> Menu; //왼쪽컨트롤러 메뉴눌렀을때의 메뉴
	
		UPROPERTY()
		APlayerController* controller;
	
	
		
};
