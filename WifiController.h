#ifndef WifiController_h
#define WifiController_h

#include <Arduino.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "htmlPage.h"

class WifiController {
  public:
    WifiController();
    ~WifiController();  
    
    void begin(AsyncWebServer* server);
    void run();    

  private:
    const char* APSSID;
    const char* APPASS;
    IPAddress APIP;
  
    // Altre variabili private
    String newSSID;
    String newPASS;
    bool flagConnectedWIFI;
    bool flagWaitConnectionWIFI;
    bool flagNewWIFIcredential;
    bool FLAGscanWIFI;
    unsigned long timerReconnectionWIFI;
    int maxNetworks;
    
    String* ssidArray;
    int* rssiArray;
    String* encryptionModeArray;
    
    int numNetworks;

    void scanWifi();
    void connectNewWIFI(String ssid, String pass);
    void setAccessPointMode();
    void SuccessConnectedToWIFI();
    void tryToReconnectWIFI();

    void pageSetupWiFi(AsyncWebServerRequest *request);
    void pageScanWiFi(AsyncWebServerRequest *request);
    void pageConnectWiFi(AsyncWebServerRequest *request);
    void setupNewWIFIcredential(String ssid, String pass);
};

#endif
