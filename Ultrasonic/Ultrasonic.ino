const int pingpin=7;
const int echopin=6;
void setup() {
Serial.begin(9600);
pinMode(pingpin,OUTPUT);
pinMode(echopin,INPUT);
}

void loop() {
  long duration,inches,cm;
  digitalWrite(pingpin,LOW);
  delayMicroseconds(2);
  digitalWrite(pingpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(pingpin,LOW);
  duration = pulseIn(echopin,HIGH);
  inches = microSecondsToInches(duration);
  cm = microSecondsToCentimeters(duration);
  Serial.println("inches");
  Serial.println(inches);
  Serial.println("centimeters");
  Serial.println(cm);
  
}
long microSecondsToInches(long microseconds){
    return microseconds/72/2;
  }
  long microSecondsToCentimeters(long microseconds){
    return microseconds/29/2;
  }                                              
