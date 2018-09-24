#include "options.h"
#include <iostream>
#include <time.h>

int condition = 1;
long int sleeping_time_seconds = TIME_DURATION_SECONDS;
long int sleeping_time_nanoseconds = TIME_DURATION_NANOSECONDS;

int main() {

  ___REGION_START __RT_High "0"

  switch (condition) {

    ___REGION_START __RT_High "1"
  case 1:
    nsleep();
    break;
    ___REGION_END __RT_High "1"

    ___REGION_START __RT_High "2"
  case 2:
    nsleep();
    break;
    ___REGION_END __RT_High "2"

    ___REGION_START __RT_High "3"
  default:
    sleeping_time_seconds = 2;
    sleeping_time_nanoseconds = 0;
    nsleep();
  }
  ___REGION_END __RT_High "3"

  ___REGION_END __RT_High "0"

  return 0;
}