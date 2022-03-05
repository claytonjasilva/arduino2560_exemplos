//Prática 1
//O programa ilustra a utilização das saídas/entradas do Arduíno 

void setup() {
  // configura os pinos da placa

  pinMode(1,OUTPUT); //Configura o pino 1 da placa como saída 

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(1,LOW); //Gera um sinal baixo no pino 1
  delay(500);
  digitalWrite(1,HIGH); //Gera um sinal alto no pino 1

}
