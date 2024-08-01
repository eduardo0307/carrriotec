#include <Servo.h> // Biblioteca para controlar servos, útil para ler sinais PWM

Servo ch1;  // Canal 1 (geralmente usado para controle de direção)
Servo ch2;  // Canal 2 (geralmente usado para controle de aceleração)

int ch1Value;  // Valor do Canal 1
int ch2Value;  // Valor do Canal 2

void setup() {
  Serial.begin(9600);
  
  // Inicializa os canais
  ch1.attach(2); // Conecte o canal 1 do receptor ao pino 2 do Arduino
  ch2.attach(3); // Conecte o canal 2 do receptor ao pino 3 do Arduino
}

void loop() {
  // Lê os valores PWM dos canais
  ch1Value = pulseIn(2, HIGH);
  ch2Value = pulseIn(3, HIGH);

  // Exibe os valores lidos na Serial para depuração
  Serial.print("Channel 1: ");
  Serial.println(ch1Value);
  Serial.print("Channel 2: ");
  Serial.println(ch2Value);

  // Use os valores lidos para controlar os motores
  // Exemplo: Controle simples baseado em valores PWM

  if (ch2Value > 1500) {
    // Movimenta para frente
  } else if (ch2Value < 1500) {
    // Movimenta para trás
  } else {
    // Parar
  }

  if (ch1Value > 1500) {
    // Virar à direita
  } else if (ch1Value < 1500) {
    // Virar à esquerda
  } else {
    // Ir reto
  }

  delay(20); // Pequeno atraso para evitar leituras excessivas
}
