#include <LiquidCrystal.h>

// inicializa a biblioteca
// com os números dos pinos do arduíno
const int rs = 10, en = 8, d4 = 0, d5 = 1, d6 = 2, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // configura o número de colunas e linhas do lcd:
  lcd.begin(16, 2);
  lcd.print("Uso do lcd1602");  
  
}

void loop() {
// set o cursor para a coluna 0, linha 1
  lcd.setCursor(0, 1);
  
// escreve o número de segundos após o reset
  lcd.print(millis() / 1000);
}
