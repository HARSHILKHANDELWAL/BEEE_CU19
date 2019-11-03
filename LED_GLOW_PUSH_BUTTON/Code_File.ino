int red=13;
int switchred=12;
  void setup()
{
pinMode(red,OUTPUT);
    
pinMode(switchred,INPUT);
  }
void loop()
  {
boolean a=digitalRead(switchred);
    if(a==1)
      digitalWrite(red,HIGH);
    else
      digitalWrite(red,LOW);
  }
