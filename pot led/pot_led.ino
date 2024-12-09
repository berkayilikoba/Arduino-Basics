const int potPin = A1;   // Potentiometer connected to analog pin A0
const int ledPin = 11;    // LED connected to digital pin 9 (PWM)

int potValue = 0;        // Variable to store potentiometer value

void setup() {
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
}

void loop() {
  potValue = analogRead(potPin);           // Read potentiometer value (0-1023)
  int ledBrightness = map(potValue, 0, 1023, 0, 255); // Map to 0-255 for PWM
  analogWrite(ledPin, ledBrightness);      // Set LED brightness
}
