int i=0;
void setup()
{
  for(i=0;i<6;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(i=0;i<6;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    delay(500);
  }
}