// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "Provola.generated.h"

USTRUCT(BlueprintType)
struct FProvola : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Formaggi")
		FString Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Formaggi")
		float AssociatedTime;
};