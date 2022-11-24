// O programa ilustra o funcionamento das entradas analógicas do Arduíno

// declara variáveis globais
int anPin = A0;
int val;
float tensao;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //  configura a saída serial
}

void loop() {
  // put your main code here, to run repeatedly:
  
  val = analogRead(anPin); // leitura do sinal analógico
  tensao = 1.9 + (val - 416) * 3.004/588;
  Serial.println(tensao); // geração da saída serial
  delay(1000);
}
