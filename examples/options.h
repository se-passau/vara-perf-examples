#include <iostream>
#include <time.h>

// Preselection for loops
#ifdef ONE
#define LOOP_ITERATIONS 1
#endif
#ifdef FEW
#define LOOP_ITERATIONS 10
#endif
#ifdef MANY
#define LOOP_ITERATIONS 100000
#endif
#ifndef LOOP_ITERATIONS
#define LOOP_ITERATIONS 0
#endif

// Preselection for time in seconds
#ifdef SHORT_S
#define TIME_DURATION_SECONDS 1
#endif
#ifdef MIDDLE_S
#define TIME_DURATION_SECONDS 5
#endif
#ifdef LONG_S
#define TIME_DURATION_SECONDS 10
#endif
#ifndef TIME_DURATION_SECONDS
#define TIME_DURATION_SECONDS 0
#endif

// Preselection for time in nanoseconds
#ifdef SHORT_N
#define TIME_DURATION_NANOSECONDS 10
#endif
#ifdef MIDDLE_N
#define TIME_DURATION_NANOSECONDS 10000
#endif
#ifdef LONG_N
#define TIME_DURATION_NANOSECONDS 100000000
#endif
#ifndef TIME_DURATION_NANOSECONDS
#define TIME_DURATION_NANOSECONDS 0
#endif

extern long int loop_number;
extern long int sleeping_time_seconds;
extern long int sleeping_time_nanoseconds;

void nsleep() {
  timespec t;
  t.tv_sec = sleeping_time_seconds;
  t.tv_nsec = sleeping_time_nanoseconds;
  nanosleep(&t, nullptr);
}