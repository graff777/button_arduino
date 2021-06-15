int buttonState=0;
void setup() 
{
pinMode(7, INPUT); //объявление цифрового порта 7 на приём 
pinMode(8, OUTPUT);
}
void loop() 
{
int buttonState=digitalRead(7);
if(buttonState==1)
{
  digitalWrite(8, HIGH);
}
else
{
  digitalWrite(8, LOW);
}
}
