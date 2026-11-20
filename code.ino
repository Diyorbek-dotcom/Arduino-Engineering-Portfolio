#include <LiquidCrystal.h>
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

const int photPin=A0;
const int tempPin=A1;
const int moisturePin=A2;

const int redPin=10;
const int yellowPin=9;
const int greenPin=8;
const int ventPin=6;
const int pumpPin=7;

void setup()
{
  lcd_1.begin(16, 2);
  pinMode (photPin,INPUT);
  pinMode (tempPin,INPUT);
  pinMode (moisturePin,INPUT);
  pinMode (redPin,OUTPUT);
  pinMode (yellowPin,OUTPUT);
  pinMode (ventPin,OUTPUT);
  pinMode (pumpPin,OUTPUT);
  
  Serial.begin(9600);
    
}

void loop()
{
 	int celsius=map(((analogRead(tempPin)-20)*3.04),0,1023,-40,125);
    int photValue=analogRead(photPin);
  	int moistureSensor=analogRead(moisturePin);
  	int moisturePercent= map(moistureSensor,0,876,0,100);
  
  bool ventState= false;
  if (celsius>32) {
    ventState= true; }
  else {
    ventState= false; }
  if (ventState){
    digitalWrite(ventPin, HIGH);
  } else {
    digitalWrite(ventPin,LOW);
  }
  bool pumpState = false;
  if (moisturePercent<30) {
    pumpState= true;
  } else {
    pumpState= false;}
  
   if (pumpState){
    digitalWrite(pumpPin, HIGH);
  } else {
    digitalWrite(pumpPin,LOW);
   }
  bool redState= false;
  bool yellowState= false;
  bool greenState= false;
  
  if (moisturePercent < 30 && pumpState)
    redState= true;

if (photValue > 500 && moisturePercent > 50){
greenState= true;}
else {
   yellowState=true;
}
 if (redState) {
  digitalWrite(redPin,HIGH);
 } else {
 digitalWrite(redPin,LOW);
 }

if (yellowState) {
  digitalWrite(yellowPin,HIGH);
 } else {
 digitalWrite(yellowPin,LOW);}

if (greenState) {
  digitalWrite(greenPin,HIGH);
 } else {
 digitalWrite(greenPin,LOW);}
  
  lcd_1.setCursor (0,0);
lcd_1.print("T: ");
lcd_1.print (celsius);
lcd_1.print(" CIL: ");
lcd_1.print(photValue);
lcd_1.print(" ");
  lcd_1.print("M: ");
lcd_1.print(moisturePercent);
lcd_1.print("% P:");

if (pumpState) {
lcd_1.print("ON");
} else {
lcd_1.print("OFF");
}
lcd_1.print(" ");
delay(1000);
}