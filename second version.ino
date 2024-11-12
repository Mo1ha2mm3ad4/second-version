#include <LiquidCrystal_I2C.h>
#include <wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int a,c;
char b;

void setup() {
  Serial.begin(9600);
  lcd.backlight();
  lcd.clear();
  lcd.init();

}

void loop() {
  if(Serial.available()) {
    a=Serial.parseInt();
    b=Serial.read();
    c=Serial.parseInt();
    Serial.print(a);
    Serial.print(b);
    Serial.println(c);
  }
  if(b=='+'){
    lcd.print(a+c);
  }
  if(b=='-'){
    lcd.print(a-c);
  }
  if(b=='*'){
    lcd.print(a*c);
  }
  if(b=='/'){
    lcd.print(a/c);
  }



}
