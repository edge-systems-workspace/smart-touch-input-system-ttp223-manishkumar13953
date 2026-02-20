#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author manish_kumar
 * @date 2026-01-23
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

int buttonPin = 7;
int ledPin = 13;

void setup() {

    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);

    Serial.begin(9600);
    Serial.println("System Ready");
}

void loop() {

    int state = digitalRead(buttonPin);

    if (state == HIGH) {
        digitalWrite(ledPin, HIGH);
        Serial.println("Touched");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("Not Touched");
    }

    delay(300);
}
