const int lm35Pin = A0;  // Analog pin for LM35 temperature sensor
const int ledPin = 13;   // Digital pin for onboard LED

void setup() {
  pinMode(lm35Pin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(lm35Pin);
  float temperature = (sensorValue * 5.0 / 1023) * 100.0;

  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature < 30.0) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
  } else {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}
