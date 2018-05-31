


int digitalInputPin  = 6;
int digitalInputVal;
int movSe[4][18]={
  {12,165,160,155,150,145,140,135,130,125,120,115,109},//codo
  {6,95,100,105,110,115,118},//hombro
  {8,65,70,75,80,85,90,95,100},//garra
  {17,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5}//base
};
#include <Servo.h>
Servo base,codo,hombro,garra;
void setup() {
    pinMode(digitalInputPin,   INPUT_PULLUP);
    base.attach(13);
    codo.attach(12);
    hombro.attach(11);
    garra.attach(10);
    hombro.write(90);     
    codo.write(170);
    base.write(90);
     garra.write(60);
     Serial.begin(9600);
}

void loop() {
  digitalInputVal = digitalRead(digitalInputPin);
  if(digitalInputVal==0){
    for(int i=1; i<=movSe[0][0]; i++){
    codo.write(movSe[0][i]);
    delay(100);
  }
  for(int i=1; i<=movSe[1][0]; i++){
    hombro.write(movSe[1][i]);
    delay(100);
  }
   for(int i=1; i<=movSe[2][0]; i++){
    garra.write(movSe[2][i]);
    delay(100);
  }
    for(int i=movSe[0][0]; i>=1; i--){
    codo.write(movSe[0][i]);
    delay(100);
  }  
  for(int i=1; i<=movSe[3][0]; i++){
    base.write(movSe[3][i]);
    delay(100);
  }
   
  garra.write(60);
  Serial.println(base.read());
  Serial.println(codo.read());
  Serial.println(hombro.read());
  delay(5000);
  for(int i=0; i<18; i++){
    base.write(base.read()+5);
    delay(40);
  }
  for(int i=0; i<14; i++){
    hombro.write(hombro.read()-2);
    delay(40);
  }
  hombro.write(90);     
  codo.write(170);
  base.write(90);
  }
  
}
