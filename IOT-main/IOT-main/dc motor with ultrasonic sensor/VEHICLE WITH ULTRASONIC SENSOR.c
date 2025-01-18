#define in1 1
#define in2 2
#define in3 3
#define in4 4
int trigpin = 5;
int echopin = 6;
void setup(){
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  int duration = pulseIn(echopin,HIGH);
  int distance = duration*0.034/2;
  Serial.println(distance);
  
  if(distance < 75){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  Serial.println("STOP");
  }
  else
  {
    digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  Serial.println("FORWARD");
  }
}
