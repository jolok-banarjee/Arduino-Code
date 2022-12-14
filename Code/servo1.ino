#include <Servo.h>
Servo myServo ;
int value;
void setup()
{
  myServo.attach(6);
  pinMode(A0 , INPUT); 
}

void loop()
{
  value = analogRead(A0);
  value = map(value, 0, 1023 , 0, 180);
  myServo.write(value);
  delay(1000);
  myServo.write(0);
  delay(1000);
  
}