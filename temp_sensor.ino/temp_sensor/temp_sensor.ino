// init vars
const int sensorPin = A0;
const float baseTemp = 10.0;

void setup() {
  // open a serial port
  Serial.begin(9600); 
  
  // go through 
  for (int pinNumber = 2; pinNumber < 5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print('Sensor Value: ');
  Serial.print(sensorVal);

  // convert reading to voltage
  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(" Volts: ");
  Serial.print(voltage);

  Serial.print(" - Degrees C: ");
  // convert voltage to temperature in degrees
  float temp = (voltage - 0.5) * 100;
  Serial.println(temp);

  if (temp < baseTemp + 2) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temp >= baseTemp + 2 && temp < baseTemp + 4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (temp >= baseTemp + 4 && temp < baseTemp + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if (temp >= baseTemp + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  delay(1);
}
