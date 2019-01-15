#include "Tauno_7SEG.h"
#define slaveI2cAddress 0xA //

float output = 1.0;

Tauno_7SEG taunoSeg(slaveI2cAddress);

void setup() {

}

void loop() {
  taunoSeg.display(output);
  
  output = output +0.1;
  
  if(output > 9999){
    output = 1;
  }
}
