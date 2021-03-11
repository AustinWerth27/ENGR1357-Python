void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int solarADC;
  float photoVoltage;
  float photoPower;
  solarADC = analogRead(A0);
  photoVoltage = (solarADC*(5/1023))*1.51;
  photoPower = ((photoPower)^2)/100;
  
  Serial.println(solarVal);
}
