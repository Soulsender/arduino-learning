# Arduino Notes

 - `digitalWrite(3, LOW)` - 0V or 5V output to a pin, either LOW or HIGH
 - `digitalRead(3)` - returns either LOW or HIGH depending if the pin is recieving voltage
 - `pinMode(3, OUTPUT)` - configures pin as either INPUT or OUTPUT, and then digitalWrite() can be used to turn it on or off
 - `analogRead(A0)` - returns value of analog pin A0, can be between 0-1023
 - `Serial.begin(9600)` - opens a serial port with the arduino speed being 9600
 - `Serial.print()` - print function
