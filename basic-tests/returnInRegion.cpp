#include <iostream>

[[noreturn]] void no_return() { std::exit(42); }

int main(/* int argc, char *argv[] */) {
  int sum = 0;

  ___REGION_START __RT_High "one"
  while ((sum -= 1) < 42) {
    if (sum == 32) {
      no_return();
    }
    sum += 2;
  }

  return 0;
  ___REGION_END __RT_High "one"
}