#include "options.h"
#include <iostream>
#include <time.h>

unsigned long int loop_number = LOOP_ITERATIONS;
unsigned long int sleeping_time_seconds = TIME_DURATION_SECONDS;
unsigned long int sleeping_time_nanoseconds = TIME_DURATION_NANOSECONDS;

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

  ___REGION_START __RT_High "0"

  for (int i = 0; i < loop_number; i++) {
    nsleep_second();
  }

  for (int i = 0; i < loop_number; i++) {
    nsleep_nano();
  }

  asm("nop"); // Workaround for false region detection

  ___REGION_END __RT_High "0"

  return 0;
}