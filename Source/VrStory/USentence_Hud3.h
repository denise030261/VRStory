// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "USentence_Hud3.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UUSentence_Hud3 : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Subject;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Object;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Verb;
};
