// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_2_Human_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_2_Human_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Food_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Book_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Ball_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Stuff_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Plant_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Man_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Woman_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_humanfood();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_book();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_ball();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_stuff();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_plant();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_human_man();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_human_woman();

};
