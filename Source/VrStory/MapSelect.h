// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MapSelect.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UMapSelect : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_Land;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Button_Mountain;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_City;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button_House;

	UFUNCTION(BlueprintCallable, Category = "MapName Setting")
	void SetMapNameLand();

	UFUNCTION(BlueprintCallable, Category = "MapName Setting")
	void SetMapNameMountain();

	UFUNCTION(BlueprintCallable, Category = "MapName Setting")
	void SetMapNameCity();

	UFUNCTION(BlueprintCallable, Category = "MapName Setting")
	void SetMapNameHouse();
};
