#ifndef __USER_CONFIG_H__
#define __USER_CONFIG_H__


/* Modify this file and rename to "user_config.h" */


#define USE_WIFI_MODE		STATION_MODE
#define WIFI_CLIENTSSID		"Your_wifi_ssid"
#define WIFI_CLIENTPASSWORD	"some secret phrase"
#define WIFI_AP_NAME		"ESP8266"
#define WIFI_AP_PASSWORD	"XXXXXXXXXXXX"

#define TIME_UPDATE_FREQ_MIN 30
#define TIME_UPDATE_FREQ_SEC (TIME_UPDATE_FREQ_MIN*60)

#define WIFI_AUTO_RECONNECT 1

//#define TCPSERVERIP		"192.168.1.100"
//#define TCPSERVERPORT		5555
//#define PLATFORM_DEBUG		true
//#define LWIP_DEBUG		true

#endif
