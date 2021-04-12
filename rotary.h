/*
 * Library to read the value of a rotary encoder
 * Created by P Horemans, April 11,2021
 * initalize: rotary a-name(pinA/CLK, pinB/DT, pinSwicht, beginvalue, endvalue, steps/click, rolOver  )
 * rollOver true = at endvalue the value rolls over to beginvalue, at beginvalue the value rols over to endvalue (contineaous rotor) 
 * inputs are pulled-up
 * Methods:
 * getValue() returns integer value between BeginValue and endValue
 * setDebug(bool) true=debug messages (requires Serial.begin() to be initalized) 
 * setValue(int) sets the value variable (used in case the value is changed outside the class)
 * getSwitch() toggles state when pushed(0/1)
 * getDirection() returns -1,0,1
 */
#ifndef rotary_H
#define rotary_H

#include "Arduino.h"


class rotary
{
  public:
    rotary(int pinA, int pinB, int pinSwitch, int beginValue, int endValue, int valueSteps,bool rollOver);
    int getValue();
    int getDirection();
    bool getSwitch();
    void setValue(int currentValue);
    void setDebug(bool debug);
    int _teller;
  private:

    int _pinA;
    int _pinB;
    int _pinSwitch;
    int _TEL_MIN;
    int _TEL_MAX;
    int _TEL_STEP;
    
    bool _rollOver;   
    bool _rotA;
    bool _rotB;
    bool _wheelTurned;
    bool _curState;
    bool _prevState;
    bool _debug;
    int _direction;
    bool _switchPrev;
    bool _switchCur;
    bool _switchStatus;
    unsigned long _prevMillis;

    
 };
#endif