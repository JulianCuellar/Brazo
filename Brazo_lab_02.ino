#include <Servo.h>
Servo base,codo,hombro,garra;
int valor = 0;
void setup() {
  base.attach(13);
  codo.attach(12);
  hombro.attach(11);
  garra.attach(10);
    hombro.write(90);     
    codo.write(170);
    base.write(90);
    garra.write(100 ); 
   
    
    
    
}

void loop() {
  if(valor==0){
    base.write(base.read()+1);
    delay(50);
    if( base.read()==180){
      valor=2;
    }
  }

  if(valor==1){
    base.write(base.read()-1);
    delay(50);
    if(base.read()==0){
      valor=0;
    }
  }
    if(valor==2){
    hombro.write(hombro.read()+1);
    delay(50);
    if(hombro.read()==130){
      valor=3;
    }
    
    
  }
  if(valor==3){
   codo.write(codo.read()-1);
    delay(50);
    if(codo.read()==100){
      valor=4;
    }
  }
   if(valor==4){
   garra.write(garra.read()-1);
    delay(50);
    if(garra.read()==65){
      valor=5;
    }
  }

   if(valor==5){
   garra.write(garra.read()+1);
    delay(50);
    if(garra.read()==100){
      valor=6;
    }
  }
  if(valor==6){
    codo.write(codo.read()+1);
    delay(50);
    if(codo.read()==170){
      valor=7;
  }   
}
if(valor==7){
  hombro.write(hombro.read()-1);
    delay(50);
    if(hombro.read()==90){
      valor=8;
}
}
if(valor==8){
  base.write(base.read()-1);
    delay(50);
    if(base.read()==0){
      valor=9;
}





}
if(valor==9){
    hombro.write(hombro.read()+1);
    delay(50);
    if(hombro.read()==130){
      valor=10;
    }
    
    
  }
  if(valor==10){
   codo.write(codo.read()-1);
    delay(50);
    if(codo.read()==100){
      valor=11;
    }
  }
   if(valor==11){
   garra.write(garra.read()-1);
    delay(50);
    if(garra.read()==65){
      valor=12;
    }
  }

   if(valor==12){
   garra.write(garra.read()+1);
    delay(50);
    if(garra.read()==100){
      valor=13;
    }
  }
  if(valor==13){
    codo.write(codo.read()+1);
    delay(50);
    if(codo.read()==170){
      valor=14;
  }   
}
if(valor==14){
  hombro.write(hombro.read()-1);
    delay(50);
    if(hombro.read()==90){
      valor=0;
}
}


}


