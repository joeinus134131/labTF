//piano byte kelompok begonia
//program frekuensi tangga nada
byte speaker= 10;
byte pushbutton = 2;
byte pushbutton1 = 3;
byte pushbutton2 = 4;
byte pushbutton3 = 5;
byte pushbutton4 = 6;
byte pushbutton5 = 7;
byte pushbutton6 = 8;
byte pushbutton7 = 9;



void setup()
{
	for( int i=0; i<=7; i++)
    {
      pinMode(pushbutton+i, INPUT);
      delay(10);
    }
}

void loop()
{
  int data = digitalRead(pushbutton);
  
  if(data == HIGH)
  {
    DO();
    delay(100);
  }
  int data1 = digitalRead(pushbutton1);
  
  if(data1 == HIGH)
  {
    RE();
    delay(100);
  }
  int data2 = digitalRead(pushbutton2);
  
  if(data2 == HIGH)
  {
    MI();
    delay(100);
  }
  
  int data3 = digitalRead(pushbutton3);
  
  if(data3 == HIGH)
  {
    FA();
    delay(100);
  }
  
  int data4 = digitalRead(pushbutton4);
  
  if(data4 == HIGH)
  {
    SOL();
    delay(100);
  }
  
  int data5 = digitalRead(pushbutton5);
  
  if(data5 == HIGH)
  {
    LA();
    delay(100);
  }
  
  int data6 = digitalRead(pushbutton6);
  
  if(data6 == HIGH)
  {
    SI();
    delay(100);
  }
  
  int data7 = digitalRead(pushbutton7);
  
  if(data7 == HIGH)
  {
    DOO();
    delay(100);
  }
  else
  {
    DIAM();
    delay(200);
  }

}

// fungsi nada

void DO(){

tone(speaker, 262);

}

void RE(){

tone(speaker, 294);

}

void MI(){

tone(speaker, 330);

}

void FA(){

tone(speaker, 349);

}

void SOL(){

tone(speaker, 395);

}

void LA(){

tone(speaker, 440);

}

void SI(){

tone(speaker, 494);

}

void DOO(){

tone(speaker, 523);

}

void DIAM(){

noTone(speaker);

}

 
