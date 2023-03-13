// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShipController.h"
#include "BrainComponent.h"

void AAIShipController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (BT_HostileShipAI) RunBehaviorTree(BT_HostileShipAI);
	PrimaryActorTick.bCanEverTick = true;
	aiShip = Cast<AAiShipPawn>(GetPawn());
}

void AAIShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(bMoving) UpdateMovement(DeltaTime);
}

void AAIShipController::UpdateMovement(float DeltaTime)
{
	float distRemaining = FVector::Dist(aiShip->GetActorLocation(), targetPoint);
	if (distRemaining <= distanceAllowance) {
		bMoving = false;
		FAIMessage msg(UBrainComponent::AIMessage_MoveFinished, this, moveRequestId, FAIMessage::Success);
		FAIMessage::Send(this, msg);
		moveRequestId = FAIRequestID::InvalidRequest;
	}
	
	FVector dir = targetPoint - aiShip->GetActorLocation();
	dir.Normalize();
	//aiShip->AddActorLocalRotation(FQuat(dir, turningRadius * DeltaTime));
	aiShip->FaceRotation(dir.Rotation());

	if (speed < maxSpeed/* && (distRemaining > (speed))*/) speed += acceleration;// *DeltaTime;
	//else if (distRemaining < (speed * 5)) speed -= acceleration * DeltaTime;
	if (speed > maxSpeed) speed = maxSpeed;

	aiShip->ShipMesh->AddImpulse(aiShip->GetActorForwardVector() * speed * DeltaTime);
	
}

void AAIShipController::SetMovementTarget(FVector point, float range)
{
	if (bMoving) {
		FAIMessage msg(UBrainComponent::AIMessage_MoveFinished, this, moveRequestId, FAIMessage::Failure);
		FAIMessage::Send(this, msg);
	}

	targetPoint = point;
	distanceAllowance = range;
	bMoving = true;


	StoreMoveRequestId();
}

bool AAIShipController::GetMoving()
{
	return bMoving;
}

void AAIShipController::StoreMoveRequestId()
{
	moveRequestId = nextRequestId++;
}

const FAIRequestID AAIShipController::GetMoveRequestId()
{
	return moveRequestId;
}
