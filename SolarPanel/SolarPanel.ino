#include "SolarPanel.h"
#include <Sleep_n0m1.h>

SolarPanel panel(A6, 9);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  panel.moveServo(60);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(panel.getVoltage());
  delay(1);
}
