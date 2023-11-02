int ledPin = 13;
int x;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(19200);
  digitalWrite(ledPin, LOW);
  digitalWrite(8, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!Serial.available());

  x = Serial.readString().toInt();
  if(x == 0){
    digitalWrite(ledPin, LOW);
    digitalWrite(8, LOW);
  }
  else if (x == 1){
    digitalWrite(ledPin, HIGH);
    digitalWrite(8, HIGH);
  }
  // delay(15);
}
