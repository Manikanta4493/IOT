int Trig = 2;
int Echo = 6;
void setup()
{
pinMode(Trig,OUTPUT);
pinMode(Echo,INPUT);
Serial.begin(9600);
}

void loop()
{
  digitalWrite(Trig,LOW);
  delay(2);
  digitalWrite(Trig,HIGH);
  delay(10);
  digitalWrite(Trig,LOW);
  int Duration = pulseIn(Echo,HIGH);
  int D = Duration*0.034/2;
  Serial.println(D);
  delay(500);
}
