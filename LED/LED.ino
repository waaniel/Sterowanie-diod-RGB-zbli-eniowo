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
  zakres(7, 14);
  zakres2(14, 21);
  zakres3(21, 28) 
  zakres4(28, 35); 
  zakres5(35, 42); 
  zakres6(42, 49); 
  zakres7(49, 56); 
  zakres8(56, 63); 
  zakres9(63, 70); 
  zakres10(70, 77); 
  zakres11(77, 84); 
  zakres12(84, 91);
  zakres13(91, 98); 
  zakres14(98, 105); 
  zakres15(105, 200);  
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

void zakres10(int a10, int b10) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a10) && (jakDaleko < b10)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 175, 55));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres11(int a11, int b11) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a11) && (jakDaleko < b11)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 135, 95));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres12(int a12, int b12) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a12) && (jakDaleko < b12)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 95, 135));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres13(int a13, int b13) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a13) && (jakDaleko < b13)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 55, 175));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}

void zakres14(int a14, int b14) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a14) && (jakDaleko < b14)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 15, 215));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}


void zakres15(int a15, int b15) 
{
  int jakDaleko = zmierzOdleglosc();
  if ((jakDaleko > a15) && (jakDaleko < b15)) 
    {  
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    pixels.show(); 
    pixels.show();   
    } 
    else 
      {
       pixels.show();  
       pixels.clear();  
      }
}
