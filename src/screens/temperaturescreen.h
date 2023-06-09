/**
 * @file temperaturescreen.h
 * @brief
 *    Called in main
 * 
 *    Function used to display the temperature detected by the RTC (expressed in celsius)
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

#include <MD_Parola.h>
#include <RTClib.h>
#include "../lib/Font_Data.h"

void print_temp(char temp[], RTC_DS3231 rtc, MD_Parola matrix) {
  matrix.setZone(0, 0, 0);
  matrix.setZone(1, 1, 3);
  matrix.setFont(0, numeric7Se);
  matrix.setFont(1, numeric7Se);
  matrix.displayZoneText(0, "C", PA_LEFT, 75, 0, PA_PRINT, PA_NO_EFFECT);
  matrix.displayZoneText(1, temp, PA_CENTER, 75, 0, PA_PRINT, PA_NO_EFFECT);
  
  sprintf(temp, "%3.1f", rtc.getTemperature());

  matrix.displayAnimate();
  matrix.displayReset(0);
  matrix.displayReset(1);
}