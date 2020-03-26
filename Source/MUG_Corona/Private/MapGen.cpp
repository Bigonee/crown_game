// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGen.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

// Sets default values
AMapGen::AMapGen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapGen::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMapGen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapGen::spawnObject(FVector loc, FRotator frotator) {


    //If the usefulactorbp is valid
    if (tileToSpawn) {
        //Spawn parameters for the current spawn.
        //We can use this for a number of options like disable collision or adjust the spawn position
        //if a collision is happening in the spawn point etc..
        FActorSpawnParameters spawnParams;
        AActor* spawnedActorRef = GetWorld()->SpawnActor<AActor>(tileToSpawn, loc, frotator, spawnParams);

        //Actual Spawn. The following function returns a reference to the spawned actor
        //AUsefulActor* ActorRef = GetWorld()->SpawnActor<AUsefulActor>(UsefulActorBP, GetTransform(), SpawnParams);

        GLog->Log("Spawned the UsefulActor.");
    }
}

