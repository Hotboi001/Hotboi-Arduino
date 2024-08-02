#define Forward 13 //FORWARD
#define Reverse 12 //REVERSE
#define Enable 11 // ENABLE
#define Trigger 10
#define Echo 9
float duration;
void setup() {
  // put your setup code here, to run once:
  pinMode(Forward, OUTPUT);
  pinMode(Reverse, OUTPUT);
  pinMode(Trigger, OUTPUT);
  pinMode(Enable, OUTPUT);
  pinMode(Echo, INPUT);
  Serial.begin(9600);
}
void GATE() {
  if (duration == 0 && duration <= 130) {
    digitalWrite(Trigger, HIGH);
    delay(10);
    digitalWrite(Trigger, LOW);
    delay(10);
    analogWrite(Enable, 255);
    digitalWrite(Forward, LOW);
    digitalWrite(Reverse, HIGH);
    delay (200);
    digitalWrite(Forward, HIGH);
    digitalWrite(Reverse, LOW);
  }

  }
  void loop() {
    int duration = pulseIn(Echo, HIGH);
    if (duration == 0 && duration <= 130) {
      /*digitalWrite(Trigger, HIGH);
        delay(10);
        digitalWrite(Trigger, LOW);
        delay(10);*/
      Serial.println(duration);
      delay(100);
    }

  }
