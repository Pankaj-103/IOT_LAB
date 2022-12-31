#include <Servo.h>

//automatic irrigation controller
#include<Servo.h>
Servo myservo;
int pos=0;
int sensorPin=A0;
int sensorValue=0;


void setup() {
  // put your setup code here, to run once:
myservo.attach(8);

Serial.begin(9600);
}

void loop() {

  
  // put your main code here, to run repeatedly:
sensorValue=analogRead(sensorPin);
Serial.println(sensorValue);
if(sensorValue>700){
for(pos=0;pos<180;pos++){
  myservo.write(pos);
  delay(15);

}
for(pos=180;pos>0;pos--){
  myservo.write(pos);
  delay(15);

}
}
delay(1000);
}
