#define LDR A3
void setup()
{
 pinMode(LDR,INPUT);
 pinMode(7,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  int a = analogRead(LDR);
  Serial.println(a);
  if (a<=300){
    digitalWrite(7,HIGH);
  }
  else if (a>300){
    digitalWrite(7,LOW);
  }
}
