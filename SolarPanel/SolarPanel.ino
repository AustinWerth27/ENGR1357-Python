#include "SolarPanel.h"
#include <Sleep_n0m1.h>

SolarPanel panel(A6, 9);

void setup() {
  Serial.begin(9600);
  panel.moveServo(60);
}

void loop() {
  Serial.println(panel.getVoltage());
  delay(1000);
}
