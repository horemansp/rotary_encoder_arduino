# rotary_encoder_arduino
Library to use a rotary encoder<br>
Initalize by creating an object of class rotary: rotary a-name(pinA/CLK, pinB/DT, pinSwicht, beginvalue, endvalue, defaultValue, steps/click, rolOver)<br>
 rollOver true = at endvalue the value rolls over to beginvalue, at beginvalue the value rols over to endvalue (contineaous rotor)<br> 
 inputs are pulled-up<br>
 Methods:<br>
   int getValue() returns integer value between BeginValue and endValue<br>
   setDebug(bool) true=debug messages (requires Serial.begin() to be initalized)<br> 
   getValue(int) sets the value variable (used in case the value is changed outside the class)<br>
   bool getSwitch() toggles state when pushed(0/1)<br>
   int getDirection() returns -1,0,1<br>
 
 
