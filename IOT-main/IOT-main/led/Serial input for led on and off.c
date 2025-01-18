int led = 7;
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  Serial.println("ON");
  Serial.println("OFF");
}
void loop(){
  while(!Serial.available());
  
  String a = Serial.readString();
  
  if (a=="ON"){
    digitalWrite(led,1);
    Serial.println("LED IS ON");
  }
  else if(a=="OFF"){
    digitalWrite(led,0);
    Serial.println("LED IS OFF");
  }
}
