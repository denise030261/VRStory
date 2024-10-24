// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
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
};
