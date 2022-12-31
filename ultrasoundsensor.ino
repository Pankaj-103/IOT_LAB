const int pingPin=7,echoPin=6,ledPin=13;

void setup()
{
Serial.begin(9600);
pinMode(echoPin,INPUT);
pinMode(pingPin,OUTPUT);
pinMode(ledPin,OUTPUT);
}

long ms2Inches(long ms)
{
  return ms/74/2;
}

long ms2Cm(long ms)
{
  return ms/29/2;
}



void loop() {
long duration,inches,cm;
digitalWrite(pingPin,LOW);
delayMicroseconds(2);
digitalWrite(pingPin,HIGH);
delayMicroseconds(10);
digitalWrite(pingPin,LOW);
duration=pulseIn(echoPin,HIGH);
inches=ms2Inches(duration);
cm=ms2Cm(duration);
Serial.println("inches");
Serial.println(inches);
Serial.println("Centimeter");
Serial.println(cm);

if(cm<10)
{
  digitalWrite(ledPin,HIGH);
}
else
{
  digitalWrite(ledPin,LOW);
}

}
