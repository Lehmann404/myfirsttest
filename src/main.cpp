#include <Arduino.h>
#include "subsystem.h"
Subsystem subsystem;
// put function declarations here:


void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  int test = subsystem.myFunction(1, 2);
  Serial.println(test);
}
