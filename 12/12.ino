const int ledPin=12;
const int buttonPin=3;
int buttonState=0;

void setup() {
  // put your setup code here, to run once:
pinMode (ledPin,OUTPUT);
pinMode (buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(buttonPin);
if(buttonState==HIGH){
  digitalWrite(ledPin,HIGH);
}
else{
   digitalWrite(ledPin,LOW);
}
}
