/* #include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

// Create a BMP280 object
Adafruit_BMP280 bmp; // Default I2C address is 0x77, we'll override it.

void setup()
{
    Serial.begin(115200);
    Serial.println(F("BMP280 Test"));

    // Initialize the BMP280 sensor with the I2C address 0x76
    if (!bmp.begin(0x76))
    {
        Serial.println("Could not find a valid BMP280 sensor, check wiring!");
        while (1)
            ; // Halt execution if sensor is not found
    }
}

void loop()
{
    // Read temperature and pressure
    Serial.print("Temperature = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" °C");

    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure() / 100.0F); // Convert to hPa
    Serial.println(" hPa");

    delay(1000);
}
 */