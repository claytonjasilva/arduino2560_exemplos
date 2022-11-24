//Este código captura e armazena as distâncias detectadas por um sensor ultrassônico

// definição das variáveis globais
int pinEcho=6; // pino do Arduíno ligado ao pino Echo do sensor
int pinTrig=7; // pino do Arduíno ligado ao pino Trig do sensor
float *vetor; // ponteiro que irá armazenar os 1000 primeiros dados das distâncias
int *p_cont;  // ponteiro do contador

// definição da constante
const int VEL_SOM=340; // em metros por seg

void disparaTrig(){
  digitalWrite(pinTrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig,LOW);
}

void setup() {
  // define os pinos do Arduíno
  pinMode(pinEcho,INPUT);
  pinMode(pinTrig,OUTPUT);
  vetor=0x200; // incializa o endereço apontando para 0x200 - endereço inicial da sram do MC2560
  p_cont=0x1394; // reserva o endereço para armazenar o contador para não haver conflito com vetor

  // inicializa o pino de Trig e a porta serial
  digitalWrite(pinTrig,LOW);
  Serial.begin(9600);

}

void loop() {

  if (*p_cont<=1000){
    disparaTrig(); // dispara sinal de Trig
    *vetor=pulseIn(pinEcho,HIGH)*0.000001; // determina o tempo em seg
    *vetor=*vetor*VEL_SOM*100/2; // determina a distancia em cm     
    Serial.println("Distancia em centimetros: "); // apresenta o resultado
    Serial.println(*vetor);  
  }
  *p_cont++;
  vetor++; //incrementa o ponteiro
  
  delay(2000); //mantém ciclo de 2 seg de trabalho do sensor
  
}
