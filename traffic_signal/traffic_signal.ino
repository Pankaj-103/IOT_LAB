const int redLight = 13;
const int yellowLight = 12;
const int greenLight = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode ( redLight, OUTPUT);
  pinMode ( yellowLight, OUTPUT);
  pinMode ( greenLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(redLight, HIGH);
   delay(30);
   digitalWrite(redLight, LOW);
   delay(30);
   digitalWrite(yellowLight, HIGH);
   delay(30);
   digitalWrite(yellowLight, LOW);
   delay(30);
   digitalWrite(greenLight, HIGH);
   delay(30);
   digitalWrite(greenLight, LOW);
   delay(30);
}
