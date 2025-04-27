//Definindo a porta do rele
const int rele = 2;

void setup() {
  Serial.begin(9600);
  pinMode(rele, OUTPUT);

  //iniciamos com o rele desligado
  digitalWrite(rele, LOW);
}

void loop() {

  if (/*condicção*/) {
    digitalWrite(rele, HIGH)
  }
}
