// Fill out your copyright notice in the Description page of Project Settings.


#include "SentenceManager.h"

USentenceManager::USentenceManager()
{
	static ConstructorHelpers::FClassFinder<AActor> UI_Select(TEXT("Blueprint'/Game/Widget/VR_SentenceFormWidget_BP.VR_SentenceFormWidget_BP_C'"));
	if (UI_Select.Succeeded())
	{
		UI_Word_Select = UI_Select.Class;
	}
	
	static ConstructorHelpers::FClassFinder<AActor> UI2_1(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_1_BP.SelectWidget_2_1_BP_C'"));
	if (UI2_1.Succeeded())
	{
		UI_Class2_1 = UI2_1.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_airplane(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_airplane_BP.SelectWidget_2_2_airplane_BP_C'"));
	if (UI2_2_airplane.Succeeded())
	{
		UI_Class2_2_airplane = UI2_2_airplane.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_animal(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_animal_BP.SelectWidget_2_2_animal_BP_C'"));
	if (UI2_2_animal.Succeeded())
	{
		UI_Class2_2_animal = UI2_2_animal.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_building(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_building_BP.SelectWidget_2_2_building_BP_C'"));
	if (UI2_2_building.Succeeded())
	{
		UI_Class2_2_building = UI2_2_building.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_car(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_car_BP.SelectWidget_2_2_car_BP_C'"));
	if (UI2_2_car.Succeeded())
	{
		UI_Class2_2_car = UI2_2_car.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_crow(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_crow_BP.SelectWidget_2_2_crow_BP_C'"));
	if (UI2_2_crow.Succeeded())
	{
		UI_Class2_2_crow = UI2_2_crow.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_fire(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_fire_BP.SelectWidget_2_2_fire_BP_C'"));
	if (UI2_2_fire.Succeeded())
	{
		UI_Class2_2_fire = UI2_2_fire.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI2_2_human(TEXT("Blueprint'/Game/Widget/WordSelect/2words/SelectWidget_2_2_human_BP.SelectWidget_2_2_human_BP_C'"));
	if (UI2_2_human.Succeeded())
	{
		UI_Class2_2_human = UI2_2_human.Class;
	}
    //2단어 문장


	
	static ConstructorHelpers::FClassFinder<AActor> UI3_1(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_1_BP.SelectWidget_3_1_BP_C'"));
	if (UI3_1.Succeeded())
	{
		UI_Class3_1 = UI3_1.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_2_animal(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_2_animal_BP.SelectWidget_3_2_animal_BP_C'"));
	if (UI3_2_animal.Succeeded())
	{
		UI_Class3_2_animal = UI3_2_animal.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_2_human(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_2_human_BP.SelectWidget_3_2_human_BP_C'"));
	if (UI3_2_human.Succeeded())
	{
		UI_Class3_2_human = UI3_2_human.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_animalfood(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_animalfood_BP.SelectWidget_3_3_animalfood_BP_C'"));
	if (UI3_3_animalfood.Succeeded())
	{
		UI_Class3_3_animalfood = UI3_3_animalfood.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_ball(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_ball_BP.SelectWidget_3_3_ball_BP_C'"));
	if (UI3_3_ball.Succeeded())
	{
		UI_Class3_3_ball = UI3_3_ball.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_book(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_book_BP.SelectWidget_3_3_book_BP_C'"));
	if (UI3_3_book.Succeeded())
	{
		UI_Class3_3_book = UI3_3_book.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_human(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_human_BP.SelectWidget_3_3_human_BP_C'"));
	if (UI3_3_human.Succeeded())
	{
		UI_Class3_3_human = UI3_3_human.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_humanfood(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_humanfood_BP.SelectWidget_3_3_humanfood_BP_C'"));
	if (UI3_3_humanfood.Succeeded())
	{
		UI_Class3_3_humanfood = UI3_3_humanfood.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_otheranimal(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_otheranimal_BP.SelectWidget_3_3_otheranimal_BP_C'"));
	if (UI3_3_otheranimal.Succeeded())
	{
		UI_Class3_3_otheranimal = UI3_3_otheranimal.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_plant(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_plant_BP.SelectWidget_3_3_plant_BP_C'"));
	if (UI3_3_plant.Succeeded())
	{
		UI_Class3_3_plant = UI3_3_plant.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI3_3_stuff(TEXT("Blueprint'/Game/Widget/WordSelect/3words/SelectWidget_3_3_stuff_BP.SelectWidget_3_3_stuff_BP_C'"));
	if (UI3_3_stuff.Succeeded())
	{
		UI_Class3_3_stuff = UI3_3_stuff.Class;
	}
	//3단어 문장


	
	static ConstructorHelpers::FClassFinder<AActor> UI4_1(TEXT("Blueprint'/Game/Widget/WordSelect/4words/SelectWidget_4_1_BP.SelectWidget_4_1_BP_C'"));
	if (UI4_1.Succeeded())
	{
		UI_Class4_1 = UI4_1.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI4_2_human(TEXT("Blueprint'/Game/Widget/WordSelect/4words/SelectWidget_4_2_human_BP.SelectWidget_4_2_human_BP_C'"));
	if (UI4_2_human.Succeeded())
	{
		UI_Class4_2_human = UI4_2_human.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI4_3_tohuman(TEXT("Blueprint'/Game/Widget/WordSelect/4words/SelectWidget_4_3_tohuman_BP.SelectWidget_4_3_tohuman_BP_C'"));
	if (UI4_3_tohuman.Succeeded())
	{
		UI_Class4_3_tohuman = UI4_3_tohuman.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI4_3_withhuman(TEXT("Blueprint'/Game/Widget/WordSelect/4words/SelectWidget_4_3_withhuman_BP.SelectWidget_4_3_withhuman_BP_C'"));
	if (UI4_3_withhuman.Succeeded())
	{
		UI_Class4_3_withhuman = UI4_3_withhuman.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI4_4_story(TEXT("Blueprint'/Game/Widget/WordSelect/4words/SelectWidget_4_4_story_BP.SelectWidget_4_4_story_BP_C'"));
	if (UI4_4_story.Succeeded())
	{
		UI_Class4_4_story = UI4_4_story.Class;
	}

	static ConstructorHelpers::FClassFinder<AActor> UI4_4_stuff(TEXT("Blueprint'/Game/Widget/WordSelect/4words/SelectWidget_4_4_stuff_BP.SelectWidget_4_4_stuff_BP_C'"));
	if (UI4_4_stuff.Succeeded())
	{
		UI_Class4_4_stuff = UI4_4_stuff.Class;
	}
	//4단어 문장
}