/*
    Project name : Linear magnetic Hall sensors
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-linear-magnetic-hall-sensors
*/

const int hallSensorPin = A0; // Analog pin connected to the linear Hall sensor

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the voltage from the Hall sensor
  int sensorValue = analogRead(hallSensorPin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Hall Sensor Value: ");
  Serial.println(sensorValue);
  
  // Add a small delay to avoid spamming the Serial Monitor
  delay(1000);
}
