#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Suhasini Singh
 * @date 2026-02-09
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

int IdrPin = A0;
void setup() {
    Serial.begin(9600);
}

void loop() {
    int IdrValue = analogRead(IdrPin);
    int lightPercent = map(IdrValue, 0, 1023, 0, 100);
    Serial.println(IdrValue);
    Serial.println(lightPercent);
    delay(300);

}
