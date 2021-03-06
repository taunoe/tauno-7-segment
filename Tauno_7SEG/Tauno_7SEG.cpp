/*
 *  This is a library for my 7-segment display
 *  Display use I2C to communicate
 *
 *  Writen by Tauno Erik
 *  15.01.2019
 */
#include <Arduino.h>
#include "Tauno_7SEG.h"

Tauno_7SEG::Tauno_7SEG(int addr){
  Wire.begin(); // join i2c bus
  addr = addr;
}

void Tauno_7SEG::display(float number){
  result[8]; // Buffer big enough for 7-character float
  dtostrf(number, 5, 2, result); // Leave room for too large numbers!

  Wire.beginTransmission(addr); // transmit to i2c device #10 (0xA)
    Wire.write(result[0]);
    Wire.write(result[1]);
    Wire.write(result[2]);
    Wire.write(result[3]);
    Wire.write(result[4]);
  Wire.endTransmission(); // stop transmitting
}
