int button = 4;
int led = 12;
void setup()
{
  pinMode(led,OUTPUT); 
  pinMode(button,INPUT);
  
}
void loop(){
int a = digitalRead(4);
  if(a==1)
  {
    digitalWrite(led,HIGH);
   
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
