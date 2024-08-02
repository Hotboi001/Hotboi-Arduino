#define FR 8 // FRONT RIGHT TYRE
#define FL 7 // FRONT LEFT TYRE
#define BR 4 // BACK RIGHT TYRE
#define BL 3 // BACK LEFT TYRE
#define ENABLE1 9
#define ENABLE2 10
#define SENSOR1T 4
#define SENSOR2T 2
#define SENSOR1E 5
#define SENSOR2E 3
float duration1;
float duration2;
int SENSOR1;
int SENSOR2;
void setup() {
  // put your setup code here, to run once:
  pinMode(FR, OUTPUT);
  pinMode(FL, OUTPUT);
  pinMode(BR, OUTPUT);
  pinMode(BL, OUTPUT);
  pinMode(SENSOR1T, OUTPUT);
  pinMode(SENSOR2T, OUTPUT);
  pinMode(SENSOR1E, OUTPUT);
  pinMode(SENSOR2E, OUTPUT);
  pinMode(ENABLE1, OUTPUT);
  pinMode(ENABLE2, OUTPUT);
}
void forward() {
  digitalWrite(FR, LOW);
  digitalWrite(FL, HIGH);
  digitalWrite(BR, LOW);
  digitalWrite(BL, HIGH);
  analogWrite(ENABLE1, 255);
  analogWrite(ENABLE2, 255);
  delay(100);
}

void backward() {
  digitalWrite(FR, HIGH);
  digitalWrite(FL, LOW);
  digitalWrite(BR, HIGH);
  digitalWrite(BL, LOW);
  analogWrite(ENABLE1, 255);
  analogWrite(ENABLE2, 255);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SENSOR1T, HIGH);
  delayMicroseconds(10);
  digitalWrite(SENSOR1T, LOW);
  delayMicroseconds(10);
  duration1 = pulseIn(SENSOR1E, HIGH);
  SENSOR1 = ((duration1/2)* 0.034);


  digitalWrite(SENSOR2T, HIGH);
  delayMicroseconds(10);
  digitalWrite(SENSOR2T, LOW);
  delayMicroseconds(10);
  duration2 = pulseIn(SENSOR2E, HIGH);
  SENSOR2 = ((duration2/2)* 0.034);
  
  if (SENSOR1 <= 100 && SENSOR2 >= 500) {
    forward();
  }
  if (SENSOR1 <= 100 && SENSOR2 <= 500 ) {
    backward();
  }
  }
