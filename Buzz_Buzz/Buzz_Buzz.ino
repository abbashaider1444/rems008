/*// Pin Assignment
const int buzzerPin = 3;  // Buzzer connected to Pin 3

void setup() {
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  // Play "Shave and a Haircut" melody with adjusted timing
  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON (Shave note)
  delay(600);                     // Extended timing after "Shave"
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(400);                     // Short note
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(400); 
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(400);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(250);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(400);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(300);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(400);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(350);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(400);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(600);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF

  // End of program instruction: Prevent loop from repeating
  while (true) {
    // Stay in this infinite loop to end the program
  }
} */










/*// Array for D0 to D13 pins
const int pins[] = {0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int delayTime = 5000; // 5 seconds delay to observe each LED state

void setup() {
  // Set all D0 to D13 pins as outputs
  for (int i = 0; i < 14; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW); // Initialize all pins to LOW (LEDs off)
  }
}

void loop() {
  // Turn each pin HIGH (LED ON) in sequence, with enough time to observe and record
  for (int i = 0; i < 14; i++) {
    digitalWrite(pins[i], HIGH);  // Turn pin ON (LED should light up if connected)
    delay(delayTime);             // Wait for specified time to observe the LED
    digitalWrite(pins[i], LOW);   // Turn pin OFF (LED should turn off)
  }
  
  // After all pins have been tested, stop the program
  while (true) {
    // Stay in an infinite loop to prevent the program from restarting
  }
}*/


const int buzzerPin = 3;  // Buzzer connected to Pin 3
const int ledPins[] = {0, 1};  // Array of LED pins for wiring check

void setup() {
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output

  // Set LED pins as output
  for (int i = 0; i < 2; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  // Signal the start of sequence
  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(1000);                     // Beep for 500 ms
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(750);                     // Wait for 250 ms

  // Start of LED and wiring check sequence
  for (int i = 0; i < 2; i++) {
  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON (Shave note)
  delay(600);                     // Extended timing after "Shave"
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(400);                     // Short note
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(400); 
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  delay(400);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(500);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(250);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(400);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(300);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(400);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(350);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  delay(400);

  digitalWrite(buzzerPin, HIGH);  // Long buzz (Buzz)
  delay(600);
  digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  }

  // End of LED and wiring check sequence
  while (true) {
    // Stay in this infinite loop to prevent repeating the sequence
  }
}

void loop() {
  // Empty loop, logic is in setup()
}
