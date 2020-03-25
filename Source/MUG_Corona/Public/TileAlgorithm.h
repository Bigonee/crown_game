// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileAlgorithm.generated.h"

/**
 * 
 */
UCLASS()
class MUG_CORONA_API UTileAlgorithm : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Algorithm")
	static int32 getTile(int currentTile);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Algorithm")
	static int32 spawnThings();

};
