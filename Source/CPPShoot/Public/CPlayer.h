// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CPlayer.generated.h"

UCLASS()
class CPPSHOOT_API ACPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPlayer();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category=MyComponent, meta=(AllowPrivateAccess=true))
	class UBoxComponent* boxComp;
	UPROPERTY(VisibleAnywhere, Category=MyComponent, meta=(AllowPrivateAccess=true))
	class UStaticMeshComponent* bodyMesh;

	// 이동방향
	FVector direction;
	// 이동속도
	UPROPERTY(EditAnywhere, Category=MySettings)
	float speed = 500;
public:
	// 좌우 입력처리 함수
	void Horizontal(float value);
	// 상하 입력처리 함수
	void Vertical(float value);
};
