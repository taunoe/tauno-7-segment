/*
 *  This is a library for my 7-segment display
 *  Display use I2C to communicate
 *
 *  Writen by Tauno Erik
 *  15.01.2019
 */

 #ifndef Tauno_7SEG_H
 #define Tauno_7SEG_H

//#include "Arduino.h"
#include "Wire.h"

class Tauno_7SEG{
  public:
    Tauno_7SEG(float number, uint8_t addr); //constructor
    void display();

  private:
    float _number;
    uint8_t _addr; //i2c address
}

#endif //Tauno_7SEG_H
