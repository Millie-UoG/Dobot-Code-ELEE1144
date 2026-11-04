#include <Arduino.h>
#include <Dobot.h>

Dobot dobot = Dobot();

byte homing[] = {170, 170, 6, 31, 1, 0, 0, 0, 0, 224};

void setup(){
  dobot.begin();
}

void loop(){
  dobot.commandFrame(homing);
  while(1);
}
