#pragma once
//
//    FILE: radiation.h
//  AUTHOR: Rob Tillaart
//    DATE: 2025-03-27
// VERSION: 0.1.1
// PURPOSE: Arduino library for conversion of radiation units
//     URL: https://github.com/RobTillaart/radiation
//


#include "Arduino.h"


#define RADIATION_LIB_VERSION         (F("0.1.1"))


class radiation
{
public:
  radiation()
  {
    _gray = 0;
    _sievert = 0;
  };


  //  ABSORBED DOSE (SI = Gy)
  float setGray(float value)      { _gray = value; };
  float setMilliGray(float value) { _gray = value * 1e-3; };
  float setMicroGray(float value) { _gray = value * 1e-6; };
  float setRad(float value)       { _gray = value * 1e-2; };
  float setMilliRad(float value)  { _gray = value * 1e-5; };
  float setMicroRad(float value)  { _gray = value * 1e-8; };

  float getGray()                 { return _gray; };
  float getMilliGray()            { return _gray * 1e+3; };
  float getMicroGray()            { return _gray * 1e+6; };
  float getRad()                  { return _gray * 1e+2; };
  float getMilliRad()             { return _gray * 1e+5; };
  float getMicroRad()             { return _gray * 1e+8; };


  //  DOSE EQUIVALENT  (SI = Sv)
  float setSievert(float value)      { _sievert = value; };
  float setMilliSievert(float value) { _sievert = value * 1e-3; };
  float setMicroSievert(float value) { _sievert = value * 1e-6; };
  float setRem(float value)          { _sievert = value * 1e-2; };
  float setMilliRem(float value)     { _sievert = value * 1e-5; };
  float setMicroRem(float value)     { _sievert = value * 1e-8; };

  float getSievert()                 { return _sievert; };
  float getMilliSievert()            { return _sievert * 1e+3; };
  float getMicroSievert()            { return _sievert * 1e+6; };
  float getRem()                     { return _sievert * 1e+2; };
  float getMilliRem()                { return _sievert * 1e+5; };
  float getMicroRem()                { return _sievert * 1e+8; };


  //  DISINTEGRATIONS  (SI = Bq)
  float BecquerelToCurie(float Bq) { return Bq / 3.7e10; };
  float CurieToBecquerel(float Ci) { return Ci * 3.7e10; };


private:
  float _gray;
  float _sievert;
};


//  -- END OF FILE --


