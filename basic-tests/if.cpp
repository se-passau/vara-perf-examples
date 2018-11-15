#include "options.h"

bool level_1 = false;
bool level_2 = false;
bool level_3 = false;
bool level_4 = false;

long int sleeping_time_seconds = TIME_DURATION_SECONDS;
long int sleeping_time_nanoseconds = TIME_DURATION_NANOSECONDS;

void level_check() { // Can be used to ensure that every activated level can be
                     // reached
  if (level_2) {
    level_1 = true;
  }
  if (level_3) {
    level_2 = true;
    level_1 = true;
  }
  if (level_4) {
    level_3 = true;
    level_2 = true;
    level_1 = true;
  }
}

int main() {

  // level_check();

  ___REGION_START __RT_High "0"

  if (level_1) { // sleeping_time x 1
    nsleep();
    if (level_2) { // sleeping_time x 2
      nsleep();
      if (level_3) { // sleeping_time x 3
        nsleep();
        if (level_4) { // sleeping_time x 4
          nsleep();
        }
      }
    }
  }
  
  ___REGION_END __RT_High "0"

  return 0;
}