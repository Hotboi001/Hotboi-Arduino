#define lifeline A3
#define neutralline A2
#define Buzzer 7
void setup() {
  // put your setup code here, to run once:
pinMode(lifeline, INPUT);
pinMode(neutralline, INPUT);
pinMode(Buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int liferead = analogRead (lifeline);
int neutralread = analogRead (neutralline);
if (liferead > neutralread){
  digitalWrite (Buzzer, HIGH);
  digitalWrite (neutralline, LOW);
}
if (liferead < neutralread){
  digitalWrite (Buzzer, HIGH);
  digitalWrite (lifeline, LOW);
}
}
