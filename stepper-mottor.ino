#include <Stepper.h>

const int stepsPerRevolution = 500;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(60);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 3; i++) {
    myStepper.step(-512);
    delay(000);  
  }

  for(int i = 0; i < 2; i++) {
    myStepper.step(682);
    delay(2000);  
  }
}
