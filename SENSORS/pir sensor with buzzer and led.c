#define pir 7
#define Buzzer 1
#define led 4

void setup()
{
  pinMode(pir,INPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 int v = digitalRead(pir);
  if (v == 1){
    digitalWrite(Buzzer,HIGH);
    delay(1000);
    digitalWrite(led,HIGH);
    delay(1000);
    Serial.println("Motion Detected");
  }
  else{
    digitalWrite(Buzzer,LOW);
    digitalWrite(led,LOW);}
}
