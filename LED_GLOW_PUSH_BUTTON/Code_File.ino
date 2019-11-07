int led=13;
int switchled=12;
  void setup()
{
pinMode(led,OUTPUT);
    
pinMode(switchled,INPUT);
  }
void loop()
  {
boolean a=digitalRead(switchled);
    if(a==1)
      digitalWrite(led,HIGH);
    else
      digitalWrite(led,LOW);
  }
