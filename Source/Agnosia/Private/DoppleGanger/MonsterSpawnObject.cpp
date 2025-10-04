// Fill out your copyright notice in the Description page of Project Settings.


#include "DoppleGanger/MonsterSpawnObject.h"

// Sets default values
AMonsterSpawnObject::AMonsterSpawnObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMonsterSpawnObject::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Begin play called")); //Displays messages in Output Log
	
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Green, FString("MonsterSpawnObject OnScreen Message")); //Displays message in window
	}
}

// Called every frame
void AMonsterSpawnObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

