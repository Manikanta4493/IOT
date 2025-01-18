#define inp4 1
#define inp3 4
#define inp1 10
#define inp2 7
void setup()
{
  pinMode(inp4,OUTPUT);
  pinMode(inp3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
digitalWrite(inp4,HIGH);
digitalWrite(inp3,LOW);
digitalWrite(inp2,HIGH);
digitalWrite(inp1,LOW);
}
