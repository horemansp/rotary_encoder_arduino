#include "rotary.h" //when rotary.h and rotary.cpp files are in your sketch direcotry
//#include <rotary.h> //when rotary installed in your library
int ledPinDim = D4;
int ledPinSwitch = D3;
int value = 1023;
bool prevSwitchState = false;
bool currentSwitchState = false;
bool switchPressed = false;
/* use of the rotary class:
 * rotary a-name(pinA/CLK, pinB/DT, pinSwitch, min-value, max-value, steps/click,roll-over)
 * roll-over= true then after max-value, rotary starts at min-value. Or when win-value, will start at max-value (contineous)
 *
 */
rotary myRot(D7,D6,D5,0,1023,50,false); //create object from class rotary

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(ledPinDim, OUTPUT);
 pinMode(ledPinSwitch, OUTPUT);
 analogWrite(ledPinDim, 1023);
 digitalWrite(ledPinSwitch, LOW);
 delay(2000);
 Serial.println("Program started");
 //set debugmode
 myRot.setDebug(true);
 //set the value of the rotary
 myRot.setValue(512);
 }
 

void loop() {
 //read rotary value and 
 value = myRot.getValue();
 analogWrite(ledPinDim, 1023-value);

 //read direction
 if (myRot.getDirection() == 1) Serial.print(">");
 if (myRot.getDirection() == -1) Serial.print("<");

 //check for push button status toggle
 if (myRot.getSwitch()){
    digitalWrite(ledPinSwitch,HIGH);  
  } else{
    digitalWrite(ledPinSwitch,LOW);
  }


}
