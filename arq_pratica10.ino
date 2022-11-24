#include <LiquidCrystal.h>

// inicializa a biblioteca
// com os números dos pinos do arduíno
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7, buz = 4, PIR = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int val=0;

void setup() {
  //configura o pino 13 como entrada para o sensor, pino 4 como saída para buzzer
  pinMode(PIR,INPUT);
  pinMode(buz,OUTPUT);
  
  // configura o número de colunas e linhas do lcd:
  lcd.begin(16, 2);
  lcd.print("Inicio!");
  delay(1000);   
}

void loop() {
  val=digitalRead(PIR);
  if (val==HIGH){
    // Escreve uma mensagem se houver movimento
    lcd.print("Movimento!");
    tone(buz,2000,200);
    delay(1000); 
  }
  lcd.clear();
  delay(1000);
  val=LOW;
}
