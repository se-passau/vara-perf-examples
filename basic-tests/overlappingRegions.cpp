#include "options.h"

long int sleeping_time_seconds = TIME_DURATION_SECONDS;
long int sleeping_time_nanoseconds = TIME_DURATION_NANOSECONDS;

int main() {

  ___REGION_START __RT_High "0"
  nsleep();
  ___REGION_START __RT_High "1"
  nsleep();
  ___REGION_END __RT_High "0"
  nsleep();
  ___REGION_END __RT_High "1"

  return 0;
}
