#include<Servo.h>
int servoPin =3;
Servo myservo;
void setup()
{
  myservo.attach(servoPin);
}

void loop()
{
  myservo.write(0);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);
}
