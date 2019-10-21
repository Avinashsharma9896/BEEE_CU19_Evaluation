#define TMT36 A0
#define RED 7
#define GREEN 6

void setup()

{
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(TMT36,INPUT);
  
}

void loop()
{
  float lmvalue =analogRead(TMT36);
  float tempr =(lmvalue * 500)/1023;
  Serial.println(tempr);
  
  //condition
  if(tempr > 60){
    digitalWrite(GREEN,HIGH);
    delay(2000);
    digitalWrite(GREEN,LOW);
  }
  else
  {
    
    digitalWrite(RED,HIGH);
    delay(2000);
  }
}
