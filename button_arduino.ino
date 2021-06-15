
//переменная для хранения состояния кнопки
int buttonState=0; 
void setup() 
{
//инициализируем пин 7, подключённый к кнопке, как вход
pinMode(7, INPUT);  
//инициализируем пин 8, подключённый к светодиоду, как выход   
pinMode(8, OUTPUT); 
}                                           
void loop() 
{
//считываем значение с пина 7 
int buttonState=digitalRead(7);
//если кнопка нажата, лог "1" на входе 7
if (buttonState==1)
{
//включаем светодиод
digitalWrite(8, HIGH);
}
else
{
//иначе, выключаем светодиод
digitalWrite(8, LOW);
}
}
