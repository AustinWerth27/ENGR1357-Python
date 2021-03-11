#include "Servo.h"

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  servo.write(60);
}

void loop() {
  // put your main code here, to run repeatedly:

}
