// Trabalho desenvolvido por alunos do curso de Engenharia da Computação

#include <LiquidCrystal.h>

LiquidCrystal lcd(5, 4, 0, 1, 2, 3);

int s1 = 8;
int s2 = 9;
int s3 = 10;
int s4 = 11;

int c4 = 12;

int cr = 0;
int bit1 = 0;
int bit2 = 0;
int bit3 = 0;
int bit4 = 0;

int compBit1 = 0;
int compBit2 = 0;
int compBit3 = 0;
int compBit4 = 0;

void setup() {
  lcd.begin(16, 2);
  
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);

  pinMode(c4, INPUT);
}
void loop() {
  cr = digitalRead(c4);
  bit1 = digitalRead(s4);
  bit2 = digitalRead(s3);
  bit3 = digitalRead(s2);
  bit4 = digitalRead(s1);

  compBit1 = !bit1;
  compBit2 = !bit2;
  compBit3 = !bit3;
  compBit4 = !bit4;

  lcd.setCursor(0,0);

 if(cr == HIGH) {

    if (bit1 == LOW and bit2 == LOW and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C2: 0x10");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x11");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C2: 0x12");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x13");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C2: 0x14");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x15");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C2: 0x16");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x17");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C2: 0x18");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x19");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C2: 0x1A");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x1B");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C2: 0x1C");
    }
    
    if (bit1 == LOW and bit2 == LOW and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x1D");
    }

    if (bit1 == LOW and bit2 == LOW and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C2: 0x1E");
    }

    if (bit1 == LOW and bit2 == LOW and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C2: 0x1F");
    }
 }



 if (cr == LOW) {

  lcd.print("O c1 de: ");

  lcd.print(bit1);

  lcd.print(bit2);

  lcd.print(bit3);

  lcd.print(bit4);

  

  lcd.setCursor(0,1); 

  lcd.print("e: ");



  if (bit1 == LOW and bit2 == LOW and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C1: 0x0F");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x00");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C1: 0x01");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x02");
    }

    if (bit1 == HIGH and bit2 == HIGH and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C1: 0x03");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x04");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C1: 0x05");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x06");
    }

    if (bit1 == HIGH and bit2 == LOW and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C1: 0x07");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x08");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C1: 0x09");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x0A");
    }

    if (bit1 == LOW and bit2 == HIGH and bit3 == LOW and bit4 == LOW){

      lcd.print("Resultado em C1: 0x0B");
    }
    
    if (bit1 == LOW and bit2 == LOW and bit3 == HIGH and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x0C");
    }

    if (bit1 == LOW and bit2 == LOW and bit3 == HIGH and bit4 == LOW){

      lcd.print("Resultado em C1: 0x0D");
    }

    if (bit1 == LOW and bit2 == LOW and bit3 == LOW and bit4 == HIGH){

      lcd.print("Resultado em C1: 0x0E");
    }

  }

}
