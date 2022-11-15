#include <Servo.h>
Servo servo;
int potenciometro = 1;
int valor_potenciometro;
void setup() {
servo.attach(2);
}
void loop() {
 valor_potenciometro = analogRead(potenciometro);
 valor_potenciometro = map(valor_potenciometro, 0, 1023, 0, 180);
 servo.write(valor_potenciometro);
 delay(1);
}
