// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_2_Animal_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_2_Animal_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Food_button;

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
	void Create_Select_3_3_animalfood();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_crocodile();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_crow();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_deer();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_elephant();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_fox();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_hippo();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_lion();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_pig();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_rhino();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_wolf();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_3_3_otheranimal_zebra();
};
