//Prática 1
//O programa ilustra a utilização das saídas/entradas do Arduíno 

void setup() {
  // configura os pinos da placa

  pinMode(1,OUTPUT); //Configura o pino 1 da placa como saída 

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(1,HIGH); //Gera um sinal alto no pino 1 - configura o pino 'on'
  delay(5000); //Pausa durante 5 seg
  digitalWrite(1,LOW); //Gera um sinal baixo no pino 1 - configura o pino 'off'
  delay(5000); //Pausa durante 5 seg
  digitalWrite(1,HIGH); //Gera um sinal alto no pino 1 - configura o pino 'on'
  delay(3000); //Pausa durante 3 seg

}
