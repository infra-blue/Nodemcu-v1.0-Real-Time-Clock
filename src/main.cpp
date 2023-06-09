/**
 * @file main.cpp
 * @author Leonardo Mirabella (https://github.com/infra-blue)
 * @brief 
 *  The main source file
 * @version 0.1.2
 * 
 * @copyright Copyright (c) 2023 
 * 
 */
#include <includes.h>

MD_Parola matrix = MD_Parola(MD_MAX72XX::FC16_HW, DATA_PIN, CLK_PIN, CS_PIN, NUM_DEVICES);
RTC_DS3231 rtc;
Bounce debouncer = Bounce();
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, NTPserver);

static uint32_t lastPinCheck = 0;
static uint32_t displaySelector = 0;
int maxtimeout = 25;

char hh_mm[] = "00:00";
char ss[] = "00";
char date[] = "01 01 2000";
char temp[] = "20.5 C";

void setup() {
  Serial.begin(115200);
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(75);

  if(!matrix.begin(3)) {
    Serial.printf("Error initializing MAX7219.\n");
    while(true);
  }

  if (!rtc.begin()) {
    Serial.println("Could not find RTC! Check circuit.\n");
    while(true);
  }

  Serial.print("Connecting to ");
  Serial.println(SSID);
  WiFi.begin(SSID, PASSWORD);

  int timeout;
  for(timeout = 0; WiFi.status() != WL_CONNECTED && timeout <= maxtimeout; timeout++) {
      delay(500);
      Serial.print(".");
  }

  if(timeout != maxtimeout && WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    WiFi.mode(WIFI_STA);

    timeClient.begin();
    delay(50);
    timeClient.update();
    delay(500);

    for(timeout = 0; !timeClient.isTimeSet() && timeout <= maxtimeout; timeout++)
      delay(500);
    
    if(timeClient.isTimeSet() && timeout != maxtimeout) {
      time_t now = CE.toLocal(timeClient.getEpochTime());
      rtc.adjust(DateTime(now));
      Serial.print("Time Update.\n");
      WiFi.disconnect();
    } else {
      Serial.printf("\nCan't get time from NTP server, disconnecting...\n");
      WiFi.disconnect();
    }
  }
  else {
    Serial.printf("\nNot connected, can't sync time.\n");
    WiFi.disconnect();
  }

  Serial.printf("%02d/%02d/%d\n%02d:%02d:%02d", (rtc.now()).day(), (rtc.now()).month(), (rtc.now()).year(), (rtc.now()).hour(), (rtc.now()).minute(), (rtc.now()).second());
}

void loop() {
  autoSetIntensity(rtc.now(), matrix);

  debouncer.update();
  if (debouncer.fell()) {
      ++displaySelector %= 3;
      Serial.printf("%d\n", displaySelector);
  }

  switch (displaySelector) {
    case 0:
      print_time(hh_mm, ss, rtc, matrix);
      break;
    
    case 1:
      print_date(date, rtc, matrix);
      break;

    case 2:
      print_temp(temp, rtc, matrix);
      break;
  }
}