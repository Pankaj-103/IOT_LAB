#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);

void setup()
{
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop()
{
  if(mySerial.available()>0)
  {
  Serial.write(mySerial.read());
  }
}
