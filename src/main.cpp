/**
 * @file main.cpp
 * @author Leonardo Mirabella (https://github.com/infra-blue)
 * @brief 
 *  The main source file
 * @version 0.1.1
 * 
 * @copyright GPL3 Copyright (c) 2023 
 * 
 */
#include <Arduino.h>
#include <MD_MAX72xx.h>
#include <MD_Parola.h>
#include <RTClib.h>
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h>
#include <includes.h>

MD_Parola matrix = MD_Parola(MD_MAX72XX::FC16_HW, DATA_PIN, CLK_PIN, CS_PIN, 4);
RTC_DS3231 rtc;
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, SERVER1);

bool dots = false;
int maxtimeout = 20;

char iso8601dateTime[20] = "2000-01-01T00:00:00";
char hh_mm[] = "00:00";
char ss[] = "00";

void getTime() {
  dots = !dots;
  sprintf(hh_mm, "%02d%c%02d ", (rtc.now()).hour(), (dots ? ':' : ' '), (rtc.now()).minute());
  sprintf(ss, "%02d", (rtc.now()).second());
}

void setup() {
  Serial.begin(115200);

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

    while(!timeClient.isTimeSet())
      delay(50);

    timeClient.setTimeOffset(TMZ + (is_dst ? DST : 0));
    time_t now = timeClient.getEpochTime();
    struct tm *timestructure = localtime(&now);

    strftime(iso8601dateTime, sizeof(iso8601dateTime), "%FT%T", timestructure);

    rtc.adjust(DateTime(iso8601dateTime));
    Serial.print("Time Update.\n");
    WiFi.disconnect();
  }
  else {
    Serial.printf("\nNot connected, can't sync time.\n");
    WiFi.disconnect();
  }

  time_t now = rtc.now().unixtime();
  struct tm *timestructure = localtime(&now);
  strftime(iso8601dateTime, sizeof(iso8601dateTime), "%FT%T", timestructure);
  Serial.printf("%s\n", iso8601dateTime);

  matrix.setZone(0, 0, 0);
  matrix.setZone(1, 1, 3);
  matrix.setFont(0, numeric7Seg);
  matrix.setFont(1, numeric7Se);
  matrix.displayZoneText(0, ss, PA_LEFT, 75, 0, PA_PRINT, PA_NO_EFFECT);
  matrix.displayZoneText(1, hh_mm, PA_CENTER, 75, 0, PA_PRINT, PA_NO_EFFECT);
}

void loop() {
  getTime();
  matrix.displayAnimate();
  matrix.displayReset(0);
  matrix.displayReset(1);
  delay(500);
}