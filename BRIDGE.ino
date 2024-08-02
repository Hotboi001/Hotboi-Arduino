#define TOGGLE1 3
#define TOGGLE2 10
#define RED1 6
#define YELLOW1 5
#define GREEN1 4
#define RED2 9
#define YELLOW2 8
#define GREEN2 7

void setup() {
  // put your setup code here, to run once:
  pinMode (TOGGLE1, INPUT);
  pinMode (TOGGLE2, INPUT);
  pinMode (RED1, OUTPUT);
  pinMode (YELLOW1, OUTPUT);
  pinMode (GREEN1, OUTPUT);
  pinMode (RED2, OUTPUT);
  pinMode (YELLOW2, OUTPUT);
  pinMode (GREEN2, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool RESULT1 = digitalRead (TOGGLE1);
  bool RESULT2 = digitalRead (TOGGLE2);
  if (RESULT1 == 1 && RESULT2 == 0) {
    digitalWrite (YELLOW1, HIGH);
    digitalWrite(YELLOW2, HIGH);
    delay(100);
    digitalWrite (YELLOW1, LOW);
    digitalWrite (YELLOW2, LOW);
    delay(100);
    digitalWrite (GREEN1, HIGH);
    digitalWrite(RED2, HIGH);
    digitalWrite (YELLOW1, LOW);
    digitalWrite (YELLOW2, LOW);
    delay (RESULT1 == 1 || RESULT2 == 0);
  }


}
