const int buzzerPin=6;


void setup() {
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  tone(buzzerPin,400);//31-65.000 hertz
  delay(500);
  noTone(buzzerPin);
  delay(500);

}