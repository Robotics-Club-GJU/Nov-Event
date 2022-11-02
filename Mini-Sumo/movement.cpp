#include "movement.h"

// first motor input pins & speed control pin.
int In1 = 6;
int In2 = 5;
int ENA = 9;

// second motor input pins & speed control pin.
int In3 = 4;
int In4 = 3;
int ENB = 10;


int ENA_DEFAULT = 100;
int ENB_DEFAULT = 150;

void motorSetup() {
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  analogWrite(ENA, ENA_DEFAULT);
  analogWrite(ENB , ENB_DEFAULT);
}

void moveForward(int sp) {
  analogWrite(ENA, sp);
  analogWrite(ENB , sp);
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In4, LOW);
  digitalWrite(In3, HIGH);
}

void moveBackwards(int sp) {
  analogWrite(ENA, sp);
  analogWrite(ENB , sp);
  digitalWrite(In2, LOW);
  digitalWrite(In1, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}

void moveRight(int sp) {
  analogWrite(ENA, sp);
  analogWrite(ENB , sp);
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In4, HIGH);
  digitalWrite(In3, LOW);
}

void moveLeft(int sp) {
  analogWrite(ENA, sp);
  analogWrite(ENB , sp);
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In4, LOW);
  digitalWrite(In3, HIGH);
}

void moveForward() {
  analogWrite(ENA, ENA_DEFAULT);
  analogWrite(ENB , ENB_DEFAULT);
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In4, LOW);
  digitalWrite(In3, HIGH);
}

void moveBackwards() {
  analogWrite(ENA, ENA_DEFAULT);
  analogWrite(ENB , ENB_DEFAULT);
  digitalWrite(In2, LOW);
  digitalWrite(In1, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}

void moveRight() {
  analogWrite(ENA, ENA_DEFAULT);
  analogWrite(ENB , ENB_DEFAULT);
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In4, HIGH);
  digitalWrite(In3, LOW);
}

void moveLeft() {
  analogWrite(ENA, ENA_DEFAULT);
  analogWrite(ENB , ENB_DEFAULT);
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In4, LOW);
  digitalWrite(In3, HIGH);
}
void moveSRight(){
  moveRight();
  delay(260);
}
void moveSLeft(){
  moveLeft();
  delay(250);
}
void moveSForward(){
  moveForward();
  delay(400);
}
void moveSBack(){
  moveBackwards();
  delay(400);
}

void stopM() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}
