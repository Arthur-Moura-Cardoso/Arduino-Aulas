const int sensorUv = A0;
int leituraUv = 0;
byte indiceUv = 0;


void setup() {
  Serial.begin(9600);
  pinMode(sensorUv, INPUT);
}

void loop() {
  leituraUv = analogRead(sensorUv); //Faz a leitura do sensor de raios UV
  indiceUv = map(leituraUv, 0,203, 0,10) //Utiliza a função MAP para converter os valores recebidos entre 0 e 10 (converte a faixa de sinal para 0v e 1v)

  Serial.println(leituraUv, "Valor não convertido")
  Serial.println(indiceUv, "Valor convertido")

  delay(500)
}

// Autor: Arthur Moura 2025

/*
  Lista de itens:
    Arduino Uno
    Sensor UV
    Fios
*/
