#define LDR A3
void setup()
{
 pinMode(LDR,INPUT);
 Serial.begin(9600);
}

void loop()
{
  int a = analogRead(LDR);
  Serial.println(a);
}
