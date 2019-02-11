
const int air1=7;
const int air2=6;

const int relay=4;

void setup() {
  
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
 
  pinMode(4,OUTPUT);

}

void loop() {
  

int val=analogRead(A0);
if(val<1000)
{
  
  digitalWrite(air1,HIGH);
  digitalWrite(air2,HIGH);
  digitalWrite(relay,HIGH);
 

}

}
