#define ldrPin A0
#define ledPin 13

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
   int ldrValue = analogRead(ldrPin);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Set a threshold value for the light level
  int threshold = 500;

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn on the LED if it's dark
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED if it's bright
  }

  delay(500);
}
