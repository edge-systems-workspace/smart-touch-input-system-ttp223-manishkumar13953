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

    // TODO 6:
    // Read digital value from touch sensor

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
