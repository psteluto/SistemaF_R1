#define ledvd 7
#define ledvm 8
void setup() {
  pinMode(ledvd, OUTPUT);
  pinMode(ledvm, OUTPUT);

}

void loop() {
  digitalWrite(ledvd, HIGH);
  digitalWrite(ledvm, LOW);
  delay(2000);
  digitalWrite(ledvd, LOW);
  digitalWrite(ledvm, HIGH);
  delay(2000);

}
