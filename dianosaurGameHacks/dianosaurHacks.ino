#include <Servo.h>
int LDR;
Servo servo;


void setup()
{
  Serial.begin(9600);
  servo.attach(9);
}

void loop()
{
  LDR = analogRead(A1);
  Serial.println(LDR);
  delay(100);
  action();
}

void action()
{
  if (LDR>=180)
  {
    servo.write(90);   
  }
    else if(LDR<=177)
  {
    servo.write(40);
  }
}
