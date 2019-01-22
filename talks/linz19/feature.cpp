#include <time.h>

void sleep(int Seconds) {
  timespec t;
  t.tv_sec = Seconds;
  t.tv_nsec = 0;
  nanosleep(&t, nullptr);
}

int conf_opt = 0;

int main(int argc, char *argv[]) {
  conf_opt = argc - 1;

  if (conf_opt) {
    sleep(5);
  } else {
    sleep(1);
  }

  return 0;
}
