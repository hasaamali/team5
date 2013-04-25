#include <HUBeeBMDWheel.h>

HUBeeBMDWheel leftWheel(13, 12, 11);
HUBeeBMDWheel rightWheel(10, 8, 9);

void setup() {
    leftWheel.setMotorPower(255);
  rightWheel.setMotorPower(-255);
  delay(900);
 rightWheel.stopMotor();
 delay(900);
  leftWheel.stopMotor();
  delay(900);
  rightWheel.stopMotor();
  leftWheel.stopMotor();
  delay(900);  
  leftWheel.setMotorPower(255);
  rightWheel.setMotorPower(-255);
  delay(900);
 rightWheel.stopMotor();
 delay(900);
  leftWheel.stopMotor();
  delay(900);
  rightWheel.stopMotor();
  leftWheel.stopMotor();
  delay(900);
}

void loop() {

}

