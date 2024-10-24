// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "USentence_Hud4.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UUSentence_Hud4 : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Subject;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Verb;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Complement1;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Complement2;
};
