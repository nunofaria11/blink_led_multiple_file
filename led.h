class LedController {
 private:
  int ledPort;
  bool ledOn;

 public:
  // Constructor
  LedController(int port);

  // Sets the LET state on or off
  void set_state(bool on);

  // Toggle LED state
  bool toggle_state();
};