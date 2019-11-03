int sensorpin=A0;
int redpin=13;
int sensorvalue=0;
void setup()
{
  
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
}
void loop()
{
  
  sensorvalue=analogRead(sensorpin);
  Serial.println(sensorvalue);
 
  delay(100);
  
  if(sensorvalue>300)
    digitalWrite(redpin,HIGH);
  
  else
     digitalWrite(redpin,LOW);
    
}
