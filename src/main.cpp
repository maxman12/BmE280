#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("BmE280 Project Started - ESP32 S2 Mini");
}

void loop() {
    // Sensor reading logic will go here
    delay(2000);
}
