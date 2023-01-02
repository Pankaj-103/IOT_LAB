
//This is program to digital input to digital output
const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;

void setup(){
  pinMode (ledPin, OUTPUT);
  pinMode (buttoPin, INPUT);
}

void loop(){
  buttonState =digitalRead(buttonPin);

  if(bottonState == HIGH){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
