#define TEMP A2
void setup()
{
pinMode(TEMP,INPUT);
Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(TEMP));
  float celsius = map(analogRead(TEMP),20,358,-40,125);
}
