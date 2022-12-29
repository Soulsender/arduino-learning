#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 7;
int fucksIGive = 0;

void setup() {
    Serial.begin(9600);

    lcd.begin(16, 2);
    lcd.print("Fucks I give:");

    pinMode(buttonPin, INPUT);

}

void loop() {
    int buttonState = digitalRead(buttonPin);

    lcd.setCursor(0, 1);
    lcd.print(fucksIGive);

    Serial.print(fucksIGive, buttonPin);

    if (buttonState == HIGH) {
        fucksIGive--;
        delay(500);
    }
}