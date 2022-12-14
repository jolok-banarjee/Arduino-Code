//Variable declear
int ledPin =10;

//void setup function
void setup()
{
	pinMode(ledPin,OUTPUT); //initialize ledPin as output through pinMode Function
}

//void loop function
void loop()
{
  digitalWrite(ledPin,HIGH);  //set led pin as ON HIGH=1 through read digitalWrite function
  delay(1000); //wait 1 second where 1000micro second is equal to 1 second
  digitalWrite(ledPin,LOW); //set led pin as OFF LOW=0
  delay(1000); //wait 1 second where 1000micro second is equal to 1 second
}