#include <LiquidCrystal.h>

const int rs=12, e=11, d4=5, d5=4, d6=3, d7=2;

LiquidCrystal lcd(rs,e,d4,d5,d6,d7);


void setup() {
  // put your setup code here, to run once:
    lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
    lcd.setCursor(0,0);
    lcd.print("Hola");
    daly(1000);
    lcd.clear(); // desaparece el hola que pusimos //
    delay (1000);
}
