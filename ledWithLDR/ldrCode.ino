int LDR;
int LED = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
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
    digitalWrite(LED, HIGH);   
  }
    else if(LDR<=177)
  {
    digitalWrite(LED, LOW); 
  }
}
