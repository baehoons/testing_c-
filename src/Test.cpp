#include <Test.hpp>

void Test::getpin(){
    Serial.begin(115200);
  
  Test::count=0;
  pinMode(LED_PIN_G,OUTPUT);
  pinMode(LED_PIN_R,OUTPUT);
  pinMode(LED_PIN_Y,OUTPUT);
  
  pinMode(BUTTON,INPUT);
}

void Test::change(int a, int b) {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
}

void Test::standard(){
  
  int readValue = digitalRead(BUTTON);
  
  if(readValue == HIGH){
    
    
    Serial.println(count);
    
    if(count%3==0){
        change(LED_PIN_R,LED_PIN_G);
    }
    else if(count%3==1){
      change(LED_PIN_Y,LED_PIN_R);
    }
    else
    {
      change(LED_PIN_G,LED_PIN_Y);
    
    }

  }
  else{
    
    delay(500);
    count=count+1;
    
    
  }
}




