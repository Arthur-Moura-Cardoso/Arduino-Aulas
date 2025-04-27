//Váriaveis para definir as portas dos LEDs

int ledRed = 7;
int ledYellow = 5;
int ledGreen = 3;

void setup() {
  // Definindo os LEDs como saídas
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);

}

void loop() {
  // Sequência do semáforo

  // LED vermelho aceso
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(2500);

  // LED amarelo aceso
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  delay(1200);

  // LED verde aceso
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);
  delay(2500);
}

// Autor: Arthur Moura 2025

/*
  Lista de itens:
    LEDs - Vermelho, amarelo e verde
    Resistores - 220 ohms
    Fios
    Protoboard
    Arduino Uno
*/