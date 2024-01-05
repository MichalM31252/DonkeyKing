extern "C" {
#include "./DynamicGameObject.h"
}

// objectSpeed should be moved to physics

DynamicGameObject::DynamicGameObject() {
	canLeaveScreen = false;
	gravity = DEFAULT_GRAVITY;
	isFalling = false;
	currentDirectionOfMovement = 0;
}

void DynamicGameObject::moveStart() {
	objectSpeed = DEFAULT_PLAYER_SPEED;
}

void DynamicGameObject::moveLeft(double deltaTime) {
	destRect.x -= deltaTime * objectSpeed;
}

void DynamicGameObject::moveRight(double deltaTime) {
	destRect.x += deltaTime * objectSpeed;
}

void DynamicGameObject::moveUp(double deltaTime) {
	// under the circumstance that a player is on the ladder
	destRect.y -= deltaTime * objectSpeed;
}

void DynamicGameObject::moveDown(double deltaTime) {
	// under the circumstance that a player is on the ladder
	destRect.y += deltaTime * objectSpeed;
}

void DynamicGameObject::moveStop() {
	objectSpeed = 0;
}

void DynamicGameObject::startFalling() {
	isFalling = true;
}

void DynamicGameObject::stopFalling() {
	isFalling = false;
}