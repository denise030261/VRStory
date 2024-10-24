// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentenceManager.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USentenceManager : public UObject
{
	GENERATED_BODY()
public:
	USentenceManager();
public:
	UPROPERTY()
	TSubclassOf<AActor> UI_Word_Select;
	
public:
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_1; //2단어의 주어 ui
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_airplane; 
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_animal; 
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_building; 
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_car; 
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_crow; 
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_fire; 
	UPROPERTY()
	TSubclassOf<AActor> UI_Class2_2_human;


public:
	UPROPERTY()
	 TSubclassOf<AActor> UI_Class3_1; //3단어의 주어 ui
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_2_animal;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_2_human;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_animalfood;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_ball;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_book;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_human;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_humanfood;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_otheranimal;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_plant;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class3_3_stuff;

	
public:
	UPROPERTY()
	TSubclassOf<AActor> UI_Class4_1; //4단어의 주어 ui
	UPROPERTY()
	TSubclassOf<AActor> UI_Class4_2_human;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class4_3_tohuman;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class4_3_withhuman;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class4_4_story;
	UPROPERTY()
	TSubclassOf<AActor> UI_Class4_4_stuff;
};
