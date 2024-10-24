// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_3_Animalfood_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_3_Animalfood_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Eat_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_animal_food_eat();

};
