/**
 * @file screens.h
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <screens/timescreen.h>
#include <screens/datescreen.h>
#include <screens/temperaturescreen.h>

typedef enum screen{
  time_screen = 0,
  date_screen = 1,
  temperature_screen = 2
};