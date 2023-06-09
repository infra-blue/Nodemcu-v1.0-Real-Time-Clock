/**
 * @file autosetintensity.h
 * @brief
 *    Called in main
 * 
 *    Function used to auto regulate display intensity based on time
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

#include <MD_Parola.h>
#include <RTClib.h>

void autoSetIntensity(DateTime now, MD_Parola matrix) {
  int hour = now.hour();

  if(hour >= 0 && hour <= 6)
    matrix.setIntensity(0);
  else if(hour >= 7 && hour <= 22)
    matrix.setIntensity(15);
  else if(hour == 23)
    matrix.setIntensity(0);
}