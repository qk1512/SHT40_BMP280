#include <Wire.h>
#include <SHTSensor.h>
#include <Arduino.h>

// Initialize the SHT sensor object
SHTSensor sht(SHTSensor::SHT4X); // For SHT40

void setup()
{
    // Initialize Serial Monitor
    Serial.begin(115200);
    Wire.begin(); // Initialize I2C communication

    // Initialize the SHT40 sensor
    if (sht.init())
    {
        Serial.println("SHT40 initialized successfully!");
    }
    else
    {
        Serial.println("Failed to initialize SHT40. Check wiring!");
        while (1)
            ; // Stop execution if initialization fails
    }

    // Set the measurement accuracy (optional)
    sht.setAccuracy(SHTSensor::SHT_ACCURACY_MEDIUM);
}

void loop()
{
    // Read sensor values
    if (sht.readSample())
    {
        // Print temperature
        Serial.print("Temperature: ");
        Serial.print(sht.getTemperature(), 2);
        Serial.println(" °C");

        // Print humidity
        Serial.print("Humidity: ");
        Serial.print(sht.getHumidity(), 2);
        Serial.println(" %RH");
    }
    else
    {
        Serial.println("Failed to read from SHT40 sensor.");
    }

    delay(1000); // Wait 1 second before the next reading
}
