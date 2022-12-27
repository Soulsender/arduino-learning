// init vars
const int = sensorPin = AO;
const float = baseTemp = 20.0;

void setup() {
  // open a serial port
  Serial.begin(9600); 
  
  // go through 
  for (int pinNumber =2; pinNumber < 5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print('Sensor Value: ');
  Serial.print(sensorVal);
}
