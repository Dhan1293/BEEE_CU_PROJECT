int buttonState = 0;
void setup()
{
  pinMode(2 , INPUT);
  pinMode(13 , OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2);
  int i;
  if(buttonState == HIGH)
  {
    for(i = 1 ; i<=3 ; i++)
      delay(1000);
    buttonState = digitalRead(2);
    if(buttonState == HIGH)
    {
      digitalWrite(13 , HIGH);
    }
    else
    {
      digitalWrite(13 , LOW);
    }
  }
  
  else
  {
    digitalWrite(13 , LOW);
  }
}
        
