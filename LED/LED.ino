#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif
#define trigPin 12
#define echoPin 11
#define PIN        6 //Pin dla LEDów
#define NUMPIXELS 10 //Ilość LEDów
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
 
void setup() 
{
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); //Pin, do którego podłączymy trig jako wyjście
  pinMode(echoPin, INPUT); //a echo, jako wejście
}
 
  void loop()
{  
  zakres(5, 10);
  zakres2(10, 15); 
  /* zakres3(15, 20); 
  zakres4(20, 25); 
  zakres5(25, 30); 
  zakres6(25, 30); 
  zakres7(30, 35); 
  zakres8(35, 40); 
  zakres9(40, 45); 
  zakres10(45, 50); 
  zakres11(50, 55);
  zakres12(55, 60); 
  zakres13(60, 65); 
  zakres14(65, 70); 
  zakres15(70, 75); 
  zakres16(75, 80); 
  zakres17(80, 85); 
  zakres18(85, 90); 
  zakres19(90, 95); 
  zakres20(95, 100); 
  zakres21(100, 105)*/
  delay(10);
} 
 
  int zmierzOdleglosc() 
{
  long czas, dystans;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  czas = pulseIn(echoPin, HIGH);
  dystans = czas / 58;
  return dystans;
}
 
void zakres(int a, int b) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a) && (jakDaleko < b)) 
    {
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();  
    } 
    else
    {
     pixels.show();  
     pixels.clear(); 
    } 
}

  void zakres2(int a2, int b2) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a2) && (jakDaleko < b2)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(215, 15, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

  void zakres3(int a3, int b3) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a3) && (jakDaleko < b3)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(175, 55, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres4(int a4, int b4) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a4) && (jakDaleko < b4)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(135, 95, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres5(int a5, int b5) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a5) && (jakDaleko < b5)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(95, 135, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres6(int a6, int b6) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a6) && (jakDaleko < b6)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(55, 175, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres7(int a7, int b7) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a7) && (jakDaleko < b7)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(15, 215, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres8(int a8, int b8) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a8) && (jakDaleko < b8)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres9(int a9, int b9) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a9) && (jakDaleko < b9)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 215, 15));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}
