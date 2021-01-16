# V SEM SIST - TECHNIKA MIKROPROCESOROWA
Projekt z Techniki Mikroprocesorowej

<h2> Podświetlenie szafki - sterowanie koloru diod RGB za pomocą transoptora. </h2>

<h2> Urządzenia wejścia </h2>
<ul>
<li>Transoptor odbiciowy</li>
</ul>
<h2> Urządzenia wyjścia </h2>
<ul>
<li>Ekran LCD</li>
<li>Taśma LED RGB</li>
</ul>

Układ realizuje podświetlenie przeszklonej szafki. Gdy drzwiczki szafki pozostają zamknięte, podświetlenie ma kolor zielony. W przypadku otworzenia drzwiczek, kolor zmienia się na biały w celu oświetlenia zawartości szafki. 

<h2> Kod programu wraz z opisem</h2>

``` c++

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

```