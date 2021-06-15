//переменная для хранения состояния кнопки 1
int buttonState1=0;
//переменная для хранения состояния кнопки 2
int buttonState2=0;
void setup() 
{
//инициализируем пин 7, подключённый к кнопке 1, как вход  
pinMode(7,INPUT);  
//инициализируем пин 3, подключённый к кнопке 2, как вход  
pinMode(3,INPUT);  
//инициализируем пин 4, подключённый к светодиоду, как выход
pinMode(4,OUTPUT); 
}
void loop() 
{
//считываем значение с пина 7
int buttonState1=digitalRead(7); 
//считываем значение с пина 3
int buttonState2=digitalRead(3); 
//если кнопка 1 нажата
if(buttonState1==1) 
{
//включаем светодиод
digitalWrite(4, HIGH);
}
//если кнопка 2 нажата
if(buttonState2==1) 
{
//вsключаем светодиод
digitalWrite(4, LOW);  
}
}
