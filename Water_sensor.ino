To find the wet and dry values: 

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  int sensorVal = analogRead(A0);  // Read analog value from sensor
  Serial.print("Sensor Value: ");
  Serial.println(sensorVal);       // Print the raw sensor reading
  delay(1000);                     // Wait 1 second before reading again
}
---

const int dry = 58;   // Sensor value when dry (outside)
const int wet = 75;   // Sensor value when wet (in water)

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);
  int percentageHumidity = map(sensorVal, dry, wet, 0, 100); // flipped dry and wet
  percentageHumidity = constrain(percentageHumidity, 0, 100);

  Serial.print("Sensor: ");
  Serial.print(sensorVal);
  Serial.print("  Humidity: ");
  Serial.print(percentageHumidity);
  Serial.println("%");

  delay(1000);
}
