#include <Servo.h>
Servo servoMotor;
int ang; 
void setup(){
  servoMotor.attach(6);
}
void loop(){
  for(ang-0;ang<180;ang++)
  {
    servoMotor.write(ang);
    delay(20);
  }
  delay(1000);
  for(ang-180;ang>0;ang--)
  {
    servoMotor.write(ang);
    delay(20);
  }
  delay(1000);
}
