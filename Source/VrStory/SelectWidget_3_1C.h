// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_1C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_1C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* Man_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Woman_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Crocodile_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Crow_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Deer_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Elephant_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Fox_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Hippo_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Lion_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Pig_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Rhino_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Wolf_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Zebra_button;




	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_man();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_woman();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_crocodile();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_crow();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_deer();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_elephant();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_fox();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_hippo();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_lion();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_pig();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_rhino();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_wolf();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_2_zebra();
};
