
const int air1=7;
const int air2=6;
const int load=4;
int  flag=0;
void setup() {
  
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  

int val=digitalRead(3);
start:if(flag<1)
{
if(val==HIGH)
{
  
  digitalWrite(air2,HIGH);
  digitalWrite(air1,LOW);
  digitalWrite(load,HIGH);
  delay(10000);
  digitalWrite(load,LOW);
  digitalWrite(air1,HIGH);
 flag=flag+1; 
 goto start;


}

}}
