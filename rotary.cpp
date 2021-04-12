#include "rotary.h"

rotary::rotary(int pinA, int pinB, int pinSwitch, int beginValue, int endValue, int valueSteps,bool rollOver){
    _pinA = pinA;
    _pinB = pinB;
    _pinSwitch = pinSwitch;
    _TEL_MIN = beginValue;
    _TEL_MAX = endValue;
    _TEL_STEP = valueSteps;
    _teller = 0;
    _rollOver = rollOver;
    _rotA= false;
    _rotB = false;
    _wheelTurned = false;
    _curState = false;
    _prevState = false; 
    _debug = false; 
    _direction = 0;
    _switchCur = false;
    _switchPrev = false;
    _switchStatus = false;
    _prevMillis;
    pinMode(_pinA, INPUT_PULLUP);
    pinMode(_pinB, INPUT_PULLUP);
    pinMode(_pinSwitch, INPUT_PULLUP);
    
}

int rotary::getValue()
{
  bool _rotA = not digitalRead(_pinA);
  bool _rotB = not digitalRead(_pinB);
  _curState = _rotA and _rotB;
  if(_curState != _prevState){
    _prevState = _curState;
    if(_rotA and _rotB){
       _wheelTurned = true;
      } 
   } else {
     _direction=0;
   }

   if(_wheelTurned){
    if(!_rotA){
        _wheelTurned = false;
        if (_teller+_TEL_STEP<_TEL_MAX)
        {  
          _teller=_teller+_TEL_STEP;
          _direction = 1;
        }else{
            if(_rollOver){
                _teller = _TEL_MIN;
            } else {
                _teller = _TEL_MAX;
            }
            
        }
      if(_debug)Serial.println(_teller);
      }
     if(!_rotB){
        _wheelTurned = false;
        if (_teller-_TEL_STEP>_TEL_MIN){
          _teller=_teller-_TEL_STEP; 
          _direction = -1;  
        } else {
            if(_rollOver){
                _teller = _TEL_MAX;
            }else{
                _teller = _TEL_MIN;
            }
          
        }
        if(_debug)Serial.println(_teller);
      } 
    }
  return _teller;
}

void rotary::setValue(int value){
  _teller = value;

}

void rotary::setDebug(bool debug){
  _debug=debug;
}

bool rotary::getSwitch(){
  _switchCur = !digitalRead(_pinSwitch);
  if(_prevMillis+200 < millis()){
      if(_switchCur != _switchPrev){
        _switchPrev = _switchCur;
        if(_switchCur){
            if(_switchStatus){
              _switchStatus = false;
            }else{
              _switchStatus = true;
            }
          _prevMillis = millis();
          if(_debug){
            Serial.print("Rotary switch status=");Serial.println(_switchStatus);
          }
        }
      }
  }
  return _switchStatus;
}

int rotary::getDirection(){
  return _direction;
}
