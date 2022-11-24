#include <LiquidCrystal.h>
 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int out1 = 8;
int out2 = 9;
int out3 = 10;
int out4 = 11;
int cr = 12;

int val=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;

void setup(){
  lcd.begin(16,2);
  pinMode(out1,INPUT);
  pinMode(out2,INPUT);
  pinMode(out3,INPUT);
  pinMode(out4,INPUT);
  pinMode(cr,INPUT);
  }

void loop(){
  
  val = digitalRead(out1);
  val2 = digitalRead(out2);
  val3 = digitalRead(out3);
  val4 = digitalRead(out4);
  val5 = digitalRead(cr);
  
  lcd.clear();
  lcd.setCursor(0, 0);

  if (val == LOW and val2 == LOW and val3 == LOW and val4 == LOW and val5 == LOW){
    lcd.print("Resultado = 0x1F");
    delay(5000);  
  }

  if (val == HIGH and val2 == LOW and val3 == LOW and val4 == LOW and val5 == LOW){
    lcd.print("Resultado = 0x1E");
    delay(5000);  
  }
  if (val == LOW and val2 == HIGH and val3 == LOW and val4 == LOW and val5 == LOW){
  lcd.print("Resultado = 0x1D");
  delay(5000);  
  }
  if (val == HIGH and val2 == HIGH and val3 == LOW and val4 == LOW and val5 == LOW){
  lcd.print("Resultado = 0x1C");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == HIGH and val4 == LOW and val5 == LOW){
  lcd.print("Resultado = 0x1B");
  delay(5000);  
  }
  if (val == HIGH and val2 == LOW and val3 == HIGH and val4 == LOW and val5 == LOW){
  lcd.print("Resultado = 0x1A");
  delay(5000);  
  }
  if (val == LOW and val2 == HIGH and val3 == HIGH and val4 == LOW and val5 == LOW){
  lcd.print("Resultado = 0x19");
  delay(5000);  
  }
  if (val == HIGH and val2 == HIGH and val3 == HIGH and val4 == LOW and val5 == LOW){
  lcd.print("Resultado = 0x18");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == LOW and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x17");
  delay(5000);  
  }
  if (val == HIGH and val2 == LOW and val3 == LOW and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x16");
  delay(5000);  
  }
  if (val == LOW and val2 == HIGH and val3 == LOW and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x15");
  delay(5000); 
  }
  if (val == HIGH and val2 == HIGH and val3 == LOW and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x14");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == HIGH and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x13");
  delay(5000);  
  }
  if (val == HIGH and val2 == LOW and val3 == HIGH and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x12");
  delay(5000);  
  }  
  if (val == LOW and val2 == HIGH and val3 == HIGH and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x11");
  delay(5000);  
  }
  if (val == HIGH and val2 == HIGH and val3 == HIGH and val4 == HIGH and val5 == LOW){
  lcd.print("Resultado = 0x10");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == LOW and val4 == LOW and val5 == HIGH){
    lcd.print("Resultado = 0x10");
    delay(5000);  
  }

  if (val == HIGH and val2 == LOW and val3 == LOW and val4 == LOW and val5 == HIGH){
    lcd.print("Resultado = 0x0F");
    delay(5000);  
  }
  if (val == LOW and val2 == HIGH and val3 == LOW and val4 == LOW and val5 == HIGH){
  lcd.print("Resultado = 0x0E");
  delay(5000);  
  }
  if (val == HIGH and val2 == HIGH and val3 == LOW and val4 == LOW and val5 == HIGH){
  lcd.print("Resultado = 0x0D");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == HIGH and val4 == LOW and val5 == HIGH){
  lcd.print("Resultado = 0x0C");
  delay(5000);  
  }
  if (val == HIGH and val2 == LOW and val3 == HIGH and val4 == LOW and val5 == HIGH){
  lcd.print("Resultado = 0x0B");
  delay(5000);  
  }
  if (val == LOW and val2 == HIGH and val3 == HIGH and val4 == LOW and val5 == HIGH){
  lcd.print("Resultado = 0x0A");
  delay(5000);  
  }
  if (val == HIGH and val2 == HIGH and val3 == HIGH and val4 == LOW and val5 == HIGH){
  lcd.print("Resultado = 0x09");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == LOW and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x08");
  delay(5000);  
  }
  if (val == HIGH and val2 == LOW and val3 == LOW and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x07");
  delay(5000);  
  }
  if (val == LOW and val2 == HIGH and val3 == LOW and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x06");
  delay(5000);  
  }
  if (val == HIGH and val2 == HIGH and val3 == LOW and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x05");
  delay(5000);  
  }
  if (val == LOW and val2 == LOW and val3 == HIGH and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x04");
  delay(5000);  
  }
  if (val == HIGH and val2 == LOW and val3 == HIGH and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x03");
  delay(5000);  
  }  
  if (val == LOW and val2 == HIGH and val3 == HIGH and val4 == HIGH and val5 == HIGH){
  lcd.print("Resultado = 0x02");
  delay(5000);  
  }  
}
