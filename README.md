# Arduino Notes

### Config
 - `pinMode(3, OUTPUT)` - configures pin as either INPUT or OUTPUT, and then digitalWrite() can be used to turn it on or off
### Digital
 - `digitalWrite(3, LOW)` - 0V or 5V output to a pin, either LOW or HIGH
 - `digitalRead(3)` - returns either LOW or HIGH depending if the pin is recieving voltage
### Analog
 - `analogRead(A0)` - returns value of analog pin A0, can be between 0-1023
 - `analogWrite(A0, 255)` - writes a voltage to an analog pin, value is between 0-255
### Serial
 - `Serial.begin(9600)` - opens a serial port with the arduino speed being 9600
 - `Serial.print()` - print function
