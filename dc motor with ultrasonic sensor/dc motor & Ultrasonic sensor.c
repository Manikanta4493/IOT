#define IN1 2
#define IN2 7
#define IN3 12
#define IN4 13

int trigpin = 10;
int echopin = 4;
void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
}
void loop() {
  digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
Serial.println("FORWARD");
digitalWrite(trigpin,HIGH);
delay(10);
digitalWrite(trigpin,LOW);
int duration = pulsein(echopin,HIGH);
int distance = duration*0.034/2;
Serial.println(distance);

if (distance<75)
{
digitalWrite(IN1,HIGH);
digitalWrite(IN1,HIGH);
digitalWrite(IN1,LOW);
digitalWrite(IN1,LOW);
}
}
