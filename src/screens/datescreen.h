/**
 * @file datescren.h
 * @brief
 *    Called in main 
 * 
 *    Function used to display the current date on the RTC (formatted in DD/MM/YYYY)
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

#include <MD_Parola.h>
#include <RTClib.h>
#include "../lib/Font_Data.h"

void print_date(RTC_DS3231 rtc, MD_Parola matrix) {
  char date[] = "01012000";

  matrix.setZone(0, 0, 3);
  matrix.setFont(0, numeric7Seg);
  matrix.displayZoneText(0, date, PA_CENTER, 75, 0, PA_PRINT, PA_NO_EFFECT);
  
  sprintf(date, "%02d%02d%d", (rtc.now()).day(), (rtc.now()).month(), (rtc.now()).year());

  matrix.displayAnimate();
  matrix.displayReset(0);
}