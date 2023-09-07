# WifiController
Library for for esp32 wifi managemen.
- Connection check with reconnection attempts
- AccessPoint activation for new network configuration
- Web configuration for Network scan and selection

When esp32 starts, if it fails to connect, it generates an AccessPoint to be able to connect and configure it.

By default: 
- SSID: WIFI_ESP 
- Password: 12345678 
- IP: 192.168.4.1

To access the wifi configuration page: http://IP-ADDRESS/setupwifi/
