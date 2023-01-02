int LEDPIN = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDPIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(A0);
  int brightness = map(analogValue,0,1023,0,255);
  analogWrite(LEDPIN,brightness);
  Serial.print("Analog");
  Serial.print(analogValue);
  Serial.print("Brightnes");
  Serial.print(brightness);
  delay(100);
}
