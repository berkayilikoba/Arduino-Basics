const int buttonPin = 7;   // Button connected to pin 2
const int ledPin = 3;     // LED connected to pin 13

int buttonState = 0;       // Variable to store button state

void setup() {
  pinMode(buttonPin, INPUT);  // Set button pin as input
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the state of the button

  if (buttonState == HIGH) {  // If button is pressed
    digitalWrite(ledPin, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED off
  }
}
