//Variaveis do código
const int sensorUmidade = A0; //porta analógica na qual o sensor esta conectado

void setup() {
  Serial.begin(9600);
  pinMode(sensorUmidade, INPUT);
}

void loop() {
  Serial.println(analogRead(sensorUmidade));
  /*
    O monitor serial mostrara um numero de 0 a 1023.
    Sendo 1023 seco e 0 muito umido.
    Baseado nesse resultado, criaremos uma lógica para controlar a nossa aplicação.
  */
  delay(1200);
}


// Autor: Arthur Moura 2025

/*
  Lista de itens:
    Arduino Uno
    Sensor de umidade
    Fios
*/
