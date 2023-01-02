char val;
int LEDPIN = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
  }
  val=Serial.read();
  if(val=='a'){
    digitalWrite(2,HIGH);
  }
  if(val=='A'){
    digitalWrite(2,LOW);
  }
  if(val=='b'){
    digitalWrite(3,HIGH);
  }
  if(val=='B'){
    digitalWrite(3,LOW);
  }
  if(val=='c'){
    digitalWrite(4,HIGH);
  }
  if(val=='C'){
    digitalWrite(4,LOW);
  }
  if(val=='d'){
    digitalWrite(5,HIGH);
  }
  if(val=='D'){
    digitalWrite(5,LOW);
  }
}
