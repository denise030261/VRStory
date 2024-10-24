// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_2_2_Building_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_2_2_Building_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* shakes_button;
	

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_building_shakes();
	
};
