// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_3_Book_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_3_Book_C : public UUserWidget
{
	GENERATED_BODY()
	public:
    	virtual void NativeConstruct() override;
    	
    	UPROPERTY(meta = (BindWidget))
    	class UButton* Read_button;
	
    	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
    	void Spawn_human_book_read();

};
