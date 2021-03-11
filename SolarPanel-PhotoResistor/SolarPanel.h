#include "Servo.h"

class SolarPanel {
  private:
    // Variables
    const static float ADC_CODE_MAX = 1023.0;
    const static float VOLTAGE_CAP = 5.0;
    
    int pin;
    Servo servo;
    
  public:
    // Constructor
    SolarPanel(int pin, int servoPin);

    // Methods
    float getVoltage();
    void moveServo(int angle);

    
    
}
