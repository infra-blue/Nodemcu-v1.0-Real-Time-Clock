/**
 * @file timescreen.h
 * @brief 
 *    Called in main 
 * 
 *    Function used to display the current time on the RTC (HH:MM ss)
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

#include <MD_Parola.h>
#include <RTClib.h>
#include "../lib/Font_Data.h"

void print_time(RTC_DS3231 rtc, MD_Parola matrix) {
  char hh_mm[] = "00:00";
  char ss[] = "00";

  matrix.setZone(0, 0, 0);
  matrix.setZone(1, 1, 3);
  matrix.setFont(0, numeric7Seg);
  matrix.setFont(1, numeric7Se);
  matrix.displayZoneText(0, ss, PA_LEFT, 75, 0, PA_PRINT, PA_NO_EFFECT);
  matrix.displayZoneText(1, hh_mm, PA_CENTER, 75, 0, PA_PRINT, PA_NO_EFFECT);
  
  sprintf(hh_mm, "%02d%c%02d ", (rtc.now()).hour(), (((rtc.now()).second() % 2) ? ':' : ' '), (rtc.now()).minute());
  sprintf(ss, "%02d", (rtc.now()).second());

  matrix.displayAnimate();
  matrix.displayReset(0);
  matrix.displayReset(1);
}
