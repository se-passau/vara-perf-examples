#include "switch.h"
#include <iostream>
#include <time.h>

int condition = CONDITION;
long int sleeping_time_seconds = TIME_DURATION_SECONDS;
long int sleeping_time_nanoseconds = TIME_DURATION_NANOSECONDS;

void nsleep_second() {
  timespec t;
  t.tv_sec = sleeping_time_seconds;
  t.tv_nsec = 0;
  nanosleep(&t, nullptr);
}

void nsleep_nano() {
  timespec t;
  t.tv_sec = 0;
  t.tv_nsec = sleeping_time_nanoseconds; // Range [0, 999999999]
  nanosleep(&t, nullptr);
}

int main() {

  switch (condition) {

  case 1:
    nsleep_second();
    nsleep_nano();
    break;

  case 2:
    nsleep_second();
    nsleep_nano();
    break;

  case 3:
    nsleep_second();
    nsleep_nano();
    break;

  default:
    nsleep_second();
    nsleep_nano();
  }

  return 0;
}