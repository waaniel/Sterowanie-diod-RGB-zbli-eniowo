#include <Wire.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif
#define trigPin 12
#define echoPin 11
#define PIN        6 //Pin dla LEDów
#define NUMPIXELS 10 //Ilość LEDów
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int TCRT5000; //zainicjonowanie zmiennej zapisująej odczyt napięcia na fototranzystorze 
int prog = 1000; //próg napięcia, dla ktorego zmieniany jest kolor
 
void setup() {
  
pixels.begin(); 
Serial.begin(9600);

}

void loop() {
  TCRT5000 = analogRead(A0); //odczyt napięcia
Serial.println(TCRT5000); //możliwość odczytu napięcia w monitorze portu szeregowego
  if (TCRT5000 > prog)  //pętla zmieniająca kolor
  {
    pixels.setBrightness(50); //ustawienie jasności
    pixels.clear(); //"wyczyszczenie" ostatniej wartości przypisanej ledom
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(255, 255, 255)); //przypisanie koloru białego gdy czujnik jest odsłonięty
    pixels.show();  
   } 
   else
    {
    pixels.setBrightness(50); 
    pixels.clear(); 
    for(int i=0; i<NUMPIXELS; i++) 
    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); //przypisanie koloru zielonego gdy czujnik jest zasłonięty 
    pixels.show();  
    } 
   delay(100);
  }
