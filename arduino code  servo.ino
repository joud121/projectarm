#include <Servo.h>

volatile char v;
Servo s;

void setup(){
v = 0;
Serial.begin(9600);
s.attach(7);
}

void loop(){
v = Serial.read();
if (Serial.available() > 0) {
if (v == 'A') {
s.write(0);
delay(100);

}
if (v == 'B') {
s.write(180);
delay(100);
}
}
}
