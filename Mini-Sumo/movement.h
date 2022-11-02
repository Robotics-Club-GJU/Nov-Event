#ifndef MOVEMENT_H
#define MOVEMENT_H
#include <Arduino.h>

void motorSetup();
void stopM();
void moveLeft(int sp);
void moveForward(int sp);
void moveBackwards(int sp);
void moveRight(int sp);

void moveLeft();
void moveForward();
void moveBackwards();
void moveRight();

void moveSRight();
void moveSLeft();
void moveSForward();
void moveSBack();


#endif
