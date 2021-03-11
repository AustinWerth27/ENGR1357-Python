class Photoresistor {
  private:
    int calibration_function(int adc_reading);

    int pin;
    
  public:
    Photoresistor(int pin)

    int getLux();
}
