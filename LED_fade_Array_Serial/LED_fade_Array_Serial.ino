#include <SoftwareSerial.h>

int pinArray[]={8,  9,  10};

void setup() {
  //open up serial connection on Baud Frequency 9600
  Serial.begin(9600);
  //output hello in serial monitor at the begining of arduino script 
  Serial.println("hello");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i < sizeof(pinArray) ;i++){
    int selesctedPin = pinArray[i];
    // 
    int activatedPins[3];
    activatedPins[0] = selesctedPin;
    fadeIn  ( activatedPins);
    fadeOut(activatedPins);
    
  }
} 
/*
 * params   int arrayIndex[] 
 * return  void
 * Desc:  lightup gradually pins passaed in int arrayIndex[]
 */
void fadeIn(int arrayIndex[]){
  for(int i=0;i<255;i++){
    for(int j=0;j<arraySize;j++){
    int pinNumber = arrayIndex[j];
    //set i as value of  light output for pinNumber
    analogWrite(pinNumber, i);
    }
    delay(10);
  }
  
}

/*
 * params   int arrayIndex[] 
 * return  void
 * Desc:  lightup gradually pins passaed in int arrayIndex[]
 */
void fadeIn(int arrayIndex[]){
  for(int i=255;i<0;i--){
    for(int j=0;j<arraySize;j++){
    int pinNumber = arrayIndex[j];
    //set i as value of  light output for pinNumber
    analogWrite(pinNumber, i);
    }
    delay(10);
  }
  
}
