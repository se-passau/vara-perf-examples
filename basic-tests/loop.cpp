#include "options.h"

long int loop_number = LOOP_ITERATIONS;
long int sleeping_time_seconds = TIME_DURATION_SECONDS;
long int sleeping_time_nanoseconds = TIME_DURATION_NANOSECONDS;

int main() {

  ___REGION_START __RT_High "0"

  for (int i = 0; i < loop_number; i++) {
    nsleep();
  }

  ___REGION_END __RT_High "0"

  return 0;
}
