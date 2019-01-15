/*
 *  This is a library for my 7-segment display
 *  Display use I2C to communicate
 *
 *  Writen by Tauno Erik
 *  15.01.2019
 */

#ifndef Tauno_7SEG_h
#define Tauno_7SEG_h

#include <Arduino.h>
#include <Wire.h>

class Tauno_7SEG
{
  public:
    Tauno_7SEG(int addr); //constructor
    void display(float number);

  private:
    float number;
    int addr; //i2c address
    char result[8];
};

#endif //Tauno_7SEG_H
