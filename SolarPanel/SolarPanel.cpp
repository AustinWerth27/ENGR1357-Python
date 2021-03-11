#include "SolarPanel.h";

SolarPanel::SolarPanel(int pin, int servoPin) {
  this.pin = pin;
  this.servo.attach(servoPin);
}

SolarPanel::getVoltage() {
  float panelVoltage = analogRead(this.pin);
  return panelVoltage * (SolarPanel::VOLTAGE_CAP / SolarPanel::ADC_CODE_MAX);
}

SolarPanel::moveServo(int angle) {
  servo.write(angle);
}
