*
 * Project: Control an LED From a Web Dashboard
 * Board: NodeMCU ESP8266
 * Platform: KiwisIoT
 */

#include <KiwisIoT.h>

// Wi-Fi and KiwisIoT configuration
const char* ssid  = "MY_WIFI_SSID";
const char* pass  = "MY_WIFI_PASSWORD";
const char* topic = "MY_KIWISIOT_TOPIC";

// Create KiwisIoT object
KiwisIoT kiwisiot(ssid, pass, topic);

// External LED connected to NodeMCU D2
#define LED_PIN D2


// --------------------------------------------------
// Receive commands from KiwisIoT
// --------------------------------------------------
void receiveCommand(String channel, String value)
{
  Serial.print("Channel: ");
  Serial.print(channel);

  Serial.print("  Value: ");
  Serial.println(value);

  // Use Channel 1 to control the LED
  if (channel == "1")
  {
    // Turn LED ON
    if (value == "1")
    {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED -> ON");
    }

    // Turn LED OFF
    else if (value == "0")
    {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED -> OFF");
    }
  }
}


// --------------------------------------------------
// Setup
// --------------------------------------------------
void setup()
{
  Serial.begin(9600);

  // Configure LED pin
  pinMode(LED_PIN, OUTPUT);

  // Start with LED OFF
  digitalWrite(LED_PIN, LOW);

  // Start KiwisIoT
  kiwisiot.begin();

  // Register command receiver
  kiwisiot.onReceive(receiveCommand);
}


// --------------------------------------------------
// Main Loop
// --------------------------------------------------
void loop()
{
  // Keep KiwisIoT communication running
  kiwisiot.run();
}