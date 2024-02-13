const int ledPin = 10;

void setup() {
 
  pinMode(ledPin, OUTPUT);
}

void loop() {

  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness); 
    delay(3); 
  }
  
  // Fade out from max to min brightness
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness); // Write the brightness value to the LED
    delay(3); // Wait for a short period to see the effect
  }
}