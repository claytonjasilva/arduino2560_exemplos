//Declaração das variáveis globais
int G=21,F=20,E=19,D=18,C=17,B=16,A=15;

void letraA(){

  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  
}

void letraB(){

  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  
}

void letraC(){

  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(G,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(A,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  letraA();
  delay(1000);
  letraB();
  delay(1000);
  letraC();
  delay(1000);

}
