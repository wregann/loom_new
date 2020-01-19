#include "config_new.h"
#include "loom_preamble_new.h"


void setup() {
  Loom_begin();

  //Enables SD card
  digitalWrite(8, HIGH); 
}

void loop() {
  OSCBundle bndl;
  sapflow_loop();

  //Can be (un)commented
  //additional_loop_checks(); 
}
