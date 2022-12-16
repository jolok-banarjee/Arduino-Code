#include <Servo.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

Servo servo1;  // Create a servo object
Servo servo2;  // Create a second servo object
int pot1, pot2;
void setup()
{
  lcd.begin(16 ,2);
  servo1.attach(5);  // Attaches the servo on pin 5 to the servo1 object
  servo2.attach(6);  // Attaches the servo on pin 6 to the servo2 object
  
  servo1.write(90);  // Put servo1 at home position
  servo2.write(90);  // Put servo2 at home postion
 
}
  
void loop()
{
  pot1 = analogRead(3); // Read the X-Axis
  pot2 = analogRead(4); // Read the Y-Axis
  
  lcd.print("Val.pot1");
  lcd.setCursor(11,0);
  lcd.print(pot1); 
  delay(500);
  
  lcd.setCursor(0,1);
  lcd.print("Val.pot2");
  lcd.setCursor(11,1);
  lcd.print(pot2);
  delay(500);
  lcd.clear();
  
  pot1 = map(pot1,0,1023,0,180);
  pot2=map(pot2,0,1023,0,180);
  servo1.write(pot1);
  servo2.write(pot2);
  delay(15);
}
