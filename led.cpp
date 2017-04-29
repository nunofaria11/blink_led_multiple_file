
#include "led.h"
#include "Arduino.h"

LedController::LedController(int port) {
  ledPort = port;
  ledOn = false;
  pinMode(ledPort, OUTPUT);
}

bool LedController::toggle_state() {
  set_state(!ledOn);
  return ledOn;
}

void LedController::set_state(bool on) {
  ledOn = on;
  if (ledOn) {
    digitalWrite(ledPort, LOW);
  } else {
    digitalWrite(ledPort, HIGH);
  }
}