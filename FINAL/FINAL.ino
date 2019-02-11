
const int air1=7;
const int air2=6;
const int load=4;
const int relay=8;
int  flag=0;
void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,INPUT);
  
}

void loop() {  

int val=digitalRead(3);

if(flag<1)
{

if(val=HIGH)

{
  digitalWrite(air1,LOW);
  digitalWrite(air2,HIGH);
  digitalWrite(load,HIGH);
  delay(19000);
  flag=flag+1; 
   digitalWrite(air1,HIGH);
   digitalWrite(load,LOW);
   digitalWrite(air2,HIGH);
   exit(0);
  
}

}
else if (flag>=1)
{
if(val=LOW)
{
  
  digitalWrite(air1,LOW);
  digitalWrite(air2,LOW);
  digitalWrite(relay,HIGH);
  delay(19000);
  digitalWrite(relay,LOW);
   digitalWrite(air1,LOW);
  digitalWrite(air2,LOW);
   flag=0;
  exit(0);

}
else if(val=HIGH)
{
 digitalWrite(air1,HIGH);
 digitalWrite(air2,HIGH);
}

}
}
