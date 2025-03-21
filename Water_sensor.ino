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