#include<SoftwareSerial.h>

int sensorPin = A0;
int senVal = 0;
int led = 9;
int buzz =12;

void setup() {
  // put your setup code here, to run once:
  pinMode( led, OUTPUT);
  pinMode( buzz,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Flamesensor");
  senVal=analogRead(sensorPin);
  Serial.println(senVal);

  if(senVal < 100){
    Serial.println("Fire detected");
    digitalWrite(led,HIGH);
    digitalWrite(buzz,HIGH);
    delay(1000);
  }

  digitalWrite(led,LOW);
  digitalWrite(buzz,LOW);
  delay(senVal);
}
