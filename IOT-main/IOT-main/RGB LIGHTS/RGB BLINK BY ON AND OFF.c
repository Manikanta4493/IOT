void setup(){
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
  Serial.println("red,blue,Green");
}
void loop(){
 while(!Serial.available());
    String a = Serial.readString();;
  if (a=="ON"){
    digitalWrite(4,HIGH);
  delay(1000);
    digitalWrite(5,HIGH);
  delay(1000);
    digitalWrite(6,HIGH);
  delay(1000);
  }
else if(a=="OFF"){
   digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
}
