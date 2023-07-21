void setup()
{
  for(int i=3;i<=6;i++){pinMode(i,OUTPUT);}
  pinMode(9,OUTPUT);pinMode(10,OUTPUT);
  pinMode(0,INPUT);pinMode(1,INPUT);
}

void loop()
{
  if(digitalRead(0)==1){analogWrite(9,127);
  digitalWrite(3,1);digitalWrite(4,1);}
  if(digitalRead(1)==1){analogWrite(10,127);
  digitalWrite(5,1);digitalWrite(6,1); }                    
  if(digitalRead(0)==0){analogWrite(9,0);
  digitalWrite(3,0);digitalWrite(4,0);}
  if(digitalRead(1)==0){analogWrite(10,0);
  digitalWrite(5,0);digitalWrite(6,0); }                    
                       
                       

}
