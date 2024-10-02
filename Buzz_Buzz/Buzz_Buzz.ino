// Pin definitions
/*const int relayPin = 3;      // Relay controlling buzzer and LED
const int ledPin = 2;        // Red LED
const int triggerPin = 9;    // Trigger to play tune
const int switchPin = 10;    // Switch to turn off the buzzer

// Melody of "Shave and a Haircut" in milliseconds
int melody[] = {500, 500, 250, 250, 500, 500, 500, 1000}; // Timing of notes
int pause = 500;  // Pause between repetitions

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(triggerPin, INPUT);
  pinMode(switchPin, INPUT_PULLUP);  // Using internal pull-up resistor
}

void playMelody() {
  digitalWrite(relayPin, HIGH);  // Turn on buzzer and LED
  for (int i = 0; i < 8; i++) {
    if (digitalRead(switchPin) == LOW) {  // Check if switch is pressed
      digitalWrite(relayPin, LOW); // Turn off buzzer and LED
      return;  // Exit if switch is pressed
    }
    delay(melody[i]);  // Play each note
  }
  digitalWrite(relayPin, LOW);  // Turn off buzzer and LED
  delay(pause);  // Pause before next repetition
}

void loop() {
  if (digitalRead(triggerPin) == HIGH) {  // If Pin D9 is HIGH, play the tune
    for (int j = 0; j < 3; j++) {         // Play the tune 3 times
      playMelody();
    }
  }
}*/


// Pin Assignments
/*const int ledPin = 2;  // Red LED connected to D2
const int relayPin = 3;  // Buzzer and LED connected to Relay 3
const int switchPin = 8;  // Switch to shut off the buzzer
const int triggerPin = 9;  // Pin D9 for triggering

// Variables
bool switchState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);  // Switch is active LOW
  pinMode(triggerPin, INPUT);

  // Initialize everything off
  digitalWrite(ledPin, LOW);
  digitalWrite(relayPin, LOW);
}

void loop() {
  int triggerState = digitalRead(triggerPin);
  switchState = digitalRead(switchPin);  // Read the state of the switch

  if (triggerState == HIGH && switchState == HIGH) {
    // Play "Shave and a Haircut" tune three times
    for (int i = 0; i < 3; i++) {
      playShaveAndHaircut();
    }
  } else if (triggerState == HIGH && switchState == LOW) {
    // Turn on only the LED (buzzer off due to switch)
    digitalWrite(ledPin, HIGH);
    delay(1000);  // Keep LED on for 1 second
    digitalWrite(ledPin, LOW);
  }
}

void playShaveAndHaircut() {
  // Play the "Shave and a Haircut" melody
  digitalWrite(relayPin, HIGH);  // Buzzer and LED ON
  delay(100);  // Short buzz (Shave)
  digitalWrite(relayPin, LOW);
  delay(100);

  digitalWrite(relayPin, HIGH);  // Short buzz (and)
  delay(100);
  digitalWrite(relayPin, LOW);
  delay(200);

  digitalWrite(relayPin, HIGH);  // Short buzz (a)
  delay(100);
  digitalWrite(relayPin, LOW);
  delay(100);

  digitalWrite(relayPin, HIGH);  // Short buzz (Haircut)
  delay(300);
  digitalWrite(relayPin, LOW);
  delay(200);

  digitalWrite(relayPin, HIGH);  // Long buzz (Buzz)
  delay(400);
  digitalWrite(relayPin, LOW);
  delay(100);

  digitalWrite(relayPin, HIGH);  // Long buzz (Buzz)
  delay(400);
  digitalWrite(relayPin, LOW);
  delay(500);  // Pause before repeating
}*/

// Pin Assignments
/*const int ledPin = 2;         // Red LED connected to D2
const int relayPin = 3;       // Relay 3 controlling Buzzer and LED
const int switchPin = 8;      // Switch to turn off buzzer
const int triggerPin = 9;     // Pin D9 for triggering

// Variables
bool switchState = false;

void setup() {
  Serial.begin(9600);         // Initialize Serial for debugging
  pinMode(ledPin, OUTPUT);    
  pinMode(relayPin, OUTPUT);  
  pinMode(switchPin, INPUT_PULLUP);  // Switch is active LOW
  pinMode(triggerPin, INPUT);        // Trigger pin

  // Initialize everything off
  digitalWrite(ledPin, LOW);
  digitalWrite(relayPin, HIGH); // Set to HIGH if relay is active LOW (to turn OFF)
}

void loop() {
  int triggerState = digitalRead(triggerPin);
  switchState = digitalRead(switchPin);  // Read the state of the switch

  // Debugging information
  Serial.print("Trigger: ");
  Serial.println(triggerState);
  Serial.print("Switch: ");
  Serial.println(switchState);

  if (triggerState == HIGH && switchState == HIGH) {
    // Play "Shave and a Haircut" tune three times
    for (int i = 0; i < 3; i++) {
      playShaveAndHaircut();
    }
  } else if (triggerState == HIGH && switchState == LOW) {
    // Turn on only the LED (buzzer off due to switch)
    digitalWrite(ledPin, HIGH);
    delay(1000);  // Keep LED on for 1 second
    digitalWrite(ledPin, LOW);
  } else {
    // If nothing is happening, ensure everything is off
    digitalWrite(relayPin, HIGH);  // Turn off relay (if active LOW)
    digitalWrite(ledPin, LOW);     // Ensure LED is off
  }
}

void playShaveAndHaircut() {
  // Play the "Shave and a Haircut" melody
  digitalWrite(relayPin, LOW);  // Buzzer and LED ON (if active LOW)
  digitalWrite(ledPin, HIGH);   // LED ON
  delay(100);                   // Short buzz (Shave)
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(100);

  digitalWrite(relayPin, LOW);  // Short buzz (and)
  delay(100);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(200);

  digitalWrite(relayPin, LOW);  // Short buzz (a)
  delay(100);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(100);

  digitalWrite(relayPin, LOW);  // Short buzz (Haircut)
  delay(300);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(200);

  digitalWrite(relayPin, LOW);  // Long buzz (Buzz)
  delay(400);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(100);

  digitalWrite(relayPin, LOW);  // Long buzz (Buzz)
  delay(400);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(500);  // Pause before repeating
}*/



// Pin Assignments
const int relayPin = 3;       // Relay 3 controlling Buzzer
const int triggerPin = 9;     // Pin D9 for triggering

void setup() {
  pinMode(relayPin, OUTPUT);  
  pinMode(triggerPin, INPUT);

  // Initialize relay to OFF (assuming active LOW)
  digitalWrite(relayPin, LOW);  // Turn off buzzer at start
}

void loop() {
  int triggerState = digitalRead(triggerPin);

  // Check if Pin D9 goes HIGH
  if (triggerState == HIGH) {
    // Play "Shave and a Haircut" three times
    for (int i = 0; i < 3; i++) {
      playShaveAndHaircut();
    }
  }
}

void playShaveAndHaircut() {
  // Play the "Shave and a Haircut" melody with the buzzer

  digitalWrite(relayPin, LOW);  // Buzzer ON (assuming active LOW relay)
  delay(100);                   // Short buzz (Shave)
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(100);

  digitalWrite(relayPin, LOW);  // Short buzz (and)
  delay(100);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(200);

  digitalWrite(relayPin, LOW);  // Short buzz (a)
  delay(100);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(100);

  digitalWrite(relayPin, LOW);  // Short buzz (Haircut)
  delay(300);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(200);

  digitalWrite(relayPin, LOW);  // Long buzz (Buzz)
  delay(400);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(100);

  digitalWrite(relayPin, LOW);  // Long buzz (Buzz)
  delay(400);
  digitalWrite(relayPin, HIGH); // Buzzer OFF
  delay(500);  // Pause before repeating
}
