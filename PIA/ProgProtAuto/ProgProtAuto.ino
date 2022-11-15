#include <Servo.h>

Servo servo1;
int PINSERVO=6;
int PULSOMIN=1000;
int PULSOMAX=2000;

void setup () {
  servo1.attach(PINSERVO,PULSOMIN,PULSOMAX);
}
void loop() {
  servo1.write(0);
  delay(3000);
  servo1.write(120);
  delay(3000);
}
