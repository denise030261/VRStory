// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_3_Humanfood_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_3_Humanfood_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Eat_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Make_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_human_food_eat();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_animal_food_make();
};
