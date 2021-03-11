
// Change this value for the pin of the sensor. Mostly For Thermistor and Photoresistor and any other small variable resistors.
int pin = 0;

void setup() {}

void loop() {
  Serial.println(analogRead(pin));
  delay(1000);
}
