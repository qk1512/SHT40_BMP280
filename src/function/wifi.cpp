#include <function/wifi.h>

/* void setup()
{
    Serial.begin(115200);

    // Connect to WiFi
    connectWiFi();

    // Connect to Adafruit IO MQTT
    connectMQTT();
}

void loop()
{
    // Reconnect if the connection to MQTT is lost
    if (!mqtt.ping())
    {
        if (!mqtt.connected())
        {
            connectMQTT();
        }
    }

    // Publish dummy temperature data
    float temperature = random(20, 30); // Example temperature data
    float humidity = random(40,50);
    float pressure = random(50,60);

    if (!temperatureFeed.publish(temperature))
    {
        Serial.println("Failed to publish temperature");
    }
    else
    {
        Serial.println("Temperature published!");
    }

    if (!humidityFeed.publish(humidity))
    {
        Serial.println("Failed to publish humidity");
    }
    else
    {
        Serial.println("Humidity published!");
    }

    if (!pressureFeed.publish(pressure))
    {
        Serial.println("Failed to publish pressure");
    }
    else
    {
        Serial.println("Pressure published!");
    }

    delay(5000); // Publish every 5 seconds
}
 */