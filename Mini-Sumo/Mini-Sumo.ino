#include "movement.h"


byte input;

void setup()
{
  Serial.begin(9600);
  motorSetup();

}
void loop()
{
  //  stopM();
  //  delay(5000);
  //  moveSLeft();
  //  moveSLeft();
  //  moveSForward();
  //  moveSLeft();
  //  moveSForward();
  //  moveSLeft();
  //  moveSForward();

  if (Serial.available() > 0) {
    input = Serial.read();
    if (input != 10) {
      Serial.println(input);
    }
  }
  if (input == 97) {
    moveSForward();
  }
  else if (input == 98) {
    moveSBack();
  }
  else if (input == 99) {
    moveSLeft();
  }
  else if (input == 100) {
    moveSRight();
  }
  else if (input == 101) {
    stopM();
    delay(100);
  }
  stopM();
}
