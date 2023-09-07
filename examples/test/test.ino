/************************************************************
 * Wifi management for esp32: 
 * - Web configuration to select network 
 * - Connection check with reconnection attempts 
 * - AccessPoint activation for new network configuration 
 * - Network scan and selection.
 * 
 * Default AP configuration: 
 * SSID: WIFI_ESP 
 * Password: 12345678 
 * IP: 192.168.4.1
 * 
 * Web configuration page
 * http://IP-ADDRESS/setupwifi/
 * 
 ************************************************************/
 
#include <WifiController.h>

AsyncWebServer server(80);
WifiController wifiController;

void setup() {
  Serial.begin(115200);
  delay(1000);
  wifiController.begin(&server); 
  server.begin();  
}

void loop() {
  wifiController.run();  
}
