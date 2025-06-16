void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);  // TURN ON THE LED
  delay(1000);             // KEEP TURN ON FOR 1 SECOND
  digitalWrite(13, LOW); // TURN OFF THE LED
  delay(1000);          // KEEP TURN OFF FOR 1 SECOND

}
