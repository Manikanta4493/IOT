int button = 4;
int led = 12;
void setup()
{
  pinMode(led,OUTPUT); 
  pinMode(button,INPUT);
  Serial.begin(9600);
  Serial.println("Blink an LED");
  
  
}
void loop(){
int a = digitalRead(4);
  if(a==1)
  {
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    Serial.println("Blinking");
   
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
