#include <LiquidCrystal.h>
int C=75;
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  analogWrite(6,C);
  lcd.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<16;i++)
  {
  lcd.clear();
  lcd.setCursor(i,i%2);
  lcd.print("Aiswarya");
  delay(1000);
  }
}
