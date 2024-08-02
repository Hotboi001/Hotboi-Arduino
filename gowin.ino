#define pot A2
#define led 13
void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(pot);
  if (value = 0 && value <= 341) {
    digitalWrite(led, HIGH);
  }
}
