const int redLight = 13;
const int greenLight = 2;
const int yellowLight = 3;

void setup() {
  // put your setup code here, to run once:
   pinMode(redLight,OUTPUT);
   pinMode(greenLight,OUTPUT);
   pinMode(yellowLight,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(redLight,HIGH);
   delay(1000);
   digitalWrite(redLight,LOW);
   delay(1000);
   digitalWrite(yellowLight,HIGH);
   delay(1000);
   digitalWrite(yellowLight,LOW);
   delay(1000);
   digitalWrite(greenLight,HIGH);
   delay(1000);
   digitalWrite(greenLight,LOW);
   delay(1000);
}
