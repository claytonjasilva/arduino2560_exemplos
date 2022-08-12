//Prática 1
//O programa ilustra a utilização das saídas/entradas do Arduíno 

void setup() {
  // configura os pinos da placa

  pinMode(10,OUTPUT); //Configura o pino 10 da placa como saída 

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(10,HIGH); //Gera um sinal alto no pino 10 - configura o pino 'on'
  delay(5000); //Pausa durante 5 seg
  digitalWrite(10,LOW); //Gera um sinal baixo no pino 10 - configura o pino 'off'
  delay(5000); //Pausa durante 5 seg
  digitalWrite(10,HIGH); //Gera um sinal alto no pino 10 - configura o pino 'on'
  delay(3000); //Pausa durante 3 seg

}
