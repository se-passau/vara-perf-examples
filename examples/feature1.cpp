#include <iostream>
#include <unistd.h>

int main() {

  bool feature_seconds = false;
  bool feature_milli_seconds = false;
  bool feature_micro_seconds = false;
  bool feature_nano_seconds = false;

  ___REGION_START __RT_High "0"

  ___REGION_START __RT_High "1"
  if (feature_seconds) {
    usleep(5000000); // waits 5 seconds
  } else {
    usleep(2000000); // waits 2 seconds
  }
  ___REGION_END __RT_High "1"

  ___REGION_START __RT_High "2"
  if (feature_milli_seconds) {
    usleep(6000); // waits 6 milliseconds
  } else {
    usleep(3000); // waits 3 milliseconds
  }
  ___REGION_END __RT_High "2"

  ___REGION_START __RT_High "3"
  if (feature_micro_seconds) {
    usleep(7); // waits 7 microseconds
  } else {
    usleep(4); // waits 4 microseconds
  }
  ___REGION_END __RT_High "3"

  ___REGION_START __RT_High "4"
  if (feature_nano_seconds) {
    usleep(0.008); // waits 8 nanoseconds
  } else {
    usleep(0.005); // waits 5 nanoseconds
  }
  ___REGION_END __RT_High "4"

  ___REGION_END __RT_High "0"

  return 0;
}