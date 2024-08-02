int buzzer = 8;
int Led = 7;
int flame_sensor = 4;
int flame_detected;
void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(Led, OUTPUT);
  pinMode(flame_sensor, INPUT);

}

void loop() {
  flame_detected = digitalRead(flame_sensor);
  if (flame_detected == 1)
  {
    Serial.println("Flame detected...! Run to Muster point");
    digitalWrite(buzzer, HIGH);
    digitalWrite(Led, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    digitalWrite(Led, LOW);
    delay(200);
  }
  else
  {
    Serial.println("No flame detected,we are watching");
    digitalWrite(buzzer, LOW);
    digitalWrite(Led, LOW);
    delay(1000);
  }
}
