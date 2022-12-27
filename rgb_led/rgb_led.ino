// init vars

// digital pins
const int redLEDPin = 11;
const int blueLEDPin = 10;
const int greenLEDPin = 9;

// analog pins
const int redSensorPin = A0;
const int blueSensorPin = A2;
const int greenSensorPin = A1;

// default values
int redVal = 0;
int greenVal = 0;
int blueVal = 0;
int redSensorVal = 0;
int greenSensorVal = 0;
int blueSensorVal = 0;


void setup() {
  Serial.begin(9600);

  // define the digital pins as output
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // get the value of the sensors
  redSensorVal = analogRead(redSensorPin);
  delay(5);
  greenSensorVal = analogRead(greenSensorPin);
  delay(5);
  blueSensorVal = analogRead(blueSensorPin);

  // print the raw data to the consolees
  Serial.print("Raw sensor values \t red: ");
  Serial.print(redSensorVal);
  Serial.print("\t green: ");
  Serial.print(greenSensorVal);
  Serial.print("\t blue: ");
  Serial.println(blueSensorVal);

  // convert sensor readings from 0-1023 value to 0-255 value to be used as voltage for analog pins 
  redVal = redSensorVal / 4;
  greenVal = greenSensorVal / 4;
  blueVal = blueSensorVal / 4;

  // printed mapped data to console
  Serial.print("Mapped Sensor Values \t red:");
  Serial.print(redVal);
  Serial.print("\t green: ");
  Serial.print(greenVal);
  Serial.print("\t blue:");
  Serial.println(blueVal);

  // set analog pins to correct voltage for the LED
  analogWrite(redLEDPin, redVal);
  analogWrite(greenLEDPin, greenVal);
  analogWrite(blueLEDPin, blueVal);
}
