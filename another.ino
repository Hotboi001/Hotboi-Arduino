int LED[10] = {2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i<10; i++){
     pinMode (LED[i], OUTPUT);
}
}
void loop() {
  // put your main code here, to run repeatedly:
 for (int i = 0; i<10; i++){
  digitalWrite(LED [i], HIGH);
  delay (100);
  digitalWrite(LED [i], LOW);
  delay (100);
}
}
