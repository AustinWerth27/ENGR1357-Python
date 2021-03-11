#include "Photoresistor.h"

Photoresistor::Photoresistor(int pin) {
  this.pin = pin;
}

Photoresistor::getVoltage() {
  float photoVoltage = analogRead(pin);
  return photoVoltage * (
}
