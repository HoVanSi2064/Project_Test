#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 7, 6, 5, 4);
int btn_off = 3;
int btn_left =2;
int btn_right = 1;
int bd_btn_off = LOW;
int bd_btn_left = LOW;
int bd_btn_right = LOW;

void setup() {
  lcd.print(16,2);
  pinMode(btn_off, INPUT);
  pinMode(btn_left, INPUT);
  pinMode(btn_right, INPUT);

  lcd.clear();
  lcd.setCursor(6,0);
  lcd.print("HELLO");
}

void loop() {
  int ht_btn_off = digitalRead(btn_off);
  int ht_btn_left = digitalRead(btn_left);
  int ht_btn_right = digitalRead(btn_right);

  
  //delay(400);
  
  if(bd_btn_off == LOW && ht_btn_off == HIGH)
    lcd.noDisplay();
  bd_btn_off = ht_btn_off;
  
  if(bd_btn_left == LOW && ht_btn_left == HIGH)
    lcd.scrollDisplayLeft();
  bd_btn_left = ht_btn_left;
  
  if(bd_btn_right == LOW && ht_btn_right == HIGH)
    lcd.scrollDisplayRight();
  bd_btn_right = ht_btn_right;
}
