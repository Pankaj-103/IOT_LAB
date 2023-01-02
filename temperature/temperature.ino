int op = A1;
void setup()
{
 Serial.begin(9600);
}

void loop() 
{
 int rawvoltage = analogRead(op);
 float millivolts = (rawvoltage/1024.0)*5000;
 float celsius = millivolts/100.0;

 Serial.print("degreesCelsius:");
 Serial.println(celsius);
 Serial.print("degreesFahrenheit:");
 Serial.println((celsius*9)/5+32);

 delay(1000);
 
}
