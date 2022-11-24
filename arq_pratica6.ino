int val=0; //Declara a variável global val

void setup() {
  // configura os pinos da placa
  pinMode(1,OUTPUT); //Configura o pino 1 como saída
  pinMode(13,INPUT); //Configura o pino 13 como entrada
  

}

void loop() {
  // código que será executado repetidamente
  val=digitalRead(13); //Leitura do sinal de entrada no pino 13
  digitalWrite(1,val); //Escrita do valor lido no pino de saída 1

}
