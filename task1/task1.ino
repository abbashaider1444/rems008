// Define pin numbers for Digital pins (D2-D13) and Analog pins (A0-A5)
int digitalPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int analogPins[] = {A0, A1, A2, A3, A4, A5};

// Total number of pins to cycle through
int totalPins = 12 + 6;  // 12 digital pins + 6 analog pins

void setup() {
  // Set all digital pins (D2-D13) as outputs
  for (int i = 0; i < 12; i++) {
    pinMode(digitalPins[i], OUTPUT);
  }

  // Set all analog pins (A0-A5) as outputs
  for (int i = 0; i < 6; i++) {
    pinMode(analogPins[i], OUTPUT);
  }
}

void loop() {
  // Cycle through digital pins (D2-D13)
  for (int i = 0; i < 12; i++) {
    digitalWrite(digitalPins[i], HIGH); // Set pin HIGH
    delay(1000);                        // Wait for 1 second
    digitalWrite(digitalPins[i], LOW);  // Set pin LOW
  }

  // Cycle through analog pins (A0-A5)
  for (int i = 0; i < 6; i++) {
    digitalWrite(analogPins[i], HIGH);  // Set pin HIGH
    delay(1000);                        // Wait for 1 second
    digitalWrite(analogPins[i], LOW);   // Set pin LOW
  }
}
