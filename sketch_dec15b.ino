#include <LiquidCrystal.h>  
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

 void setup()
 { 
     lcd.begin(16, 2);
  }  
     void loop()
 {  
     lcd.clear();
     delay(1000);
     lcd.setCursor(0, 0);
     lcd.print("Arduino");
     lcd.setCursor(0, 1);
     lcd.print("Uno");
     delay(1000);
   
     
}
