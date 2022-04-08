// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassText.h"
#include "Components/TextRenderComponent.h"

// Sets default values
AClassText::AClassText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Biografia = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Biografia"));
	Biografia->SetText("Daniel Avendano Duran \nBiografia: \nNaci en Sucre, Chuquisaca. \nEstudie en los colegios: Ovando, Bernardo Monteagudo, Mariano y Lucio Siles. \nSali bachiller del colegio Lucio Siles. \nEstudio Ing. en ciencias de la computacion.");

}

// Called when the game starts or when spawned
void AClassText::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClassText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

