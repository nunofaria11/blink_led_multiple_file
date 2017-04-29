#include "main.h"

#define LED_PORT 4

LedController* led;

void setup() { led = new LedController(LED_PORT); }

void loop() {
  led->toggle_state();
  delay(1000);
}